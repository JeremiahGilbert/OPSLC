
// Generated from GLSLParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "GLSLParserVisitor.h"


/**
 * This class provides an empty implementation of GLSLParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  GLSLParserBaseVisitor : public GLSLParserVisitor {
public:

  virtual antlrcpp::Any visitVariableIdentifier(GLSLParser::VariableIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryExpression(GLSLParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfixExpression(GLSLParser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerExpression(GLSLParser::IntegerExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallHeaderWithParameters_(GLSLParser::FunctionCallHeaderWithParameters_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpression(GLSLParser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryOperator(GLSLParser::UnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicativeExpression(GLSLParser::MultiplicativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdditiveExpression(GLSLParser::AdditiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftExpression(GLSLParser::ShiftExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelationalExpression(GLSLParser::RelationalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityExpression(GLSLParser::EqualityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndExpression(GLSLParser::AndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExclusiveOrExpression(GLSLParser::ExclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInclusiveOrExpression(GLSLParser::InclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalAndExpression(GLSLParser::LogicalAndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalXorExpression(GLSLParser::LogicalXorExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalOrExpression(GLSLParser::LogicalOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalExpression(GLSLParser::ConditionalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentExpression(GLSLParser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentOperator(GLSLParser::AssignmentOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(GLSLParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantExpression(GLSLParser::ConstantExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(GLSLParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierList(GLSLParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionPrototype(GLSLParser::FunctionPrototypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDeclarator(GLSLParser::FunctionDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionHeaderWithParameters(GLSLParser::FunctionHeaderWithParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionHeader(GLSLParser::FunctionHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterDeclarator(GLSLParser::ParameterDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterDeclaration(GLSLParser::ParameterDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterTypeSpecifier(GLSLParser::ParameterTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitDeclaratorList(GLSLParser::InitDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleDeclaration(GLSLParser::SingleDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullySpecifiedType(GLSLParser::FullySpecifiedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInvariantQualifier(GLSLParser::InvariantQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterpolationQualifier(GLSLParser::InterpolationQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLayoutQualifier(GLSLParser::LayoutQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLayoutQualifierIdList(GLSLParser::LayoutQualifierIdListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLayoutQualifierId(GLSLParser::LayoutQualifierIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreciseQualifier(GLSLParser::PreciseQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeQualifier(GLSLParser::TypeQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleTypeQualifier(GLSLParser::SingleTypeQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStorageQualifier(GLSLParser::StorageQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeNameList(GLSLParser::TypeNameListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeSpecifier(GLSLParser::TypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArraySpecifier(GLSLParser::ArraySpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeSpecifierNonarray(GLSLParser::TypeSpecifierNonarrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrecisionQualifier(GLSLParser::PrecisionQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructSpecifier(GLSLParser::StructSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructDeclarationList(GLSLParser::StructDeclarationListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructDeclaration(GLSLParser::StructDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructDeclaratorList(GLSLParser::StructDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructDeclarator(GLSLParser::StructDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializer(GLSLParser::InitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializerList(GLSLParser::InitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationStatement(GLSLParser::DeclarationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(GLSLParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleStatement(GLSLParser::SimpleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompundStatement(GLSLParser::CompundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementNoNewScope(GLSLParser::StatementNoNewScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundStatementNoNewScope(GLSLParser::CompoundStatementNoNewScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementList(GLSLParser::StatementListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionStatement(GLSLParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectionStatement(GLSLParser::SelectionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectionRestStatement(GLSLParser::SelectionRestStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(GLSLParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchStatement(GLSLParser::SwitchStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchStatementList(GLSLParser::SwitchStatementListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseLabel(GLSLParser::CaseLabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterationStatement(GLSLParser::IterationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForInitStatement(GLSLParser::ForInitStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionopt(GLSLParser::ConditionoptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForRestStatement(GLSLParser::ForRestStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJumpStatement(GLSLParser::JumpStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTranslationUnit(GLSLParser::TranslationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExternalDeclaration(GLSLParser::ExternalDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDefinition(GLSLParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }


};

