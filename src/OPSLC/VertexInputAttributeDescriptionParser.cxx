#include "VertexInputAttributeDescriptionParser.h"

#include <numeric>

#include "Utilities.h"

void VertexInputAttributeDescriptionParser::operator()(InitDeclaratorList const& init_declarator_list, GLSLTypes const& glsl_types) {
	auto const& fully_specified_type = init_declarator_list.fully_specified_type;

	// Location.
	auto const& layout_qualifier_ids = fully_specified_type.type_qualifier.layout_qualifier_ids;
	if (layout_qualifier_ids.find("location") != layout_qualifier_ids.end()) {
		location_ = layout_qualifier_ids.at("location");
	}

	// Binding.
	auto binding = uint32_t{};
	if (layout_qualifier_ids.find("binding") != layout_qualifier_ids.end()) {
		binding = layout_qualifier_ids.at("binding");
	}

	// Format.
	auto const& type_specifier = fully_specified_type.type_specifier;
	auto const type_name = std::get<std::string>(type_specifier.type_specifier_nonarray);
	auto const format = string_to_format(type_name);

	// Array specifier.
	auto const& type_array_specifier = type_specifier.array_specifier;
	auto const type_array_multiplier = std::accumulate(type_array_specifier.begin(), type_array_specifier.end(), 1, std::multiplies<uint32_t>{});

	// Offset.
	auto& offset = binding_offsets_[binding];

	auto const [size, attributes] = glsl_types(type_name);
	for (auto const& init_declarator : init_declarator_list.init_declarators) {
		auto vertex_input_attribute_description = opsl::VertexInputAttributeDescription{};

		vertex_input_attribute_description.location = location_;
		vertex_input_attribute_description.binding = binding;
		vertex_input_attribute_description.format = format;
		vertex_input_attribute_description.offset = offset;
		vertex_input_attribute_description.identifier = init_declarator.identifier;
		vertex_input_attribute_description.attributes = attributes;

		vertex_input_attribute_descriptions_.push_back(vertex_input_attribute_description);

		auto const& variable_array_specifier = init_declarator.array_specifier;
		auto const variable_array_multiplier = std::accumulate(variable_array_specifier.begin(), variable_array_specifier.end(), 1, std::multiplies<uint32_t>{});

		auto const total_array_multiplier = type_array_multiplier * variable_array_multiplier; // It's not legal for both to be active, but this solution is easier.

		location_ += attributes * total_array_multiplier; // Location autoincrement.
		offset += size * total_array_multiplier;
	}
}
