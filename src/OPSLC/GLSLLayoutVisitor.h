#pragma once

#include "ANTLR/GLSLParserBaseVisitor.h"

class GLSLLayoutVisitor : public GLSLParserBaseVisitor {
public:

	//antlrcpp::Any visitVariableIdentifier(GLSLParser::VariableIdentifierContext* ctx) override;

	//antlrcpp::Any visitPrimaryExpression(GLSLParser::PrimaryExpressionContext* ctx) override;

	//antlrcpp::Any visitPostfixExpression(GLSLParser::PostfixExpressionContext* ctx) override;

	//antlrcpp::Any visitIntegerExpression(GLSLParser::IntegerExpressionContext* ctx) override;

	//antlrcpp::Any visitFunctionCallHeaderWithParameters_(GLSLParser::FunctionCallHeaderWithParameters_Context* ctx) override;

	//antlrcpp::Any visitUnaryExpression(GLSLParser::UnaryExpressionContext* ctx);

	//antlrcpp::Any visitUnaryOperator(GLSLParser::UnaryOperatorContext* ctx);

	//antlrcpp::Any visitMultiplicativeExpression(GLSLParser::MultiplicativeExpressionContext* ctx);

	//antlrcpp::Any visitAdditiveExpression(GLSLParser::AdditiveExpressionContext* ctx) override;

	//antlrcpp::Any visitShiftExpression(GLSLParser::ShiftExpressionContext* ctx) override;

	//antlrcpp::Any visitRelationalExpression(GLSLParser::RelationalExpressionContext* ctx) override;

	//antlrcpp::Any visitEqualityExpression(GLSLParser::EqualityExpressionContext* ctx) override;

	//antlrcpp::Any visitAndExpression(GLSLParser::AndExpressionContext* ctx) override;

	//antlrcpp::Any visitExclusiveOrExpression(GLSLParser::ExclusiveOrExpressionContext* ctx) override;

	//antlrcpp::Any visitInclusiveOrExpression(GLSLParser::InclusiveOrExpressionContext* ctx) override;

	//antlrcpp::Any visitLogicalAndExpression(GLSLParser::LogicalAndExpressionContext* ctx) override;

	//antlrcpp::Any visitLogicalXorExpression(GLSLParser::LogicalXorExpressionContext* ctx) override;

	//antlrcpp::Any visitLogicalOrExpression(GLSLParser::LogicalOrExpressionContext* ctx) override;

	//antlrcpp::Any visitConditionalExpression(GLSLParser::ConditionalExpressionContext* ctx) override;

	//antlrcpp::Any visitAssignmentExpression(GLSLParser::AssignmentExpressionContext* ctx) override;

	//antlrcpp::Any visitAssignmentOperator(GLSLParser::AssignmentOperatorContext* ctx) override;

	//antlrcpp::Any visitExpression(GLSLParser::ExpressionContext* ctx) override;

	//antlrcpp::Any visitConstantExpression(GLSLParser::ConstantExpressionContext* ctx) override;

	antlrcpp::Any visitDeclaration(GLSLParser::DeclarationContext* ctx) override;

	//antlrcpp::Any visitIdentifierList(GLSLParser::IdentifierListContext* ctx) override;

	//antlrcpp::Any visitFunctionPrototype(GLSLParser::FunctionPrototypeContext* ctx) override;

	//antlrcpp::Any visitFunctionDeclarator(GLSLParser::FunctionDeclaratorContext* ctx) override;

	//antlrcpp::Any visitFunctionHeaderWithParameters(GLSLParser::FunctionHeaderWithParametersContext* ctx) override;

	//antlrcpp::Any visitFunctionHeader(GLSLParser::FunctionHeaderContext* ctx) override;

	//antlrcpp::Any visitParameterDeclarator(GLSLParser::ParameterDeclaratorContext* ctx) override;

	//antlrcpp::Any visitParameterDeclaration(GLSLParser::ParameterDeclarationContext* ctx) override;

	//antlrcpp::Any visitParameterTypeSpecifier(GLSLParser::ParameterTypeSpecifierContext* ctx) override;

	antlrcpp::Any visitInitDeclaratorList(GLSLParser::InitDeclaratorListContext* ctx) override;

	antlrcpp::Any visitSingleDeclaration(GLSLParser::SingleDeclarationContext* ctx) override;

	antlrcpp::Any visitFullySpecifiedType(GLSLParser::FullySpecifiedTypeContext* ctx) override;

	//antlrcpp::Any visitInvariantQualifier(GLSLParser::InvariantQualifierContext* ctx) override;

	//antlrcpp::Any visitInterpolationQualifier(GLSLParser::InterpolationQualifierContext* ctx) override;

	antlrcpp::Any visitLayoutQualifier(GLSLParser::LayoutQualifierContext* ctx) override;

	antlrcpp::Any visitLayoutQualifierIdList(GLSLParser::LayoutQualifierIdListContext* ctx) override;

	antlrcpp::Any visitLayoutQualifierId(GLSLParser::LayoutQualifierIdContext* ctx) override;

	//antlrcpp::Any visitPreciseQualifier(GLSLParser::PreciseQualifierContext* ctx) override;

	antlrcpp::Any visitTypeQualifier(GLSLParser::TypeQualifierContext* ctx) override;

	antlrcpp::Any visitSingleTypeQualifier(GLSLParser::SingleTypeQualifierContext* ctx) override;

	//antlrcpp::Any visitStorageQualifier(GLSLParser::StorageQualifierContext* ctx) override;

	//antlrcpp::Any visitTypeNameList(GLSLParser::TypeNameListContext* ctx) override;

	antlrcpp::Any visitTypeSpecifier(GLSLParser::TypeSpecifierContext* ctx) override;

	antlrcpp::Any visitArraySpecifier(GLSLParser::ArraySpecifierContext* ctx) override;

	antlrcpp::Any visitTypeSpecifierNonarray(GLSLParser::TypeSpecifierNonarrayContext* ctx) override;

	//antlrcpp::Any visitPrecisionQualifier(GLSLParser::PrecisionQualifierContext* ctx) override;

	antlrcpp::Any visitStructSpecifier(GLSLParser::StructSpecifierContext* ctx) override;

	antlrcpp::Any visitStructDeclarationList(GLSLParser::StructDeclarationListContext* ctx) override;

	antlrcpp::Any visitStructDeclaration(GLSLParser::StructDeclarationContext* ctx) override;

	antlrcpp::Any visitStructDeclaratorList(GLSLParser::StructDeclaratorListContext* ctx) override;

	antlrcpp::Any visitStructDeclarator(GLSLParser::StructDeclaratorContext* ctx) override;

	//antlrcpp::Any visitInitializer(GLSLParser::InitializerContext* ctx) override;

	//antlrcpp::Any visitInitializerList(GLSLParser::InitializerListContext* ctx) override;

	//antlrcpp::Any visitDeclarationStatement(GLSLParser::DeclarationStatementContext* ctx) override;

	//antlrcpp::Any visitStatement(GLSLParser::StatementContext* ctx) override;

	//antlrcpp::Any visitSimpleStatement(GLSLParser::SimpleStatementContext* ctx) override;

	//antlrcpp::Any visitCompundStatement(GLSLParser::CompundStatementContext* ctx) override;

	//antlrcpp::Any visitStatementNoNewScope(GLSLParser::StatementNoNewScopeContext* ctx) override;

	//antlrcpp::Any visitCompoundStatementNoNewScope(GLSLParser::CompoundStatementNoNewScopeContext* ctx) override;

	//antlrcpp::Any visitStatementList(GLSLParser::StatementListContext* ctx) override;

	//antlrcpp::Any visitExpressionStatement(GLSLParser::ExpressionStatementContext* ctx) override;

	//antlrcpp::Any visitSelectionStatement(GLSLParser::SelectionStatementContext* ctx) override;

	//antlrcpp::Any visitSelectionRestStatement(GLSLParser::SelectionRestStatementContext* ctx) override;

	//antlrcpp::Any visitCondition(GLSLParser::ConditionContext* ctx) override;

	//antlrcpp::Any visitSwitchStatement(GLSLParser::SwitchStatementContext* ctx) override;

	//antlrcpp::Any visitSwitchStatementList(GLSLParser::SwitchStatementListContext* ctx) override;

	//antlrcpp::Any visitCaseLabel(GLSLParser::CaseLabelContext* ctx) override;

	//antlrcpp::Any visitIterationStatement(GLSLParser::IterationStatementContext* ctx) override;

	//antlrcpp::Any visitForInitStatement(GLSLParser::ForInitStatementContext* ctx) override;

	//antlrcpp::Any visitConditionopt(GLSLParser::ConditionoptContext* ctx) override;

	//antlrcpp::Any visitForRestStatement(GLSLParser::ForRestStatementContext* ctx) override;

	//antlrcpp::Any visitJumpStatement(GLSLParser::JumpStatementContext* ctx) override;

	antlrcpp::Any visitTranslationUnit(GLSLParser::TranslationUnitContext* ctx) override;

	antlrcpp::Any visitExternalDeclaration(GLSLParser::ExternalDeclarationContext* ctx) override;

	//antlrcpp::Any visitFunctionDefinition(GLSLParser::FunctionDefinitionContext* ctx) override;
};
