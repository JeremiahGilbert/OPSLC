#include "PushConstantRangeParser.h"

#include <numeric>

void PushConstantRangeParser::operator()(InitDeclaratorList const& init_declarator_list, vk::ShaderStageFlagBits const stage_flags, GLSLTypes const& glsl_types) {
	// Offset.
	auto const& layout_qualifier_ids = init_declarator_list.fully_specified_type.type_qualifier.layout_qualifier_ids;
	if (layout_qualifier_ids.find("offset") != layout_qualifier_ids.end()) {
		offset_ = layout_qualifier_ids.at("offset");
	}

	// Size.
	auto size = uint32_t{};
	auto const& type_specifier = init_declarator_list.fully_specified_type.type_specifier;
	auto const& type_specifier_nonarray = type_specifier.type_specifier_nonarray;
	if (std::holds_alternative<std::string>(type_specifier_nonarray)) {
		auto const& type_name = std::get<std::string>(type_specifier_nonarray);
		size = glsl_types.get_size(type_name);

	} else {
		auto const& struct_specifier = *std::get<std::shared_ptr<StructSpecifier>>(type_specifier_nonarray);

		auto const& type_name = struct_specifier.identifier;
		size = glsl_types.get_size(type_name);
	}

	auto const& type_array_specifier = type_specifier.array_specifier;
	auto const type_array_multiplier = std::accumulate(type_array_specifier.begin(), type_array_specifier.end(), 1, std::multiplies<uint32_t>{});

	for (auto const& init_declarator : init_declarator_list.init_declarators) {
		auto push_constant_range = opsl::PushConstantRange{};

		auto const& variable_array_specifier = init_declarator.array_specifier;
		auto const variable_array_muliplier = std::accumulate(variable_array_specifier.begin(), variable_array_specifier.end(), 1, std::multiplies<uint32_t>{});
		auto const total_array_multiplier = type_array_multiplier * variable_array_muliplier;

		push_constant_range.stage_flags = stage_flags;
		push_constant_range.offset = offset_;
		push_constant_range.size = size * total_array_multiplier;

		push_constant_ranges_.push_back(push_constant_range);

		offset_ += size * total_array_multiplier;
	}
}

void PushConstantRangeParser::operator()(InterfaceBlock const& interface_block, vk::ShaderStageFlagBits const stage_flags, GLSLTypes const& glsl_types) {
	auto const& type_qualifier = interface_block.type_qualifier;

	// Stage flags.

	// Offset.
	auto const& layout_qualifier_ids = type_qualifier.layout_qualifier_ids;
	if (layout_qualifier_ids.find("offset") != layout_qualifier_ids.end()) {
		offset_ = layout_qualifier_ids.at("offset");
	}

	// Size.
	auto const size = glsl_types.get_size(interface_block.block_name);

	auto const& variable_array_specifier = interface_block.array_specifier;
	auto const variable_array_multiplier = std::accumulate(variable_array_specifier.begin(), variable_array_specifier.end(), 1, std::multiplies<uint32_t>{});
	
	auto push_constant_range = opsl::PushConstantRange{};
	push_constant_range.stage_flags = stage_flags;
	push_constant_range.offset = offset_;
	push_constant_range.size = size * variable_array_multiplier;
	
	push_constant_ranges_.push_back(push_constant_range);
	
	offset_ += size * variable_array_multiplier;
}
