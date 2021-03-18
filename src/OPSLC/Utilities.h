#pragma once

#include <cstdint>
#include <string_view>

#include <glm/glm.hpp>
#include <vulkan/vulkan.hpp>
#include <shaderc/shaderc.hpp>

#include "Hash.h"

// Convert string to vk::Format.
constexpr vk::Format string_to_format(std::string_view const& type_name) {
	switch (fnv1a(type_name)) {
		case fnv1a("bool"):
			return vk::Format::eR8Uint;
		case fnv1a("bvec2"):
			return vk::Format::eR8G8Uint;
		case fnv1a("bvec3"):
			return vk::Format::eR8G8B8Uint;
		case fnv1a("bvec4"):
			return vk::Format::eR8G8B8A8Uint;
		case fnv1a("int"):
			return vk::Format::eR32Sint;
		case fnv1a("ivec2"):
			return vk::Format::eR32G32Sint;
		case fnv1a("ivec3"):
			return vk::Format::eR32G32B32Sint;
		case fnv1a("ivec4"):
			return vk::Format::eR32G32B32A32Sint;
		case fnv1a("uint"):
			return vk::Format::eR32Uint;
		case fnv1a("uvec2"):
			return vk::Format::eR32G32Uint;
		case fnv1a("uvec3"):
			return vk::Format::eR32G32B32Uint;
		case fnv1a("uvec4"):
			return vk::Format::eR32G32B32A32Uint;
		case fnv1a("float"):
			return vk::Format::eR32Sfloat;
		case fnv1a("vec2"):
			return vk::Format::eR32G32Sfloat;
		case fnv1a("vec3"):
			return vk::Format::eR32G32B32Sfloat;
		case fnv1a("vec4"):
			return vk::Format::eR32G32B32A32Sfloat;
		case fnv1a("double"):
			return vk::Format::eR64Sfloat;
		case fnv1a("dvec2"):
			return vk::Format::eR64G64Sfloat;
		case fnv1a("dvec3"):
			return vk::Format::eR64G64B64Sfloat;
		case fnv1a("dvec4"):
			return vk::Format::eR64G64B64A64Sfloat;
		default:
			return vk::Format{};
	}
}

// Convert shaderc_shader_kind to vk::ShaderStageFlag.
constexpr shaderc_shader_kind shader_stage_to_shader_kind(vk::ShaderStageFlagBits const stage_flags) {
	switch (stage_flags) {
		case vk::ShaderStageFlagBits::eVertex:
			return shaderc_shader_kind::shaderc_vertex_shader;
		case vk::ShaderStageFlagBits::eTessellationControl:
			return shaderc_shader_kind::shaderc_tess_control_shader;
		case vk::ShaderStageFlagBits::eTessellationEvaluation:
			return shaderc_shader_kind::shaderc_tess_evaluation_shader;
		case vk::ShaderStageFlagBits::eGeometry:
			return shaderc_shader_kind::shaderc_geometry_shader;
		case vk::ShaderStageFlagBits::eFragment:
			return shaderc_shader_kind::shaderc_fragment_shader;
		default:
			return shaderc_shader_kind{};
	}
}

// Convert file extension to vk::ShaderStageFlag.
constexpr vk::ShaderStageFlagBits extension_to_shader_stage(std::string_view const& extension) {
	switch (fnv1a(extension)) {
		case fnv1a(".vert"):
			return vk::ShaderStageFlagBits::eVertex;
		case fnv1a(".tesc"):
			return vk::ShaderStageFlagBits::eTessellationControl;
		case fnv1a(".tese"):
			return vk::ShaderStageFlagBits::eTessellationEvaluation;
		case fnv1a(".geom"):
			return vk::ShaderStageFlagBits::eGeometry;
		case fnv1a(".frag"):
			return vk::ShaderStageFlagBits::eFragment;
		default:
			return vk::ShaderStageFlagBits{};
	}
}
