#pragma once

#include <cstdint>

#include <vulkan/vulkan.hpp>

namespace opsl {
	struct DescriptorSetLayoutBinding {
		template<typename Archive>
		void serialize(Archive& archive) {
			archive(binding, descriptor_type, descriptor_count, stage_flags, size);
		}

		uint32_t binding;
		vk::DescriptorType descriptor_type;
		uint32_t descriptor_count;
		vk::ShaderStageFlagBits stage_flags;
		uint32_t size;
	};
}