#pragma once

#include <cstdint>
#include <string>

#include <cereal/types/string.hpp>
#include <vulkan/vulkan.hpp>

namespace opsl {
	struct VertexInputAttributeDescription {
		template<typename Archive>
		void serialize(Archive& archive) {
			archive(location, binding, format, offset, identifier, attributes);
		}
		
		uint32_t location;
		uint32_t binding;
		vk::Format format;
		uint32_t offset;
		std::string identifier;
		uint32_t attributes;
	};
}
