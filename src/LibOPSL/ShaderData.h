#pragma once

#include <cstdint>
#include <map>
#include <vector>

#include <cereal/types/map.hpp>
#include <cereal/types/vector.hpp>
#include <vulkan/vulkan.hpp>

#include "DescriptorSetLayoutBinding.h"
#include "PushConstantRange.h"
#include "CompiledShader.h"
#include "VertexInputAttributeDescription.h"

namespace opsl {
	using InputStrides = std::map<uint32_t, uint32_t>; // Binding -> stride.

	using VertexInputAttributeDescriptions = std::vector<VertexInputAttributeDescription>;
	using DescriptorSetLayoutBindings = std::vector<DescriptorSetLayoutBinding>;
	using PushConstantRanges = std::vector<PushConstantRange>;

	using CompiledShaders = std::vector<CompiledShader>;

	struct OPSLData {
		OPSLData operator+(OPSLData const& other) {
			auto result = *this;
			result += other;
			return result;
		}

		OPSLData& operator+=(OPSLData const& other) {
			input_strides.insert(other.input_strides.begin(), other.input_strides.end());
			
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
			archive(input_strides, vertex_input_attribute_descriptions, descriptor_set_layout_bindings, push_constant_ranges, compiled_shaders);
		}

		InputStrides input_strides;

		VertexInputAttributeDescriptions vertex_input_attribute_descriptions;
		DescriptorSetLayoutBindings descriptor_set_layout_bindings;
		PushConstantRanges push_constant_ranges;

		CompiledShaders compiled_shaders;
	};
}