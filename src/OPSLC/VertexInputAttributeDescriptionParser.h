#pragma once

#include <cstdint>
#include <map>

#include "opsl.h"

#include "GLSLTypes.h"
#include "ParserTypes.h"

class VertexInputAttributeDescriptionParser {
	using BindingOffsets = std::map<uint32_t, uint32_t>;
public:
	void operator()(InitDeclaratorList const& init_declarator_list, GLSLTypes const& glsl_types);

	inline BindingOffsets get_binding_offsets() const {
		return binding_offsets_;
	}

	inline opsl::VertexInputAttributeDescriptions get_vertex_input_attribute_descriptions() const {
		return vertex_input_attribute_descriptions_;
	}

private:
	uint32_t location_;
	BindingOffsets binding_offsets_;

	opsl::VertexInputAttributeDescriptions vertex_input_attribute_descriptions_;
};
