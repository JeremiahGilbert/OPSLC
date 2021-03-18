#pragma once

constexpr auto fnv_offset_basis = 0xCBF29CE484222325;
constexpr auto fnv_prime = 0x100000001B3;

constexpr uint64_t fnv1a(std::string_view const& bytes) {
	auto hash = fnv_offset_basis;
	for (auto const& byte : bytes) {
		hash ^= byte;
		hash *= fnv_prime;
	}
	return hash;
}
