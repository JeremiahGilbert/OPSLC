#pragma once

#include <vulkan/vulkan.hpp>

#include "opsl.h"

#include "GLSLTypes.h"
#include "ParserTypes.h"

class DescriptorSetLayoutBindingParser {
public:
	void operator()(InitDeclaratorList const& init_declarator_list, vk::ShaderStageFlagBits const stage_flags, GLSLTypes const& glsl_types);

	void operator()(InterfaceBlock const& interface_block, vk::ShaderStageFlagBits const stage_flags, GLSLTypes const& glsl_types);

	inline opsl::DescriptorSetLayoutBindings get_descriptor_set_layout_bindings() const {
		return descriptor_set_layout_bindings_;
	}

private:
	uint32_t binding_;

	opsl::DescriptorSetLayoutBindings descriptor_set_layout_bindings_;
};
