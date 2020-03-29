#pragma once

#include <cstdint>
#include <map>
#include <string>

class GLSLTypes {
public:
	struct GLSLTypeInfo {
		uint32_t size;
		uint32_t attributes;
	};

	GLSLTypeInfo operator()(std::string const& type_name) const;

	inline void add_type(std::string const& type_name, GLSLTypeInfo const& type_info) {
		if (user_types_.find(type_name) == user_types_.end()) {
			user_types_[type_name] = type_info;
		}
	}

	inline void add_type(std::string const& type_name, uint32_t const size, uint32_t const attributes) {
		if (user_types_.find(type_name) == user_types_.end()) {
			user_types_[type_name] = GLSLTypeInfo{size, attributes};
		}
	}

	inline uint32_t get_size(std::string const& type_name) const {
		return (*this)(type_name).size;
	}

	inline uint32_t get_attributes(std::string const& type_name) const {
		return (*this)(type_name).attributes;
	}

private:
	std::map<std::string, GLSLTypeInfo> user_types_;
};

