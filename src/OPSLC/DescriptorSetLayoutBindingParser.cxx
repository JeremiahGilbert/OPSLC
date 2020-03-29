#include "DescriptorSetLayoutBindingParser.h"

#include <numeric>

void DescriptorSetLayoutBindingParser::operator()(InitDeclaratorList const& init_declarator_list, vk::ShaderStageFlagBits const stage_flags, GLSLTypes const& glsl_types) {
	auto const& fully_specified_type = init_declarator_list.fully_specified_type;
	auto const& type_qualifier = fully_specified_type.type_qualifier;

	// Binding.
	auto const& layout_qualifier_ids = type_qualifier.layout_qualifier_ids;
	if (layout_qualifier_ids.find("binding") != layout_qualifier_ids.end()) {
		binding_ = layout_qualifier_ids.at("binding");
	}

	// Descriptor type.
	auto descriptor_type = vk::DescriptorType{};
	auto const& type_specifier = fully_specified_type.type_specifier;
	auto const& type_specifier_nonarray = type_specifier.type_specifier_nonarray;
	
	auto identifier = std::string{};
	if (std::holds_alternative<std::string>(type_specifier_nonarray)) {
		identifier = std::get<std::string>(type_specifier_nonarray);
	} else {
		auto struct_specifier = *std::get<std::shared_ptr<StructSpecifier>>(type_specifier_nonarray);
		identifier = struct_specifier.identifier;
	}
	
	auto size = glsl_types.get_size(identifier);
	if (size == 0) {
		descriptor_type = vk::DescriptorType::eCombinedImageSampler;
	} else {
		descriptor_type = vk::DescriptorType::eUniformBuffer;
	}

	// Descriptor count.
	auto const& type_array_specifier = type_specifier.array_specifier;
	auto const type_array_multiplier = std::accumulate(type_array_specifier.begin(), type_array_specifier.end(), 1, std::multiplies<uint32_t>{});

	for (auto const& init_declarator : init_declarator_list.init_declarators) {
		auto descriptor_set_layout_binding = opsl::DescriptorSetLayoutBinding{};

		auto const& variable_array_specifier = init_declarator.array_specifier;
		auto const variable_array_multiplier = std::accumulate(variable_array_specifier.begin(), variable_array_specifier.end(), 1, std::multiplies<uint32_t>{});
		auto const total_array_multiplier = type_array_multiplier * variable_array_multiplier;

		descriptor_set_layout_binding.binding = binding_;
		descriptor_set_layout_binding.descriptor_type = descriptor_type;
		descriptor_set_layout_binding.descriptor_count = total_array_multiplier;
		descriptor_set_layout_binding.stage_flags = stage_flags;
		descriptor_set_layout_binding.size = size;

		descriptor_set_layout_bindings_.push_back(descriptor_set_layout_binding);

		++binding_; // Binding autoincrement.
	}
}

void DescriptorSetLayoutBindingParser::operator()(InterfaceBlock const& interface_block, vk::ShaderStageFlagBits const stage_flags, GLSLTypes const& glsl_types) {
	// Binding.
	auto const& layout_qualifier_ids = interface_block.type_qualifier.layout_qualifier_ids;
	if (layout_qualifier_ids.find("binding") != layout_qualifier_ids.end()) {
		binding_ = layout_qualifier_ids.at("binding");
	}

	// Descriptor type.

	// Descriptor count.
	auto const& variable_array_specifier = interface_block.array_specifier;
	auto const variable_array_multiplier = std::accumulate(variable_array_specifier.begin(), variable_array_specifier.end(), 1, std::multiplies<uint32_t>{});

	// Size.
	auto const size = glsl_types.get_size(interface_block.block_name);

	auto descriptor_set_layout_binding = opsl::DescriptorSetLayoutBinding{};
	descriptor_set_layout_binding.binding = binding_;
	descriptor_set_layout_binding.descriptor_type = vk::DescriptorType::eUniformBuffer;
	descriptor_set_layout_binding.descriptor_count = variable_array_multiplier;
	descriptor_set_layout_binding.stage_flags = stage_flags;
	descriptor_set_layout_binding.size = size * variable_array_multiplier;

	descriptor_set_layout_bindings_.push_back(descriptor_set_layout_binding);

	++binding_;
}
