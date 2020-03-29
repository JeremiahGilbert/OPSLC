#pragma once

#include <cstdint>

#include <cereal/types/vector.hpp>
#include <vulkan/vulkan.hpp>

namespace opsl {
	struct CompiledShader {
		template<typename Archive>
		void serialize(Archive& archive) {
			archive(stage_flags, bytecode);
		}

		vk::ShaderStageFlagBits stage_flags;
		std::vector<uint32_t> bytecode;
	};
}
