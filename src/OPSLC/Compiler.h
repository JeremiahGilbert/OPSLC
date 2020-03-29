#pragma once

#include <string>

#include <vulkan/vulkan.hpp>

#include "opsl.h"

opsl::OPSLData parse_and_compile_shader(std::string const& shader_code,	vk::ShaderStageFlagBits const stage_flags);
