#pragma once

#include <cstdint>

#include <vulkan/vulkan.hpp>

namespace opsl {
	struct PushConstantRange {
		template<typename Archive>
		void serialize(Archive& archive) {
			archive(stage_flags, offset, size);
		}

		vk::ShaderStageFlagBits stage_flags;
		uint32_t offset;
		uint32_t size;
	};
}