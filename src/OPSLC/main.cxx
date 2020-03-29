#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include <argumentum/argparse.h>

#include "opsl.h"

#include "ANTLR/GLSLLexer.h"
#include "ANTLR/GLSLParser.h"
#include "Compiler.h"
#include "GLSLLayoutVisitor.h"
#include "ParserTypes.h"
#include "Utilities.h"

int main(int argc, char* argv[]) {
	std::vector<std::filesystem::path> files;
	auto object_name = std::string{};

	// Argument parsing.
	auto parser = argumentum::argument_parser{};
	auto params = parser.params();
	parser.config().program(argv[0]).description("OP Shader Languauge Compiler");

	params.add_parameter(files, "files").minargs(1);
	params.add_parameter(object_name, "--object", "-o").nargs(1).metavar("string").help("object").absent("out.opsl");
	
	if (!parser.parse_args(argc, argv)) return -1;


	auto shader_data = opsl::OPSLData{};
	for (auto const& file : files) {
		auto stage_flags = extension_to_shader_stage(file.extension().string());

		auto shader_file = std::fstream{file, std::ios::in};
		auto shader_code = std::string{std::istreambuf_iterator<char>{shader_file}, std::istreambuf_iterator<char>{}};

		shader_data += parse_and_compile_shader(shader_code, stage_flags);
	}

	opsl::write_opsl(shader_data, object_name);

	return 0;
}
