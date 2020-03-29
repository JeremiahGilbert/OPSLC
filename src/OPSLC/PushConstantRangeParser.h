#pragma once

#include <cstdint>

#include <vulkan/vulkan.hpp>

#include "opsl.h"

#include "GLSLTypes.h"
#include "ParserTypes.h"

class PushConstantRangeParser {
public:
	void operator()(InitDeclaratorList const& init_declarator_list, vk::ShaderStageFlagBits const stage_flags, GLSLTypes const& glsl_types);

	void operator()(InterfaceBlock const& interface_block, vk::ShaderStageFlagBits const stage_flags, GLSLTypes const& glsl_types);

	inline opsl::PushConstantRanges get_push_constant_ranges() const {
		return push_constant_ranges_;
	}

private:
	uint32_t offset_;

	opsl::PushConstantRanges push_constant_ranges_;
};

