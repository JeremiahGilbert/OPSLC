#pragma once

#include <cstdint>
#include <vector>

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

	using VertexInputBindingDescriptions = std::vector<vk::VertexInputBindingDescription>;
	using VertexInputAttributeDescriptions = std::vector<vk::VertexInputAttributeDescription>;
	using DescriptorSetLayoutBindings = std::vector<vk::DescriptorSetLayoutBinding>;
	using PushConstantRanges = std::vector<vk::PushConstantRange>;

	using CompiledShaders = std::vector<CompiledShader>;

	struct OPSLData {
		OPSLData operator+(OPSLData const& other) {
			auto result = *this;
			result += other;
			return result;
		}

		OPSLData& operator+=(OPSLData const& other) {
			vertex_input_binding_descriptions.insert(vertex_input_binding_descriptions.end(),
													 other.vertex_input_binding_descriptions.begin(),
													 other.vertex_input_binding_descriptions.end());

			vertex_input_attribute_descriptions.insert(vertex_input_attribute_descriptions.end(),
													   other.vertex_input_attribute_descriptions.begin(),
													   other.vertex_input_attribute_descriptions.end());

			descriptor_set_layout_bindings.insert(descriptor_set_layout_bindings.end(),
												  other.descriptor_set_layout_bindings.begin(),
												  other.descriptor_set_layout_bindings.end());

			push_constant_ranges.insert(push_constant_ranges.end(),
										other.push_constant_ranges.begin(),
										other.push_constant_ranges.end());

			compiled_shaders.insert(compiled_shaders.end(), other.compiled_shaders.begin(), other.compiled_shaders.end());

			return *this;
		}

		template<typename Archive>
		void serialize(Archive& archive) {
			archive(vertex_input_binding_descriptions, vertex_input_attribute_descriptions, descriptor_set_layout_bindings, push_constant_ranges, compiled_shaders);
		}

		VertexInputBindingDescriptions vertex_input_binding_descriptions;
		VertexInputAttributeDescriptions vertex_input_attribute_descriptions;
		DescriptorSetLayoutBindings descriptor_set_layout_bindings;
		PushConstantRanges push_constant_ranges;

		CompiledShaders compiled_shaders;
	};
}

namespace cereal {
	template<typename Archive>
	VkShaderStageFlags save_minimal(Archive const& archive, vk::ShaderStageFlags const& shader_stage_flags) {
		return static_cast<VkShaderStageFlags>(shader_stage_flags);
	}

	template<typename Archive>
	void load_minimal(Archive const& archive, vk::ShaderStageFlags& shader_stage_flags, VkShaderStageFlags const& s) {
		shader_stage_flags = vk::ShaderStageFlags{s};
	}

	template<typename Archive>
	void serialize(Archive& archive, vk::VertexInputBindingDescription& vertex_input_binding_description) {
		archive(vertex_input_binding_description.binding, vertex_input_binding_description.stride, vertex_input_binding_description.inputRate);
	}

	template<typename Archive>
	void serialize(Archive& archive, vk::VertexInputAttributeDescription& vertex_input_attribute_description) {
		archive(vertex_input_attribute_description.location,
				vertex_input_attribute_description.binding,
				vertex_input_attribute_description.format,
				vertex_input_attribute_description.offset);
	}

	template<typename Archive>
	void serialize(Archive& archive, vk::DescriptorSetLayoutBinding& descriptor_set_layout_binding) {
		archive(descriptor_set_layout_binding.binding,
				descriptor_set_layout_binding.descriptorType,
				descriptor_set_layout_binding.descriptorCount,
				descriptor_set_layout_binding.stageFlags);
	}

	template<typename Archive>
	void serialize(Archive& archive, vk::PushConstantRange& push_constant_range) {
		archive(push_constant_range.stageFlags, push_constant_range.offset, push_constant_range.size);
	}
}