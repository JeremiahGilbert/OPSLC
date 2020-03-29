#include "Compiler.h"

#include <algorithm>
#include <map>
#include <memory>
#include <numeric>
#include <regex>
#include <string_view>

#include "shaderc/shaderc.hpp"

#include "antlr/GLSLLexer.h"
#include "antlr/GLSLParser.h"
#include "GLSLLayoutVisitor.h"
#include "GLSLTypes.h"
#include "ParserTypes.h"
#include "Utilities.h"

// Parsers.
#include "VertexInputAttributeDescriptionParser.h"
#include "DescriptorSetLayoutBindingParser.h"
#include "PushConstantRangeParser.h"

std::string preprocess_shader(std::string const& shader_code);
opsl::OPSLData parse_shader(TranslationUnit const& translation_unit, vk::ShaderStageFlagBits const stage_flags);
void parse_struct_definition(std::string const& type_name, StructDeclarationList const& struct_declarations, GLSLTypes& glsl_types);
opsl::CompiledShader compile_shader(std::string const& shader_code, vk::ShaderStageFlagBits const stage_flags);

opsl::OPSLData parse_and_compile_shader(std::string const& shader_code, vk::ShaderStageFlagBits const stage_flags) {
	auto const preprocessed_code = preprocess_shader(shader_code);

	auto input_stream = antlr4::ANTLRInputStream{preprocessed_code};
	auto lexer = GLSLLexer{&input_stream};
	auto tokens = antlr4::CommonTokenStream{&lexer};
	auto parser = GLSLParser{&tokens};
	auto layout_visitor = GLSLLayoutVisitor{};

	auto const translation_unit = layout_visitor.visit(parser.translationUnit()).as<TranslationUnit>();

	auto shader_data = parse_shader(translation_unit, stage_flags);

	shader_data.compiled_shaders.push_back(compile_shader(shader_code, stage_flags));

	return shader_data;
}

std::string preprocess_shader(std::string const& shader_code) {
	static auto const preprocessor_regex = std::regex{R"(^#.+$)"};
	static auto const single_line_comment_regex = std::regex{R"(\/\/.*$)"};
	static auto const multiline_comment_regex = std::regex{R"(\/\*.*?\*\/)"};

	return std::regex_replace(std::regex_replace(std::regex_replace(shader_code, preprocessor_regex, ""), single_line_comment_regex, ""), multiline_comment_regex, "");
}

opsl::OPSLData parse_shader(TranslationUnit const& translation_unit, vk::ShaderStageFlagBits const stage_flags) {
	auto opsl_data = opsl::OPSLData{};

	auto glsl_types = GLSLTypes{};

	auto vertex_input_attribute_description_parser = VertexInputAttributeDescriptionParser{};
	auto descriptor_set_layout_binding_parser = DescriptorSetLayoutBindingParser{};
	auto push_constant_range_parser = PushConstantRangeParser{};

	for (auto const& declaration : translation_unit) {

		// Init declarator list.
		if (std::holds_alternative<InitDeclaratorList>(declaration)) {
			auto const& init_declarator_list = std::get<InitDeclaratorList>(declaration);

			// Struct definition.
			auto const& fully_specified_type = init_declarator_list.fully_specified_type;
			auto const& type_specifier_nonarray = fully_specified_type.type_specifier.type_specifier_nonarray;
			if (std::holds_alternative<std::shared_ptr<StructSpecifier>>(type_specifier_nonarray)) {
				auto const& struct_specifier = *std::get<std::shared_ptr<StructSpecifier>>(type_specifier_nonarray);

				parse_struct_definition(struct_specifier.identifier, struct_specifier.struct_declarations, glsl_types);
			}

			// Vertex input attribute description.
			auto const& type_qualifier = fully_specified_type.type_qualifier;
			auto const& single_type_qualifiers = type_qualifier.single_type_qualifiers;
			if (std::find(single_type_qualifiers.begin(), single_type_qualifiers.end(), "in") != single_type_qualifiers.end() && stage_flags == vk::ShaderStageFlagBits::eVertex) {
				vertex_input_attribute_description_parser(init_declarator_list, glsl_types);
			}

			if (std::find(single_type_qualifiers.begin(), single_type_qualifiers.end(), "uniform") != single_type_qualifiers.end()) {

				// Descriptor set layout binding.
				auto const& layout_qualifier_ids = type_qualifier.layout_qualifier_ids;
				if (layout_qualifier_ids.find("push_constant") == layout_qualifier_ids.end()) {
					descriptor_set_layout_binding_parser(init_declarator_list, stage_flags, glsl_types);
				
				} else { // Push constant range.
					push_constant_range_parser(init_declarator_list, stage_flags, glsl_types);
				}
			}
		} else { // Interface block.
			auto const& interface_block = std::get<InterfaceBlock>(declaration);

			// Struct definition.
			parse_struct_definition(interface_block.block_name, interface_block.struct_declarations, glsl_types);

			auto const& single_type_qualifiers = interface_block.type_qualifier.single_type_qualifiers;
			if (std::find(single_type_qualifiers.begin(), single_type_qualifiers.end(), "uniform") != single_type_qualifiers.end()) {

				// Descriptor set layout binding.
				auto const& layout_qualifier_ids = interface_block.type_qualifier.layout_qualifier_ids;
				if (layout_qualifier_ids.find("push_constant") == layout_qualifier_ids.end()) {
					descriptor_set_layout_binding_parser(interface_block, stage_flags, glsl_types);

				} else { // Push constant range.
					push_constant_range_parser(interface_block, stage_flags, glsl_types);
				}
			}
		}
	}

	opsl_data.input_strides = vertex_input_attribute_description_parser.get_binding_offsets();
	opsl_data.vertex_input_attribute_descriptions = vertex_input_attribute_description_parser.get_vertex_input_attribute_descriptions();
	opsl_data.descriptor_set_layout_bindings = descriptor_set_layout_binding_parser.get_descriptor_set_layout_bindings();
	opsl_data.push_constant_ranges = push_constant_range_parser.get_push_constant_ranges();

	// TODO
	return opsl_data;
}

void parse_struct_definition(std::string const& type_name, StructDeclarationList const& struct_declarations, GLSLTypes& glsl_types) {
	auto result_info = GLSLTypes::GLSLTypeInfo{};

	for (auto const& struct_declaration : struct_declarations) {
		auto const& type_specifier_nonarray = struct_declaration.type_specifier.type_specifier_nonarray;

		auto inner_type_name = std::string{};
		if (std::holds_alternative<std::string>(type_specifier_nonarray)) {
			inner_type_name = std::get<std::string>(type_specifier_nonarray);

		} else {
			auto const& struct_specifier = *std::get<std::shared_ptr<StructSpecifier>>(type_specifier_nonarray);

			parse_struct_definition(struct_specifier.identifier, struct_specifier.struct_declarations, glsl_types);
			inner_type_name = struct_specifier.identifier;
		}
		auto const inner_type_info = glsl_types(inner_type_name);

		auto const& type_array_specifier = struct_declaration.type_specifier.array_specifier;
		auto const type_array_multiplier = std::accumulate(type_array_specifier.begin(), type_array_specifier.end(), 1, std::multiplies<uint32_t>{});

		for (auto const& struct_declarator : struct_declaration.struct_declarators) {
			auto const& member_array_specifier = struct_declarator.array_specifier;
			auto const member_array_multiplier = std::accumulate(member_array_specifier.begin(), member_array_specifier.end(), 1, std::multiplies<uint32_t>{});

			auto const total_array_multiplier = type_array_multiplier * member_array_multiplier;
			result_info.size += inner_type_info.size * total_array_multiplier;
			result_info.attributes += inner_type_info.attributes * total_array_multiplier;
		}
	}
	glsl_types.add_type(type_name, result_info);
}

opsl::CompiledShader compile_shader(std::string const& shader_code, vk::ShaderStageFlagBits const stage_flags) {
	auto compiled_shader = opsl::CompiledShader{};

	auto const compiler = shaderc::Compiler{};
	auto const compilation_result = compiler.CompileGlslToSpv(shader_code, shader_stage_to_shader_kind(stage_flags), "");

	if (compilation_result.GetNumErrors() > 0) {
		std::cout << compilation_result.GetErrorMessage();
		return opsl::CompiledShader{};
	} else if (compilation_result.GetNumWarnings() > 0) {
		std::cout << compilation_result.GetErrorMessage();
	}
	compiled_shader.stage_flags = stage_flags;

	compiled_shader.bytecode.insert(compiled_shader.bytecode.end(), compilation_result.begin(), compilation_result.end());

	return compiled_shader;
}

