#pragma once

#include <filesystem>

#include "OPSLData.h"

namespace opsl {
	void write_opsl(OPSLData const& shader_data, std::filesystem::path const& path);
	OPSLData read_opsl(std::filesystem::path const& path);
}
