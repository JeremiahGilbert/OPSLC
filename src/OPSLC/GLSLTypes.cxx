#include "GLSLTypes.h"

#include <glm/glm.hpp>
#include <vulkan/vulkan.hpp>

#include "Hash.h"

GLSLTypes::GLSLTypeInfo GLSLTypes::operator()(std::string const& type_name) const {
	if (user_types_.find(type_name) != user_types_.end()) {
		return user_types_.at(type_name);
	}

	switch (fnv1a(type_name)) {
		case fnv1a("bool"):
			return {sizeof(VkBool32), 1};
		case fnv1a("int"):
			return {sizeof(int32_t), 1};
		case fnv1a("uint"):
			return {sizeof(uint32_t), 1};
		case fnv1a("float"):
			return {sizeof(float), 1};
		case fnv1a("double"):
			return {sizeof(double), 1};
		case fnv1a("bvec2"):
			return {sizeof(glm::bvec2), 1};
		case fnv1a("bvec3"):
			return {sizeof(glm::bvec3), 1};
		case fnv1a("bvec4"):
			return {sizeof(glm::bvec4), 1};
		case fnv1a("ivec2"):
			return {sizeof(glm::ivec2), 1};
		case fnv1a("ivec3"):
			return {sizeof(glm::ivec3), 1};
		case fnv1a("ivec4"):
			return {sizeof(glm::ivec4), 1};
		case fnv1a("uvec2"):
			return {sizeof(glm::uvec2), 1};
		case fnv1a("uvec3"):
			return {sizeof(glm::uvec3), 1};
		case fnv1a("uvec4"):
			return {sizeof(glm::uvec4), 1};
		case fnv1a("vec2"):
			return {sizeof(glm::vec2), 1};
		case fnv1a("vec3"):
			return {sizeof(glm::vec3), 1};
		case fnv1a("vec4"):
			return {sizeof(glm::vec4), 1};
		case fnv1a("dvec2"):
			return {sizeof(glm::dvec2), 1};
		case fnv1a("dvec3"):
			return {sizeof(glm::dvec3), 1};
		case fnv1a("dvec4"):
			return {sizeof(glm::dvec4), 1};
		case fnv1a("mat2"):
			return {sizeof(glm::mat2), 2};
		case fnv1a("mat2x2"):
			return {sizeof(glm::mat2x2), 2};
		case fnv1a("mat2x3"):
			return {sizeof(glm::mat2x3), 2};
		case fnv1a("mat2x4"):
			return {sizeof(glm::mat2x4), 2};
		case fnv1a("mat3"):
			return {sizeof(glm::mat3), 3};
		case fnv1a("mat3x2"):
			return {sizeof(glm::mat3x2), 3};
		case fnv1a("mat3x3"):
			return {sizeof(glm::mat3x3), 3};
		case fnv1a("mat3x4"):
			return {sizeof(glm::mat3x4), 3};
		case fnv1a("mat4"):
			return {sizeof(glm::mat4), 4};
		case fnv1a("mat4x2"):
			return {sizeof(glm::mat4x2), 4};
		case fnv1a("mat4x3"):
			return {sizeof(glm::mat4x3), 4};
		case fnv1a("mat4x4"):
			return {sizeof(glm::mat4x4), 4};
		case fnv1a("dmat2"):
			return {sizeof(glm::dmat2), 2};
		case fnv1a("dmat2x2"):
			return {sizeof(glm::dmat2x2), 2};
		case fnv1a("dmat2x3"):
			return {sizeof(glm::dmat2x3), 2};
		case fnv1a("dmat2x4"):
			return {sizeof(glm::dmat2x4), 2};
		case fnv1a("dmat3"):
			return {sizeof(glm::dmat3), 3};
		case fnv1a("dmat3x2"):
			return {sizeof(glm::dmat3x2), 3};
		case fnv1a("dmat3x3"):
			return {sizeof(glm::dmat3x3), 3};
		case fnv1a("dmat3x4"):
			return {sizeof(glm::dmat3x4), 3};
		case fnv1a("dmat4"):
			return {sizeof(glm::dmat4), 4};
		case fnv1a("dmat4x2"):
			return {sizeof(glm::dmat4x2), 4};
		case fnv1a("dmat4x3"):
			return {sizeof(glm::dmat4x3), 4};
		case fnv1a("dmat4x4"):
			return {sizeof(glm::dmat4x4), 4};
		default:
			return GLSLTypeInfo{};
	}
}
