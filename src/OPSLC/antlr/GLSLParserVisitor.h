
// Generated from GLSLParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "GLSLParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by GLSLParser.
 */
class  GLSLParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by GLSLParser.
   */
    virtual antlrcpp::Any visitVariableIdentifier(GLSLParser::VariableIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpression(GLSLParser::PrimaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostfixExpression(GLSLParser::PostfixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIntegerExpression(GLSLParser::IntegerExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallHeaderWithParameters_(GLSLParser::FunctionCallHeaderWithParameters_Context *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression(GLSLParser::UnaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryOperator(GLSLParser::UnaryOperatorContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeExpression(GLSLParser::MultiplicativeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveExpression(GLSLParser::AdditiveExpressionContext *context) = 0;

    virtual antlrcpp::Any visitShiftExpression(GLSLParser::ShiftExpressionContext *context) = 0;

    virtual antlrcpp::Any visitRelationalExpression(GLSLParser::RelationalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualityExpression(GLSLParser::EqualityExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAndExpression(GLSLParser::AndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExclusiveOrExpression(GLSLParser::ExclusiveOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInclusiveOrExpression(GLSLParser::InclusiveOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalAndExpression(GLSLParser::LogicalAndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalXorExpression(GLSLParser::LogicalXorExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOrExpression(GLSLParser::LogicalOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConditionalExpression(GLSLParser::ConditionalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentExpression(GLSLParser::AssignmentExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentOperator(GLSLParser::AssignmentOperatorContext *context) = 0;

    virtual antlrcpp::Any visitExpression(GLSLParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConstantExpression(GLSLParser::ConstantExpressionContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(GLSLParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList(GLSLParser::IdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitFunctionPrototype(GLSLParser::FunctionPrototypeContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclarator(GLSLParser::FunctionDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitFunctionHeaderWithParameters(GLSLParser::FunctionHeaderWithParametersContext *context) = 0;

    virtual antlrcpp::Any visitFunctionHeader(GLSLParser::FunctionHeaderContext *context) = 0;

    virtual antlrcpp::Any visitParameterDeclarator(GLSLParser::ParameterDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitParameterDeclaration(GLSLParser::ParameterDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitParameterTypeSpecifier(GLSLParser::ParameterTypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitInitDeclaratorList(GLSLParser::InitDeclaratorListContext *context) = 0;

    virtual antlrcpp::Any visitSingleDeclaration(GLSLParser::SingleDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFullySpecifiedType(GLSLParser::FullySpecifiedTypeContext *context) = 0;

    virtual antlrcpp::Any visitInvariantQualifier(GLSLParser::InvariantQualifierContext *context) = 0;

    virtual antlrcpp::Any visitInterpolationQualifier(GLSLParser::InterpolationQualifierContext *context) = 0;

    virtual antlrcpp::Any visitLayoutQualifier(GLSLParser::LayoutQualifierContext *context) = 0;

    virtual antlrcpp::Any visitLayoutQualifierIdList(GLSLParser::LayoutQualifierIdListContext *context) = 0;

    virtual antlrcpp::Any visitLayoutQualifierId(GLSLParser::LayoutQualifierIdContext *context) = 0;

    virtual antlrcpp::Any visitPreciseQualifier(GLSLParser::PreciseQualifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeQualifier(GLSLParser::TypeQualifierContext *context) = 0;

    virtual antlrcpp::Any visitSingleTypeQualifier(GLSLParser::SingleTypeQualifierContext *context) = 0;

    virtual antlrcpp::Any visitStorageQualifier(GLSLParser::StorageQualifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeNameList(GLSLParser::TypeNameListContext *context) = 0;

    virtual antlrcpp::Any visitTypeSpecifier(GLSLParser::TypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitArraySpecifier(GLSLParser::ArraySpecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeSpecifierNonarray(GLSLParser::TypeSpecifierNonarrayContext *context) = 0;

    virtual antlrcpp::Any visitPrecisionQualifier(GLSLParser::PrecisionQualifierContext *context) = 0;

    virtual antlrcpp::Any visitStructSpecifier(GLSLParser::StructSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclarationList(GLSLParser::StructDeclarationListContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclaration(GLSLParser::StructDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclaratorList(GLSLParser::StructDeclaratorListContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclarator(GLSLParser::StructDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitInitializer(GLSLParser::InitializerContext *context) = 0;

    virtual antlrcpp::Any visitInitializerList(GLSLParser::InitializerListContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationStatement(GLSLParser::DeclarationStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatement(GLSLParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitSimpleStatement(GLSLParser::SimpleStatementContext *context) = 0;

    virtual antlrcpp::Any visitCompundStatement(GLSLParser::CompundStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatementNoNewScope(GLSLParser::StatementNoNewScopeContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStatementNoNewScope(GLSLParser::CompoundStatementNoNewScopeContext *context) = 0;

    virtual antlrcpp::Any visitStatementList(GLSLParser::StatementListContext *context) = 0;

    virtual antlrcpp::Any visitExpressionStatement(GLSLParser::ExpressionStatementContext *context) = 0;

    virtual antlrcpp::Any visitSelectionStatement(GLSLParser::SelectionStatementContext *context) = 0;

    virtual antlrcpp::Any visitSelectionRestStatement(GLSLParser::SelectionRestStatementContext *context) = 0;

    virtual antlrcpp::Any visitCondition(GLSLParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitSwitchStatement(GLSLParser::SwitchStatementContext *context) = 0;

    virtual antlrcpp::Any visitSwitchStatementList(GLSLParser::SwitchStatementListContext *context) = 0;

    virtual antlrcpp::Any visitCaseLabel(GLSLParser::CaseLabelContext *context) = 0;

    virtual antlrcpp::Any visitIterationStatement(GLSLParser::IterationStatementContext *context) = 0;

    virtual antlrcpp::Any visitForInitStatement(GLSLParser::ForInitStatementContext *context) = 0;

    virtual antlrcpp::Any visitConditionopt(GLSLParser::ConditionoptContext *context) = 0;

    virtual antlrcpp::Any visitForRestStatement(GLSLParser::ForRestStatementContext *context) = 0;

    virtual antlrcpp::Any visitJumpStatement(GLSLParser::JumpStatementContext *context) = 0;

    virtual antlrcpp::Any visitTranslationUnit(GLSLParser::TranslationUnitContext *context) = 0;

    virtual antlrcpp::Any visitExternalDeclaration(GLSLParser::ExternalDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinition(GLSLParser::FunctionDefinitionContext *context) = 0;


};

