#pragma once

#include <cstdint>
#include <map>
#include <memory>
#include <string>
#include <utility>
#include <variant>
#include <vector>

using LayoutQualifierId = std::pair<std::string, uint32_t>;
using LayoutQualifierIdList = std::map<std::string, uint32_t>;

struct TypeQualifier {
	LayoutQualifierIdList layout_qualifier_ids;
	std::vector<std::string> single_type_qualifiers;
};

struct StructSpecifier;
using TypeSpecifierNonarray = std::variant<std::string, std::shared_ptr<StructSpecifier>>; // std::shared_ptr to break struct-in-struct cycles.

using ArraySpecifier = std::vector<uint32_t>;

struct TypeSpecifier {
	TypeSpecifierNonarray type_specifier_nonarray;
	ArraySpecifier array_specifier;
};

struct StructDeclarator {
	std::string identifier;
	ArraySpecifier array_specifier;
};

using StructDeclaratorList = std::vector<StructDeclarator>;

struct StructDeclaration {
	TypeQualifier type_qualifier;
	TypeSpecifier type_specifier;
	StructDeclaratorList struct_declarators;
};

using StructDeclarationList = std::vector<StructDeclaration>;

struct StructSpecifier {
	std::string identifier;
	StructDeclarationList struct_declarations;
};

struct FullySpecifiedType {
	TypeQualifier type_qualifier;
	TypeSpecifier type_specifier;
};

struct InitDeclarator {
	std::string identifier;
	ArraySpecifier array_specifier;
};

struct InitDeclaratorList {
	FullySpecifiedType fully_specified_type;
	std::vector<InitDeclarator> init_declarators;
};

struct InterfaceBlock {
	TypeQualifier type_qualifier;
	std::string block_name;
	StructDeclarationList struct_declarations;
	std::string instance_name;
	ArraySpecifier array_specifier;
};

using Declaration = std::variant<InitDeclaratorList, InterfaceBlock>;

using TranslationUnit = std::vector<Declaration>;