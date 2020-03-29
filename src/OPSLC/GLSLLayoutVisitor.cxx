#include "GLSLLayoutVisitor.h"

#include "ParserTypes.h"

antlrcpp::Any GLSLLayoutVisitor::visitDeclaration(GLSLParser::DeclarationContext* ctx) {
	if (auto init_declarator_list_ctx = ctx->initDeclaratorList(); init_declarator_list_ctx != nullptr) {
		return Declaration{init_declarator_list_ctx->accept(this).as<InitDeclaratorList>()};

	} else if (auto struct_declaration_list_ctx = ctx->structDeclarationList(); struct_declaration_list_ctx != nullptr) {
		auto struct_definition = InterfaceBlock{};

		struct_definition.type_qualifier = ctx->typeQualifier()->accept(this).as<TypeQualifier>();

		struct_definition.block_name = ctx->IDENTIFIER(0)->getText();

		struct_definition.struct_declarations = struct_declaration_list_ctx->accept(this).as<StructDeclarationList>();

		if (auto variable_name = ctx->IDENTIFIER(1); variable_name != nullptr) {
			struct_definition.instance_name = variable_name->getText();

			if (auto array_specifier_ctx = ctx->arraySpecifier(); array_specifier_ctx != nullptr) {
				struct_definition.array_specifier = array_specifier_ctx->accept(this).as<ArraySpecifier>();
			}
		}

		return Declaration{struct_definition};
	}

	return nullptr;
}

antlrcpp::Any GLSLLayoutVisitor::visitInitDeclaratorList(GLSLParser::InitDeclaratorListContext* ctx) {
	auto init_declarator_list = InitDeclaratorList{};

	if (auto single_declaration_ctx = ctx->singleDeclaration(); single_declaration_ctx != nullptr) {
		init_declarator_list = single_declaration_ctx->accept(this).as<InitDeclaratorList>();

	} else if (auto init_declarator_list_ctx = ctx->initDeclaratorList(); init_declarator_list_ctx != nullptr) {
		init_declarator_list = init_declarator_list_ctx->accept(this).as<InitDeclaratorList>();

		auto init_declarator = InitDeclarator{};

		init_declarator.identifier = ctx->IDENTIFIER()->getText();

		if (auto array_specifier_ctx = ctx->arraySpecifier(); array_specifier_ctx != nullptr) {
			init_declarator.array_specifier = array_specifier_ctx->accept(this).as<ArraySpecifier>();
		}

		init_declarator_list.init_declarators.push_back(init_declarator);
	}

	return init_declarator_list;
}

antlrcpp::Any GLSLLayoutVisitor::visitSingleDeclaration(GLSLParser::SingleDeclarationContext* ctx) {
	auto init_declarator_list = InitDeclaratorList{};

	init_declarator_list.fully_specified_type = ctx->fullySpecifiedType()->accept(this).as<FullySpecifiedType>();

	auto init_declarator = InitDeclarator{};

	if (auto identifier = ctx->IDENTIFIER(); identifier != nullptr) {
		init_declarator.identifier = identifier->getText();
	}

	if (auto array_specifier_ctx = ctx->arraySpecifier(); array_specifier_ctx != nullptr) {
		init_declarator.array_specifier = array_specifier_ctx->accept(this).as<ArraySpecifier>();
	}

	init_declarator_list.init_declarators.push_back(init_declarator);

	return init_declarator_list;
}

antlrcpp::Any GLSLLayoutVisitor::visitFullySpecifiedType(GLSLParser::FullySpecifiedTypeContext* ctx) {
	auto fully_specified_type = FullySpecifiedType{};

	if (auto type_qualifier_ctx = ctx->typeQualifier(); type_qualifier_ctx != nullptr) {
		fully_specified_type.type_qualifier = type_qualifier_ctx->accept(this).as<TypeQualifier>();
	}

	auto type_specifier_ctx = ctx->typeSpecifier();
	fully_specified_type.type_specifier = type_specifier_ctx->accept(this).as<TypeSpecifier>();

	return fully_specified_type;
}

antlrcpp::Any GLSLLayoutVisitor::visitLayoutQualifier(GLSLParser::LayoutQualifierContext* ctx) {
	return ctx->layoutQualifierIdList()->accept(this);
}

antlrcpp::Any GLSLLayoutVisitor::visitLayoutQualifierIdList(GLSLParser::LayoutQualifierIdListContext* ctx) {
	auto layout_qualifier_id_list = LayoutQualifierIdList{};

	if (auto layout_qualifier_id_list_ctx = ctx->layoutQualifierIdList(); layout_qualifier_id_list_ctx != nullptr) {
		layout_qualifier_id_list = layout_qualifier_id_list_ctx->accept(this).as<LayoutQualifierIdList>();
	}

	layout_qualifier_id_list.insert(ctx->layoutQualifierId()->accept(this).as<LayoutQualifierId>());

	return layout_qualifier_id_list;
}

antlrcpp::Any GLSLLayoutVisitor::visitLayoutQualifierId(GLSLParser::LayoutQualifierIdContext* ctx) {
	auto layout_qualifier_id = LayoutQualifierId{};

	if (auto constant_expression_ctx = ctx->constantExpression(); constant_expression_ctx != nullptr) {
		layout_qualifier_id = LayoutQualifierId{ctx->IDENTIFIER()->getText(), std::stoul(constant_expression_ctx->getText())};
	} else {
		layout_qualifier_id = LayoutQualifierId{ctx->IDENTIFIER()->getText(), 0};
	}

	return layout_qualifier_id;
}

antlrcpp::Any GLSLLayoutVisitor::visitTypeQualifier(GLSLParser::TypeQualifierContext* ctx) {
	auto type_qualifier = TypeQualifier{};

	if (auto type_qualifier_ctx = ctx->typeQualifier(); type_qualifier_ctx != nullptr) {
		type_qualifier = type_qualifier_ctx->accept(this).as<TypeQualifier>();
	}

	auto single_type_qualifier = ctx->singleTypeQualifier()->accept(this);
	if (single_type_qualifier.is<LayoutQualifierIdList>()) {
		type_qualifier.layout_qualifier_ids = single_type_qualifier.as<LayoutQualifierIdList>();
	} else {
		type_qualifier.single_type_qualifiers.push_back(single_type_qualifier.as<std::string>());
	}

	return type_qualifier;
}

antlrcpp::Any GLSLLayoutVisitor::visitSingleTypeQualifier(GLSLParser::SingleTypeQualifierContext* ctx) {
	if (auto layout_qualifier_ctx = ctx->layoutQualifier(); layout_qualifier_ctx != nullptr) {
		return layout_qualifier_ctx->accept(this).as<LayoutQualifierIdList>();
	} else {
		return ctx->getText();
	}
}

antlrcpp::Any GLSLLayoutVisitor::visitTypeSpecifier(GLSLParser::TypeSpecifierContext* ctx) {
	auto type_specifier = TypeSpecifier{};

	type_specifier.type_specifier_nonarray = ctx->typeSpecifierNonarray()->accept(this).as<TypeSpecifierNonarray>();
	if (auto array_specifier_ctx = ctx->arraySpecifier(); array_specifier_ctx != nullptr) {
		type_specifier.array_specifier = array_specifier_ctx->accept(this).as<ArraySpecifier>();
	}

	return type_specifier;
}

antlrcpp::Any GLSLLayoutVisitor::visitArraySpecifier(GLSLParser::ArraySpecifierContext* ctx) {
	auto array_specifier = ArraySpecifier{};

	if (auto array_specifier_ctx = ctx->arraySpecifier(); array_specifier_ctx != nullptr) {
		array_specifier = array_specifier_ctx->accept(this).as<ArraySpecifier>();
	}

	if (auto conditional_expression_ctx = ctx->conditionalExpression(); conditional_expression_ctx != nullptr) {
		array_specifier.push_back(std::stoul(conditional_expression_ctx->getText()));
	} else {
		array_specifier.push_back(0);
	}

	return array_specifier;
}

antlrcpp::Any GLSLLayoutVisitor::visitTypeSpecifierNonarray(GLSLParser::TypeSpecifierNonarrayContext* ctx) {
	if (auto struct_specifier_ctx = ctx->structSpecifier(); struct_specifier_ctx != nullptr) {
		return TypeSpecifierNonarray{std::make_shared<StructSpecifier>(struct_specifier_ctx->accept(this).as<StructSpecifier>())};
	}

	return TypeSpecifierNonarray{ctx->getText()};
}

antlrcpp::Any GLSLLayoutVisitor::visitStructSpecifier(GLSLParser::StructSpecifierContext* ctx) {
	auto struct_specifier = StructSpecifier{};

	if (auto identifier = ctx->IDENTIFIER(); identifier != nullptr) {
		struct_specifier.identifier = identifier->getText();
	}

	struct_specifier.struct_declarations = ctx->structDeclarationList()->accept(this).as<StructDeclarationList>();

	return struct_specifier;
}

antlrcpp::Any GLSLLayoutVisitor::visitStructDeclarationList(GLSLParser::StructDeclarationListContext* ctx) {
	auto struct_declaration_list = StructDeclarationList{};

	if (auto struct_declaration_list_ctx = ctx->structDeclarationList(); struct_declaration_list_ctx != nullptr) {
		struct_declaration_list = struct_declaration_list_ctx->accept(this).as<StructDeclarationList>();
	}

	struct_declaration_list.push_back(ctx->structDeclaration()->accept(this).as<StructDeclaration>());

	return struct_declaration_list;
}

antlrcpp::Any GLSLLayoutVisitor::visitStructDeclaration(GLSLParser::StructDeclarationContext* ctx) {
	auto struct_declaration = StructDeclaration{};

	if (auto type_qualifier_ctx = ctx->typeQualifier(); type_qualifier_ctx != nullptr) {
		struct_declaration.type_qualifier = type_qualifier_ctx->accept(this).as<TypeQualifier>();
	}

	struct_declaration.type_specifier = ctx->typeSpecifier()->accept(this).as<TypeSpecifier>();

	struct_declaration.struct_declarators = ctx->structDeclaratorList()->accept(this).as<StructDeclaratorList>();

	return struct_declaration;
}

antlrcpp::Any GLSLLayoutVisitor::visitStructDeclaratorList(GLSLParser::StructDeclaratorListContext* ctx) {
	auto struct_declarators = StructDeclaratorList{};

	if (auto struct_declarator_list_ctx = ctx->structDeclaratorList(); struct_declarator_list_ctx != nullptr) {
		struct_declarators = struct_declarator_list_ctx->accept(this).as<StructDeclaratorList>();
	}

	struct_declarators.push_back(ctx->structDeclarator()->accept(this).as<StructDeclarator>());

	return struct_declarators;
}

antlrcpp::Any GLSLLayoutVisitor::visitStructDeclarator(GLSLParser::StructDeclaratorContext* ctx) {
	auto struct_declarator = StructDeclarator{};

	struct_declarator.identifier = ctx->IDENTIFIER()->getText();

	if (auto array_specifier_ctx = ctx->arraySpecifier(); array_specifier_ctx != nullptr) {
		struct_declarator.array_specifier = array_specifier_ctx->accept(this).as<ArraySpecifier>();
	}

	return struct_declarator;
}

antlrcpp::Any GLSLLayoutVisitor::visitTranslationUnit(GLSLParser::TranslationUnitContext* ctx) {
	auto translation_unit = TranslationUnit{};

	if (auto translation_unit_ctx = ctx->translationUnit(); translation_unit_ctx != nullptr) {
		translation_unit = translation_unit_ctx->accept(this).as<TranslationUnit>();
	}

	auto external_declaration = ctx->externalDeclaration()->accept(this);
	if (external_declaration.isNotNull()) {
		translation_unit.push_back(external_declaration.as<Declaration>());
		return translation_unit;
	}

	return translation_unit;
}

antlrcpp::Any GLSLLayoutVisitor::visitExternalDeclaration(GLSLParser::ExternalDeclarationContext* ctx) {
	if (auto declaration_ctx = ctx->declaration(); declaration_ctx != nullptr) {
		auto declaration = declaration_ctx->accept(this);

		if (declaration.isNotNull()) {
			return declaration.as<Declaration>();
		}
	}

	return nullptr;
}
