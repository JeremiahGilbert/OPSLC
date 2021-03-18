
// Generated from GLSLParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  GLSLParser : public antlr4::Parser {
public:
  enum {
    CONST_ = 1, BOOL = 2, FLOAT = 3, INT = 4, UINT = 5, DOUBLE = 6, BVEC2 = 7, 
    BVEC3 = 8, BVEC4 = 9, IVEC2 = 10, IVEC3 = 11, IVEC4 = 12, UVEC2 = 13, 
    UVEC3 = 14, UVEC4 = 15, VEC2 = 16, VEC3 = 17, VEC4 = 18, MAT2 = 19, 
    MAT3 = 20, MAT4 = 21, MAT2X2 = 22, MAT2X3 = 23, MAT2X4 = 24, MAT3X2 = 25, 
    MAT3X3 = 26, MAT3X4 = 27, MAT4X2 = 28, MAT4X3 = 29, MAT4X4 = 30, DVEC2 = 31, 
    DVEC3 = 32, DVEC4 = 33, DMAT2 = 34, DMAT3 = 35, DMAT4 = 36, DMAT2X2 = 37, 
    DMAT2X3 = 38, DMAT2X4 = 39, DMAT3X2 = 40, DMAT3X3 = 41, DMAT3X4 = 42, 
    DMAT4X2 = 43, DMAT4X3 = 44, DMAT4X4 = 45, CENTROID = 46, IN_ = 47, OUT_ = 48, 
    INOUT = 49, UNIFORM = 50, PATCH = 51, SAMPLE = 52, BUFFER = 53, SHARED = 54, 
    COHERENT = 55, VOLATILE = 56, RESTRICT = 57, READONLY = 58, WRITEONLY = 59, 
    NOPERSPECTIVE = 60, FLAT = 61, SMOOTH = 62, LAYOUT = 63, ATOMIC_UINT = 64, 
    SAMPLER2D = 65, SAMPLER3D = 66, SAMPLERCUBE = 67, SAMPLER2DSHADOW = 68, 
    SAMPLERCUBESHADOW = 69, SAMPLER2DARRAY = 70, SAMPLER2DARRAYSHADOW = 71, 
    ISAMPLER2D = 72, ISAMPLER3D = 73, ISAMPLERCUBE = 74, ISAMPLER2DARRAY = 75, 
    USAMPLER2D = 76, USAMPLER3D = 77, USAMPLERCUBE = 78, USAMPLER2DARRAY = 79, 
    SAMPLER1D = 80, SAMPLER1DSHADOW = 81, SAMPLER1DARRAY = 82, SAMPLER1DARRAYSHADOW = 83, 
    ISAMPLER1D = 84, ISAMPLER1DARRAY = 85, USAMPLER1D = 86, USAMPLER1DARRAY = 87, 
    SAMPLER2DRECT = 88, SAMPLER2DRECTSHADOW = 89, ISAMPLER2DRECT = 90, USAMPLER2DRECT = 91, 
    SAMPLERBUFFER = 92, ISAMPLERBUFFER = 93, USAMPLERBUFFER = 94, SAMPLERCUBEARRAY = 95, 
    SAMPLERCUBEARRAYSHADOW = 96, ISAMPLERCUBEARRAY = 97, USAMPLERCUBEARRAY = 98, 
    SAMPLER2DMS = 99, ISAMPLER2DMS = 100, USAMPLER2DMS = 101, SAMPLER2DMSARRAY = 102, 
    ISAMPLER2DMSARRAY = 103, USAMPLER2DMSARRAY = 104, IMAGE2D = 105, IIMAGE2D = 106, 
    UIMAGE2D = 107, IMAGE3D = 108, IIMAGE3D = 109, UIMAGE3D = 110, IMAGECUBE = 111, 
    IIMAGECUBE = 112, UIMAGECUBE = 113, IMAGEBUFFER = 114, IIMAGEBUFFER = 115, 
    UIMAGEBUFFER = 116, IMAGE2DARRAY = 117, IIMAGE2DARRAY = 118, UIMAGE2DARRAY = 119, 
    IMAGECUBEARRAY = 120, IIMAGECUBEARRAY = 121, UIMAGECUBEARRAY = 122, 
    IMAGE1D = 123, IIMAGE1D = 124, UIMAGE1D = 125, IMAGE1DARRAY = 126, IIMAGE1DARRAY = 127, 
    UIMAGE1DARRAY = 128, IMAGE2DRECT = 129, IIMAGE2DRECT = 130, UIMAGE2DRECT = 131, 
    IMAGE2DMS = 132, IIMAGE2DMS = 133, UIMAGE2DMS = 134, IMAGE2DMSARRAY = 135, 
    IIMAGE2DMSARRAY = 136, UIMAGE2DMSARRAY = 137, STRUCT = 138, VOID_ = 139, 
    WHILE = 140, BREAK = 141, CONTINUE = 142, DO = 143, ELSE = 144, FOR = 145, 
    IF = 146, DISCARD = 147, RETURN = 148, SWITCH = 149, CASE = 150, DEFAULT = 151, 
    SUBROUTINE = 152, IDENTIFIER = 153, TYPE_NAME = 154, FLOATCONSTANT = 155, 
    INTCONSTANT = 156, UINTCONSTANT = 157, BOOLCONSTANT = 158, DOUBLECONSTANT = 159, 
    FIELD_SELECTION = 160, LEFT_OP = 161, RIGHT_OP = 162, INC_OP = 163, 
    DEC_OP = 164, LE_OP = 165, GE_OP = 166, EQ_OP = 167, NE_OP = 168, AND_OP = 169, 
    OR_OP = 170, XOR_OP = 171, MUL_ASSIGN = 172, DIV_ASSIGN = 173, ADD_ASSIGN = 174, 
    MOD_ASSIGN = 175, LEFT_ASSIGN = 176, RIGHT_ASSIGN = 177, AND_ASSIGN = 178, 
    XOR_ASSIGN = 179, OR_ASSIGN = 180, SUB_ASSIGN = 181, LEFT_PAREN = 182, 
    RIGHT_PAREN = 183, LEFT_BRACKET = 184, RIGHT_BRACKET = 185, LEFT_BRACE = 186, 
    RIGHT_BRACE = 187, DOT = 188, COMMA = 189, COLON = 190, EQUAL = 191, 
    SEMICOLON = 192, BANG = 193, DASH = 194, TILDE = 195, PLUS = 196, STAR = 197, 
    SLASH = 198, PERCENT = 199, LEFT_ANGLE = 200, RIGHT_ANGLE = 201, VERTICAL_BAR = 202, 
    CARET = 203, AMPERSAND = 204, QUESTION = 205, INVARIANT = 206, PRECISE = 207, 
    HIGH_PRECISION = 208, MEDIUM_PRECISION = 209, LOW_PRECISION = 210, PRECISION = 211, 
    WS = 212
  };

  enum {
    RuleVariableIdentifier = 0, RulePrimaryExpression = 1, RulePostfixExpression = 2, 
    RuleIntegerExpression = 3, RuleFunctionCallHeaderWithParameters_ = 4, 
    RuleUnaryExpression = 5, RuleUnaryOperator = 6, RuleMultiplicativeExpression = 7, 
    RuleAdditiveExpression = 8, RuleShiftExpression = 9, RuleRelationalExpression = 10, 
    RuleEqualityExpression = 11, RuleAndExpression = 12, RuleExclusiveOrExpression = 13, 
    RuleInclusiveOrExpression = 14, RuleLogicalAndExpression = 15, RuleLogicalXorExpression = 16, 
    RuleLogicalOrExpression = 17, RuleConditionalExpression = 18, RuleAssignmentExpression = 19, 
    RuleAssignmentOperator = 20, RuleExpression = 21, RuleConstantExpression = 22, 
    RuleDeclaration = 23, RuleIdentifierList = 24, RuleFunctionPrototype = 25, 
    RuleFunctionDeclarator = 26, RuleFunctionHeaderWithParameters = 27, 
    RuleFunctionHeader = 28, RuleParameterDeclarator = 29, RuleParameterDeclaration = 30, 
    RuleParameterTypeSpecifier = 31, RuleInitDeclaratorList = 32, RuleSingleDeclaration = 33, 
    RuleFullySpecifiedType = 34, RuleInvariantQualifier = 35, RuleInterpolationQualifier = 36, 
    RuleLayoutQualifier = 37, RuleLayoutQualifierIdList = 38, RuleLayoutQualifierId = 39, 
    RulePreciseQualifier = 40, RuleTypeQualifier = 41, RuleSingleTypeQualifier = 42, 
    RuleStorageQualifier = 43, RuleTypeNameList = 44, RuleTypeSpecifier = 45, 
    RuleArraySpecifier = 46, RuleTypeSpecifierNonarray = 47, RulePrecisionQualifier = 48, 
    RuleStructSpecifier = 49, RuleStructDeclarationList = 50, RuleStructDeclaration = 51, 
    RuleStructDeclaratorList = 52, RuleStructDeclarator = 53, RuleInitializer = 54, 
    RuleInitializerList = 55, RuleDeclarationStatement = 56, RuleStatement = 57, 
    RuleSimpleStatement = 58, RuleCompundStatement = 59, RuleStatementNoNewScope = 60, 
    RuleCompoundStatementNoNewScope = 61, RuleStatementList = 62, RuleExpressionStatement = 63, 
    RuleSelectionStatement = 64, RuleSelectionRestStatement = 65, RuleCondition = 66, 
    RuleSwitchStatement = 67, RuleSwitchStatementList = 68, RuleCaseLabel = 69, 
    RuleIterationStatement = 70, RuleForInitStatement = 71, RuleConditionopt = 72, 
    RuleForRestStatement = 73, RuleJumpStatement = 74, RuleTranslationUnit = 75, 
    RuleExternalDeclaration = 76, RuleFunctionDefinition = 77
  };

  GLSLParser(antlr4::TokenStream *input);
  ~GLSLParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class VariableIdentifierContext;
  class PrimaryExpressionContext;
  class PostfixExpressionContext;
  class IntegerExpressionContext;
  class FunctionCallHeaderWithParameters_Context;
  class UnaryExpressionContext;
  class UnaryOperatorContext;
  class MultiplicativeExpressionContext;
  class AdditiveExpressionContext;
  class ShiftExpressionContext;
  class RelationalExpressionContext;
  class EqualityExpressionContext;
  class AndExpressionContext;
  class ExclusiveOrExpressionContext;
  class InclusiveOrExpressionContext;
  class LogicalAndExpressionContext;
  class LogicalXorExpressionContext;
  class LogicalOrExpressionContext;
  class ConditionalExpressionContext;
  class AssignmentExpressionContext;
  class AssignmentOperatorContext;
  class ExpressionContext;
  class ConstantExpressionContext;
  class DeclarationContext;
  class IdentifierListContext;
  class FunctionPrototypeContext;
  class FunctionDeclaratorContext;
  class FunctionHeaderWithParametersContext;
  class FunctionHeaderContext;
  class ParameterDeclaratorContext;
  class ParameterDeclarationContext;
  class ParameterTypeSpecifierContext;
  class InitDeclaratorListContext;
  class SingleDeclarationContext;
  class FullySpecifiedTypeContext;
  class InvariantQualifierContext;
  class InterpolationQualifierContext;
  class LayoutQualifierContext;
  class LayoutQualifierIdListContext;
  class LayoutQualifierIdContext;
  class PreciseQualifierContext;
  class TypeQualifierContext;
  class SingleTypeQualifierContext;
  class StorageQualifierContext;
  class TypeNameListContext;
  class TypeSpecifierContext;
  class ArraySpecifierContext;
  class TypeSpecifierNonarrayContext;
  class PrecisionQualifierContext;
  class StructSpecifierContext;
  class StructDeclarationListContext;
  class StructDeclarationContext;
  class StructDeclaratorListContext;
  class StructDeclaratorContext;
  class InitializerContext;
  class InitializerListContext;
  class DeclarationStatementContext;
  class StatementContext;
  class SimpleStatementContext;
  class CompundStatementContext;
  class StatementNoNewScopeContext;
  class CompoundStatementNoNewScopeContext;
  class StatementListContext;
  class ExpressionStatementContext;
  class SelectionStatementContext;
  class SelectionRestStatementContext;
  class ConditionContext;
  class SwitchStatementContext;
  class SwitchStatementListContext;
  class CaseLabelContext;
  class IterationStatementContext;
  class ForInitStatementContext;
  class ConditionoptContext;
  class ForRestStatementContext;
  class JumpStatementContext;
  class TranslationUnitContext;
  class ExternalDeclarationContext;
  class FunctionDefinitionContext; 

  class  VariableIdentifierContext : public antlr4::ParserRuleContext {
  public:
    VariableIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableIdentifierContext* variableIdentifier();

  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableIdentifierContext *variableIdentifier();
    antlr4::tree::TerminalNode *INTCONSTANT();
    antlr4::tree::TerminalNode *UINTCONSTANT();
    antlr4::tree::TerminalNode *FLOATCONSTANT();
    antlr4::tree::TerminalNode *BOOLCONSTANT();
    antlr4::tree::TerminalNode *DOUBLECONSTANT();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHT_PAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class  PostfixExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    TypeSpecifierContext *typeSpecifier();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    AssignmentExpressionContext *assignmentExpression();
    FunctionCallHeaderWithParameters_Context *functionCallHeaderWithParameters_();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *VOID_();
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    IntegerExpressionContext *integerExpression();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *INC_OP();
    antlr4::tree::TerminalNode *DEC_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostfixExpressionContext* postfixExpression();
  PostfixExpressionContext* postfixExpression(int precedence);
  class  IntegerExpressionContext : public antlr4::ParserRuleContext {
  public:
    IntegerExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerExpressionContext* integerExpression();

  class  FunctionCallHeaderWithParameters_Context : public antlr4::ParserRuleContext {
  public:
    FunctionCallHeaderWithParameters_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    AssignmentExpressionContext *assignmentExpression();
    FunctionCallHeaderWithParameters_Context *functionCallHeaderWithParameters_();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallHeaderWithParameters_Context* functionCallHeaderWithParameters_();

  class  UnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *INC_OP();
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *DEC_OP();
    UnaryOperatorContext *unaryOperator();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpressionContext* unaryExpression();

  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *DASH();
    antlr4::tree::TerminalNode *BANG();
    antlr4::tree::TerminalNode *TILDE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOperatorContext* unaryOperator();

  class  MultiplicativeExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    MultiplicativeExpressionContext *multiplicativeExpression();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PERCENT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicativeExpressionContext* multiplicativeExpression();
  MultiplicativeExpressionContext* multiplicativeExpression(int precedence);
  class  AdditiveExpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditiveExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeExpressionContext *multiplicativeExpression();
    AdditiveExpressionContext *additiveExpression();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *DASH();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditiveExpressionContext* additiveExpression();
  AdditiveExpressionContext* additiveExpression(int precedence);
  class  ShiftExpressionContext : public antlr4::ParserRuleContext {
  public:
    ShiftExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdditiveExpressionContext *additiveExpression();
    ShiftExpressionContext *shiftExpression();
    antlr4::tree::TerminalNode *LEFT_OP();
    antlr4::tree::TerminalNode *RIGHT_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftExpressionContext* shiftExpression();
  ShiftExpressionContext* shiftExpression(int precedence);
  class  RelationalExpressionContext : public antlr4::ParserRuleContext {
  public:
    RelationalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShiftExpressionContext *shiftExpression();
    RelationalExpressionContext *relationalExpression();
    antlr4::tree::TerminalNode *LEFT_ANGLE();
    antlr4::tree::TerminalNode *RIGHT_ANGLE();
    antlr4::tree::TerminalNode *LE_OP();
    antlr4::tree::TerminalNode *GE_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalExpressionContext* relationalExpression();
  RelationalExpressionContext* relationalExpression(int precedence);
  class  EqualityExpressionContext : public antlr4::ParserRuleContext {
  public:
    EqualityExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationalExpressionContext *relationalExpression();
    EqualityExpressionContext *equalityExpression();
    antlr4::tree::TerminalNode *EQ_OP();
    antlr4::tree::TerminalNode *NE_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityExpressionContext* equalityExpression();
  EqualityExpressionContext* equalityExpression(int precedence);
  class  AndExpressionContext : public antlr4::ParserRuleContext {
  public:
    AndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EqualityExpressionContext *equalityExpression();
    AndExpressionContext *andExpression();
    antlr4::tree::TerminalNode *AMPERSAND();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndExpressionContext* andExpression();
  AndExpressionContext* andExpression(int precedence);
  class  ExclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndExpressionContext *andExpression();
    ExclusiveOrExpressionContext *exclusiveOrExpression();
    antlr4::tree::TerminalNode *CARET();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExclusiveOrExpressionContext* exclusiveOrExpression();
  ExclusiveOrExpressionContext* exclusiveOrExpression(int precedence);
  class  InclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    InclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExclusiveOrExpressionContext *exclusiveOrExpression();
    InclusiveOrExpressionContext *inclusiveOrExpression();
    antlr4::tree::TerminalNode *VERTICAL_BAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InclusiveOrExpressionContext* inclusiveOrExpression();
  InclusiveOrExpressionContext* inclusiveOrExpression(int precedence);
  class  LogicalAndExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalAndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InclusiveOrExpressionContext *inclusiveOrExpression();
    LogicalAndExpressionContext *logicalAndExpression();
    antlr4::tree::TerminalNode *AND_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalAndExpressionContext* logicalAndExpression();
  LogicalAndExpressionContext* logicalAndExpression(int precedence);
  class  LogicalXorExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalXorExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalAndExpressionContext *logicalAndExpression();
    LogicalXorExpressionContext *logicalXorExpression();
    antlr4::tree::TerminalNode *XOR_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalXorExpressionContext* logicalXorExpression();
  LogicalXorExpressionContext* logicalXorExpression(int precedence);
  class  LogicalOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalXorExpressionContext *logicalXorExpression();
    LogicalOrExpressionContext *logicalOrExpression();
    antlr4::tree::TerminalNode *OR_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOrExpressionContext* logicalOrExpression();
  LogicalOrExpressionContext* logicalOrExpression(int precedence);
  class  ConditionalExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    antlr4::tree::TerminalNode *QUESTION();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();
    AssignmentExpressionContext *assignmentExpression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalExpressionContext* conditionalExpression();

  class  AssignmentExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();
    UnaryExpressionContext *unaryExpression();
    AssignmentOperatorContext *assignmentOperator();
    AssignmentExpressionContext *assignmentExpression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentExpressionContext* assignmentExpression();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *MUL_ASSIGN();
    antlr4::tree::TerminalNode *DIV_ASSIGN();
    antlr4::tree::TerminalNode *MOD_ASSIGN();
    antlr4::tree::TerminalNode *ADD_ASSIGN();
    antlr4::tree::TerminalNode *SUB_ASSIGN();
    antlr4::tree::TerminalNode *LEFT_ASSIGN();
    antlr4::tree::TerminalNode *RIGHT_ASSIGN();
    antlr4::tree::TerminalNode *AND_ASSIGN();
    antlr4::tree::TerminalNode *XOR_ASSIGN();
    antlr4::tree::TerminalNode *OR_ASSIGN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COMMA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  ConstantExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstantExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantExpressionContext* constantExpression();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionPrototypeContext *functionPrototype();
    antlr4::tree::TerminalNode *SEMICOLON();
    InitDeclaratorListContext *initDeclaratorList();
    antlr4::tree::TerminalNode *PRECISION();
    PrecisionQualifierContext *precisionQualifier();
    TypeSpecifierContext *typeSpecifier();
    TypeQualifierContext *typeQualifier();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *LEFT_BRACE();
    StructDeclarationListContext *structDeclarationList();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    ArraySpecifierContext *arraySpecifier();
    IdentifierListContext *identifierList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *IDENTIFIER();
    IdentifierListContext *identifierList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();
  IdentifierListContext* identifierList(int precedence);
  class  FunctionPrototypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionPrototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDeclaratorContext *functionDeclarator();
    antlr4::tree::TerminalNode *RIGHT_PAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionPrototypeContext* functionPrototype();

  class  FunctionDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionHeaderContext *functionHeader();
    FunctionHeaderWithParametersContext *functionHeaderWithParameters();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclaratorContext* functionDeclarator();

  class  FunctionHeaderWithParametersContext : public antlr4::ParserRuleContext {
  public:
    FunctionHeaderWithParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionHeaderContext *functionHeader();
    ParameterDeclarationContext *parameterDeclaration();
    FunctionHeaderWithParametersContext *functionHeaderWithParameters();
    antlr4::tree::TerminalNode *COMMA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionHeaderWithParametersContext* functionHeaderWithParameters();
  FunctionHeaderWithParametersContext* functionHeaderWithParameters(int precedence);
  class  FunctionHeaderContext : public antlr4::ParserRuleContext {
  public:
    FunctionHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullySpecifiedTypeContext *fullySpecifiedType();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LEFT_PAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionHeaderContext* functionHeader();

  class  ParameterDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierContext *typeSpecifier();
    antlr4::tree::TerminalNode *IDENTIFIER();
    ArraySpecifierContext *arraySpecifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclaratorContext* parameterDeclarator();

  class  ParameterDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeQualifierContext *typeQualifier();
    ParameterDeclaratorContext *parameterDeclarator();
    ParameterTypeSpecifierContext *parameterTypeSpecifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationContext* parameterDeclaration();

  class  ParameterTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ParameterTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierContext *typeSpecifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterTypeSpecifierContext* parameterTypeSpecifier();

  class  InitDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    InitDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleDeclarationContext *singleDeclaration();
    InitDeclaratorListContext *initDeclaratorList();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *IDENTIFIER();
    ArraySpecifierContext *arraySpecifier();
    antlr4::tree::TerminalNode *EQUAL();
    InitializerContext *initializer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitDeclaratorListContext* initDeclaratorList();
  InitDeclaratorListContext* initDeclaratorList(int precedence);
  class  SingleDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SingleDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullySpecifiedTypeContext *fullySpecifiedType();
    antlr4::tree::TerminalNode *IDENTIFIER();
    ArraySpecifierContext *arraySpecifier();
    antlr4::tree::TerminalNode *EQUAL();
    InitializerContext *initializer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleDeclarationContext* singleDeclaration();

  class  FullySpecifiedTypeContext : public antlr4::ParserRuleContext {
  public:
    FullySpecifiedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierContext *typeSpecifier();
    TypeQualifierContext *typeQualifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FullySpecifiedTypeContext* fullySpecifiedType();

  class  InvariantQualifierContext : public antlr4::ParserRuleContext {
  public:
    InvariantQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INVARIANT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InvariantQualifierContext* invariantQualifier();

  class  InterpolationQualifierContext : public antlr4::ParserRuleContext {
  public:
    InterpolationQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SMOOTH();
    antlr4::tree::TerminalNode *FLAT();
    antlr4::tree::TerminalNode *NOPERSPECTIVE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterpolationQualifierContext* interpolationQualifier();

  class  LayoutQualifierContext : public antlr4::ParserRuleContext {
  public:
    LayoutQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LAYOUT();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    LayoutQualifierIdListContext *layoutQualifierIdList();
    antlr4::tree::TerminalNode *RIGHT_PAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LayoutQualifierContext* layoutQualifier();

  class  LayoutQualifierIdListContext : public antlr4::ParserRuleContext {
  public:
    LayoutQualifierIdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LayoutQualifierIdContext *layoutQualifierId();
    LayoutQualifierIdListContext *layoutQualifierIdList();
    antlr4::tree::TerminalNode *COMMA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LayoutQualifierIdListContext* layoutQualifierIdList();
  LayoutQualifierIdListContext* layoutQualifierIdList(int precedence);
  class  LayoutQualifierIdContext : public antlr4::ParserRuleContext {
  public:
    LayoutQualifierIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *EQUAL();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *SHARED();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LayoutQualifierIdContext* layoutQualifierId();

  class  PreciseQualifierContext : public antlr4::ParserRuleContext {
  public:
    PreciseQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRECISE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreciseQualifierContext* preciseQualifier();

  class  TypeQualifierContext : public antlr4::ParserRuleContext {
  public:
    TypeQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleTypeQualifierContext *singleTypeQualifier();
    TypeQualifierContext *typeQualifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeQualifierContext* typeQualifier();
  TypeQualifierContext* typeQualifier(int precedence);
  class  SingleTypeQualifierContext : public antlr4::ParserRuleContext {
  public:
    SingleTypeQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StorageQualifierContext *storageQualifier();
    LayoutQualifierContext *layoutQualifier();
    PrecisionQualifierContext *precisionQualifier();
    InterpolationQualifierContext *interpolationQualifier();
    InvariantQualifierContext *invariantQualifier();
    PreciseQualifierContext *preciseQualifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleTypeQualifierContext* singleTypeQualifier();

  class  StorageQualifierContext : public antlr4::ParserRuleContext {
  public:
    StorageQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST_();
    antlr4::tree::TerminalNode *IN_();
    antlr4::tree::TerminalNode *OUT_();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *CENTROID();
    antlr4::tree::TerminalNode *PATCH();
    antlr4::tree::TerminalNode *SAMPLE();
    antlr4::tree::TerminalNode *UNIFORM();
    antlr4::tree::TerminalNode *BUFFER();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *COHERENT();
    antlr4::tree::TerminalNode *VOLATILE();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *READONLY();
    antlr4::tree::TerminalNode *WRITEONLY();
    antlr4::tree::TerminalNode *SUBROUTINE();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    TypeNameListContext *typeNameList();
    antlr4::tree::TerminalNode *RIGHT_PAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StorageQualifierContext* storageQualifier();

  class  TypeNameListContext : public antlr4::ParserRuleContext {
  public:
    TypeNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    TypeNameListContext *typeNameList();
    antlr4::tree::TerminalNode *COMMA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameListContext* typeNameList();
  TypeNameListContext* typeNameList(int precedence);
  class  TypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierNonarrayContext *typeSpecifierNonarray();
    ArraySpecifierContext *arraySpecifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifierContext* typeSpecifier();

  class  ArraySpecifierContext : public antlr4::ParserRuleContext {
  public:
    ArraySpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    ConditionalExpressionContext *conditionalExpression();
    ArraySpecifierContext *arraySpecifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArraySpecifierContext* arraySpecifier();
  ArraySpecifierContext* arraySpecifier(int precedence);
  class  TypeSpecifierNonarrayContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierNonarrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VOID_();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *UINT();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *VEC2();
    antlr4::tree::TerminalNode *VEC3();
    antlr4::tree::TerminalNode *VEC4();
    antlr4::tree::TerminalNode *DVEC2();
    antlr4::tree::TerminalNode *DVEC3();
    antlr4::tree::TerminalNode *DVEC4();
    antlr4::tree::TerminalNode *BVEC2();
    antlr4::tree::TerminalNode *BVEC3();
    antlr4::tree::TerminalNode *BVEC4();
    antlr4::tree::TerminalNode *IVEC2();
    antlr4::tree::TerminalNode *IVEC3();
    antlr4::tree::TerminalNode *IVEC4();
    antlr4::tree::TerminalNode *UVEC2();
    antlr4::tree::TerminalNode *UVEC3();
    antlr4::tree::TerminalNode *UVEC4();
    antlr4::tree::TerminalNode *MAT2();
    antlr4::tree::TerminalNode *MAT3();
    antlr4::tree::TerminalNode *MAT4();
    antlr4::tree::TerminalNode *MAT2X2();
    antlr4::tree::TerminalNode *MAT2X3();
    antlr4::tree::TerminalNode *MAT2X4();
    antlr4::tree::TerminalNode *MAT3X2();
    antlr4::tree::TerminalNode *MAT3X3();
    antlr4::tree::TerminalNode *MAT3X4();
    antlr4::tree::TerminalNode *MAT4X2();
    antlr4::tree::TerminalNode *MAT4X3();
    antlr4::tree::TerminalNode *MAT4X4();
    antlr4::tree::TerminalNode *DMAT2();
    antlr4::tree::TerminalNode *DMAT3();
    antlr4::tree::TerminalNode *DMAT4();
    antlr4::tree::TerminalNode *DMAT2X2();
    antlr4::tree::TerminalNode *DMAT2X3();
    antlr4::tree::TerminalNode *DMAT2X4();
    antlr4::tree::TerminalNode *DMAT3X2();
    antlr4::tree::TerminalNode *DMAT3X3();
    antlr4::tree::TerminalNode *DMAT3X4();
    antlr4::tree::TerminalNode *DMAT4X2();
    antlr4::tree::TerminalNode *DMAT4X3();
    antlr4::tree::TerminalNode *DMAT4X4();
    antlr4::tree::TerminalNode *ATOMIC_UINT();
    antlr4::tree::TerminalNode *SAMPLER2D();
    antlr4::tree::TerminalNode *SAMPLER3D();
    antlr4::tree::TerminalNode *SAMPLERCUBE();
    antlr4::tree::TerminalNode *SAMPLER2DSHADOW();
    antlr4::tree::TerminalNode *SAMPLERCUBESHADOW();
    antlr4::tree::TerminalNode *SAMPLER2DARRAY();
    antlr4::tree::TerminalNode *SAMPLER2DARRAYSHADOW();
    antlr4::tree::TerminalNode *SAMPLERCUBEARRAY();
    antlr4::tree::TerminalNode *SAMPLERCUBEARRAYSHADOW();
    antlr4::tree::TerminalNode *ISAMPLER2D();
    antlr4::tree::TerminalNode *ISAMPLER3D();
    antlr4::tree::TerminalNode *ISAMPLERCUBE();
    antlr4::tree::TerminalNode *ISAMPLER2DARRAY();
    antlr4::tree::TerminalNode *ISAMPLERCUBEARRAY();
    antlr4::tree::TerminalNode *USAMPLER2D();
    antlr4::tree::TerminalNode *USAMPLER3D();
    antlr4::tree::TerminalNode *USAMPLERCUBE();
    antlr4::tree::TerminalNode *USAMPLER2DARRAY();
    antlr4::tree::TerminalNode *USAMPLERCUBEARRAY();
    antlr4::tree::TerminalNode *SAMPLER1D();
    antlr4::tree::TerminalNode *SAMPLER1DSHADOW();
    antlr4::tree::TerminalNode *SAMPLER1DARRAY();
    antlr4::tree::TerminalNode *SAMPLER1DARRAYSHADOW();
    antlr4::tree::TerminalNode *ISAMPLER1D();
    antlr4::tree::TerminalNode *ISAMPLER1DARRAY();
    antlr4::tree::TerminalNode *USAMPLER1D();
    antlr4::tree::TerminalNode *USAMPLER1DARRAY();
    antlr4::tree::TerminalNode *SAMPLER2DRECT();
    antlr4::tree::TerminalNode *SAMPLER2DRECTSHADOW();
    antlr4::tree::TerminalNode *ISAMPLER2DRECT();
    antlr4::tree::TerminalNode *USAMPLER2DRECT();
    antlr4::tree::TerminalNode *SAMPLERBUFFER();
    antlr4::tree::TerminalNode *ISAMPLERBUFFER();
    antlr4::tree::TerminalNode *USAMPLERBUFFER();
    antlr4::tree::TerminalNode *SAMPLER2DMS();
    antlr4::tree::TerminalNode *ISAMPLER2DMS();
    antlr4::tree::TerminalNode *USAMPLER2DMS();
    antlr4::tree::TerminalNode *SAMPLER2DMSARRAY();
    antlr4::tree::TerminalNode *ISAMPLER2DMSARRAY();
    antlr4::tree::TerminalNode *USAMPLER2DMSARRAY();
    antlr4::tree::TerminalNode *IMAGE2D();
    antlr4::tree::TerminalNode *IIMAGE2D();
    antlr4::tree::TerminalNode *UIMAGE2D();
    antlr4::tree::TerminalNode *IMAGE3D();
    antlr4::tree::TerminalNode *IIMAGE3D();
    antlr4::tree::TerminalNode *UIMAGE3D();
    antlr4::tree::TerminalNode *IMAGECUBE();
    antlr4::tree::TerminalNode *IIMAGECUBE();
    antlr4::tree::TerminalNode *UIMAGECUBE();
    antlr4::tree::TerminalNode *IMAGEBUFFER();
    antlr4::tree::TerminalNode *IIMAGEBUFFER();
    antlr4::tree::TerminalNode *UIMAGEBUFFER();
    antlr4::tree::TerminalNode *IMAGE1D();
    antlr4::tree::TerminalNode *IIMAGE1D();
    antlr4::tree::TerminalNode *UIMAGE1D();
    antlr4::tree::TerminalNode *IMAGE1DARRAY();
    antlr4::tree::TerminalNode *IIMAGE1DARRAY();
    antlr4::tree::TerminalNode *UIMAGE1DARRAY();
    antlr4::tree::TerminalNode *IMAGE2DRECT();
    antlr4::tree::TerminalNode *IIMAGE2DRECT();
    antlr4::tree::TerminalNode *UIMAGE2DRECT();
    antlr4::tree::TerminalNode *IMAGE2DARRAY();
    antlr4::tree::TerminalNode *IIMAGE2DARRAY();
    antlr4::tree::TerminalNode *UIMAGE2DARRAY();
    antlr4::tree::TerminalNode *IMAGECUBEARRAY();
    antlr4::tree::TerminalNode *IIMAGECUBEARRAY();
    antlr4::tree::TerminalNode *UIMAGECUBEARRAY();
    antlr4::tree::TerminalNode *IMAGE2DMS();
    antlr4::tree::TerminalNode *IIMAGE2DMS();
    antlr4::tree::TerminalNode *UIMAGE2DMS();
    antlr4::tree::TerminalNode *IMAGE2DMSARRAY();
    antlr4::tree::TerminalNode *IIMAGE2DMSARRAY();
    antlr4::tree::TerminalNode *UIMAGE2DMSARRAY();
    StructSpecifierContext *structSpecifier();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifierNonarrayContext* typeSpecifierNonarray();

  class  PrecisionQualifierContext : public antlr4::ParserRuleContext {
  public:
    PrecisionQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HIGH_PRECISION();
    antlr4::tree::TerminalNode *MEDIUM_PRECISION();
    antlr4::tree::TerminalNode *LOW_PRECISION();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecisionQualifierContext* precisionQualifier();

  class  StructSpecifierContext : public antlr4::ParserRuleContext {
  public:
    StructSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    StructDeclarationListContext *structDeclarationList();
    antlr4::tree::TerminalNode *RIGHT_BRACE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructSpecifierContext* structSpecifier();

  class  StructDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    StructDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructDeclarationContext *structDeclaration();
    StructDeclarationListContext *structDeclarationList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructDeclarationListContext* structDeclarationList();
  StructDeclarationListContext* structDeclarationList(int precedence);
  class  StructDeclarationContext : public antlr4::ParserRuleContext {
  public:
    StructDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierContext *typeSpecifier();
    StructDeclaratorListContext *structDeclaratorList();
    antlr4::tree::TerminalNode *SEMICOLON();
    TypeQualifierContext *typeQualifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructDeclarationContext* structDeclaration();

  class  StructDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    StructDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructDeclaratorContext *structDeclarator();
    StructDeclaratorListContext *structDeclaratorList();
    antlr4::tree::TerminalNode *COMMA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructDeclaratorListContext* structDeclaratorList();
  StructDeclaratorListContext* structDeclaratorList(int precedence);
  class  StructDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    StructDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    ArraySpecifierContext *arraySpecifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructDeclaratorContext* structDeclarator();

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    InitializerListContext *initializerList();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    antlr4::tree::TerminalNode *COMMA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerContext* initializer();

  class  InitializerListContext : public antlr4::ParserRuleContext {
  public:
    InitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerContext *initializer();
    InitializerListContext *initializerList();
    antlr4::tree::TerminalNode *COMMA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerListContext* initializerList();
  InitializerListContext* initializerList(int precedence);
  class  DeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationStatementContext* declarationStatement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompundStatementContext *compundStatement();
    SimpleStatementContext *simpleStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  SimpleStatementContext : public antlr4::ParserRuleContext {
  public:
    SimpleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationStatementContext *declarationStatement();
    ExpressionStatementContext *expressionStatement();
    SelectionStatementContext *selectionStatement();
    SwitchStatementContext *switchStatement();
    CaseLabelContext *caseLabel();
    IterationStatementContext *iterationStatement();
    JumpStatementContext *jumpStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleStatementContext* simpleStatement();

  class  CompundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    StatementListContext *statementList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompundStatementContext* compundStatement();

  class  StatementNoNewScopeContext : public antlr4::ParserRuleContext {
  public:
    StatementNoNewScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundStatementNoNewScopeContext *compoundStatementNoNewScope();
    SimpleStatementContext *simpleStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementNoNewScopeContext* statementNoNewScope();

  class  CompoundStatementNoNewScopeContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementNoNewScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    StatementListContext *statementList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementNoNewScopeContext* compoundStatementNoNewScope();

  class  StatementListContext : public antlr4::ParserRuleContext {
  public:
    StatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    StatementListContext *statementList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementListContext* statementList();
  StatementListContext* statementList(int precedence);
  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMICOLON();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  SelectionStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    SelectionRestStatementContext *selectionRestStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectionStatementContext* selectionStatement();

  class  SelectionRestStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectionRestStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectionRestStatementContext* selectionRestStatement();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    FullySpecifiedTypeContext *fullySpecifiedType();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *EQUAL();
    InitializerContext *initializer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  SwitchStatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    SwitchStatementListContext *switchStatementList();
    antlr4::tree::TerminalNode *RIGHT_BRACE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchStatementContext* switchStatement();

  class  SwitchStatementListContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementListContext *statementList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchStatementListContext* switchStatementList();

  class  CaseLabelContext : public antlr4::ParserRuleContext {
  public:
    CaseLabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseLabelContext* caseLabel();

  class  IterationStatementContext : public antlr4::ParserRuleContext {
  public:
    IterationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    StatementNoNewScopeContext *statementNoNewScope();
    antlr4::tree::TerminalNode *DO();
    StatementContext *statement();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *FOR();
    ForInitStatementContext *forInitStatement();
    ForRestStatementContext *forRestStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IterationStatementContext* iterationStatement();

  class  ForInitStatementContext : public antlr4::ParserRuleContext {
  public:
    ForInitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionStatementContext *expressionStatement();
    DeclarationStatementContext *declarationStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForInitStatementContext* forInitStatement();

  class  ConditionoptContext : public antlr4::ParserRuleContext {
  public:
    ConditionoptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionContext *condition();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionoptContext* conditionopt();

  class  ForRestStatementContext : public antlr4::ParserRuleContext {
  public:
    ForRestStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionoptContext *conditionopt();
    antlr4::tree::TerminalNode *SEMICOLON();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForRestStatementContext* forRestStatement();

  class  JumpStatementContext : public antlr4::ParserRuleContext {
  public:
    JumpStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DISCARD();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JumpStatementContext* jumpStatement();

  class  TranslationUnitContext : public antlr4::ParserRuleContext {
  public:
    TranslationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExternalDeclarationContext *externalDeclaration();
    TranslationUnitContext *translationUnit();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TranslationUnitContext* translationUnit();
  TranslationUnitContext* translationUnit(int precedence);
  class  ExternalDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExternalDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDefinitionContext *functionDefinition();
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExternalDeclarationContext* externalDeclaration();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionPrototypeContext *functionPrototype();
    CompoundStatementNoNewScopeContext *compoundStatementNoNewScope();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex);
  bool multiplicativeExpressionSempred(MultiplicativeExpressionContext *_localctx, size_t predicateIndex);
  bool additiveExpressionSempred(AdditiveExpressionContext *_localctx, size_t predicateIndex);
  bool shiftExpressionSempred(ShiftExpressionContext *_localctx, size_t predicateIndex);
  bool relationalExpressionSempred(RelationalExpressionContext *_localctx, size_t predicateIndex);
  bool equalityExpressionSempred(EqualityExpressionContext *_localctx, size_t predicateIndex);
  bool andExpressionSempred(AndExpressionContext *_localctx, size_t predicateIndex);
  bool exclusiveOrExpressionSempred(ExclusiveOrExpressionContext *_localctx, size_t predicateIndex);
  bool inclusiveOrExpressionSempred(InclusiveOrExpressionContext *_localctx, size_t predicateIndex);
  bool logicalAndExpressionSempred(LogicalAndExpressionContext *_localctx, size_t predicateIndex);
  bool logicalXorExpressionSempred(LogicalXorExpressionContext *_localctx, size_t predicateIndex);
  bool logicalOrExpressionSempred(LogicalOrExpressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool identifierListSempred(IdentifierListContext *_localctx, size_t predicateIndex);
  bool functionHeaderWithParametersSempred(FunctionHeaderWithParametersContext *_localctx, size_t predicateIndex);
  bool initDeclaratorListSempred(InitDeclaratorListContext *_localctx, size_t predicateIndex);
  bool layoutQualifierIdListSempred(LayoutQualifierIdListContext *_localctx, size_t predicateIndex);
  bool typeQualifierSempred(TypeQualifierContext *_localctx, size_t predicateIndex);
  bool typeNameListSempred(TypeNameListContext *_localctx, size_t predicateIndex);
  bool arraySpecifierSempred(ArraySpecifierContext *_localctx, size_t predicateIndex);
  bool structDeclarationListSempred(StructDeclarationListContext *_localctx, size_t predicateIndex);
  bool structDeclaratorListSempred(StructDeclaratorListContext *_localctx, size_t predicateIndex);
  bool initializerListSempred(InitializerListContext *_localctx, size_t predicateIndex);
  bool statementListSempred(StatementListContext *_localctx, size_t predicateIndex);
  bool translationUnitSempred(TranslationUnitContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

