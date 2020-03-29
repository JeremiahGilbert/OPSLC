#include "opsl.h"

#include <fstream>

#include <cereal/cereal.hpp>
#include <cereal/archives/portable_binary.hpp>

void opsl::write_opsl(OPSLData const& shader_data, std::filesystem::path const& path) {
	auto output_stream = std::ofstream{path, std::ios::binary};
	auto output_archive = cereal::PortableBinaryOutputArchive{output_stream};

	output_archive(shader_data);
}

opsl::OPSLData opsl::read_opsl(std::filesystem::path const& path) {
	auto input_stream = std::ifstream{path, std::ios::binary};
	auto input_archive = cereal::PortableBinaryInputArchive{input_stream};

	auto shader_data = OPSLData{};
	input_archive(shader_data);

	return shader_data;
}