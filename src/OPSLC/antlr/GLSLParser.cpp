
// Generated from GLSLParser.g4 by ANTLR 4.8


#include "GLSLParserVisitor.h"

#include "GLSLParser.h"


using namespace antlrcpp;
using namespace antlr4;

GLSLParser::GLSLParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

GLSLParser::~GLSLParser() {
  delete _interpreter;
}

std::string GLSLParser::getGrammarFileName() const {
  return "GLSLParser.g4";
}

const std::vector<std::string>& GLSLParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& GLSLParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- VariableIdentifierContext ------------------------------------------------------------------

GLSLParser::VariableIdentifierContext::VariableIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::VariableIdentifierContext::IDENTIFIER() {
  return getToken(GLSLParser::IDENTIFIER, 0);
}


size_t GLSLParser::VariableIdentifierContext::getRuleIndex() const {
  return GLSLParser::RuleVariableIdentifier;
}


antlrcpp::Any GLSLParser::VariableIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitVariableIdentifier(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::VariableIdentifierContext* GLSLParser::variableIdentifier() {
  VariableIdentifierContext *_localctx = _tracker.createInstance<VariableIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 0, GLSLParser::RuleVariableIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(GLSLParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

GLSLParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::VariableIdentifierContext* GLSLParser::PrimaryExpressionContext::variableIdentifier() {
  return getRuleContext<GLSLParser::VariableIdentifierContext>(0);
}

tree::TerminalNode* GLSLParser::PrimaryExpressionContext::INTCONSTANT() {
  return getToken(GLSLParser::INTCONSTANT, 0);
}

tree::TerminalNode* GLSLParser::PrimaryExpressionContext::UINTCONSTANT() {
  return getToken(GLSLParser::UINTCONSTANT, 0);
}

tree::TerminalNode* GLSLParser::PrimaryExpressionContext::FLOATCONSTANT() {
  return getToken(GLSLParser::FLOATCONSTANT, 0);
}

tree::TerminalNode* GLSLParser::PrimaryExpressionContext::BOOLCONSTANT() {
  return getToken(GLSLParser::BOOLCONSTANT, 0);
}

tree::TerminalNode* GLSLParser::PrimaryExpressionContext::DOUBLECONSTANT() {
  return getToken(GLSLParser::DOUBLECONSTANT, 0);
}

tree::TerminalNode* GLSLParser::PrimaryExpressionContext::LEFT_PAREN() {
  return getToken(GLSLParser::LEFT_PAREN, 0);
}

GLSLParser::ExpressionContext* GLSLParser::PrimaryExpressionContext::expression() {
  return getRuleContext<GLSLParser::ExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::PrimaryExpressionContext::RIGHT_PAREN() {
  return getToken(GLSLParser::RIGHT_PAREN, 0);
}


size_t GLSLParser::PrimaryExpressionContext::getRuleIndex() const {
  return GLSLParser::RulePrimaryExpression;
}


antlrcpp::Any GLSLParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::PrimaryExpressionContext* GLSLParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, GLSLParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(168);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GLSLParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(158);
        variableIdentifier();
        break;
      }

      case GLSLParser::INTCONSTANT: {
        enterOuterAlt(_localctx, 2);
        setState(159);
        match(GLSLParser::INTCONSTANT);
        break;
      }

      case GLSLParser::UINTCONSTANT: {
        enterOuterAlt(_localctx, 3);
        setState(160);
        match(GLSLParser::UINTCONSTANT);
        break;
      }

      case GLSLParser::FLOATCONSTANT: {
        enterOuterAlt(_localctx, 4);
        setState(161);
        match(GLSLParser::FLOATCONSTANT);
        break;
      }

      case GLSLParser::BOOLCONSTANT: {
        enterOuterAlt(_localctx, 5);
        setState(162);
        match(GLSLParser::BOOLCONSTANT);
        break;
      }

      case GLSLParser::DOUBLECONSTANT: {
        enterOuterAlt(_localctx, 6);
        setState(163);
        match(GLSLParser::DOUBLECONSTANT);
        break;
      }

      case GLSLParser::LEFT_PAREN: {
        enterOuterAlt(_localctx, 7);
        setState(164);
        match(GLSLParser::LEFT_PAREN);
        setState(165);
        expression(0);
        setState(166);
        match(GLSLParser::RIGHT_PAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixExpressionContext ------------------------------------------------------------------

GLSLParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::PrimaryExpressionContext* GLSLParser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<GLSLParser::PrimaryExpressionContext>(0);
}

GLSLParser::TypeSpecifierContext* GLSLParser::PostfixExpressionContext::typeSpecifier() {
  return getRuleContext<GLSLParser::TypeSpecifierContext>(0);
}

tree::TerminalNode* GLSLParser::PostfixExpressionContext::LEFT_PAREN() {
  return getToken(GLSLParser::LEFT_PAREN, 0);
}

GLSLParser::AssignmentExpressionContext* GLSLParser::PostfixExpressionContext::assignmentExpression() {
  return getRuleContext<GLSLParser::AssignmentExpressionContext>(0);
}

GLSLParser::FunctionCallHeaderWithParameters_Context* GLSLParser::PostfixExpressionContext::functionCallHeaderWithParameters_() {
  return getRuleContext<GLSLParser::FunctionCallHeaderWithParameters_Context>(0);
}

tree::TerminalNode* GLSLParser::PostfixExpressionContext::RIGHT_PAREN() {
  return getToken(GLSLParser::RIGHT_PAREN, 0);
}

tree::TerminalNode* GLSLParser::PostfixExpressionContext::VOID_() {
  return getToken(GLSLParser::VOID_, 0);
}

GLSLParser::PostfixExpressionContext* GLSLParser::PostfixExpressionContext::postfixExpression() {
  return getRuleContext<GLSLParser::PostfixExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::PostfixExpressionContext::LEFT_BRACKET() {
  return getToken(GLSLParser::LEFT_BRACKET, 0);
}

GLSLParser::IntegerExpressionContext* GLSLParser::PostfixExpressionContext::integerExpression() {
  return getRuleContext<GLSLParser::IntegerExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::PostfixExpressionContext::RIGHT_BRACKET() {
  return getToken(GLSLParser::RIGHT_BRACKET, 0);
}

tree::TerminalNode* GLSLParser::PostfixExpressionContext::DOT() {
  return getToken(GLSLParser::DOT, 0);
}

tree::TerminalNode* GLSLParser::PostfixExpressionContext::IDENTIFIER() {
  return getToken(GLSLParser::IDENTIFIER, 0);
}

tree::TerminalNode* GLSLParser::PostfixExpressionContext::INC_OP() {
  return getToken(GLSLParser::INC_OP, 0);
}

tree::TerminalNode* GLSLParser::PostfixExpressionContext::DEC_OP() {
  return getToken(GLSLParser::DEC_OP, 0);
}


size_t GLSLParser::PostfixExpressionContext::getRuleIndex() const {
  return GLSLParser::RulePostfixExpression;
}


antlrcpp::Any GLSLParser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::PostfixExpressionContext* GLSLParser::postfixExpression() {
   return postfixExpression(0);
}

GLSLParser::PostfixExpressionContext* GLSLParser::postfixExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, parentState);
  GLSLParser::PostfixExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, GLSLParser::RulePostfixExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(171);
      primaryExpression();
      break;
    }

    case 2: {
      setState(172);
      typeSpecifier();
      setState(173);
      match(GLSLParser::LEFT_PAREN);
      setState(174);
      assignmentExpression();
      setState(175);
      functionCallHeaderWithParameters_();
      setState(176);
      match(GLSLParser::RIGHT_PAREN);
      break;
    }

    case 3: {
      setState(178);
      typeSpecifier();
      setState(179);
      match(GLSLParser::LEFT_PAREN);
      setState(181);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GLSLParser::VOID_) {
        setState(180);
        match(GLSLParser::VOID_);
      }
      setState(183);
      match(GLSLParser::RIGHT_PAREN);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(213);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(211);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(187);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(188);
          match(GLSLParser::LEFT_BRACKET);
          setState(189);
          integerExpression();
          setState(190);
          match(GLSLParser::RIGHT_BRACKET);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(192);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(193);
          match(GLSLParser::DOT);
          setState(194);
          match(GLSLParser::IDENTIFIER);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(195);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(196);
          match(GLSLParser::INC_OP);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(197);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(198);
          match(GLSLParser::DEC_OP);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(199);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(200);
          match(GLSLParser::LEFT_PAREN);
          setState(201);
          assignmentExpression();
          setState(202);
          functionCallHeaderWithParameters_();
          setState(203);
          match(GLSLParser::RIGHT_PAREN);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(205);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(206);
          match(GLSLParser::LEFT_PAREN);
          setState(208);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == GLSLParser::VOID_) {
            setState(207);
            match(GLSLParser::VOID_);
          }
          setState(210);
          match(GLSLParser::RIGHT_PAREN);
          break;
        }

        } 
      }
      setState(215);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IntegerExpressionContext ------------------------------------------------------------------

GLSLParser::IntegerExpressionContext::IntegerExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::ExpressionContext* GLSLParser::IntegerExpressionContext::expression() {
  return getRuleContext<GLSLParser::ExpressionContext>(0);
}


size_t GLSLParser::IntegerExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleIntegerExpression;
}


antlrcpp::Any GLSLParser::IntegerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitIntegerExpression(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::IntegerExpressionContext* GLSLParser::integerExpression() {
  IntegerExpressionContext *_localctx = _tracker.createInstance<IntegerExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, GLSLParser::RuleIntegerExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallHeaderWithParameters_Context ------------------------------------------------------------------

GLSLParser::FunctionCallHeaderWithParameters_Context::FunctionCallHeaderWithParameters_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::FunctionCallHeaderWithParameters_Context::COMMA() {
  return getToken(GLSLParser::COMMA, 0);
}

GLSLParser::AssignmentExpressionContext* GLSLParser::FunctionCallHeaderWithParameters_Context::assignmentExpression() {
  return getRuleContext<GLSLParser::AssignmentExpressionContext>(0);
}

GLSLParser::FunctionCallHeaderWithParameters_Context* GLSLParser::FunctionCallHeaderWithParameters_Context::functionCallHeaderWithParameters_() {
  return getRuleContext<GLSLParser::FunctionCallHeaderWithParameters_Context>(0);
}


size_t GLSLParser::FunctionCallHeaderWithParameters_Context::getRuleIndex() const {
  return GLSLParser::RuleFunctionCallHeaderWithParameters_;
}


antlrcpp::Any GLSLParser::FunctionCallHeaderWithParameters_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallHeaderWithParameters_(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::FunctionCallHeaderWithParameters_Context* GLSLParser::functionCallHeaderWithParameters_() {
  FunctionCallHeaderWithParameters_Context *_localctx = _tracker.createInstance<FunctionCallHeaderWithParameters_Context>(_ctx, getState());
  enterRule(_localctx, 8, GLSLParser::RuleFunctionCallHeaderWithParameters_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(223);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GLSLParser::COMMA: {
        enterOuterAlt(_localctx, 1);
        setState(218);
        match(GLSLParser::COMMA);
        setState(219);
        assignmentExpression();
        setState(220);
        functionCallHeaderWithParameters_();
        break;
      }

      case GLSLParser::RIGHT_PAREN: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

GLSLParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::PostfixExpressionContext* GLSLParser::UnaryExpressionContext::postfixExpression() {
  return getRuleContext<GLSLParser::PostfixExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::UnaryExpressionContext::INC_OP() {
  return getToken(GLSLParser::INC_OP, 0);
}

GLSLParser::UnaryExpressionContext* GLSLParser::UnaryExpressionContext::unaryExpression() {
  return getRuleContext<GLSLParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::UnaryExpressionContext::DEC_OP() {
  return getToken(GLSLParser::DEC_OP, 0);
}

GLSLParser::UnaryOperatorContext* GLSLParser::UnaryExpressionContext::unaryOperator() {
  return getRuleContext<GLSLParser::UnaryOperatorContext>(0);
}


size_t GLSLParser::UnaryExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleUnaryExpression;
}


antlrcpp::Any GLSLParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::UnaryExpressionContext* GLSLParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 10, GLSLParser::RuleUnaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(233);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GLSLParser::BOOL:
      case GLSLParser::FLOAT:
      case GLSLParser::INT:
      case GLSLParser::UINT:
      case GLSLParser::DOUBLE:
      case GLSLParser::BVEC2:
      case GLSLParser::BVEC3:
      case GLSLParser::BVEC4:
      case GLSLParser::IVEC2:
      case GLSLParser::IVEC3:
      case GLSLParser::IVEC4:
      case GLSLParser::UVEC2:
      case GLSLParser::UVEC3:
      case GLSLParser::UVEC4:
      case GLSLParser::VEC2:
      case GLSLParser::VEC3:
      case GLSLParser::VEC4:
      case GLSLParser::MAT2:
      case GLSLParser::MAT3:
      case GLSLParser::MAT4:
      case GLSLParser::MAT2X2:
      case GLSLParser::MAT2X3:
      case GLSLParser::MAT2X4:
      case GLSLParser::MAT3X2:
      case GLSLParser::MAT3X3:
      case GLSLParser::MAT3X4:
      case GLSLParser::MAT4X2:
      case GLSLParser::MAT4X3:
      case GLSLParser::MAT4X4:
      case GLSLParser::DVEC2:
      case GLSLParser::DVEC3:
      case GLSLParser::DVEC4:
      case GLSLParser::DMAT2:
      case GLSLParser::DMAT3:
      case GLSLParser::DMAT4:
      case GLSLParser::DMAT2X2:
      case GLSLParser::DMAT2X3:
      case GLSLParser::DMAT2X4:
      case GLSLParser::DMAT3X2:
      case GLSLParser::DMAT3X3:
      case GLSLParser::DMAT3X4:
      case GLSLParser::DMAT4X2:
      case GLSLParser::DMAT4X3:
      case GLSLParser::DMAT4X4:
      case GLSLParser::ATOMIC_UINT:
      case GLSLParser::SAMPLER2D:
      case GLSLParser::SAMPLER3D:
      case GLSLParser::SAMPLERCUBE:
      case GLSLParser::SAMPLER2DSHADOW:
      case GLSLParser::SAMPLERCUBESHADOW:
      case GLSLParser::SAMPLER2DARRAY:
      case GLSLParser::SAMPLER2DARRAYSHADOW:
      case GLSLParser::ISAMPLER2D:
      case GLSLParser::ISAMPLER3D:
      case GLSLParser::ISAMPLERCUBE:
      case GLSLParser::ISAMPLER2DARRAY:
      case GLSLParser::USAMPLER2D:
      case GLSLParser::USAMPLER3D:
      case GLSLParser::USAMPLERCUBE:
      case GLSLParser::USAMPLER2DARRAY:
      case GLSLParser::SAMPLER1D:
      case GLSLParser::SAMPLER1DSHADOW:
      case GLSLParser::SAMPLER1DARRAY:
      case GLSLParser::SAMPLER1DARRAYSHADOW:
      case GLSLParser::ISAMPLER1D:
      case GLSLParser::ISAMPLER1DARRAY:
      case GLSLParser::USAMPLER1D:
      case GLSLParser::USAMPLER1DARRAY:
      case GLSLParser::SAMPLER2DRECT:
      case GLSLParser::SAMPLER2DRECTSHADOW:
      case GLSLParser::ISAMPLER2DRECT:
      case GLSLParser::USAMPLER2DRECT:
      case GLSLParser::SAMPLERBUFFER:
      case GLSLParser::ISAMPLERBUFFER:
      case GLSLParser::USAMPLERBUFFER:
      case GLSLParser::SAMPLERCUBEARRAY:
      case GLSLParser::SAMPLERCUBEARRAYSHADOW:
      case GLSLParser::ISAMPLERCUBEARRAY:
      case GLSLParser::USAMPLERCUBEARRAY:
      case GLSLParser::SAMPLER2DMS:
      case GLSLParser::ISAMPLER2DMS:
      case GLSLParser::USAMPLER2DMS:
      case GLSLParser::SAMPLER2DMSARRAY:
      case GLSLParser::ISAMPLER2DMSARRAY:
      case GLSLParser::USAMPLER2DMSARRAY:
      case GLSLParser::IMAGE2D:
      case GLSLParser::IIMAGE2D:
      case GLSLParser::UIMAGE2D:
      case GLSLParser::IMAGE3D:
      case GLSLParser::IIMAGE3D:
      case GLSLParser::UIMAGE3D:
      case GLSLParser::IMAGECUBE:
      case GLSLParser::IIMAGECUBE:
      case GLSLParser::UIMAGECUBE:
      case GLSLParser::IMAGEBUFFER:
      case GLSLParser::IIMAGEBUFFER:
      case GLSLParser::UIMAGEBUFFER:
      case GLSLParser::IMAGE2DARRAY:
      case GLSLParser::IIMAGE2DARRAY:
      case GLSLParser::UIMAGE2DARRAY:
      case GLSLParser::IMAGECUBEARRAY:
      case GLSLParser::IIMAGECUBEARRAY:
      case GLSLParser::UIMAGECUBEARRAY:
      case GLSLParser::IMAGE1D:
      case GLSLParser::IIMAGE1D:
      case GLSLParser::UIMAGE1D:
      case GLSLParser::IMAGE1DARRAY:
      case GLSLParser::IIMAGE1DARRAY:
      case GLSLParser::UIMAGE1DARRAY:
      case GLSLParser::IMAGE2DRECT:
      case GLSLParser::IIMAGE2DRECT:
      case GLSLParser::UIMAGE2DRECT:
      case GLSLParser::IMAGE2DMS:
      case GLSLParser::IIMAGE2DMS:
      case GLSLParser::UIMAGE2DMS:
      case GLSLParser::IMAGE2DMSARRAY:
      case GLSLParser::IIMAGE2DMSARRAY:
      case GLSLParser::UIMAGE2DMSARRAY:
      case GLSLParser::STRUCT:
      case GLSLParser::VOID_:
      case GLSLParser::IDENTIFIER:
      case GLSLParser::FLOATCONSTANT:
      case GLSLParser::INTCONSTANT:
      case GLSLParser::UINTCONSTANT:
      case GLSLParser::BOOLCONSTANT:
      case GLSLParser::DOUBLECONSTANT:
      case GLSLParser::LEFT_PAREN: {
        enterOuterAlt(_localctx, 1);
        setState(225);
        postfixExpression(0);
        break;
      }

      case GLSLParser::INC_OP: {
        enterOuterAlt(_localctx, 2);
        setState(226);
        match(GLSLParser::INC_OP);
        setState(227);
        unaryExpression();
        break;
      }

      case GLSLParser::DEC_OP: {
        enterOuterAlt(_localctx, 3);
        setState(228);
        match(GLSLParser::DEC_OP);
        setState(229);
        unaryExpression();
        break;
      }

      case GLSLParser::BANG:
      case GLSLParser::DASH:
      case GLSLParser::TILDE:
      case GLSLParser::PLUS: {
        enterOuterAlt(_localctx, 4);
        setState(230);
        unaryOperator();
        setState(231);
        unaryExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

GLSLParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::UnaryOperatorContext::PLUS() {
  return getToken(GLSLParser::PLUS, 0);
}

tree::TerminalNode* GLSLParser::UnaryOperatorContext::DASH() {
  return getToken(GLSLParser::DASH, 0);
}

tree::TerminalNode* GLSLParser::UnaryOperatorContext::BANG() {
  return getToken(GLSLParser::BANG, 0);
}

tree::TerminalNode* GLSLParser::UnaryOperatorContext::TILDE() {
  return getToken(GLSLParser::TILDE, 0);
}


size_t GLSLParser::UnaryOperatorContext::getRuleIndex() const {
  return GLSLParser::RuleUnaryOperator;
}


antlrcpp::Any GLSLParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::UnaryOperatorContext* GLSLParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 12, GLSLParser::RuleUnaryOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    _la = _input->LA(1);
    if (!(((((_la - 193) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 193)) & ((1ULL << (GLSLParser::BANG - 193))
      | (1ULL << (GLSLParser::DASH - 193))
      | (1ULL << (GLSLParser::TILDE - 193))
      | (1ULL << (GLSLParser::PLUS - 193)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

GLSLParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::UnaryExpressionContext* GLSLParser::MultiplicativeExpressionContext::unaryExpression() {
  return getRuleContext<GLSLParser::UnaryExpressionContext>(0);
}

GLSLParser::MultiplicativeExpressionContext* GLSLParser::MultiplicativeExpressionContext::multiplicativeExpression() {
  return getRuleContext<GLSLParser::MultiplicativeExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::MultiplicativeExpressionContext::STAR() {
  return getToken(GLSLParser::STAR, 0);
}

tree::TerminalNode* GLSLParser::MultiplicativeExpressionContext::SLASH() {
  return getToken(GLSLParser::SLASH, 0);
}

tree::TerminalNode* GLSLParser::MultiplicativeExpressionContext::PERCENT() {
  return getToken(GLSLParser::PERCENT, 0);
}


size_t GLSLParser::MultiplicativeExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleMultiplicativeExpression;
}


antlrcpp::Any GLSLParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::MultiplicativeExpressionContext* GLSLParser::multiplicativeExpression() {
   return multiplicativeExpression(0);
}

GLSLParser::MultiplicativeExpressionContext* GLSLParser::multiplicativeExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, parentState);
  GLSLParser::MultiplicativeExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, GLSLParser::RuleMultiplicativeExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(238);
    unaryExpression();
    _ctx->stop = _input->LT(-1);
    setState(251);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(249);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(240);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(241);
          match(GLSLParser::STAR);
          setState(242);
          unaryExpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(243);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(244);
          match(GLSLParser::SLASH);
          setState(245);
          unaryExpression();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(246);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(247);
          match(GLSLParser::PERCENT);
          setState(248);
          unaryExpression();
          break;
        }

        } 
      }
      setState(253);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

GLSLParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::MultiplicativeExpressionContext* GLSLParser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContext<GLSLParser::MultiplicativeExpressionContext>(0);
}

GLSLParser::AdditiveExpressionContext* GLSLParser::AdditiveExpressionContext::additiveExpression() {
  return getRuleContext<GLSLParser::AdditiveExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::AdditiveExpressionContext::PLUS() {
  return getToken(GLSLParser::PLUS, 0);
}

tree::TerminalNode* GLSLParser::AdditiveExpressionContext::DASH() {
  return getToken(GLSLParser::DASH, 0);
}


size_t GLSLParser::AdditiveExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleAdditiveExpression;
}


antlrcpp::Any GLSLParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::AdditiveExpressionContext* GLSLParser::additiveExpression() {
   return additiveExpression(0);
}

GLSLParser::AdditiveExpressionContext* GLSLParser::additiveExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, parentState);
  GLSLParser::AdditiveExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, GLSLParser::RuleAdditiveExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(255);
    multiplicativeExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(265);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(263);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(257);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(258);
          match(GLSLParser::PLUS);
          setState(259);
          multiplicativeExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(260);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(261);
          match(GLSLParser::DASH);
          setState(262);
          multiplicativeExpression(0);
          break;
        }

        } 
      }
      setState(267);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftExpressionContext ------------------------------------------------------------------

GLSLParser::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::AdditiveExpressionContext* GLSLParser::ShiftExpressionContext::additiveExpression() {
  return getRuleContext<GLSLParser::AdditiveExpressionContext>(0);
}

GLSLParser::ShiftExpressionContext* GLSLParser::ShiftExpressionContext::shiftExpression() {
  return getRuleContext<GLSLParser::ShiftExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::ShiftExpressionContext::LEFT_OP() {
  return getToken(GLSLParser::LEFT_OP, 0);
}

tree::TerminalNode* GLSLParser::ShiftExpressionContext::RIGHT_OP() {
  return getToken(GLSLParser::RIGHT_OP, 0);
}


size_t GLSLParser::ShiftExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleShiftExpression;
}


antlrcpp::Any GLSLParser::ShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitShiftExpression(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::ShiftExpressionContext* GLSLParser::shiftExpression() {
   return shiftExpression(0);
}

GLSLParser::ShiftExpressionContext* GLSLParser::shiftExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::ShiftExpressionContext *_localctx = _tracker.createInstance<ShiftExpressionContext>(_ctx, parentState);
  GLSLParser::ShiftExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, GLSLParser::RuleShiftExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(269);
    additiveExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(279);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(277);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(271);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(272);
          match(GLSLParser::LEFT_OP);
          setState(273);
          additiveExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(274);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(275);
          match(GLSLParser::RIGHT_OP);
          setState(276);
          additiveExpression(0);
          break;
        }

        } 
      }
      setState(281);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

GLSLParser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::ShiftExpressionContext* GLSLParser::RelationalExpressionContext::shiftExpression() {
  return getRuleContext<GLSLParser::ShiftExpressionContext>(0);
}

GLSLParser::RelationalExpressionContext* GLSLParser::RelationalExpressionContext::relationalExpression() {
  return getRuleContext<GLSLParser::RelationalExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::RelationalExpressionContext::LEFT_ANGLE() {
  return getToken(GLSLParser::LEFT_ANGLE, 0);
}

tree::TerminalNode* GLSLParser::RelationalExpressionContext::RIGHT_ANGLE() {
  return getToken(GLSLParser::RIGHT_ANGLE, 0);
}

tree::TerminalNode* GLSLParser::RelationalExpressionContext::LE_OP() {
  return getToken(GLSLParser::LE_OP, 0);
}

tree::TerminalNode* GLSLParser::RelationalExpressionContext::GE_OP() {
  return getToken(GLSLParser::GE_OP, 0);
}


size_t GLSLParser::RelationalExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleRelationalExpression;
}


antlrcpp::Any GLSLParser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::RelationalExpressionContext* GLSLParser::relationalExpression() {
   return relationalExpression(0);
}

GLSLParser::RelationalExpressionContext* GLSLParser::relationalExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, parentState);
  GLSLParser::RelationalExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, GLSLParser::RuleRelationalExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(283);
    shiftExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(299);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(297);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(285);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(286);
          match(GLSLParser::LEFT_ANGLE);
          setState(287);
          shiftExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(288);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(289);
          match(GLSLParser::RIGHT_ANGLE);
          setState(290);
          shiftExpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(291);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(292);
          match(GLSLParser::LE_OP);
          setState(293);
          shiftExpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(294);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(295);
          match(GLSLParser::GE_OP);
          setState(296);
          shiftExpression(0);
          break;
        }

        } 
      }
      setState(301);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

GLSLParser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::RelationalExpressionContext* GLSLParser::EqualityExpressionContext::relationalExpression() {
  return getRuleContext<GLSLParser::RelationalExpressionContext>(0);
}

GLSLParser::EqualityExpressionContext* GLSLParser::EqualityExpressionContext::equalityExpression() {
  return getRuleContext<GLSLParser::EqualityExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::EqualityExpressionContext::EQ_OP() {
  return getToken(GLSLParser::EQ_OP, 0);
}

tree::TerminalNode* GLSLParser::EqualityExpressionContext::NE_OP() {
  return getToken(GLSLParser::NE_OP, 0);
}


size_t GLSLParser::EqualityExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleEqualityExpression;
}


antlrcpp::Any GLSLParser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitEqualityExpression(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::EqualityExpressionContext* GLSLParser::equalityExpression() {
   return equalityExpression(0);
}

GLSLParser::EqualityExpressionContext* GLSLParser::equalityExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, parentState);
  GLSLParser::EqualityExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, GLSLParser::RuleEqualityExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(303);
    relationalExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(313);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(311);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(305);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(306);
          match(GLSLParser::EQ_OP);
          setState(307);
          relationalExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(308);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(309);
          match(GLSLParser::NE_OP);
          setState(310);
          relationalExpression(0);
          break;
        }

        } 
      }
      setState(315);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

GLSLParser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::EqualityExpressionContext* GLSLParser::AndExpressionContext::equalityExpression() {
  return getRuleContext<GLSLParser::EqualityExpressionContext>(0);
}

GLSLParser::AndExpressionContext* GLSLParser::AndExpressionContext::andExpression() {
  return getRuleContext<GLSLParser::AndExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::AndExpressionContext::AMPERSAND() {
  return getToken(GLSLParser::AMPERSAND, 0);
}


size_t GLSLParser::AndExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleAndExpression;
}


antlrcpp::Any GLSLParser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitAndExpression(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::AndExpressionContext* GLSLParser::andExpression() {
   return andExpression(0);
}

GLSLParser::AndExpressionContext* GLSLParser::andExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, parentState);
  GLSLParser::AndExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, GLSLParser::RuleAndExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(317);
    equalityExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(324);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndExpression);
        setState(319);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(320);
        match(GLSLParser::AMPERSAND);
        setState(321);
        equalityExpression(0); 
      }
      setState(326);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExclusiveOrExpressionContext ------------------------------------------------------------------

GLSLParser::ExclusiveOrExpressionContext::ExclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::AndExpressionContext* GLSLParser::ExclusiveOrExpressionContext::andExpression() {
  return getRuleContext<GLSLParser::AndExpressionContext>(0);
}

GLSLParser::ExclusiveOrExpressionContext* GLSLParser::ExclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContext<GLSLParser::ExclusiveOrExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::ExclusiveOrExpressionContext::CARET() {
  return getToken(GLSLParser::CARET, 0);
}


size_t GLSLParser::ExclusiveOrExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleExclusiveOrExpression;
}


antlrcpp::Any GLSLParser::ExclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitExclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::ExclusiveOrExpressionContext* GLSLParser::exclusiveOrExpression() {
   return exclusiveOrExpression(0);
}

GLSLParser::ExclusiveOrExpressionContext* GLSLParser::exclusiveOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::ExclusiveOrExpressionContext *_localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(_ctx, parentState);
  GLSLParser::ExclusiveOrExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, GLSLParser::RuleExclusiveOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(328);
    andExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(335);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExclusiveOrExpression);
        setState(330);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(331);
        match(GLSLParser::CARET);
        setState(332);
        andExpression(0); 
      }
      setState(337);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InclusiveOrExpressionContext ------------------------------------------------------------------

GLSLParser::InclusiveOrExpressionContext::InclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::ExclusiveOrExpressionContext* GLSLParser::InclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContext<GLSLParser::ExclusiveOrExpressionContext>(0);
}

GLSLParser::InclusiveOrExpressionContext* GLSLParser::InclusiveOrExpressionContext::inclusiveOrExpression() {
  return getRuleContext<GLSLParser::InclusiveOrExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::InclusiveOrExpressionContext::VERTICAL_BAR() {
  return getToken(GLSLParser::VERTICAL_BAR, 0);
}


size_t GLSLParser::InclusiveOrExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleInclusiveOrExpression;
}


antlrcpp::Any GLSLParser::InclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitInclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::InclusiveOrExpressionContext* GLSLParser::inclusiveOrExpression() {
   return inclusiveOrExpression(0);
}

GLSLParser::InclusiveOrExpressionContext* GLSLParser::inclusiveOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::InclusiveOrExpressionContext *_localctx = _tracker.createInstance<InclusiveOrExpressionContext>(_ctx, parentState);
  GLSLParser::InclusiveOrExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, GLSLParser::RuleInclusiveOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(339);
    exclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(346);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInclusiveOrExpression);
        setState(341);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(342);
        match(GLSLParser::VERTICAL_BAR);
        setState(343);
        exclusiveOrExpression(0); 
      }
      setState(348);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

GLSLParser::LogicalAndExpressionContext::LogicalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::InclusiveOrExpressionContext* GLSLParser::LogicalAndExpressionContext::inclusiveOrExpression() {
  return getRuleContext<GLSLParser::InclusiveOrExpressionContext>(0);
}

GLSLParser::LogicalAndExpressionContext* GLSLParser::LogicalAndExpressionContext::logicalAndExpression() {
  return getRuleContext<GLSLParser::LogicalAndExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::LogicalAndExpressionContext::AND_OP() {
  return getToken(GLSLParser::AND_OP, 0);
}


size_t GLSLParser::LogicalAndExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleLogicalAndExpression;
}


antlrcpp::Any GLSLParser::LogicalAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExpression(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::LogicalAndExpressionContext* GLSLParser::logicalAndExpression() {
   return logicalAndExpression(0);
}

GLSLParser::LogicalAndExpressionContext* GLSLParser::logicalAndExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::LogicalAndExpressionContext *_localctx = _tracker.createInstance<LogicalAndExpressionContext>(_ctx, parentState);
  GLSLParser::LogicalAndExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, GLSLParser::RuleLogicalAndExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(350);
    inclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(357);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalAndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalAndExpression);
        setState(352);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(353);
        match(GLSLParser::AND_OP);
        setState(354);
        inclusiveOrExpression(0); 
      }
      setState(359);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalXorExpressionContext ------------------------------------------------------------------

GLSLParser::LogicalXorExpressionContext::LogicalXorExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::LogicalAndExpressionContext* GLSLParser::LogicalXorExpressionContext::logicalAndExpression() {
  return getRuleContext<GLSLParser::LogicalAndExpressionContext>(0);
}

GLSLParser::LogicalXorExpressionContext* GLSLParser::LogicalXorExpressionContext::logicalXorExpression() {
  return getRuleContext<GLSLParser::LogicalXorExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::LogicalXorExpressionContext::XOR_OP() {
  return getToken(GLSLParser::XOR_OP, 0);
}


size_t GLSLParser::LogicalXorExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleLogicalXorExpression;
}


antlrcpp::Any GLSLParser::LogicalXorExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitLogicalXorExpression(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::LogicalXorExpressionContext* GLSLParser::logicalXorExpression() {
   return logicalXorExpression(0);
}

GLSLParser::LogicalXorExpressionContext* GLSLParser::logicalXorExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::LogicalXorExpressionContext *_localctx = _tracker.createInstance<LogicalXorExpressionContext>(_ctx, parentState);
  GLSLParser::LogicalXorExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, GLSLParser::RuleLogicalXorExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(361);
    logicalAndExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(368);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalXorExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalXorExpression);
        setState(363);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(364);
        match(GLSLParser::XOR_OP);
        setState(365);
        logicalAndExpression(0); 
      }
      setState(370);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalOrExpressionContext ------------------------------------------------------------------

GLSLParser::LogicalOrExpressionContext::LogicalOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::LogicalXorExpressionContext* GLSLParser::LogicalOrExpressionContext::logicalXorExpression() {
  return getRuleContext<GLSLParser::LogicalXorExpressionContext>(0);
}

GLSLParser::LogicalOrExpressionContext* GLSLParser::LogicalOrExpressionContext::logicalOrExpression() {
  return getRuleContext<GLSLParser::LogicalOrExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::LogicalOrExpressionContext::OR_OP() {
  return getToken(GLSLParser::OR_OP, 0);
}


size_t GLSLParser::LogicalOrExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleLogicalOrExpression;
}


antlrcpp::Any GLSLParser::LogicalOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitLogicalOrExpression(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::LogicalOrExpressionContext* GLSLParser::logicalOrExpression() {
   return logicalOrExpression(0);
}

GLSLParser::LogicalOrExpressionContext* GLSLParser::logicalOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::LogicalOrExpressionContext *_localctx = _tracker.createInstance<LogicalOrExpressionContext>(_ctx, parentState);
  GLSLParser::LogicalOrExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, GLSLParser::RuleLogicalOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(372);
    logicalXorExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(379);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalOrExpression);
        setState(374);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(375);
        match(GLSLParser::OR_OP);
        setState(376);
        logicalXorExpression(0); 
      }
      setState(381);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

GLSLParser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::LogicalOrExpressionContext* GLSLParser::ConditionalExpressionContext::logicalOrExpression() {
  return getRuleContext<GLSLParser::LogicalOrExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::ConditionalExpressionContext::QUESTION() {
  return getToken(GLSLParser::QUESTION, 0);
}

GLSLParser::ExpressionContext* GLSLParser::ConditionalExpressionContext::expression() {
  return getRuleContext<GLSLParser::ExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::ConditionalExpressionContext::COLON() {
  return getToken(GLSLParser::COLON, 0);
}

GLSLParser::AssignmentExpressionContext* GLSLParser::ConditionalExpressionContext::assignmentExpression() {
  return getRuleContext<GLSLParser::AssignmentExpressionContext>(0);
}


size_t GLSLParser::ConditionalExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleConditionalExpression;
}


antlrcpp::Any GLSLParser::ConditionalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitConditionalExpression(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::ConditionalExpressionContext* GLSLParser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 36, GLSLParser::RuleConditionalExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(389);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(382);
      logicalOrExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(383);
      logicalOrExpression(0);
      setState(384);
      match(GLSLParser::QUESTION);
      setState(385);
      expression(0);
      setState(386);
      match(GLSLParser::COLON);
      setState(387);
      assignmentExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

GLSLParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::ConditionalExpressionContext* GLSLParser::AssignmentExpressionContext::conditionalExpression() {
  return getRuleContext<GLSLParser::ConditionalExpressionContext>(0);
}

GLSLParser::UnaryExpressionContext* GLSLParser::AssignmentExpressionContext::unaryExpression() {
  return getRuleContext<GLSLParser::UnaryExpressionContext>(0);
}

GLSLParser::AssignmentOperatorContext* GLSLParser::AssignmentExpressionContext::assignmentOperator() {
  return getRuleContext<GLSLParser::AssignmentOperatorContext>(0);
}

GLSLParser::AssignmentExpressionContext* GLSLParser::AssignmentExpressionContext::assignmentExpression() {
  return getRuleContext<GLSLParser::AssignmentExpressionContext>(0);
}


size_t GLSLParser::AssignmentExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleAssignmentExpression;
}


antlrcpp::Any GLSLParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::AssignmentExpressionContext* GLSLParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, GLSLParser::RuleAssignmentExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(396);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(391);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(392);
      unaryExpression();
      setState(393);
      assignmentOperator();
      setState(394);
      assignmentExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

GLSLParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::AssignmentOperatorContext::EQUAL() {
  return getToken(GLSLParser::EQUAL, 0);
}

tree::TerminalNode* GLSLParser::AssignmentOperatorContext::MUL_ASSIGN() {
  return getToken(GLSLParser::MUL_ASSIGN, 0);
}

tree::TerminalNode* GLSLParser::AssignmentOperatorContext::DIV_ASSIGN() {
  return getToken(GLSLParser::DIV_ASSIGN, 0);
}

tree::TerminalNode* GLSLParser::AssignmentOperatorContext::MOD_ASSIGN() {
  return getToken(GLSLParser::MOD_ASSIGN, 0);
}

tree::TerminalNode* GLSLParser::AssignmentOperatorContext::ADD_ASSIGN() {
  return getToken(GLSLParser::ADD_ASSIGN, 0);
}

tree::TerminalNode* GLSLParser::AssignmentOperatorContext::SUB_ASSIGN() {
  return getToken(GLSLParser::SUB_ASSIGN, 0);
}

tree::TerminalNode* GLSLParser::AssignmentOperatorContext::LEFT_ASSIGN() {
  return getToken(GLSLParser::LEFT_ASSIGN, 0);
}

tree::TerminalNode* GLSLParser::AssignmentOperatorContext::RIGHT_ASSIGN() {
  return getToken(GLSLParser::RIGHT_ASSIGN, 0);
}

tree::TerminalNode* GLSLParser::AssignmentOperatorContext::AND_ASSIGN() {
  return getToken(GLSLParser::AND_ASSIGN, 0);
}

tree::TerminalNode* GLSLParser::AssignmentOperatorContext::XOR_ASSIGN() {
  return getToken(GLSLParser::XOR_ASSIGN, 0);
}

tree::TerminalNode* GLSLParser::AssignmentOperatorContext::OR_ASSIGN() {
  return getToken(GLSLParser::OR_ASSIGN, 0);
}


size_t GLSLParser::AssignmentOperatorContext::getRuleIndex() const {
  return GLSLParser::RuleAssignmentOperator;
}


antlrcpp::Any GLSLParser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::AssignmentOperatorContext* GLSLParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 40, GLSLParser::RuleAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(398);
    _la = _input->LA(1);
    if (!(((((_la - 172) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 172)) & ((1ULL << (GLSLParser::MUL_ASSIGN - 172))
      | (1ULL << (GLSLParser::DIV_ASSIGN - 172))
      | (1ULL << (GLSLParser::ADD_ASSIGN - 172))
      | (1ULL << (GLSLParser::MOD_ASSIGN - 172))
      | (1ULL << (GLSLParser::LEFT_ASSIGN - 172))
      | (1ULL << (GLSLParser::RIGHT_ASSIGN - 172))
      | (1ULL << (GLSLParser::AND_ASSIGN - 172))
      | (1ULL << (GLSLParser::XOR_ASSIGN - 172))
      | (1ULL << (GLSLParser::OR_ASSIGN - 172))
      | (1ULL << (GLSLParser::SUB_ASSIGN - 172))
      | (1ULL << (GLSLParser::EQUAL - 172)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

GLSLParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::AssignmentExpressionContext* GLSLParser::ExpressionContext::assignmentExpression() {
  return getRuleContext<GLSLParser::AssignmentExpressionContext>(0);
}

GLSLParser::ExpressionContext* GLSLParser::ExpressionContext::expression() {
  return getRuleContext<GLSLParser::ExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::ExpressionContext::COMMA() {
  return getToken(GLSLParser::COMMA, 0);
}


size_t GLSLParser::ExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleExpression;
}


antlrcpp::Any GLSLParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::ExpressionContext* GLSLParser::expression() {
   return expression(0);
}

GLSLParser::ExpressionContext* GLSLParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  GLSLParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 42;
  enterRecursionRule(_localctx, 42, GLSLParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(401);
    assignmentExpression();
    _ctx->stop = _input->LT(-1);
    setState(408);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(403);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(404);
        match(GLSLParser::COMMA);
        setState(405);
        assignmentExpression(); 
      }
      setState(410);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstantExpressionContext ------------------------------------------------------------------

GLSLParser::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::ConditionalExpressionContext* GLSLParser::ConstantExpressionContext::conditionalExpression() {
  return getRuleContext<GLSLParser::ConditionalExpressionContext>(0);
}


size_t GLSLParser::ConstantExpressionContext::getRuleIndex() const {
  return GLSLParser::RuleConstantExpression;
}


antlrcpp::Any GLSLParser::ConstantExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitConstantExpression(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::ConstantExpressionContext* GLSLParser::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 44, GLSLParser::RuleConstantExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
    conditionalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

GLSLParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::FunctionPrototypeContext* GLSLParser::DeclarationContext::functionPrototype() {
  return getRuleContext<GLSLParser::FunctionPrototypeContext>(0);
}

tree::TerminalNode* GLSLParser::DeclarationContext::SEMICOLON() {
  return getToken(GLSLParser::SEMICOLON, 0);
}

GLSLParser::InitDeclaratorListContext* GLSLParser::DeclarationContext::initDeclaratorList() {
  return getRuleContext<GLSLParser::InitDeclaratorListContext>(0);
}

tree::TerminalNode* GLSLParser::DeclarationContext::PRECISION() {
  return getToken(GLSLParser::PRECISION, 0);
}

GLSLParser::PrecisionQualifierContext* GLSLParser::DeclarationContext::precisionQualifier() {
  return getRuleContext<GLSLParser::PrecisionQualifierContext>(0);
}

GLSLParser::TypeSpecifierContext* GLSLParser::DeclarationContext::typeSpecifier() {
  return getRuleContext<GLSLParser::TypeSpecifierContext>(0);
}

GLSLParser::TypeQualifierContext* GLSLParser::DeclarationContext::typeQualifier() {
  return getRuleContext<GLSLParser::TypeQualifierContext>(0);
}

std::vector<tree::TerminalNode *> GLSLParser::DeclarationContext::IDENTIFIER() {
  return getTokens(GLSLParser::IDENTIFIER);
}

tree::TerminalNode* GLSLParser::DeclarationContext::IDENTIFIER(size_t i) {
  return getToken(GLSLParser::IDENTIFIER, i);
}

tree::TerminalNode* GLSLParser::DeclarationContext::LEFT_BRACE() {
  return getToken(GLSLParser::LEFT_BRACE, 0);
}

GLSLParser::StructDeclarationListContext* GLSLParser::DeclarationContext::structDeclarationList() {
  return getRuleContext<GLSLParser::StructDeclarationListContext>(0);
}

tree::TerminalNode* GLSLParser::DeclarationContext::RIGHT_BRACE() {
  return getToken(GLSLParser::RIGHT_BRACE, 0);
}

GLSLParser::ArraySpecifierContext* GLSLParser::DeclarationContext::arraySpecifier() {
  return getRuleContext<GLSLParser::ArraySpecifierContext>(0);
}

GLSLParser::IdentifierListContext* GLSLParser::DeclarationContext::identifierList() {
  return getRuleContext<GLSLParser::IdentifierListContext>(0);
}


size_t GLSLParser::DeclarationContext::getRuleIndex() const {
  return GLSLParser::RuleDeclaration;
}


antlrcpp::Any GLSLParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::DeclarationContext* GLSLParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 46, GLSLParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(460);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(413);
      functionPrototype();
      setState(414);
      match(GLSLParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(416);
      initDeclaratorList(0);
      setState(417);
      match(GLSLParser::SEMICOLON);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(419);
      match(GLSLParser::PRECISION);
      setState(420);
      precisionQualifier();
      setState(421);
      typeSpecifier();
      setState(422);
      match(GLSLParser::SEMICOLON);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(424);
      typeQualifier(0);
      setState(425);
      match(GLSLParser::IDENTIFIER);
      setState(426);
      match(GLSLParser::LEFT_BRACE);
      setState(427);
      structDeclarationList(0);
      setState(428);
      match(GLSLParser::RIGHT_BRACE);
      setState(429);
      match(GLSLParser::SEMICOLON);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(431);
      typeQualifier(0);
      setState(432);
      match(GLSLParser::IDENTIFIER);
      setState(433);
      match(GLSLParser::LEFT_BRACE);
      setState(434);
      structDeclarationList(0);
      setState(435);
      match(GLSLParser::RIGHT_BRACE);
      setState(436);
      match(GLSLParser::IDENTIFIER);
      setState(437);
      match(GLSLParser::SEMICOLON);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(439);
      typeQualifier(0);
      setState(440);
      match(GLSLParser::IDENTIFIER);
      setState(441);
      match(GLSLParser::LEFT_BRACE);
      setState(442);
      structDeclarationList(0);
      setState(443);
      match(GLSLParser::RIGHT_BRACE);
      setState(444);
      match(GLSLParser::IDENTIFIER);
      setState(445);
      arraySpecifier(0);
      setState(446);
      match(GLSLParser::SEMICOLON);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(448);
      typeQualifier(0);
      setState(449);
      match(GLSLParser::SEMICOLON);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(451);
      typeQualifier(0);
      setState(452);
      match(GLSLParser::IDENTIFIER);
      setState(453);
      match(GLSLParser::SEMICOLON);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(455);
      typeQualifier(0);
      setState(456);
      match(GLSLParser::IDENTIFIER);
      setState(457);
      identifierList(0);
      setState(458);
      match(GLSLParser::SEMICOLON);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

GLSLParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::IdentifierListContext::COMMA() {
  return getToken(GLSLParser::COMMA, 0);
}

tree::TerminalNode* GLSLParser::IdentifierListContext::IDENTIFIER() {
  return getToken(GLSLParser::IDENTIFIER, 0);
}

GLSLParser::IdentifierListContext* GLSLParser::IdentifierListContext::identifierList() {
  return getRuleContext<GLSLParser::IdentifierListContext>(0);
}


size_t GLSLParser::IdentifierListContext::getRuleIndex() const {
  return GLSLParser::RuleIdentifierList;
}


antlrcpp::Any GLSLParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::IdentifierListContext* GLSLParser::identifierList() {
   return identifierList(0);
}

GLSLParser::IdentifierListContext* GLSLParser::identifierList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, parentState);
  GLSLParser::IdentifierListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, GLSLParser::RuleIdentifierList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(463);
    match(GLSLParser::COMMA);
    setState(464);
    match(GLSLParser::IDENTIFIER);
    _ctx->stop = _input->LT(-1);
    setState(471);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<IdentifierListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIdentifierList);
        setState(466);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(467);
        match(GLSLParser::COMMA);
        setState(468);
        match(GLSLParser::IDENTIFIER); 
      }
      setState(473);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FunctionPrototypeContext ------------------------------------------------------------------

GLSLParser::FunctionPrototypeContext::FunctionPrototypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::FunctionDeclaratorContext* GLSLParser::FunctionPrototypeContext::functionDeclarator() {
  return getRuleContext<GLSLParser::FunctionDeclaratorContext>(0);
}

tree::TerminalNode* GLSLParser::FunctionPrototypeContext::RIGHT_PAREN() {
  return getToken(GLSLParser::RIGHT_PAREN, 0);
}


size_t GLSLParser::FunctionPrototypeContext::getRuleIndex() const {
  return GLSLParser::RuleFunctionPrototype;
}


antlrcpp::Any GLSLParser::FunctionPrototypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitFunctionPrototype(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::FunctionPrototypeContext* GLSLParser::functionPrototype() {
  FunctionPrototypeContext *_localctx = _tracker.createInstance<FunctionPrototypeContext>(_ctx, getState());
  enterRule(_localctx, 50, GLSLParser::RuleFunctionPrototype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(474);
    functionDeclarator();
    setState(475);
    match(GLSLParser::RIGHT_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclaratorContext ------------------------------------------------------------------

GLSLParser::FunctionDeclaratorContext::FunctionDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::FunctionHeaderContext* GLSLParser::FunctionDeclaratorContext::functionHeader() {
  return getRuleContext<GLSLParser::FunctionHeaderContext>(0);
}

GLSLParser::FunctionHeaderWithParametersContext* GLSLParser::FunctionDeclaratorContext::functionHeaderWithParameters() {
  return getRuleContext<GLSLParser::FunctionHeaderWithParametersContext>(0);
}


size_t GLSLParser::FunctionDeclaratorContext::getRuleIndex() const {
  return GLSLParser::RuleFunctionDeclarator;
}


antlrcpp::Any GLSLParser::FunctionDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclarator(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::FunctionDeclaratorContext* GLSLParser::functionDeclarator() {
  FunctionDeclaratorContext *_localctx = _tracker.createInstance<FunctionDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 52, GLSLParser::RuleFunctionDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(479);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(477);
      functionHeader();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(478);
      functionHeaderWithParameters(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionHeaderWithParametersContext ------------------------------------------------------------------

GLSLParser::FunctionHeaderWithParametersContext::FunctionHeaderWithParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::FunctionHeaderContext* GLSLParser::FunctionHeaderWithParametersContext::functionHeader() {
  return getRuleContext<GLSLParser::FunctionHeaderContext>(0);
}

GLSLParser::ParameterDeclarationContext* GLSLParser::FunctionHeaderWithParametersContext::parameterDeclaration() {
  return getRuleContext<GLSLParser::ParameterDeclarationContext>(0);
}

GLSLParser::FunctionHeaderWithParametersContext* GLSLParser::FunctionHeaderWithParametersContext::functionHeaderWithParameters() {
  return getRuleContext<GLSLParser::FunctionHeaderWithParametersContext>(0);
}

tree::TerminalNode* GLSLParser::FunctionHeaderWithParametersContext::COMMA() {
  return getToken(GLSLParser::COMMA, 0);
}


size_t GLSLParser::FunctionHeaderWithParametersContext::getRuleIndex() const {
  return GLSLParser::RuleFunctionHeaderWithParameters;
}


antlrcpp::Any GLSLParser::FunctionHeaderWithParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitFunctionHeaderWithParameters(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::FunctionHeaderWithParametersContext* GLSLParser::functionHeaderWithParameters() {
   return functionHeaderWithParameters(0);
}

GLSLParser::FunctionHeaderWithParametersContext* GLSLParser::functionHeaderWithParameters(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::FunctionHeaderWithParametersContext *_localctx = _tracker.createInstance<FunctionHeaderWithParametersContext>(_ctx, parentState);
  GLSLParser::FunctionHeaderWithParametersContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, GLSLParser::RuleFunctionHeaderWithParameters, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(482);
    functionHeader();
    setState(483);
    parameterDeclaration();
    _ctx->stop = _input->LT(-1);
    setState(490);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<FunctionHeaderWithParametersContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleFunctionHeaderWithParameters);
        setState(485);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(486);
        match(GLSLParser::COMMA);
        setState(487);
        parameterDeclaration(); 
      }
      setState(492);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FunctionHeaderContext ------------------------------------------------------------------

GLSLParser::FunctionHeaderContext::FunctionHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::FullySpecifiedTypeContext* GLSLParser::FunctionHeaderContext::fullySpecifiedType() {
  return getRuleContext<GLSLParser::FullySpecifiedTypeContext>(0);
}

tree::TerminalNode* GLSLParser::FunctionHeaderContext::IDENTIFIER() {
  return getToken(GLSLParser::IDENTIFIER, 0);
}

tree::TerminalNode* GLSLParser::FunctionHeaderContext::LEFT_PAREN() {
  return getToken(GLSLParser::LEFT_PAREN, 0);
}


size_t GLSLParser::FunctionHeaderContext::getRuleIndex() const {
  return GLSLParser::RuleFunctionHeader;
}


antlrcpp::Any GLSLParser::FunctionHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitFunctionHeader(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::FunctionHeaderContext* GLSLParser::functionHeader() {
  FunctionHeaderContext *_localctx = _tracker.createInstance<FunctionHeaderContext>(_ctx, getState());
  enterRule(_localctx, 56, GLSLParser::RuleFunctionHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(493);
    fullySpecifiedType();
    setState(494);
    match(GLSLParser::IDENTIFIER);
    setState(495);
    match(GLSLParser::LEFT_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclaratorContext ------------------------------------------------------------------

GLSLParser::ParameterDeclaratorContext::ParameterDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::TypeSpecifierContext* GLSLParser::ParameterDeclaratorContext::typeSpecifier() {
  return getRuleContext<GLSLParser::TypeSpecifierContext>(0);
}

tree::TerminalNode* GLSLParser::ParameterDeclaratorContext::IDENTIFIER() {
  return getToken(GLSLParser::IDENTIFIER, 0);
}

GLSLParser::ArraySpecifierContext* GLSLParser::ParameterDeclaratorContext::arraySpecifier() {
  return getRuleContext<GLSLParser::ArraySpecifierContext>(0);
}


size_t GLSLParser::ParameterDeclaratorContext::getRuleIndex() const {
  return GLSLParser::RuleParameterDeclarator;
}


antlrcpp::Any GLSLParser::ParameterDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitParameterDeclarator(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::ParameterDeclaratorContext* GLSLParser::parameterDeclarator() {
  ParameterDeclaratorContext *_localctx = _tracker.createInstance<ParameterDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 58, GLSLParser::RuleParameterDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(504);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(497);
      typeSpecifier();
      setState(498);
      match(GLSLParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(500);
      typeSpecifier();
      setState(501);
      match(GLSLParser::IDENTIFIER);
      setState(502);
      arraySpecifier(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationContext ------------------------------------------------------------------

GLSLParser::ParameterDeclarationContext::ParameterDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::TypeQualifierContext* GLSLParser::ParameterDeclarationContext::typeQualifier() {
  return getRuleContext<GLSLParser::TypeQualifierContext>(0);
}

GLSLParser::ParameterDeclaratorContext* GLSLParser::ParameterDeclarationContext::parameterDeclarator() {
  return getRuleContext<GLSLParser::ParameterDeclaratorContext>(0);
}

GLSLParser::ParameterTypeSpecifierContext* GLSLParser::ParameterDeclarationContext::parameterTypeSpecifier() {
  return getRuleContext<GLSLParser::ParameterTypeSpecifierContext>(0);
}


size_t GLSLParser::ParameterDeclarationContext::getRuleIndex() const {
  return GLSLParser::RuleParameterDeclaration;
}


antlrcpp::Any GLSLParser::ParameterDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitParameterDeclaration(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::ParameterDeclarationContext* GLSLParser::parameterDeclaration() {
  ParameterDeclarationContext *_localctx = _tracker.createInstance<ParameterDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 60, GLSLParser::RuleParameterDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(514);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(506);
      typeQualifier(0);
      setState(507);
      parameterDeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(509);
      parameterDeclarator();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(510);
      typeQualifier(0);
      setState(511);
      parameterTypeSpecifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(513);
      parameterTypeSpecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterTypeSpecifierContext ------------------------------------------------------------------

GLSLParser::ParameterTypeSpecifierContext::ParameterTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::TypeSpecifierContext* GLSLParser::ParameterTypeSpecifierContext::typeSpecifier() {
  return getRuleContext<GLSLParser::TypeSpecifierContext>(0);
}


size_t GLSLParser::ParameterTypeSpecifierContext::getRuleIndex() const {
  return GLSLParser::RuleParameterTypeSpecifier;
}


antlrcpp::Any GLSLParser::ParameterTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitParameterTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::ParameterTypeSpecifierContext* GLSLParser::parameterTypeSpecifier() {
  ParameterTypeSpecifierContext *_localctx = _tracker.createInstance<ParameterTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 62, GLSLParser::RuleParameterTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(516);
    typeSpecifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclaratorListContext ------------------------------------------------------------------

GLSLParser::InitDeclaratorListContext::InitDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::SingleDeclarationContext* GLSLParser::InitDeclaratorListContext::singleDeclaration() {
  return getRuleContext<GLSLParser::SingleDeclarationContext>(0);
}

GLSLParser::InitDeclaratorListContext* GLSLParser::InitDeclaratorListContext::initDeclaratorList() {
  return getRuleContext<GLSLParser::InitDeclaratorListContext>(0);
}

tree::TerminalNode* GLSLParser::InitDeclaratorListContext::COMMA() {
  return getToken(GLSLParser::COMMA, 0);
}

tree::TerminalNode* GLSLParser::InitDeclaratorListContext::IDENTIFIER() {
  return getToken(GLSLParser::IDENTIFIER, 0);
}

GLSLParser::ArraySpecifierContext* GLSLParser::InitDeclaratorListContext::arraySpecifier() {
  return getRuleContext<GLSLParser::ArraySpecifierContext>(0);
}

tree::TerminalNode* GLSLParser::InitDeclaratorListContext::EQUAL() {
  return getToken(GLSLParser::EQUAL, 0);
}

GLSLParser::InitializerContext* GLSLParser::InitDeclaratorListContext::initializer() {
  return getRuleContext<GLSLParser::InitializerContext>(0);
}


size_t GLSLParser::InitDeclaratorListContext::getRuleIndex() const {
  return GLSLParser::RuleInitDeclaratorList;
}


antlrcpp::Any GLSLParser::InitDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitInitDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::InitDeclaratorListContext* GLSLParser::initDeclaratorList() {
   return initDeclaratorList(0);
}

GLSLParser::InitDeclaratorListContext* GLSLParser::initDeclaratorList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::InitDeclaratorListContext *_localctx = _tracker.createInstance<InitDeclaratorListContext>(_ctx, parentState);
  GLSLParser::InitDeclaratorListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, GLSLParser::RuleInitDeclaratorList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(519);
    singleDeclaration();
    _ctx->stop = _input->LT(-1);
    setState(542);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(540);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<InitDeclaratorListContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleInitDeclaratorList);
          setState(521);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(522);
          match(GLSLParser::COMMA);
          setState(523);
          match(GLSLParser::IDENTIFIER);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<InitDeclaratorListContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleInitDeclaratorList);
          setState(524);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(525);
          match(GLSLParser::COMMA);
          setState(526);
          match(GLSLParser::IDENTIFIER);
          setState(527);
          arraySpecifier(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<InitDeclaratorListContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleInitDeclaratorList);
          setState(528);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(529);
          match(GLSLParser::COMMA);
          setState(530);
          match(GLSLParser::IDENTIFIER);
          setState(531);
          arraySpecifier(0);
          setState(532);
          match(GLSLParser::EQUAL);
          setState(533);
          initializer();
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<InitDeclaratorListContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleInitDeclaratorList);
          setState(535);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(536);
          match(GLSLParser::COMMA);
          setState(537);
          match(GLSLParser::IDENTIFIER);
          setState(538);
          match(GLSLParser::EQUAL);
          setState(539);
          initializer();
          break;
        }

        } 
      }
      setState(544);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SingleDeclarationContext ------------------------------------------------------------------

GLSLParser::SingleDeclarationContext::SingleDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::FullySpecifiedTypeContext* GLSLParser::SingleDeclarationContext::fullySpecifiedType() {
  return getRuleContext<GLSLParser::FullySpecifiedTypeContext>(0);
}

tree::TerminalNode* GLSLParser::SingleDeclarationContext::IDENTIFIER() {
  return getToken(GLSLParser::IDENTIFIER, 0);
}

GLSLParser::ArraySpecifierContext* GLSLParser::SingleDeclarationContext::arraySpecifier() {
  return getRuleContext<GLSLParser::ArraySpecifierContext>(0);
}

tree::TerminalNode* GLSLParser::SingleDeclarationContext::EQUAL() {
  return getToken(GLSLParser::EQUAL, 0);
}

GLSLParser::InitializerContext* GLSLParser::SingleDeclarationContext::initializer() {
  return getRuleContext<GLSLParser::InitializerContext>(0);
}


size_t GLSLParser::SingleDeclarationContext::getRuleIndex() const {
  return GLSLParser::RuleSingleDeclaration;
}


antlrcpp::Any GLSLParser::SingleDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitSingleDeclaration(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::SingleDeclarationContext* GLSLParser::singleDeclaration() {
  SingleDeclarationContext *_localctx = _tracker.createInstance<SingleDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 66, GLSLParser::RuleSingleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(564);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(545);
      fullySpecifiedType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(546);
      fullySpecifiedType();
      setState(547);
      match(GLSLParser::IDENTIFIER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(549);
      fullySpecifiedType();
      setState(550);
      match(GLSLParser::IDENTIFIER);
      setState(551);
      arraySpecifier(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(553);
      fullySpecifiedType();
      setState(554);
      match(GLSLParser::IDENTIFIER);
      setState(555);
      arraySpecifier(0);
      setState(556);
      match(GLSLParser::EQUAL);
      setState(557);
      initializer();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(559);
      fullySpecifiedType();
      setState(560);
      match(GLSLParser::IDENTIFIER);
      setState(561);
      match(GLSLParser::EQUAL);
      setState(562);
      initializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FullySpecifiedTypeContext ------------------------------------------------------------------

GLSLParser::FullySpecifiedTypeContext::FullySpecifiedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::TypeSpecifierContext* GLSLParser::FullySpecifiedTypeContext::typeSpecifier() {
  return getRuleContext<GLSLParser::TypeSpecifierContext>(0);
}

GLSLParser::TypeQualifierContext* GLSLParser::FullySpecifiedTypeContext::typeQualifier() {
  return getRuleContext<GLSLParser::TypeQualifierContext>(0);
}


size_t GLSLParser::FullySpecifiedTypeContext::getRuleIndex() const {
  return GLSLParser::RuleFullySpecifiedType;
}


antlrcpp::Any GLSLParser::FullySpecifiedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitFullySpecifiedType(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::FullySpecifiedTypeContext* GLSLParser::fullySpecifiedType() {
  FullySpecifiedTypeContext *_localctx = _tracker.createInstance<FullySpecifiedTypeContext>(_ctx, getState());
  enterRule(_localctx, 68, GLSLParser::RuleFullySpecifiedType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(570);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GLSLParser::BOOL:
      case GLSLParser::FLOAT:
      case GLSLParser::INT:
      case GLSLParser::UINT:
      case GLSLParser::DOUBLE:
      case GLSLParser::BVEC2:
      case GLSLParser::BVEC3:
      case GLSLParser::BVEC4:
      case GLSLParser::IVEC2:
      case GLSLParser::IVEC3:
      case GLSLParser::IVEC4:
      case GLSLParser::UVEC2:
      case GLSLParser::UVEC3:
      case GLSLParser::UVEC4:
      case GLSLParser::VEC2:
      case GLSLParser::VEC3:
      case GLSLParser::VEC4:
      case GLSLParser::MAT2:
      case GLSLParser::MAT3:
      case GLSLParser::MAT4:
      case GLSLParser::MAT2X2:
      case GLSLParser::MAT2X3:
      case GLSLParser::MAT2X4:
      case GLSLParser::MAT3X2:
      case GLSLParser::MAT3X3:
      case GLSLParser::MAT3X4:
      case GLSLParser::MAT4X2:
      case GLSLParser::MAT4X3:
      case GLSLParser::MAT4X4:
      case GLSLParser::DVEC2:
      case GLSLParser::DVEC3:
      case GLSLParser::DVEC4:
      case GLSLParser::DMAT2:
      case GLSLParser::DMAT3:
      case GLSLParser::DMAT4:
      case GLSLParser::DMAT2X2:
      case GLSLParser::DMAT2X3:
      case GLSLParser::DMAT2X4:
      case GLSLParser::DMAT3X2:
      case GLSLParser::DMAT3X3:
      case GLSLParser::DMAT3X4:
      case GLSLParser::DMAT4X2:
      case GLSLParser::DMAT4X3:
      case GLSLParser::DMAT4X4:
      case GLSLParser::ATOMIC_UINT:
      case GLSLParser::SAMPLER2D:
      case GLSLParser::SAMPLER3D:
      case GLSLParser::SAMPLERCUBE:
      case GLSLParser::SAMPLER2DSHADOW:
      case GLSLParser::SAMPLERCUBESHADOW:
      case GLSLParser::SAMPLER2DARRAY:
      case GLSLParser::SAMPLER2DARRAYSHADOW:
      case GLSLParser::ISAMPLER2D:
      case GLSLParser::ISAMPLER3D:
      case GLSLParser::ISAMPLERCUBE:
      case GLSLParser::ISAMPLER2DARRAY:
      case GLSLParser::USAMPLER2D:
      case GLSLParser::USAMPLER3D:
      case GLSLParser::USAMPLERCUBE:
      case GLSLParser::USAMPLER2DARRAY:
      case GLSLParser::SAMPLER1D:
      case GLSLParser::SAMPLER1DSHADOW:
      case GLSLParser::SAMPLER1DARRAY:
      case GLSLParser::SAMPLER1DARRAYSHADOW:
      case GLSLParser::ISAMPLER1D:
      case GLSLParser::ISAMPLER1DARRAY:
      case GLSLParser::USAMPLER1D:
      case GLSLParser::USAMPLER1DARRAY:
      case GLSLParser::SAMPLER2DRECT:
      case GLSLParser::SAMPLER2DRECTSHADOW:
      case GLSLParser::ISAMPLER2DRECT:
      case GLSLParser::USAMPLER2DRECT:
      case GLSLParser::SAMPLERBUFFER:
      case GLSLParser::ISAMPLERBUFFER:
      case GLSLParser::USAMPLERBUFFER:
      case GLSLParser::SAMPLERCUBEARRAY:
      case GLSLParser::SAMPLERCUBEARRAYSHADOW:
      case GLSLParser::ISAMPLERCUBEARRAY:
      case GLSLParser::USAMPLERCUBEARRAY:
      case GLSLParser::SAMPLER2DMS:
      case GLSLParser::ISAMPLER2DMS:
      case GLSLParser::USAMPLER2DMS:
      case GLSLParser::SAMPLER2DMSARRAY:
      case GLSLParser::ISAMPLER2DMSARRAY:
      case GLSLParser::USAMPLER2DMSARRAY:
      case GLSLParser::IMAGE2D:
      case GLSLParser::IIMAGE2D:
      case GLSLParser::UIMAGE2D:
      case GLSLParser::IMAGE3D:
      case GLSLParser::IIMAGE3D:
      case GLSLParser::UIMAGE3D:
      case GLSLParser::IMAGECUBE:
      case GLSLParser::IIMAGECUBE:
      case GLSLParser::UIMAGECUBE:
      case GLSLParser::IMAGEBUFFER:
      case GLSLParser::IIMAGEBUFFER:
      case GLSLParser::UIMAGEBUFFER:
      case GLSLParser::IMAGE2DARRAY:
      case GLSLParser::IIMAGE2DARRAY:
      case GLSLParser::UIMAGE2DARRAY:
      case GLSLParser::IMAGECUBEARRAY:
      case GLSLParser::IIMAGECUBEARRAY:
      case GLSLParser::UIMAGECUBEARRAY:
      case GLSLParser::IMAGE1D:
      case GLSLParser::IIMAGE1D:
      case GLSLParser::UIMAGE1D:
      case GLSLParser::IMAGE1DARRAY:
      case GLSLParser::IIMAGE1DARRAY:
      case GLSLParser::UIMAGE1DARRAY:
      case GLSLParser::IMAGE2DRECT:
      case GLSLParser::IIMAGE2DRECT:
      case GLSLParser::UIMAGE2DRECT:
      case GLSLParser::IMAGE2DMS:
      case GLSLParser::IIMAGE2DMS:
      case GLSLParser::UIMAGE2DMS:
      case GLSLParser::IMAGE2DMSARRAY:
      case GLSLParser::IIMAGE2DMSARRAY:
      case GLSLParser::UIMAGE2DMSARRAY:
      case GLSLParser::STRUCT:
      case GLSLParser::VOID_:
      case GLSLParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(566);
        typeSpecifier();
        break;
      }

      case GLSLParser::CONST_:
      case GLSLParser::CENTROID:
      case GLSLParser::IN_:
      case GLSLParser::OUT_:
      case GLSLParser::INOUT:
      case GLSLParser::UNIFORM:
      case GLSLParser::PATCH:
      case GLSLParser::SAMPLE:
      case GLSLParser::BUFFER:
      case GLSLParser::SHARED:
      case GLSLParser::COHERENT:
      case GLSLParser::VOLATILE:
      case GLSLParser::RESTRICT:
      case GLSLParser::READONLY:
      case GLSLParser::WRITEONLY:
      case GLSLParser::NOPERSPECTIVE:
      case GLSLParser::FLAT:
      case GLSLParser::SMOOTH:
      case GLSLParser::LAYOUT:
      case GLSLParser::SUBROUTINE:
      case GLSLParser::INVARIANT:
      case GLSLParser::PRECISE:
      case GLSLParser::HIGH_PRECISION:
      case GLSLParser::MEDIUM_PRECISION:
      case GLSLParser::LOW_PRECISION: {
        enterOuterAlt(_localctx, 2);
        setState(567);
        typeQualifier(0);
        setState(568);
        typeSpecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InvariantQualifierContext ------------------------------------------------------------------

GLSLParser::InvariantQualifierContext::InvariantQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::InvariantQualifierContext::INVARIANT() {
  return getToken(GLSLParser::INVARIANT, 0);
}


size_t GLSLParser::InvariantQualifierContext::getRuleIndex() const {
  return GLSLParser::RuleInvariantQualifier;
}


antlrcpp::Any GLSLParser::InvariantQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitInvariantQualifier(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::InvariantQualifierContext* GLSLParser::invariantQualifier() {
  InvariantQualifierContext *_localctx = _tracker.createInstance<InvariantQualifierContext>(_ctx, getState());
  enterRule(_localctx, 70, GLSLParser::RuleInvariantQualifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(572);
    match(GLSLParser::INVARIANT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterpolationQualifierContext ------------------------------------------------------------------

GLSLParser::InterpolationQualifierContext::InterpolationQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::InterpolationQualifierContext::SMOOTH() {
  return getToken(GLSLParser::SMOOTH, 0);
}

tree::TerminalNode* GLSLParser::InterpolationQualifierContext::FLAT() {
  return getToken(GLSLParser::FLAT, 0);
}

tree::TerminalNode* GLSLParser::InterpolationQualifierContext::NOPERSPECTIVE() {
  return getToken(GLSLParser::NOPERSPECTIVE, 0);
}


size_t GLSLParser::InterpolationQualifierContext::getRuleIndex() const {
  return GLSLParser::RuleInterpolationQualifier;
}


antlrcpp::Any GLSLParser::InterpolationQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitInterpolationQualifier(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::InterpolationQualifierContext* GLSLParser::interpolationQualifier() {
  InterpolationQualifierContext *_localctx = _tracker.createInstance<InterpolationQualifierContext>(_ctx, getState());
  enterRule(_localctx, 72, GLSLParser::RuleInterpolationQualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(574);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GLSLParser::NOPERSPECTIVE)
      | (1ULL << GLSLParser::FLAT)
      | (1ULL << GLSLParser::SMOOTH))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LayoutQualifierContext ------------------------------------------------------------------

GLSLParser::LayoutQualifierContext::LayoutQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::LayoutQualifierContext::LAYOUT() {
  return getToken(GLSLParser::LAYOUT, 0);
}

tree::TerminalNode* GLSLParser::LayoutQualifierContext::LEFT_PAREN() {
  return getToken(GLSLParser::LEFT_PAREN, 0);
}

GLSLParser::LayoutQualifierIdListContext* GLSLParser::LayoutQualifierContext::layoutQualifierIdList() {
  return getRuleContext<GLSLParser::LayoutQualifierIdListContext>(0);
}

tree::TerminalNode* GLSLParser::LayoutQualifierContext::RIGHT_PAREN() {
  return getToken(GLSLParser::RIGHT_PAREN, 0);
}


size_t GLSLParser::LayoutQualifierContext::getRuleIndex() const {
  return GLSLParser::RuleLayoutQualifier;
}


antlrcpp::Any GLSLParser::LayoutQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitLayoutQualifier(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::LayoutQualifierContext* GLSLParser::layoutQualifier() {
  LayoutQualifierContext *_localctx = _tracker.createInstance<LayoutQualifierContext>(_ctx, getState());
  enterRule(_localctx, 74, GLSLParser::RuleLayoutQualifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(576);
    match(GLSLParser::LAYOUT);
    setState(577);
    match(GLSLParser::LEFT_PAREN);
    setState(578);
    layoutQualifierIdList(0);
    setState(579);
    match(GLSLParser::RIGHT_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LayoutQualifierIdListContext ------------------------------------------------------------------

GLSLParser::LayoutQualifierIdListContext::LayoutQualifierIdListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::LayoutQualifierIdContext* GLSLParser::LayoutQualifierIdListContext::layoutQualifierId() {
  return getRuleContext<GLSLParser::LayoutQualifierIdContext>(0);
}

GLSLParser::LayoutQualifierIdListContext* GLSLParser::LayoutQualifierIdListContext::layoutQualifierIdList() {
  return getRuleContext<GLSLParser::LayoutQualifierIdListContext>(0);
}

tree::TerminalNode* GLSLParser::LayoutQualifierIdListContext::COMMA() {
  return getToken(GLSLParser::COMMA, 0);
}


size_t GLSLParser::LayoutQualifierIdListContext::getRuleIndex() const {
  return GLSLParser::RuleLayoutQualifierIdList;
}


antlrcpp::Any GLSLParser::LayoutQualifierIdListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitLayoutQualifierIdList(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::LayoutQualifierIdListContext* GLSLParser::layoutQualifierIdList() {
   return layoutQualifierIdList(0);
}

GLSLParser::LayoutQualifierIdListContext* GLSLParser::layoutQualifierIdList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::LayoutQualifierIdListContext *_localctx = _tracker.createInstance<LayoutQualifierIdListContext>(_ctx, parentState);
  GLSLParser::LayoutQualifierIdListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 76;
  enterRecursionRule(_localctx, 76, GLSLParser::RuleLayoutQualifierIdList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(582);
    layoutQualifierId();
    _ctx->stop = _input->LT(-1);
    setState(589);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LayoutQualifierIdListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLayoutQualifierIdList);
        setState(584);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(585);
        match(GLSLParser::COMMA);
        setState(586);
        layoutQualifierId(); 
      }
      setState(591);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LayoutQualifierIdContext ------------------------------------------------------------------

GLSLParser::LayoutQualifierIdContext::LayoutQualifierIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::LayoutQualifierIdContext::IDENTIFIER() {
  return getToken(GLSLParser::IDENTIFIER, 0);
}

tree::TerminalNode* GLSLParser::LayoutQualifierIdContext::EQUAL() {
  return getToken(GLSLParser::EQUAL, 0);
}

GLSLParser::ConstantExpressionContext* GLSLParser::LayoutQualifierIdContext::constantExpression() {
  return getRuleContext<GLSLParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::LayoutQualifierIdContext::SHARED() {
  return getToken(GLSLParser::SHARED, 0);
}


size_t GLSLParser::LayoutQualifierIdContext::getRuleIndex() const {
  return GLSLParser::RuleLayoutQualifierId;
}


antlrcpp::Any GLSLParser::LayoutQualifierIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitLayoutQualifierId(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::LayoutQualifierIdContext* GLSLParser::layoutQualifierId() {
  LayoutQualifierIdContext *_localctx = _tracker.createInstance<LayoutQualifierIdContext>(_ctx, getState());
  enterRule(_localctx, 78, GLSLParser::RuleLayoutQualifierId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(597);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(592);
      match(GLSLParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(593);
      match(GLSLParser::IDENTIFIER);
      setState(594);
      match(GLSLParser::EQUAL);
      setState(595);
      constantExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(596);
      match(GLSLParser::SHARED);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreciseQualifierContext ------------------------------------------------------------------

GLSLParser::PreciseQualifierContext::PreciseQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::PreciseQualifierContext::PRECISE() {
  return getToken(GLSLParser::PRECISE, 0);
}


size_t GLSLParser::PreciseQualifierContext::getRuleIndex() const {
  return GLSLParser::RulePreciseQualifier;
}


antlrcpp::Any GLSLParser::PreciseQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitPreciseQualifier(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::PreciseQualifierContext* GLSLParser::preciseQualifier() {
  PreciseQualifierContext *_localctx = _tracker.createInstance<PreciseQualifierContext>(_ctx, getState());
  enterRule(_localctx, 80, GLSLParser::RulePreciseQualifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(599);
    match(GLSLParser::PRECISE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeQualifierContext ------------------------------------------------------------------

GLSLParser::TypeQualifierContext::TypeQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::SingleTypeQualifierContext* GLSLParser::TypeQualifierContext::singleTypeQualifier() {
  return getRuleContext<GLSLParser::SingleTypeQualifierContext>(0);
}

GLSLParser::TypeQualifierContext* GLSLParser::TypeQualifierContext::typeQualifier() {
  return getRuleContext<GLSLParser::TypeQualifierContext>(0);
}


size_t GLSLParser::TypeQualifierContext::getRuleIndex() const {
  return GLSLParser::RuleTypeQualifier;
}


antlrcpp::Any GLSLParser::TypeQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitTypeQualifier(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::TypeQualifierContext* GLSLParser::typeQualifier() {
   return typeQualifier(0);
}

GLSLParser::TypeQualifierContext* GLSLParser::typeQualifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::TypeQualifierContext *_localctx = _tracker.createInstance<TypeQualifierContext>(_ctx, parentState);
  GLSLParser::TypeQualifierContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 82;
  enterRecursionRule(_localctx, 82, GLSLParser::RuleTypeQualifier, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(602);
    singleTypeQualifier();
    _ctx->stop = _input->LT(-1);
    setState(608);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeQualifierContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTypeQualifier);
        setState(604);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(605);
        singleTypeQualifier(); 
      }
      setState(610);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SingleTypeQualifierContext ------------------------------------------------------------------

GLSLParser::SingleTypeQualifierContext::SingleTypeQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::StorageQualifierContext* GLSLParser::SingleTypeQualifierContext::storageQualifier() {
  return getRuleContext<GLSLParser::StorageQualifierContext>(0);
}

GLSLParser::LayoutQualifierContext* GLSLParser::SingleTypeQualifierContext::layoutQualifier() {
  return getRuleContext<GLSLParser::LayoutQualifierContext>(0);
}

GLSLParser::PrecisionQualifierContext* GLSLParser::SingleTypeQualifierContext::precisionQualifier() {
  return getRuleContext<GLSLParser::PrecisionQualifierContext>(0);
}

GLSLParser::InterpolationQualifierContext* GLSLParser::SingleTypeQualifierContext::interpolationQualifier() {
  return getRuleContext<GLSLParser::InterpolationQualifierContext>(0);
}

GLSLParser::InvariantQualifierContext* GLSLParser::SingleTypeQualifierContext::invariantQualifier() {
  return getRuleContext<GLSLParser::InvariantQualifierContext>(0);
}

GLSLParser::PreciseQualifierContext* GLSLParser::SingleTypeQualifierContext::preciseQualifier() {
  return getRuleContext<GLSLParser::PreciseQualifierContext>(0);
}


size_t GLSLParser::SingleTypeQualifierContext::getRuleIndex() const {
  return GLSLParser::RuleSingleTypeQualifier;
}


antlrcpp::Any GLSLParser::SingleTypeQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitSingleTypeQualifier(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::SingleTypeQualifierContext* GLSLParser::singleTypeQualifier() {
  SingleTypeQualifierContext *_localctx = _tracker.createInstance<SingleTypeQualifierContext>(_ctx, getState());
  enterRule(_localctx, 84, GLSLParser::RuleSingleTypeQualifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(617);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GLSLParser::CONST_:
      case GLSLParser::CENTROID:
      case GLSLParser::IN_:
      case GLSLParser::OUT_:
      case GLSLParser::INOUT:
      case GLSLParser::UNIFORM:
      case GLSLParser::PATCH:
      case GLSLParser::SAMPLE:
      case GLSLParser::BUFFER:
      case GLSLParser::SHARED:
      case GLSLParser::COHERENT:
      case GLSLParser::VOLATILE:
      case GLSLParser::RESTRICT:
      case GLSLParser::READONLY:
      case GLSLParser::WRITEONLY:
      case GLSLParser::SUBROUTINE: {
        enterOuterAlt(_localctx, 1);
        setState(611);
        storageQualifier();
        break;
      }

      case GLSLParser::LAYOUT: {
        enterOuterAlt(_localctx, 2);
        setState(612);
        layoutQualifier();
        break;
      }

      case GLSLParser::HIGH_PRECISION:
      case GLSLParser::MEDIUM_PRECISION:
      case GLSLParser::LOW_PRECISION: {
        enterOuterAlt(_localctx, 3);
        setState(613);
        precisionQualifier();
        break;
      }

      case GLSLParser::NOPERSPECTIVE:
      case GLSLParser::FLAT:
      case GLSLParser::SMOOTH: {
        enterOuterAlt(_localctx, 4);
        setState(614);
        interpolationQualifier();
        break;
      }

      case GLSLParser::INVARIANT: {
        enterOuterAlt(_localctx, 5);
        setState(615);
        invariantQualifier();
        break;
      }

      case GLSLParser::PRECISE: {
        enterOuterAlt(_localctx, 6);
        setState(616);
        preciseQualifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageQualifierContext ------------------------------------------------------------------

GLSLParser::StorageQualifierContext::StorageQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::CONST_() {
  return getToken(GLSLParser::CONST_, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::IN_() {
  return getToken(GLSLParser::IN_, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::OUT_() {
  return getToken(GLSLParser::OUT_, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::INOUT() {
  return getToken(GLSLParser::INOUT, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::CENTROID() {
  return getToken(GLSLParser::CENTROID, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::PATCH() {
  return getToken(GLSLParser::PATCH, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::SAMPLE() {
  return getToken(GLSLParser::SAMPLE, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::UNIFORM() {
  return getToken(GLSLParser::UNIFORM, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::BUFFER() {
  return getToken(GLSLParser::BUFFER, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::SHARED() {
  return getToken(GLSLParser::SHARED, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::COHERENT() {
  return getToken(GLSLParser::COHERENT, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::VOLATILE() {
  return getToken(GLSLParser::VOLATILE, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::RESTRICT() {
  return getToken(GLSLParser::RESTRICT, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::READONLY() {
  return getToken(GLSLParser::READONLY, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::WRITEONLY() {
  return getToken(GLSLParser::WRITEONLY, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::SUBROUTINE() {
  return getToken(GLSLParser::SUBROUTINE, 0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::LEFT_PAREN() {
  return getToken(GLSLParser::LEFT_PAREN, 0);
}

GLSLParser::TypeNameListContext* GLSLParser::StorageQualifierContext::typeNameList() {
  return getRuleContext<GLSLParser::TypeNameListContext>(0);
}

tree::TerminalNode* GLSLParser::StorageQualifierContext::RIGHT_PAREN() {
  return getToken(GLSLParser::RIGHT_PAREN, 0);
}


size_t GLSLParser::StorageQualifierContext::getRuleIndex() const {
  return GLSLParser::RuleStorageQualifier;
}


antlrcpp::Any GLSLParser::StorageQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitStorageQualifier(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::StorageQualifierContext* GLSLParser::storageQualifier() {
  StorageQualifierContext *_localctx = _tracker.createInstance<StorageQualifierContext>(_ctx, getState());
  enterRule(_localctx, 86, GLSLParser::RuleStorageQualifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(640);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(619);
      match(GLSLParser::CONST_);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(620);
      match(GLSLParser::IN_);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(621);
      match(GLSLParser::OUT_);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(622);
      match(GLSLParser::INOUT);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(623);
      match(GLSLParser::CENTROID);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(624);
      match(GLSLParser::PATCH);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(625);
      match(GLSLParser::SAMPLE);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(626);
      match(GLSLParser::UNIFORM);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(627);
      match(GLSLParser::BUFFER);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(628);
      match(GLSLParser::SHARED);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(629);
      match(GLSLParser::COHERENT);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(630);
      match(GLSLParser::VOLATILE);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(631);
      match(GLSLParser::RESTRICT);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(632);
      match(GLSLParser::READONLY);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(633);
      match(GLSLParser::WRITEONLY);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(634);
      match(GLSLParser::SUBROUTINE);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(635);
      match(GLSLParser::SUBROUTINE);
      setState(636);
      match(GLSLParser::LEFT_PAREN);
      setState(637);
      typeNameList(0);
      setState(638);
      match(GLSLParser::RIGHT_PAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameListContext ------------------------------------------------------------------

GLSLParser::TypeNameListContext::TypeNameListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::TypeNameListContext::IDENTIFIER() {
  return getToken(GLSLParser::IDENTIFIER, 0);
}

GLSLParser::TypeNameListContext* GLSLParser::TypeNameListContext::typeNameList() {
  return getRuleContext<GLSLParser::TypeNameListContext>(0);
}

tree::TerminalNode* GLSLParser::TypeNameListContext::COMMA() {
  return getToken(GLSLParser::COMMA, 0);
}


size_t GLSLParser::TypeNameListContext::getRuleIndex() const {
  return GLSLParser::RuleTypeNameList;
}


antlrcpp::Any GLSLParser::TypeNameListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitTypeNameList(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::TypeNameListContext* GLSLParser::typeNameList() {
   return typeNameList(0);
}

GLSLParser::TypeNameListContext* GLSLParser::typeNameList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::TypeNameListContext *_localctx = _tracker.createInstance<TypeNameListContext>(_ctx, parentState);
  GLSLParser::TypeNameListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 88;
  enterRecursionRule(_localctx, 88, GLSLParser::RuleTypeNameList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(643);
    match(GLSLParser::IDENTIFIER);
    _ctx->stop = _input->LT(-1);
    setState(650);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeNameListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTypeNameList);
        setState(645);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(646);
        match(GLSLParser::COMMA);
        setState(647);
        match(GLSLParser::IDENTIFIER); 
      }
      setState(652);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeSpecifierContext ------------------------------------------------------------------

GLSLParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::TypeSpecifierNonarrayContext* GLSLParser::TypeSpecifierContext::typeSpecifierNonarray() {
  return getRuleContext<GLSLParser::TypeSpecifierNonarrayContext>(0);
}

GLSLParser::ArraySpecifierContext* GLSLParser::TypeSpecifierContext::arraySpecifier() {
  return getRuleContext<GLSLParser::ArraySpecifierContext>(0);
}


size_t GLSLParser::TypeSpecifierContext::getRuleIndex() const {
  return GLSLParser::RuleTypeSpecifier;
}


antlrcpp::Any GLSLParser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::TypeSpecifierContext* GLSLParser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 90, GLSLParser::RuleTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(657);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(653);
      typeSpecifierNonarray();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(654);
      typeSpecifierNonarray();
      setState(655);
      arraySpecifier(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArraySpecifierContext ------------------------------------------------------------------

GLSLParser::ArraySpecifierContext::ArraySpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::ArraySpecifierContext::LEFT_BRACKET() {
  return getToken(GLSLParser::LEFT_BRACKET, 0);
}

tree::TerminalNode* GLSLParser::ArraySpecifierContext::RIGHT_BRACKET() {
  return getToken(GLSLParser::RIGHT_BRACKET, 0);
}

GLSLParser::ConditionalExpressionContext* GLSLParser::ArraySpecifierContext::conditionalExpression() {
  return getRuleContext<GLSLParser::ConditionalExpressionContext>(0);
}

GLSLParser::ArraySpecifierContext* GLSLParser::ArraySpecifierContext::arraySpecifier() {
  return getRuleContext<GLSLParser::ArraySpecifierContext>(0);
}


size_t GLSLParser::ArraySpecifierContext::getRuleIndex() const {
  return GLSLParser::RuleArraySpecifier;
}


antlrcpp::Any GLSLParser::ArraySpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitArraySpecifier(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::ArraySpecifierContext* GLSLParser::arraySpecifier() {
   return arraySpecifier(0);
}

GLSLParser::ArraySpecifierContext* GLSLParser::arraySpecifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::ArraySpecifierContext *_localctx = _tracker.createInstance<ArraySpecifierContext>(_ctx, parentState);
  GLSLParser::ArraySpecifierContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 92;
  enterRecursionRule(_localctx, 92, GLSLParser::RuleArraySpecifier, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(666);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(660);
      match(GLSLParser::LEFT_BRACKET);
      setState(661);
      match(GLSLParser::RIGHT_BRACKET);
      break;
    }

    case 2: {
      setState(662);
      match(GLSLParser::LEFT_BRACKET);
      setState(663);
      conditionalExpression();
      setState(664);
      match(GLSLParser::RIGHT_BRACKET);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(678);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(676);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ArraySpecifierContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArraySpecifier);
          setState(668);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(669);
          match(GLSLParser::LEFT_BRACKET);
          setState(670);
          match(GLSLParser::RIGHT_BRACKET);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ArraySpecifierContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArraySpecifier);
          setState(671);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(672);
          match(GLSLParser::LEFT_BRACKET);
          setState(673);
          conditionalExpression();
          setState(674);
          match(GLSLParser::RIGHT_BRACKET);
          break;
        }

        } 
      }
      setState(680);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeSpecifierNonarrayContext ------------------------------------------------------------------

GLSLParser::TypeSpecifierNonarrayContext::TypeSpecifierNonarrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::VOID_() {
  return getToken(GLSLParser::VOID_, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::FLOAT() {
  return getToken(GLSLParser::FLOAT, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DOUBLE() {
  return getToken(GLSLParser::DOUBLE, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::INT() {
  return getToken(GLSLParser::INT, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UINT() {
  return getToken(GLSLParser::UINT, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::BOOL() {
  return getToken(GLSLParser::BOOL, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::VEC2() {
  return getToken(GLSLParser::VEC2, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::VEC3() {
  return getToken(GLSLParser::VEC3, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::VEC4() {
  return getToken(GLSLParser::VEC4, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DVEC2() {
  return getToken(GLSLParser::DVEC2, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DVEC3() {
  return getToken(GLSLParser::DVEC3, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DVEC4() {
  return getToken(GLSLParser::DVEC4, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::BVEC2() {
  return getToken(GLSLParser::BVEC2, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::BVEC3() {
  return getToken(GLSLParser::BVEC3, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::BVEC4() {
  return getToken(GLSLParser::BVEC4, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IVEC2() {
  return getToken(GLSLParser::IVEC2, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IVEC3() {
  return getToken(GLSLParser::IVEC3, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IVEC4() {
  return getToken(GLSLParser::IVEC4, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UVEC2() {
  return getToken(GLSLParser::UVEC2, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UVEC3() {
  return getToken(GLSLParser::UVEC3, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UVEC4() {
  return getToken(GLSLParser::UVEC4, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::MAT2() {
  return getToken(GLSLParser::MAT2, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::MAT3() {
  return getToken(GLSLParser::MAT3, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::MAT4() {
  return getToken(GLSLParser::MAT4, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::MAT2X2() {
  return getToken(GLSLParser::MAT2X2, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::MAT2X3() {
  return getToken(GLSLParser::MAT2X3, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::MAT2X4() {
  return getToken(GLSLParser::MAT2X4, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::MAT3X2() {
  return getToken(GLSLParser::MAT3X2, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::MAT3X3() {
  return getToken(GLSLParser::MAT3X3, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::MAT3X4() {
  return getToken(GLSLParser::MAT3X4, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::MAT4X2() {
  return getToken(GLSLParser::MAT4X2, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::MAT4X3() {
  return getToken(GLSLParser::MAT4X3, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::MAT4X4() {
  return getToken(GLSLParser::MAT4X4, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DMAT2() {
  return getToken(GLSLParser::DMAT2, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DMAT3() {
  return getToken(GLSLParser::DMAT3, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DMAT4() {
  return getToken(GLSLParser::DMAT4, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DMAT2X2() {
  return getToken(GLSLParser::DMAT2X2, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DMAT2X3() {
  return getToken(GLSLParser::DMAT2X3, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DMAT2X4() {
  return getToken(GLSLParser::DMAT2X4, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DMAT3X2() {
  return getToken(GLSLParser::DMAT3X2, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DMAT3X3() {
  return getToken(GLSLParser::DMAT3X3, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DMAT3X4() {
  return getToken(GLSLParser::DMAT3X4, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DMAT4X2() {
  return getToken(GLSLParser::DMAT4X2, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DMAT4X3() {
  return getToken(GLSLParser::DMAT4X3, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::DMAT4X4() {
  return getToken(GLSLParser::DMAT4X4, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::ATOMIC_UINT() {
  return getToken(GLSLParser::ATOMIC_UINT, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLER2D() {
  return getToken(GLSLParser::SAMPLER2D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLER3D() {
  return getToken(GLSLParser::SAMPLER3D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLERCUBE() {
  return getToken(GLSLParser::SAMPLERCUBE, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLER2DSHADOW() {
  return getToken(GLSLParser::SAMPLER2DSHADOW, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLERCUBESHADOW() {
  return getToken(GLSLParser::SAMPLERCUBESHADOW, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLER2DARRAY() {
  return getToken(GLSLParser::SAMPLER2DARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLER2DARRAYSHADOW() {
  return getToken(GLSLParser::SAMPLER2DARRAYSHADOW, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLERCUBEARRAY() {
  return getToken(GLSLParser::SAMPLERCUBEARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLERCUBEARRAYSHADOW() {
  return getToken(GLSLParser::SAMPLERCUBEARRAYSHADOW, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::ISAMPLER2D() {
  return getToken(GLSLParser::ISAMPLER2D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::ISAMPLER3D() {
  return getToken(GLSLParser::ISAMPLER3D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::ISAMPLERCUBE() {
  return getToken(GLSLParser::ISAMPLERCUBE, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::ISAMPLER2DARRAY() {
  return getToken(GLSLParser::ISAMPLER2DARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::ISAMPLERCUBEARRAY() {
  return getToken(GLSLParser::ISAMPLERCUBEARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::USAMPLER2D() {
  return getToken(GLSLParser::USAMPLER2D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::USAMPLER3D() {
  return getToken(GLSLParser::USAMPLER3D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::USAMPLERCUBE() {
  return getToken(GLSLParser::USAMPLERCUBE, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::USAMPLER2DARRAY() {
  return getToken(GLSLParser::USAMPLER2DARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::USAMPLERCUBEARRAY() {
  return getToken(GLSLParser::USAMPLERCUBEARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLER1D() {
  return getToken(GLSLParser::SAMPLER1D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLER1DSHADOW() {
  return getToken(GLSLParser::SAMPLER1DSHADOW, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLER1DARRAY() {
  return getToken(GLSLParser::SAMPLER1DARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLER1DARRAYSHADOW() {
  return getToken(GLSLParser::SAMPLER1DARRAYSHADOW, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::ISAMPLER1D() {
  return getToken(GLSLParser::ISAMPLER1D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::ISAMPLER1DARRAY() {
  return getToken(GLSLParser::ISAMPLER1DARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::USAMPLER1D() {
  return getToken(GLSLParser::USAMPLER1D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::USAMPLER1DARRAY() {
  return getToken(GLSLParser::USAMPLER1DARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLER2DRECT() {
  return getToken(GLSLParser::SAMPLER2DRECT, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLER2DRECTSHADOW() {
  return getToken(GLSLParser::SAMPLER2DRECTSHADOW, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::ISAMPLER2DRECT() {
  return getToken(GLSLParser::ISAMPLER2DRECT, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::USAMPLER2DRECT() {
  return getToken(GLSLParser::USAMPLER2DRECT, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLERBUFFER() {
  return getToken(GLSLParser::SAMPLERBUFFER, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::ISAMPLERBUFFER() {
  return getToken(GLSLParser::ISAMPLERBUFFER, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::USAMPLERBUFFER() {
  return getToken(GLSLParser::USAMPLERBUFFER, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLER2DMS() {
  return getToken(GLSLParser::SAMPLER2DMS, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::ISAMPLER2DMS() {
  return getToken(GLSLParser::ISAMPLER2DMS, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::USAMPLER2DMS() {
  return getToken(GLSLParser::USAMPLER2DMS, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::SAMPLER2DMSARRAY() {
  return getToken(GLSLParser::SAMPLER2DMSARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::ISAMPLER2DMSARRAY() {
  return getToken(GLSLParser::ISAMPLER2DMSARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::USAMPLER2DMSARRAY() {
  return getToken(GLSLParser::USAMPLER2DMSARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IMAGE2D() {
  return getToken(GLSLParser::IMAGE2D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IIMAGE2D() {
  return getToken(GLSLParser::IIMAGE2D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UIMAGE2D() {
  return getToken(GLSLParser::UIMAGE2D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IMAGE3D() {
  return getToken(GLSLParser::IMAGE3D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IIMAGE3D() {
  return getToken(GLSLParser::IIMAGE3D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UIMAGE3D() {
  return getToken(GLSLParser::UIMAGE3D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IMAGECUBE() {
  return getToken(GLSLParser::IMAGECUBE, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IIMAGECUBE() {
  return getToken(GLSLParser::IIMAGECUBE, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UIMAGECUBE() {
  return getToken(GLSLParser::UIMAGECUBE, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IMAGEBUFFER() {
  return getToken(GLSLParser::IMAGEBUFFER, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IIMAGEBUFFER() {
  return getToken(GLSLParser::IIMAGEBUFFER, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UIMAGEBUFFER() {
  return getToken(GLSLParser::UIMAGEBUFFER, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IMAGE1D() {
  return getToken(GLSLParser::IMAGE1D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IIMAGE1D() {
  return getToken(GLSLParser::IIMAGE1D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UIMAGE1D() {
  return getToken(GLSLParser::UIMAGE1D, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IMAGE1DARRAY() {
  return getToken(GLSLParser::IMAGE1DARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IIMAGE1DARRAY() {
  return getToken(GLSLParser::IIMAGE1DARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UIMAGE1DARRAY() {
  return getToken(GLSLParser::UIMAGE1DARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IMAGE2DRECT() {
  return getToken(GLSLParser::IMAGE2DRECT, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IIMAGE2DRECT() {
  return getToken(GLSLParser::IIMAGE2DRECT, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UIMAGE2DRECT() {
  return getToken(GLSLParser::UIMAGE2DRECT, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IMAGE2DARRAY() {
  return getToken(GLSLParser::IMAGE2DARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IIMAGE2DARRAY() {
  return getToken(GLSLParser::IIMAGE2DARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UIMAGE2DARRAY() {
  return getToken(GLSLParser::UIMAGE2DARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IMAGECUBEARRAY() {
  return getToken(GLSLParser::IMAGECUBEARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IIMAGECUBEARRAY() {
  return getToken(GLSLParser::IIMAGECUBEARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UIMAGECUBEARRAY() {
  return getToken(GLSLParser::UIMAGECUBEARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IMAGE2DMS() {
  return getToken(GLSLParser::IMAGE2DMS, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IIMAGE2DMS() {
  return getToken(GLSLParser::IIMAGE2DMS, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UIMAGE2DMS() {
  return getToken(GLSLParser::UIMAGE2DMS, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IMAGE2DMSARRAY() {
  return getToken(GLSLParser::IMAGE2DMSARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IIMAGE2DMSARRAY() {
  return getToken(GLSLParser::IIMAGE2DMSARRAY, 0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::UIMAGE2DMSARRAY() {
  return getToken(GLSLParser::UIMAGE2DMSARRAY, 0);
}

GLSLParser::StructSpecifierContext* GLSLParser::TypeSpecifierNonarrayContext::structSpecifier() {
  return getRuleContext<GLSLParser::StructSpecifierContext>(0);
}

tree::TerminalNode* GLSLParser::TypeSpecifierNonarrayContext::IDENTIFIER() {
  return getToken(GLSLParser::IDENTIFIER, 0);
}


size_t GLSLParser::TypeSpecifierNonarrayContext::getRuleIndex() const {
  return GLSLParser::RuleTypeSpecifierNonarray;
}


antlrcpp::Any GLSLParser::TypeSpecifierNonarrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifierNonarray(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::TypeSpecifierNonarrayContext* GLSLParser::typeSpecifierNonarray() {
  TypeSpecifierNonarrayContext *_localctx = _tracker.createInstance<TypeSpecifierNonarrayContext>(_ctx, getState());
  enterRule(_localctx, 94, GLSLParser::RuleTypeSpecifierNonarray);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(802);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GLSLParser::VOID_: {
        enterOuterAlt(_localctx, 1);
        setState(681);
        match(GLSLParser::VOID_);
        break;
      }

      case GLSLParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(682);
        match(GLSLParser::FLOAT);
        break;
      }

      case GLSLParser::DOUBLE: {
        enterOuterAlt(_localctx, 3);
        setState(683);
        match(GLSLParser::DOUBLE);
        break;
      }

      case GLSLParser::INT: {
        enterOuterAlt(_localctx, 4);
        setState(684);
        match(GLSLParser::INT);
        break;
      }

      case GLSLParser::UINT: {
        enterOuterAlt(_localctx, 5);
        setState(685);
        match(GLSLParser::UINT);
        break;
      }

      case GLSLParser::BOOL: {
        enterOuterAlt(_localctx, 6);
        setState(686);
        match(GLSLParser::BOOL);
        break;
      }

      case GLSLParser::VEC2: {
        enterOuterAlt(_localctx, 7);
        setState(687);
        match(GLSLParser::VEC2);
        break;
      }

      case GLSLParser::VEC3: {
        enterOuterAlt(_localctx, 8);
        setState(688);
        match(GLSLParser::VEC3);
        break;
      }

      case GLSLParser::VEC4: {
        enterOuterAlt(_localctx, 9);
        setState(689);
        match(GLSLParser::VEC4);
        break;
      }

      case GLSLParser::DVEC2: {
        enterOuterAlt(_localctx, 10);
        setState(690);
        match(GLSLParser::DVEC2);
        break;
      }

      case GLSLParser::DVEC3: {
        enterOuterAlt(_localctx, 11);
        setState(691);
        match(GLSLParser::DVEC3);
        break;
      }

      case GLSLParser::DVEC4: {
        enterOuterAlt(_localctx, 12);
        setState(692);
        match(GLSLParser::DVEC4);
        break;
      }

      case GLSLParser::BVEC2: {
        enterOuterAlt(_localctx, 13);
        setState(693);
        match(GLSLParser::BVEC2);
        break;
      }

      case GLSLParser::BVEC3: {
        enterOuterAlt(_localctx, 14);
        setState(694);
        match(GLSLParser::BVEC3);
        break;
      }

      case GLSLParser::BVEC4: {
        enterOuterAlt(_localctx, 15);
        setState(695);
        match(GLSLParser::BVEC4);
        break;
      }

      case GLSLParser::IVEC2: {
        enterOuterAlt(_localctx, 16);
        setState(696);
        match(GLSLParser::IVEC2);
        break;
      }

      case GLSLParser::IVEC3: {
        enterOuterAlt(_localctx, 17);
        setState(697);
        match(GLSLParser::IVEC3);
        break;
      }

      case GLSLParser::IVEC4: {
        enterOuterAlt(_localctx, 18);
        setState(698);
        match(GLSLParser::IVEC4);
        break;
      }

      case GLSLParser::UVEC2: {
        enterOuterAlt(_localctx, 19);
        setState(699);
        match(GLSLParser::UVEC2);
        break;
      }

      case GLSLParser::UVEC3: {
        enterOuterAlt(_localctx, 20);
        setState(700);
        match(GLSLParser::UVEC3);
        break;
      }

      case GLSLParser::UVEC4: {
        enterOuterAlt(_localctx, 21);
        setState(701);
        match(GLSLParser::UVEC4);
        break;
      }

      case GLSLParser::MAT2: {
        enterOuterAlt(_localctx, 22);
        setState(702);
        match(GLSLParser::MAT2);
        break;
      }

      case GLSLParser::MAT3: {
        enterOuterAlt(_localctx, 23);
        setState(703);
        match(GLSLParser::MAT3);
        break;
      }

      case GLSLParser::MAT4: {
        enterOuterAlt(_localctx, 24);
        setState(704);
        match(GLSLParser::MAT4);
        break;
      }

      case GLSLParser::MAT2X2: {
        enterOuterAlt(_localctx, 25);
        setState(705);
        match(GLSLParser::MAT2X2);
        break;
      }

      case GLSLParser::MAT2X3: {
        enterOuterAlt(_localctx, 26);
        setState(706);
        match(GLSLParser::MAT2X3);
        break;
      }

      case GLSLParser::MAT2X4: {
        enterOuterAlt(_localctx, 27);
        setState(707);
        match(GLSLParser::MAT2X4);
        break;
      }

      case GLSLParser::MAT3X2: {
        enterOuterAlt(_localctx, 28);
        setState(708);
        match(GLSLParser::MAT3X2);
        break;
      }

      case GLSLParser::MAT3X3: {
        enterOuterAlt(_localctx, 29);
        setState(709);
        match(GLSLParser::MAT3X3);
        break;
      }

      case GLSLParser::MAT3X4: {
        enterOuterAlt(_localctx, 30);
        setState(710);
        match(GLSLParser::MAT3X4);
        break;
      }

      case GLSLParser::MAT4X2: {
        enterOuterAlt(_localctx, 31);
        setState(711);
        match(GLSLParser::MAT4X2);
        break;
      }

      case GLSLParser::MAT4X3: {
        enterOuterAlt(_localctx, 32);
        setState(712);
        match(GLSLParser::MAT4X3);
        break;
      }

      case GLSLParser::MAT4X4: {
        enterOuterAlt(_localctx, 33);
        setState(713);
        match(GLSLParser::MAT4X4);
        break;
      }

      case GLSLParser::DMAT2: {
        enterOuterAlt(_localctx, 34);
        setState(714);
        match(GLSLParser::DMAT2);
        break;
      }

      case GLSLParser::DMAT3: {
        enterOuterAlt(_localctx, 35);
        setState(715);
        match(GLSLParser::DMAT3);
        break;
      }

      case GLSLParser::DMAT4: {
        enterOuterAlt(_localctx, 36);
        setState(716);
        match(GLSLParser::DMAT4);
        break;
      }

      case GLSLParser::DMAT2X2: {
        enterOuterAlt(_localctx, 37);
        setState(717);
        match(GLSLParser::DMAT2X2);
        break;
      }

      case GLSLParser::DMAT2X3: {
        enterOuterAlt(_localctx, 38);
        setState(718);
        match(GLSLParser::DMAT2X3);
        break;
      }

      case GLSLParser::DMAT2X4: {
        enterOuterAlt(_localctx, 39);
        setState(719);
        match(GLSLParser::DMAT2X4);
        break;
      }

      case GLSLParser::DMAT3X2: {
        enterOuterAlt(_localctx, 40);
        setState(720);
        match(GLSLParser::DMAT3X2);
        break;
      }

      case GLSLParser::DMAT3X3: {
        enterOuterAlt(_localctx, 41);
        setState(721);
        match(GLSLParser::DMAT3X3);
        break;
      }

      case GLSLParser::DMAT3X4: {
        enterOuterAlt(_localctx, 42);
        setState(722);
        match(GLSLParser::DMAT3X4);
        break;
      }

      case GLSLParser::DMAT4X2: {
        enterOuterAlt(_localctx, 43);
        setState(723);
        match(GLSLParser::DMAT4X2);
        break;
      }

      case GLSLParser::DMAT4X3: {
        enterOuterAlt(_localctx, 44);
        setState(724);
        match(GLSLParser::DMAT4X3);
        break;
      }

      case GLSLParser::DMAT4X4: {
        enterOuterAlt(_localctx, 45);
        setState(725);
        match(GLSLParser::DMAT4X4);
        break;
      }

      case GLSLParser::ATOMIC_UINT: {
        enterOuterAlt(_localctx, 46);
        setState(726);
        match(GLSLParser::ATOMIC_UINT);
        break;
      }

      case GLSLParser::SAMPLER2D: {
        enterOuterAlt(_localctx, 47);
        setState(727);
        match(GLSLParser::SAMPLER2D);
        break;
      }

      case GLSLParser::SAMPLER3D: {
        enterOuterAlt(_localctx, 48);
        setState(728);
        match(GLSLParser::SAMPLER3D);
        break;
      }

      case GLSLParser::SAMPLERCUBE: {
        enterOuterAlt(_localctx, 49);
        setState(729);
        match(GLSLParser::SAMPLERCUBE);
        break;
      }

      case GLSLParser::SAMPLER2DSHADOW: {
        enterOuterAlt(_localctx, 50);
        setState(730);
        match(GLSLParser::SAMPLER2DSHADOW);
        break;
      }

      case GLSLParser::SAMPLERCUBESHADOW: {
        enterOuterAlt(_localctx, 51);
        setState(731);
        match(GLSLParser::SAMPLERCUBESHADOW);
        break;
      }

      case GLSLParser::SAMPLER2DARRAY: {
        enterOuterAlt(_localctx, 52);
        setState(732);
        match(GLSLParser::SAMPLER2DARRAY);
        break;
      }

      case GLSLParser::SAMPLER2DARRAYSHADOW: {
        enterOuterAlt(_localctx, 53);
        setState(733);
        match(GLSLParser::SAMPLER2DARRAYSHADOW);
        break;
      }

      case GLSLParser::SAMPLERCUBEARRAY: {
        enterOuterAlt(_localctx, 54);
        setState(734);
        match(GLSLParser::SAMPLERCUBEARRAY);
        break;
      }

      case GLSLParser::SAMPLERCUBEARRAYSHADOW: {
        enterOuterAlt(_localctx, 55);
        setState(735);
        match(GLSLParser::SAMPLERCUBEARRAYSHADOW);
        break;
      }

      case GLSLParser::ISAMPLER2D: {
        enterOuterAlt(_localctx, 56);
        setState(736);
        match(GLSLParser::ISAMPLER2D);
        break;
      }

      case GLSLParser::ISAMPLER3D: {
        enterOuterAlt(_localctx, 57);
        setState(737);
        match(GLSLParser::ISAMPLER3D);
        break;
      }

      case GLSLParser::ISAMPLERCUBE: {
        enterOuterAlt(_localctx, 58);
        setState(738);
        match(GLSLParser::ISAMPLERCUBE);
        break;
      }

      case GLSLParser::ISAMPLER2DARRAY: {
        enterOuterAlt(_localctx, 59);
        setState(739);
        match(GLSLParser::ISAMPLER2DARRAY);
        break;
      }

      case GLSLParser::ISAMPLERCUBEARRAY: {
        enterOuterAlt(_localctx, 60);
        setState(740);
        match(GLSLParser::ISAMPLERCUBEARRAY);
        break;
      }

      case GLSLParser::USAMPLER2D: {
        enterOuterAlt(_localctx, 61);
        setState(741);
        match(GLSLParser::USAMPLER2D);
        break;
      }

      case GLSLParser::USAMPLER3D: {
        enterOuterAlt(_localctx, 62);
        setState(742);
        match(GLSLParser::USAMPLER3D);
        break;
      }

      case GLSLParser::USAMPLERCUBE: {
        enterOuterAlt(_localctx, 63);
        setState(743);
        match(GLSLParser::USAMPLERCUBE);
        break;
      }

      case GLSLParser::USAMPLER2DARRAY: {
        enterOuterAlt(_localctx, 64);
        setState(744);
        match(GLSLParser::USAMPLER2DARRAY);
        break;
      }

      case GLSLParser::USAMPLERCUBEARRAY: {
        enterOuterAlt(_localctx, 65);
        setState(745);
        match(GLSLParser::USAMPLERCUBEARRAY);
        break;
      }

      case GLSLParser::SAMPLER1D: {
        enterOuterAlt(_localctx, 66);
        setState(746);
        match(GLSLParser::SAMPLER1D);
        break;
      }

      case GLSLParser::SAMPLER1DSHADOW: {
        enterOuterAlt(_localctx, 67);
        setState(747);
        match(GLSLParser::SAMPLER1DSHADOW);
        break;
      }

      case GLSLParser::SAMPLER1DARRAY: {
        enterOuterAlt(_localctx, 68);
        setState(748);
        match(GLSLParser::SAMPLER1DARRAY);
        break;
      }

      case GLSLParser::SAMPLER1DARRAYSHADOW: {
        enterOuterAlt(_localctx, 69);
        setState(749);
        match(GLSLParser::SAMPLER1DARRAYSHADOW);
        break;
      }

      case GLSLParser::ISAMPLER1D: {
        enterOuterAlt(_localctx, 70);
        setState(750);
        match(GLSLParser::ISAMPLER1D);
        break;
      }

      case GLSLParser::ISAMPLER1DARRAY: {
        enterOuterAlt(_localctx, 71);
        setState(751);
        match(GLSLParser::ISAMPLER1DARRAY);
        break;
      }

      case GLSLParser::USAMPLER1D: {
        enterOuterAlt(_localctx, 72);
        setState(752);
        match(GLSLParser::USAMPLER1D);
        break;
      }

      case GLSLParser::USAMPLER1DARRAY: {
        enterOuterAlt(_localctx, 73);
        setState(753);
        match(GLSLParser::USAMPLER1DARRAY);
        break;
      }

      case GLSLParser::SAMPLER2DRECT: {
        enterOuterAlt(_localctx, 74);
        setState(754);
        match(GLSLParser::SAMPLER2DRECT);
        break;
      }

      case GLSLParser::SAMPLER2DRECTSHADOW: {
        enterOuterAlt(_localctx, 75);
        setState(755);
        match(GLSLParser::SAMPLER2DRECTSHADOW);
        break;
      }

      case GLSLParser::ISAMPLER2DRECT: {
        enterOuterAlt(_localctx, 76);
        setState(756);
        match(GLSLParser::ISAMPLER2DRECT);
        break;
      }

      case GLSLParser::USAMPLER2DRECT: {
        enterOuterAlt(_localctx, 77);
        setState(757);
        match(GLSLParser::USAMPLER2DRECT);
        break;
      }

      case GLSLParser::SAMPLERBUFFER: {
        enterOuterAlt(_localctx, 78);
        setState(758);
        match(GLSLParser::SAMPLERBUFFER);
        break;
      }

      case GLSLParser::ISAMPLERBUFFER: {
        enterOuterAlt(_localctx, 79);
        setState(759);
        match(GLSLParser::ISAMPLERBUFFER);
        break;
      }

      case GLSLParser::USAMPLERBUFFER: {
        enterOuterAlt(_localctx, 80);
        setState(760);
        match(GLSLParser::USAMPLERBUFFER);
        break;
      }

      case GLSLParser::SAMPLER2DMS: {
        enterOuterAlt(_localctx, 81);
        setState(761);
        match(GLSLParser::SAMPLER2DMS);
        break;
      }

      case GLSLParser::ISAMPLER2DMS: {
        enterOuterAlt(_localctx, 82);
        setState(762);
        match(GLSLParser::ISAMPLER2DMS);
        break;
      }

      case GLSLParser::USAMPLER2DMS: {
        enterOuterAlt(_localctx, 83);
        setState(763);
        match(GLSLParser::USAMPLER2DMS);
        break;
      }

      case GLSLParser::SAMPLER2DMSARRAY: {
        enterOuterAlt(_localctx, 84);
        setState(764);
        match(GLSLParser::SAMPLER2DMSARRAY);
        break;
      }

      case GLSLParser::ISAMPLER2DMSARRAY: {
        enterOuterAlt(_localctx, 85);
        setState(765);
        match(GLSLParser::ISAMPLER2DMSARRAY);
        break;
      }

      case GLSLParser::USAMPLER2DMSARRAY: {
        enterOuterAlt(_localctx, 86);
        setState(766);
        match(GLSLParser::USAMPLER2DMSARRAY);
        break;
      }

      case GLSLParser::IMAGE2D: {
        enterOuterAlt(_localctx, 87);
        setState(767);
        match(GLSLParser::IMAGE2D);
        break;
      }

      case GLSLParser::IIMAGE2D: {
        enterOuterAlt(_localctx, 88);
        setState(768);
        match(GLSLParser::IIMAGE2D);
        break;
      }

      case GLSLParser::UIMAGE2D: {
        enterOuterAlt(_localctx, 89);
        setState(769);
        match(GLSLParser::UIMAGE2D);
        break;
      }

      case GLSLParser::IMAGE3D: {
        enterOuterAlt(_localctx, 90);
        setState(770);
        match(GLSLParser::IMAGE3D);
        break;
      }

      case GLSLParser::IIMAGE3D: {
        enterOuterAlt(_localctx, 91);
        setState(771);
        match(GLSLParser::IIMAGE3D);
        break;
      }

      case GLSLParser::UIMAGE3D: {
        enterOuterAlt(_localctx, 92);
        setState(772);
        match(GLSLParser::UIMAGE3D);
        break;
      }

      case GLSLParser::IMAGECUBE: {
        enterOuterAlt(_localctx, 93);
        setState(773);
        match(GLSLParser::IMAGECUBE);
        break;
      }

      case GLSLParser::IIMAGECUBE: {
        enterOuterAlt(_localctx, 94);
        setState(774);
        match(GLSLParser::IIMAGECUBE);
        break;
      }

      case GLSLParser::UIMAGECUBE: {
        enterOuterAlt(_localctx, 95);
        setState(775);
        match(GLSLParser::UIMAGECUBE);
        break;
      }

      case GLSLParser::IMAGEBUFFER: {
        enterOuterAlt(_localctx, 96);
        setState(776);
        match(GLSLParser::IMAGEBUFFER);
        break;
      }

      case GLSLParser::IIMAGEBUFFER: {
        enterOuterAlt(_localctx, 97);
        setState(777);
        match(GLSLParser::IIMAGEBUFFER);
        break;
      }

      case GLSLParser::UIMAGEBUFFER: {
        enterOuterAlt(_localctx, 98);
        setState(778);
        match(GLSLParser::UIMAGEBUFFER);
        break;
      }

      case GLSLParser::IMAGE1D: {
        enterOuterAlt(_localctx, 99);
        setState(779);
        match(GLSLParser::IMAGE1D);
        break;
      }

      case GLSLParser::IIMAGE1D: {
        enterOuterAlt(_localctx, 100);
        setState(780);
        match(GLSLParser::IIMAGE1D);
        break;
      }

      case GLSLParser::UIMAGE1D: {
        enterOuterAlt(_localctx, 101);
        setState(781);
        match(GLSLParser::UIMAGE1D);
        break;
      }

      case GLSLParser::IMAGE1DARRAY: {
        enterOuterAlt(_localctx, 102);
        setState(782);
        match(GLSLParser::IMAGE1DARRAY);
        break;
      }

      case GLSLParser::IIMAGE1DARRAY: {
        enterOuterAlt(_localctx, 103);
        setState(783);
        match(GLSLParser::IIMAGE1DARRAY);
        break;
      }

      case GLSLParser::UIMAGE1DARRAY: {
        enterOuterAlt(_localctx, 104);
        setState(784);
        match(GLSLParser::UIMAGE1DARRAY);
        break;
      }

      case GLSLParser::IMAGE2DRECT: {
        enterOuterAlt(_localctx, 105);
        setState(785);
        match(GLSLParser::IMAGE2DRECT);
        break;
      }

      case GLSLParser::IIMAGE2DRECT: {
        enterOuterAlt(_localctx, 106);
        setState(786);
        match(GLSLParser::IIMAGE2DRECT);
        break;
      }

      case GLSLParser::UIMAGE2DRECT: {
        enterOuterAlt(_localctx, 107);
        setState(787);
        match(GLSLParser::UIMAGE2DRECT);
        break;
      }

      case GLSLParser::IMAGE2DARRAY: {
        enterOuterAlt(_localctx, 108);
        setState(788);
        match(GLSLParser::IMAGE2DARRAY);
        break;
      }

      case GLSLParser::IIMAGE2DARRAY: {
        enterOuterAlt(_localctx, 109);
        setState(789);
        match(GLSLParser::IIMAGE2DARRAY);
        break;
      }

      case GLSLParser::UIMAGE2DARRAY: {
        enterOuterAlt(_localctx, 110);
        setState(790);
        match(GLSLParser::UIMAGE2DARRAY);
        break;
      }

      case GLSLParser::IMAGECUBEARRAY: {
        enterOuterAlt(_localctx, 111);
        setState(791);
        match(GLSLParser::IMAGECUBEARRAY);
        break;
      }

      case GLSLParser::IIMAGECUBEARRAY: {
        enterOuterAlt(_localctx, 112);
        setState(792);
        match(GLSLParser::IIMAGECUBEARRAY);
        break;
      }

      case GLSLParser::UIMAGECUBEARRAY: {
        enterOuterAlt(_localctx, 113);
        setState(793);
        match(GLSLParser::UIMAGECUBEARRAY);
        break;
      }

      case GLSLParser::IMAGE2DMS: {
        enterOuterAlt(_localctx, 114);
        setState(794);
        match(GLSLParser::IMAGE2DMS);
        break;
      }

      case GLSLParser::IIMAGE2DMS: {
        enterOuterAlt(_localctx, 115);
        setState(795);
        match(GLSLParser::IIMAGE2DMS);
        break;
      }

      case GLSLParser::UIMAGE2DMS: {
        enterOuterAlt(_localctx, 116);
        setState(796);
        match(GLSLParser::UIMAGE2DMS);
        break;
      }

      case GLSLParser::IMAGE2DMSARRAY: {
        enterOuterAlt(_localctx, 117);
        setState(797);
        match(GLSLParser::IMAGE2DMSARRAY);
        break;
      }

      case GLSLParser::IIMAGE2DMSARRAY: {
        enterOuterAlt(_localctx, 118);
        setState(798);
        match(GLSLParser::IIMAGE2DMSARRAY);
        break;
      }

      case GLSLParser::UIMAGE2DMSARRAY: {
        enterOuterAlt(_localctx, 119);
        setState(799);
        match(GLSLParser::UIMAGE2DMSARRAY);
        break;
      }

      case GLSLParser::STRUCT: {
        enterOuterAlt(_localctx, 120);
        setState(800);
        structSpecifier();
        break;
      }

      case GLSLParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 121);
        setState(801);
        match(GLSLParser::IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrecisionQualifierContext ------------------------------------------------------------------

GLSLParser::PrecisionQualifierContext::PrecisionQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::PrecisionQualifierContext::HIGH_PRECISION() {
  return getToken(GLSLParser::HIGH_PRECISION, 0);
}

tree::TerminalNode* GLSLParser::PrecisionQualifierContext::MEDIUM_PRECISION() {
  return getToken(GLSLParser::MEDIUM_PRECISION, 0);
}

tree::TerminalNode* GLSLParser::PrecisionQualifierContext::LOW_PRECISION() {
  return getToken(GLSLParser::LOW_PRECISION, 0);
}


size_t GLSLParser::PrecisionQualifierContext::getRuleIndex() const {
  return GLSLParser::RulePrecisionQualifier;
}


antlrcpp::Any GLSLParser::PrecisionQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitPrecisionQualifier(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::PrecisionQualifierContext* GLSLParser::precisionQualifier() {
  PrecisionQualifierContext *_localctx = _tracker.createInstance<PrecisionQualifierContext>(_ctx, getState());
  enterRule(_localctx, 96, GLSLParser::RulePrecisionQualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(804);
    _la = _input->LA(1);
    if (!(((((_la - 208) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 208)) & ((1ULL << (GLSLParser::HIGH_PRECISION - 208))
      | (1ULL << (GLSLParser::MEDIUM_PRECISION - 208))
      | (1ULL << (GLSLParser::LOW_PRECISION - 208)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructSpecifierContext ------------------------------------------------------------------

GLSLParser::StructSpecifierContext::StructSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::StructSpecifierContext::STRUCT() {
  return getToken(GLSLParser::STRUCT, 0);
}

tree::TerminalNode* GLSLParser::StructSpecifierContext::IDENTIFIER() {
  return getToken(GLSLParser::IDENTIFIER, 0);
}

tree::TerminalNode* GLSLParser::StructSpecifierContext::LEFT_BRACE() {
  return getToken(GLSLParser::LEFT_BRACE, 0);
}

GLSLParser::StructDeclarationListContext* GLSLParser::StructSpecifierContext::structDeclarationList() {
  return getRuleContext<GLSLParser::StructDeclarationListContext>(0);
}

tree::TerminalNode* GLSLParser::StructSpecifierContext::RIGHT_BRACE() {
  return getToken(GLSLParser::RIGHT_BRACE, 0);
}


size_t GLSLParser::StructSpecifierContext::getRuleIndex() const {
  return GLSLParser::RuleStructSpecifier;
}


antlrcpp::Any GLSLParser::StructSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitStructSpecifier(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::StructSpecifierContext* GLSLParser::structSpecifier() {
  StructSpecifierContext *_localctx = _tracker.createInstance<StructSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 98, GLSLParser::RuleStructSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(817);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(806);
      match(GLSLParser::STRUCT);
      setState(807);
      match(GLSLParser::IDENTIFIER);
      setState(808);
      match(GLSLParser::LEFT_BRACE);
      setState(809);
      structDeclarationList(0);
      setState(810);
      match(GLSLParser::RIGHT_BRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(812);
      match(GLSLParser::STRUCT);
      setState(813);
      match(GLSLParser::LEFT_BRACE);
      setState(814);
      structDeclarationList(0);
      setState(815);
      match(GLSLParser::RIGHT_BRACE);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclarationListContext ------------------------------------------------------------------

GLSLParser::StructDeclarationListContext::StructDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::StructDeclarationContext* GLSLParser::StructDeclarationListContext::structDeclaration() {
  return getRuleContext<GLSLParser::StructDeclarationContext>(0);
}

GLSLParser::StructDeclarationListContext* GLSLParser::StructDeclarationListContext::structDeclarationList() {
  return getRuleContext<GLSLParser::StructDeclarationListContext>(0);
}


size_t GLSLParser::StructDeclarationListContext::getRuleIndex() const {
  return GLSLParser::RuleStructDeclarationList;
}


antlrcpp::Any GLSLParser::StructDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitStructDeclarationList(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::StructDeclarationListContext* GLSLParser::structDeclarationList() {
   return structDeclarationList(0);
}

GLSLParser::StructDeclarationListContext* GLSLParser::structDeclarationList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::StructDeclarationListContext *_localctx = _tracker.createInstance<StructDeclarationListContext>(_ctx, parentState);
  GLSLParser::StructDeclarationListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 100;
  enterRecursionRule(_localctx, 100, GLSLParser::RuleStructDeclarationList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(820);
    structDeclaration();
    _ctx->stop = _input->LT(-1);
    setState(826);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StructDeclarationListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStructDeclarationList);
        setState(822);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(823);
        structDeclaration(); 
      }
      setState(828);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StructDeclarationContext ------------------------------------------------------------------

GLSLParser::StructDeclarationContext::StructDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::TypeSpecifierContext* GLSLParser::StructDeclarationContext::typeSpecifier() {
  return getRuleContext<GLSLParser::TypeSpecifierContext>(0);
}

GLSLParser::StructDeclaratorListContext* GLSLParser::StructDeclarationContext::structDeclaratorList() {
  return getRuleContext<GLSLParser::StructDeclaratorListContext>(0);
}

tree::TerminalNode* GLSLParser::StructDeclarationContext::SEMICOLON() {
  return getToken(GLSLParser::SEMICOLON, 0);
}

GLSLParser::TypeQualifierContext* GLSLParser::StructDeclarationContext::typeQualifier() {
  return getRuleContext<GLSLParser::TypeQualifierContext>(0);
}


size_t GLSLParser::StructDeclarationContext::getRuleIndex() const {
  return GLSLParser::RuleStructDeclaration;
}


antlrcpp::Any GLSLParser::StructDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitStructDeclaration(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::StructDeclarationContext* GLSLParser::structDeclaration() {
  StructDeclarationContext *_localctx = _tracker.createInstance<StructDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 102, GLSLParser::RuleStructDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(838);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GLSLParser::BOOL:
      case GLSLParser::FLOAT:
      case GLSLParser::INT:
      case GLSLParser::UINT:
      case GLSLParser::DOUBLE:
      case GLSLParser::BVEC2:
      case GLSLParser::BVEC3:
      case GLSLParser::BVEC4:
      case GLSLParser::IVEC2:
      case GLSLParser::IVEC3:
      case GLSLParser::IVEC4:
      case GLSLParser::UVEC2:
      case GLSLParser::UVEC3:
      case GLSLParser::UVEC4:
      case GLSLParser::VEC2:
      case GLSLParser::VEC3:
      case GLSLParser::VEC4:
      case GLSLParser::MAT2:
      case GLSLParser::MAT3:
      case GLSLParser::MAT4:
      case GLSLParser::MAT2X2:
      case GLSLParser::MAT2X3:
      case GLSLParser::MAT2X4:
      case GLSLParser::MAT3X2:
      case GLSLParser::MAT3X3:
      case GLSLParser::MAT3X4:
      case GLSLParser::MAT4X2:
      case GLSLParser::MAT4X3:
      case GLSLParser::MAT4X4:
      case GLSLParser::DVEC2:
      case GLSLParser::DVEC3:
      case GLSLParser::DVEC4:
      case GLSLParser::DMAT2:
      case GLSLParser::DMAT3:
      case GLSLParser::DMAT4:
      case GLSLParser::DMAT2X2:
      case GLSLParser::DMAT2X3:
      case GLSLParser::DMAT2X4:
      case GLSLParser::DMAT3X2:
      case GLSLParser::DMAT3X3:
      case GLSLParser::DMAT3X4:
      case GLSLParser::DMAT4X2:
      case GLSLParser::DMAT4X3:
      case GLSLParser::DMAT4X4:
      case GLSLParser::ATOMIC_UINT:
      case GLSLParser::SAMPLER2D:
      case GLSLParser::SAMPLER3D:
      case GLSLParser::SAMPLERCUBE:
      case GLSLParser::SAMPLER2DSHADOW:
      case GLSLParser::SAMPLERCUBESHADOW:
      case GLSLParser::SAMPLER2DARRAY:
      case GLSLParser::SAMPLER2DARRAYSHADOW:
      case GLSLParser::ISAMPLER2D:
      case GLSLParser::ISAMPLER3D:
      case GLSLParser::ISAMPLERCUBE:
      case GLSLParser::ISAMPLER2DARRAY:
      case GLSLParser::USAMPLER2D:
      case GLSLParser::USAMPLER3D:
      case GLSLParser::USAMPLERCUBE:
      case GLSLParser::USAMPLER2DARRAY:
      case GLSLParser::SAMPLER1D:
      case GLSLParser::SAMPLER1DSHADOW:
      case GLSLParser::SAMPLER1DARRAY:
      case GLSLParser::SAMPLER1DARRAYSHADOW:
      case GLSLParser::ISAMPLER1D:
      case GLSLParser::ISAMPLER1DARRAY:
      case GLSLParser::USAMPLER1D:
      case GLSLParser::USAMPLER1DARRAY:
      case GLSLParser::SAMPLER2DRECT:
      case GLSLParser::SAMPLER2DRECTSHADOW:
      case GLSLParser::ISAMPLER2DRECT:
      case GLSLParser::USAMPLER2DRECT:
      case GLSLParser::SAMPLERBUFFER:
      case GLSLParser::ISAMPLERBUFFER:
      case GLSLParser::USAMPLERBUFFER:
      case GLSLParser::SAMPLERCUBEARRAY:
      case GLSLParser::SAMPLERCUBEARRAYSHADOW:
      case GLSLParser::ISAMPLERCUBEARRAY:
      case GLSLParser::USAMPLERCUBEARRAY:
      case GLSLParser::SAMPLER2DMS:
      case GLSLParser::ISAMPLER2DMS:
      case GLSLParser::USAMPLER2DMS:
      case GLSLParser::SAMPLER2DMSARRAY:
      case GLSLParser::ISAMPLER2DMSARRAY:
      case GLSLParser::USAMPLER2DMSARRAY:
      case GLSLParser::IMAGE2D:
      case GLSLParser::IIMAGE2D:
      case GLSLParser::UIMAGE2D:
      case GLSLParser::IMAGE3D:
      case GLSLParser::IIMAGE3D:
      case GLSLParser::UIMAGE3D:
      case GLSLParser::IMAGECUBE:
      case GLSLParser::IIMAGECUBE:
      case GLSLParser::UIMAGECUBE:
      case GLSLParser::IMAGEBUFFER:
      case GLSLParser::IIMAGEBUFFER:
      case GLSLParser::UIMAGEBUFFER:
      case GLSLParser::IMAGE2DARRAY:
      case GLSLParser::IIMAGE2DARRAY:
      case GLSLParser::UIMAGE2DARRAY:
      case GLSLParser::IMAGECUBEARRAY:
      case GLSLParser::IIMAGECUBEARRAY:
      case GLSLParser::UIMAGECUBEARRAY:
      case GLSLParser::IMAGE1D:
      case GLSLParser::IIMAGE1D:
      case GLSLParser::UIMAGE1D:
      case GLSLParser::IMAGE1DARRAY:
      case GLSLParser::IIMAGE1DARRAY:
      case GLSLParser::UIMAGE1DARRAY:
      case GLSLParser::IMAGE2DRECT:
      case GLSLParser::IIMAGE2DRECT:
      case GLSLParser::UIMAGE2DRECT:
      case GLSLParser::IMAGE2DMS:
      case GLSLParser::IIMAGE2DMS:
      case GLSLParser::UIMAGE2DMS:
      case GLSLParser::IMAGE2DMSARRAY:
      case GLSLParser::IIMAGE2DMSARRAY:
      case GLSLParser::UIMAGE2DMSARRAY:
      case GLSLParser::STRUCT:
      case GLSLParser::VOID_:
      case GLSLParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(829);
        typeSpecifier();
        setState(830);
        structDeclaratorList(0);
        setState(831);
        match(GLSLParser::SEMICOLON);
        break;
      }

      case GLSLParser::CONST_:
      case GLSLParser::CENTROID:
      case GLSLParser::IN_:
      case GLSLParser::OUT_:
      case GLSLParser::INOUT:
      case GLSLParser::UNIFORM:
      case GLSLParser::PATCH:
      case GLSLParser::SAMPLE:
      case GLSLParser::BUFFER:
      case GLSLParser::SHARED:
      case GLSLParser::COHERENT:
      case GLSLParser::VOLATILE:
      case GLSLParser::RESTRICT:
      case GLSLParser::READONLY:
      case GLSLParser::WRITEONLY:
      case GLSLParser::NOPERSPECTIVE:
      case GLSLParser::FLAT:
      case GLSLParser::SMOOTH:
      case GLSLParser::LAYOUT:
      case GLSLParser::SUBROUTINE:
      case GLSLParser::INVARIANT:
      case GLSLParser::PRECISE:
      case GLSLParser::HIGH_PRECISION:
      case GLSLParser::MEDIUM_PRECISION:
      case GLSLParser::LOW_PRECISION: {
        enterOuterAlt(_localctx, 2);
        setState(833);
        typeQualifier(0);
        setState(834);
        typeSpecifier();
        setState(835);
        structDeclaratorList(0);
        setState(836);
        match(GLSLParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclaratorListContext ------------------------------------------------------------------

GLSLParser::StructDeclaratorListContext::StructDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::StructDeclaratorContext* GLSLParser::StructDeclaratorListContext::structDeclarator() {
  return getRuleContext<GLSLParser::StructDeclaratorContext>(0);
}

GLSLParser::StructDeclaratorListContext* GLSLParser::StructDeclaratorListContext::structDeclaratorList() {
  return getRuleContext<GLSLParser::StructDeclaratorListContext>(0);
}

tree::TerminalNode* GLSLParser::StructDeclaratorListContext::COMMA() {
  return getToken(GLSLParser::COMMA, 0);
}


size_t GLSLParser::StructDeclaratorListContext::getRuleIndex() const {
  return GLSLParser::RuleStructDeclaratorList;
}


antlrcpp::Any GLSLParser::StructDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitStructDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::StructDeclaratorListContext* GLSLParser::structDeclaratorList() {
   return structDeclaratorList(0);
}

GLSLParser::StructDeclaratorListContext* GLSLParser::structDeclaratorList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::StructDeclaratorListContext *_localctx = _tracker.createInstance<StructDeclaratorListContext>(_ctx, parentState);
  GLSLParser::StructDeclaratorListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 104;
  enterRecursionRule(_localctx, 104, GLSLParser::RuleStructDeclaratorList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(841);
    structDeclarator();
    _ctx->stop = _input->LT(-1);
    setState(848);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StructDeclaratorListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStructDeclaratorList);
        setState(843);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(844);
        match(GLSLParser::COMMA);
        setState(845);
        structDeclarator(); 
      }
      setState(850);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StructDeclaratorContext ------------------------------------------------------------------

GLSLParser::StructDeclaratorContext::StructDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::StructDeclaratorContext::IDENTIFIER() {
  return getToken(GLSLParser::IDENTIFIER, 0);
}

GLSLParser::ArraySpecifierContext* GLSLParser::StructDeclaratorContext::arraySpecifier() {
  return getRuleContext<GLSLParser::ArraySpecifierContext>(0);
}


size_t GLSLParser::StructDeclaratorContext::getRuleIndex() const {
  return GLSLParser::RuleStructDeclarator;
}


antlrcpp::Any GLSLParser::StructDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitStructDeclarator(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::StructDeclaratorContext* GLSLParser::structDeclarator() {
  StructDeclaratorContext *_localctx = _tracker.createInstance<StructDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 106, GLSLParser::RuleStructDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(854);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(851);
      match(GLSLParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(852);
      match(GLSLParser::IDENTIFIER);
      setState(853);
      arraySpecifier(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

GLSLParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::AssignmentExpressionContext* GLSLParser::InitializerContext::assignmentExpression() {
  return getRuleContext<GLSLParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::InitializerContext::LEFT_BRACE() {
  return getToken(GLSLParser::LEFT_BRACE, 0);
}

GLSLParser::InitializerListContext* GLSLParser::InitializerContext::initializerList() {
  return getRuleContext<GLSLParser::InitializerListContext>(0);
}

tree::TerminalNode* GLSLParser::InitializerContext::RIGHT_BRACE() {
  return getToken(GLSLParser::RIGHT_BRACE, 0);
}

tree::TerminalNode* GLSLParser::InitializerContext::COMMA() {
  return getToken(GLSLParser::COMMA, 0);
}


size_t GLSLParser::InitializerContext::getRuleIndex() const {
  return GLSLParser::RuleInitializer;
}


antlrcpp::Any GLSLParser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::InitializerContext* GLSLParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 108, GLSLParser::RuleInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(866);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(856);
      assignmentExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(857);
      match(GLSLParser::LEFT_BRACE);
      setState(858);
      initializerList(0);
      setState(859);
      match(GLSLParser::RIGHT_BRACE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(861);
      match(GLSLParser::LEFT_BRACE);
      setState(862);
      initializerList(0);
      setState(863);
      match(GLSLParser::COMMA);
      setState(864);
      match(GLSLParser::RIGHT_BRACE);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerListContext ------------------------------------------------------------------

GLSLParser::InitializerListContext::InitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::InitializerContext* GLSLParser::InitializerListContext::initializer() {
  return getRuleContext<GLSLParser::InitializerContext>(0);
}

GLSLParser::InitializerListContext* GLSLParser::InitializerListContext::initializerList() {
  return getRuleContext<GLSLParser::InitializerListContext>(0);
}

tree::TerminalNode* GLSLParser::InitializerListContext::COMMA() {
  return getToken(GLSLParser::COMMA, 0);
}


size_t GLSLParser::InitializerListContext::getRuleIndex() const {
  return GLSLParser::RuleInitializerList;
}


antlrcpp::Any GLSLParser::InitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitInitializerList(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::InitializerListContext* GLSLParser::initializerList() {
   return initializerList(0);
}

GLSLParser::InitializerListContext* GLSLParser::initializerList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::InitializerListContext *_localctx = _tracker.createInstance<InitializerListContext>(_ctx, parentState);
  GLSLParser::InitializerListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 110;
  enterRecursionRule(_localctx, 110, GLSLParser::RuleInitializerList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(869);
    initializer();
    _ctx->stop = _input->LT(-1);
    setState(876);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitializerListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitializerList);
        setState(871);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(872);
        match(GLSLParser::COMMA);
        setState(873);
        initializer(); 
      }
      setState(878);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DeclarationStatementContext ------------------------------------------------------------------

GLSLParser::DeclarationStatementContext::DeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::DeclarationContext* GLSLParser::DeclarationStatementContext::declaration() {
  return getRuleContext<GLSLParser::DeclarationContext>(0);
}


size_t GLSLParser::DeclarationStatementContext::getRuleIndex() const {
  return GLSLParser::RuleDeclarationStatement;
}


antlrcpp::Any GLSLParser::DeclarationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitDeclarationStatement(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::DeclarationStatementContext* GLSLParser::declarationStatement() {
  DeclarationStatementContext *_localctx = _tracker.createInstance<DeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 112, GLSLParser::RuleDeclarationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(879);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

GLSLParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::CompundStatementContext* GLSLParser::StatementContext::compundStatement() {
  return getRuleContext<GLSLParser::CompundStatementContext>(0);
}

GLSLParser::SimpleStatementContext* GLSLParser::StatementContext::simpleStatement() {
  return getRuleContext<GLSLParser::SimpleStatementContext>(0);
}


size_t GLSLParser::StatementContext::getRuleIndex() const {
  return GLSLParser::RuleStatement;
}


antlrcpp::Any GLSLParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::StatementContext* GLSLParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 114, GLSLParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(883);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GLSLParser::LEFT_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(881);
        compundStatement();
        break;
      }

      case GLSLParser::CONST_:
      case GLSLParser::BOOL:
      case GLSLParser::FLOAT:
      case GLSLParser::INT:
      case GLSLParser::UINT:
      case GLSLParser::DOUBLE:
      case GLSLParser::BVEC2:
      case GLSLParser::BVEC3:
      case GLSLParser::BVEC4:
      case GLSLParser::IVEC2:
      case GLSLParser::IVEC3:
      case GLSLParser::IVEC4:
      case GLSLParser::UVEC2:
      case GLSLParser::UVEC3:
      case GLSLParser::UVEC4:
      case GLSLParser::VEC2:
      case GLSLParser::VEC3:
      case GLSLParser::VEC4:
      case GLSLParser::MAT2:
      case GLSLParser::MAT3:
      case GLSLParser::MAT4:
      case GLSLParser::MAT2X2:
      case GLSLParser::MAT2X3:
      case GLSLParser::MAT2X4:
      case GLSLParser::MAT3X2:
      case GLSLParser::MAT3X3:
      case GLSLParser::MAT3X4:
      case GLSLParser::MAT4X2:
      case GLSLParser::MAT4X3:
      case GLSLParser::MAT4X4:
      case GLSLParser::DVEC2:
      case GLSLParser::DVEC3:
      case GLSLParser::DVEC4:
      case GLSLParser::DMAT2:
      case GLSLParser::DMAT3:
      case GLSLParser::DMAT4:
      case GLSLParser::DMAT2X2:
      case GLSLParser::DMAT2X3:
      case GLSLParser::DMAT2X4:
      case GLSLParser::DMAT3X2:
      case GLSLParser::DMAT3X3:
      case GLSLParser::DMAT3X4:
      case GLSLParser::DMAT4X2:
      case GLSLParser::DMAT4X3:
      case GLSLParser::DMAT4X4:
      case GLSLParser::CENTROID:
      case GLSLParser::IN_:
      case GLSLParser::OUT_:
      case GLSLParser::INOUT:
      case GLSLParser::UNIFORM:
      case GLSLParser::PATCH:
      case GLSLParser::SAMPLE:
      case GLSLParser::BUFFER:
      case GLSLParser::SHARED:
      case GLSLParser::COHERENT:
      case GLSLParser::VOLATILE:
      case GLSLParser::RESTRICT:
      case GLSLParser::READONLY:
      case GLSLParser::WRITEONLY:
      case GLSLParser::NOPERSPECTIVE:
      case GLSLParser::FLAT:
      case GLSLParser::SMOOTH:
      case GLSLParser::LAYOUT:
      case GLSLParser::ATOMIC_UINT:
      case GLSLParser::SAMPLER2D:
      case GLSLParser::SAMPLER3D:
      case GLSLParser::SAMPLERCUBE:
      case GLSLParser::SAMPLER2DSHADOW:
      case GLSLParser::SAMPLERCUBESHADOW:
      case GLSLParser::SAMPLER2DARRAY:
      case GLSLParser::SAMPLER2DARRAYSHADOW:
      case GLSLParser::ISAMPLER2D:
      case GLSLParser::ISAMPLER3D:
      case GLSLParser::ISAMPLERCUBE:
      case GLSLParser::ISAMPLER2DARRAY:
      case GLSLParser::USAMPLER2D:
      case GLSLParser::USAMPLER3D:
      case GLSLParser::USAMPLERCUBE:
      case GLSLParser::USAMPLER2DARRAY:
      case GLSLParser::SAMPLER1D:
      case GLSLParser::SAMPLER1DSHADOW:
      case GLSLParser::SAMPLER1DARRAY:
      case GLSLParser::SAMPLER1DARRAYSHADOW:
      case GLSLParser::ISAMPLER1D:
      case GLSLParser::ISAMPLER1DARRAY:
      case GLSLParser::USAMPLER1D:
      case GLSLParser::USAMPLER1DARRAY:
      case GLSLParser::SAMPLER2DRECT:
      case GLSLParser::SAMPLER2DRECTSHADOW:
      case GLSLParser::ISAMPLER2DRECT:
      case GLSLParser::USAMPLER2DRECT:
      case GLSLParser::SAMPLERBUFFER:
      case GLSLParser::ISAMPLERBUFFER:
      case GLSLParser::USAMPLERBUFFER:
      case GLSLParser::SAMPLERCUBEARRAY:
      case GLSLParser::SAMPLERCUBEARRAYSHADOW:
      case GLSLParser::ISAMPLERCUBEARRAY:
      case GLSLParser::USAMPLERCUBEARRAY:
      case GLSLParser::SAMPLER2DMS:
      case GLSLParser::ISAMPLER2DMS:
      case GLSLParser::USAMPLER2DMS:
      case GLSLParser::SAMPLER2DMSARRAY:
      case GLSLParser::ISAMPLER2DMSARRAY:
      case GLSLParser::USAMPLER2DMSARRAY:
      case GLSLParser::IMAGE2D:
      case GLSLParser::IIMAGE2D:
      case GLSLParser::UIMAGE2D:
      case GLSLParser::IMAGE3D:
      case GLSLParser::IIMAGE3D:
      case GLSLParser::UIMAGE3D:
      case GLSLParser::IMAGECUBE:
      case GLSLParser::IIMAGECUBE:
      case GLSLParser::UIMAGECUBE:
      case GLSLParser::IMAGEBUFFER:
      case GLSLParser::IIMAGEBUFFER:
      case GLSLParser::UIMAGEBUFFER:
      case GLSLParser::IMAGE2DARRAY:
      case GLSLParser::IIMAGE2DARRAY:
      case GLSLParser::UIMAGE2DARRAY:
      case GLSLParser::IMAGECUBEARRAY:
      case GLSLParser::IIMAGECUBEARRAY:
      case GLSLParser::UIMAGECUBEARRAY:
      case GLSLParser::IMAGE1D:
      case GLSLParser::IIMAGE1D:
      case GLSLParser::UIMAGE1D:
      case GLSLParser::IMAGE1DARRAY:
      case GLSLParser::IIMAGE1DARRAY:
      case GLSLParser::UIMAGE1DARRAY:
      case GLSLParser::IMAGE2DRECT:
      case GLSLParser::IIMAGE2DRECT:
      case GLSLParser::UIMAGE2DRECT:
      case GLSLParser::IMAGE2DMS:
      case GLSLParser::IIMAGE2DMS:
      case GLSLParser::UIMAGE2DMS:
      case GLSLParser::IMAGE2DMSARRAY:
      case GLSLParser::IIMAGE2DMSARRAY:
      case GLSLParser::UIMAGE2DMSARRAY:
      case GLSLParser::STRUCT:
      case GLSLParser::VOID_:
      case GLSLParser::WHILE:
      case GLSLParser::BREAK:
      case GLSLParser::CONTINUE:
      case GLSLParser::DO:
      case GLSLParser::FOR:
      case GLSLParser::IF:
      case GLSLParser::DISCARD:
      case GLSLParser::RETURN:
      case GLSLParser::SWITCH:
      case GLSLParser::CASE:
      case GLSLParser::DEFAULT:
      case GLSLParser::SUBROUTINE:
      case GLSLParser::IDENTIFIER:
      case GLSLParser::FLOATCONSTANT:
      case GLSLParser::INTCONSTANT:
      case GLSLParser::UINTCONSTANT:
      case GLSLParser::BOOLCONSTANT:
      case GLSLParser::DOUBLECONSTANT:
      case GLSLParser::INC_OP:
      case GLSLParser::DEC_OP:
      case GLSLParser::LEFT_PAREN:
      case GLSLParser::SEMICOLON:
      case GLSLParser::BANG:
      case GLSLParser::DASH:
      case GLSLParser::TILDE:
      case GLSLParser::PLUS:
      case GLSLParser::INVARIANT:
      case GLSLParser::PRECISE:
      case GLSLParser::HIGH_PRECISION:
      case GLSLParser::MEDIUM_PRECISION:
      case GLSLParser::LOW_PRECISION:
      case GLSLParser::PRECISION: {
        enterOuterAlt(_localctx, 2);
        setState(882);
        simpleStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleStatementContext ------------------------------------------------------------------

GLSLParser::SimpleStatementContext::SimpleStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::DeclarationStatementContext* GLSLParser::SimpleStatementContext::declarationStatement() {
  return getRuleContext<GLSLParser::DeclarationStatementContext>(0);
}

GLSLParser::ExpressionStatementContext* GLSLParser::SimpleStatementContext::expressionStatement() {
  return getRuleContext<GLSLParser::ExpressionStatementContext>(0);
}

GLSLParser::SelectionStatementContext* GLSLParser::SimpleStatementContext::selectionStatement() {
  return getRuleContext<GLSLParser::SelectionStatementContext>(0);
}

GLSLParser::SwitchStatementContext* GLSLParser::SimpleStatementContext::switchStatement() {
  return getRuleContext<GLSLParser::SwitchStatementContext>(0);
}

GLSLParser::CaseLabelContext* GLSLParser::SimpleStatementContext::caseLabel() {
  return getRuleContext<GLSLParser::CaseLabelContext>(0);
}

GLSLParser::IterationStatementContext* GLSLParser::SimpleStatementContext::iterationStatement() {
  return getRuleContext<GLSLParser::IterationStatementContext>(0);
}

GLSLParser::JumpStatementContext* GLSLParser::SimpleStatementContext::jumpStatement() {
  return getRuleContext<GLSLParser::JumpStatementContext>(0);
}


size_t GLSLParser::SimpleStatementContext::getRuleIndex() const {
  return GLSLParser::RuleSimpleStatement;
}


antlrcpp::Any GLSLParser::SimpleStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitSimpleStatement(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::SimpleStatementContext* GLSLParser::simpleStatement() {
  SimpleStatementContext *_localctx = _tracker.createInstance<SimpleStatementContext>(_ctx, getState());
  enterRule(_localctx, 116, GLSLParser::RuleSimpleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(892);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(885);
      declarationStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(886);
      expressionStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(887);
      selectionStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(888);
      switchStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(889);
      caseLabel();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(890);
      iterationStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(891);
      jumpStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompundStatementContext ------------------------------------------------------------------

GLSLParser::CompundStatementContext::CompundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::CompundStatementContext::LEFT_BRACE() {
  return getToken(GLSLParser::LEFT_BRACE, 0);
}

tree::TerminalNode* GLSLParser::CompundStatementContext::RIGHT_BRACE() {
  return getToken(GLSLParser::RIGHT_BRACE, 0);
}

GLSLParser::StatementListContext* GLSLParser::CompundStatementContext::statementList() {
  return getRuleContext<GLSLParser::StatementListContext>(0);
}


size_t GLSLParser::CompundStatementContext::getRuleIndex() const {
  return GLSLParser::RuleCompundStatement;
}


antlrcpp::Any GLSLParser::CompundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitCompundStatement(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::CompundStatementContext* GLSLParser::compundStatement() {
  CompundStatementContext *_localctx = _tracker.createInstance<CompundStatementContext>(_ctx, getState());
  enterRule(_localctx, 118, GLSLParser::RuleCompundStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(900);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(894);
      match(GLSLParser::LEFT_BRACE);
      setState(895);
      match(GLSLParser::RIGHT_BRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(896);
      match(GLSLParser::LEFT_BRACE);
      setState(897);
      statementList(0);
      setState(898);
      match(GLSLParser::RIGHT_BRACE);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementNoNewScopeContext ------------------------------------------------------------------

GLSLParser::StatementNoNewScopeContext::StatementNoNewScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::CompoundStatementNoNewScopeContext* GLSLParser::StatementNoNewScopeContext::compoundStatementNoNewScope() {
  return getRuleContext<GLSLParser::CompoundStatementNoNewScopeContext>(0);
}

GLSLParser::SimpleStatementContext* GLSLParser::StatementNoNewScopeContext::simpleStatement() {
  return getRuleContext<GLSLParser::SimpleStatementContext>(0);
}


size_t GLSLParser::StatementNoNewScopeContext::getRuleIndex() const {
  return GLSLParser::RuleStatementNoNewScope;
}


antlrcpp::Any GLSLParser::StatementNoNewScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitStatementNoNewScope(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::StatementNoNewScopeContext* GLSLParser::statementNoNewScope() {
  StatementNoNewScopeContext *_localctx = _tracker.createInstance<StatementNoNewScopeContext>(_ctx, getState());
  enterRule(_localctx, 120, GLSLParser::RuleStatementNoNewScope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(904);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GLSLParser::LEFT_BRACE: {
        enterOuterAlt(_localctx, 1);
        setState(902);
        compoundStatementNoNewScope();
        break;
      }

      case GLSLParser::CONST_:
      case GLSLParser::BOOL:
      case GLSLParser::FLOAT:
      case GLSLParser::INT:
      case GLSLParser::UINT:
      case GLSLParser::DOUBLE:
      case GLSLParser::BVEC2:
      case GLSLParser::BVEC3:
      case GLSLParser::BVEC4:
      case GLSLParser::IVEC2:
      case GLSLParser::IVEC3:
      case GLSLParser::IVEC4:
      case GLSLParser::UVEC2:
      case GLSLParser::UVEC3:
      case GLSLParser::UVEC4:
      case GLSLParser::VEC2:
      case GLSLParser::VEC3:
      case GLSLParser::VEC4:
      case GLSLParser::MAT2:
      case GLSLParser::MAT3:
      case GLSLParser::MAT4:
      case GLSLParser::MAT2X2:
      case GLSLParser::MAT2X3:
      case GLSLParser::MAT2X4:
      case GLSLParser::MAT3X2:
      case GLSLParser::MAT3X3:
      case GLSLParser::MAT3X4:
      case GLSLParser::MAT4X2:
      case GLSLParser::MAT4X3:
      case GLSLParser::MAT4X4:
      case GLSLParser::DVEC2:
      case GLSLParser::DVEC3:
      case GLSLParser::DVEC4:
      case GLSLParser::DMAT2:
      case GLSLParser::DMAT3:
      case GLSLParser::DMAT4:
      case GLSLParser::DMAT2X2:
      case GLSLParser::DMAT2X3:
      case GLSLParser::DMAT2X4:
      case GLSLParser::DMAT3X2:
      case GLSLParser::DMAT3X3:
      case GLSLParser::DMAT3X4:
      case GLSLParser::DMAT4X2:
      case GLSLParser::DMAT4X3:
      case GLSLParser::DMAT4X4:
      case GLSLParser::CENTROID:
      case GLSLParser::IN_:
      case GLSLParser::OUT_:
      case GLSLParser::INOUT:
      case GLSLParser::UNIFORM:
      case GLSLParser::PATCH:
      case GLSLParser::SAMPLE:
      case GLSLParser::BUFFER:
      case GLSLParser::SHARED:
      case GLSLParser::COHERENT:
      case GLSLParser::VOLATILE:
      case GLSLParser::RESTRICT:
      case GLSLParser::READONLY:
      case GLSLParser::WRITEONLY:
      case GLSLParser::NOPERSPECTIVE:
      case GLSLParser::FLAT:
      case GLSLParser::SMOOTH:
      case GLSLParser::LAYOUT:
      case GLSLParser::ATOMIC_UINT:
      case GLSLParser::SAMPLER2D:
      case GLSLParser::SAMPLER3D:
      case GLSLParser::SAMPLERCUBE:
      case GLSLParser::SAMPLER2DSHADOW:
      case GLSLParser::SAMPLERCUBESHADOW:
      case GLSLParser::SAMPLER2DARRAY:
      case GLSLParser::SAMPLER2DARRAYSHADOW:
      case GLSLParser::ISAMPLER2D:
      case GLSLParser::ISAMPLER3D:
      case GLSLParser::ISAMPLERCUBE:
      case GLSLParser::ISAMPLER2DARRAY:
      case GLSLParser::USAMPLER2D:
      case GLSLParser::USAMPLER3D:
      case GLSLParser::USAMPLERCUBE:
      case GLSLParser::USAMPLER2DARRAY:
      case GLSLParser::SAMPLER1D:
      case GLSLParser::SAMPLER1DSHADOW:
      case GLSLParser::SAMPLER1DARRAY:
      case GLSLParser::SAMPLER1DARRAYSHADOW:
      case GLSLParser::ISAMPLER1D:
      case GLSLParser::ISAMPLER1DARRAY:
      case GLSLParser::USAMPLER1D:
      case GLSLParser::USAMPLER1DARRAY:
      case GLSLParser::SAMPLER2DRECT:
      case GLSLParser::SAMPLER2DRECTSHADOW:
      case GLSLParser::ISAMPLER2DRECT:
      case GLSLParser::USAMPLER2DRECT:
      case GLSLParser::SAMPLERBUFFER:
      case GLSLParser::ISAMPLERBUFFER:
      case GLSLParser::USAMPLERBUFFER:
      case GLSLParser::SAMPLERCUBEARRAY:
      case GLSLParser::SAMPLERCUBEARRAYSHADOW:
      case GLSLParser::ISAMPLERCUBEARRAY:
      case GLSLParser::USAMPLERCUBEARRAY:
      case GLSLParser::SAMPLER2DMS:
      case GLSLParser::ISAMPLER2DMS:
      case GLSLParser::USAMPLER2DMS:
      case GLSLParser::SAMPLER2DMSARRAY:
      case GLSLParser::ISAMPLER2DMSARRAY:
      case GLSLParser::USAMPLER2DMSARRAY:
      case GLSLParser::IMAGE2D:
      case GLSLParser::IIMAGE2D:
      case GLSLParser::UIMAGE2D:
      case GLSLParser::IMAGE3D:
      case GLSLParser::IIMAGE3D:
      case GLSLParser::UIMAGE3D:
      case GLSLParser::IMAGECUBE:
      case GLSLParser::IIMAGECUBE:
      case GLSLParser::UIMAGECUBE:
      case GLSLParser::IMAGEBUFFER:
      case GLSLParser::IIMAGEBUFFER:
      case GLSLParser::UIMAGEBUFFER:
      case GLSLParser::IMAGE2DARRAY:
      case GLSLParser::IIMAGE2DARRAY:
      case GLSLParser::UIMAGE2DARRAY:
      case GLSLParser::IMAGECUBEARRAY:
      case GLSLParser::IIMAGECUBEARRAY:
      case GLSLParser::UIMAGECUBEARRAY:
      case GLSLParser::IMAGE1D:
      case GLSLParser::IIMAGE1D:
      case GLSLParser::UIMAGE1D:
      case GLSLParser::IMAGE1DARRAY:
      case GLSLParser::IIMAGE1DARRAY:
      case GLSLParser::UIMAGE1DARRAY:
      case GLSLParser::IMAGE2DRECT:
      case GLSLParser::IIMAGE2DRECT:
      case GLSLParser::UIMAGE2DRECT:
      case GLSLParser::IMAGE2DMS:
      case GLSLParser::IIMAGE2DMS:
      case GLSLParser::UIMAGE2DMS:
      case GLSLParser::IMAGE2DMSARRAY:
      case GLSLParser::IIMAGE2DMSARRAY:
      case GLSLParser::UIMAGE2DMSARRAY:
      case GLSLParser::STRUCT:
      case GLSLParser::VOID_:
      case GLSLParser::WHILE:
      case GLSLParser::BREAK:
      case GLSLParser::CONTINUE:
      case GLSLParser::DO:
      case GLSLParser::FOR:
      case GLSLParser::IF:
      case GLSLParser::DISCARD:
      case GLSLParser::RETURN:
      case GLSLParser::SWITCH:
      case GLSLParser::CASE:
      case GLSLParser::DEFAULT:
      case GLSLParser::SUBROUTINE:
      case GLSLParser::IDENTIFIER:
      case GLSLParser::FLOATCONSTANT:
      case GLSLParser::INTCONSTANT:
      case GLSLParser::UINTCONSTANT:
      case GLSLParser::BOOLCONSTANT:
      case GLSLParser::DOUBLECONSTANT:
      case GLSLParser::INC_OP:
      case GLSLParser::DEC_OP:
      case GLSLParser::LEFT_PAREN:
      case GLSLParser::SEMICOLON:
      case GLSLParser::BANG:
      case GLSLParser::DASH:
      case GLSLParser::TILDE:
      case GLSLParser::PLUS:
      case GLSLParser::INVARIANT:
      case GLSLParser::PRECISE:
      case GLSLParser::HIGH_PRECISION:
      case GLSLParser::MEDIUM_PRECISION:
      case GLSLParser::LOW_PRECISION:
      case GLSLParser::PRECISION: {
        enterOuterAlt(_localctx, 2);
        setState(903);
        simpleStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementNoNewScopeContext ------------------------------------------------------------------

GLSLParser::CompoundStatementNoNewScopeContext::CompoundStatementNoNewScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::CompoundStatementNoNewScopeContext::LEFT_BRACE() {
  return getToken(GLSLParser::LEFT_BRACE, 0);
}

tree::TerminalNode* GLSLParser::CompoundStatementNoNewScopeContext::RIGHT_BRACE() {
  return getToken(GLSLParser::RIGHT_BRACE, 0);
}

GLSLParser::StatementListContext* GLSLParser::CompoundStatementNoNewScopeContext::statementList() {
  return getRuleContext<GLSLParser::StatementListContext>(0);
}


size_t GLSLParser::CompoundStatementNoNewScopeContext::getRuleIndex() const {
  return GLSLParser::RuleCompoundStatementNoNewScope;
}


antlrcpp::Any GLSLParser::CompoundStatementNoNewScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitCompoundStatementNoNewScope(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::CompoundStatementNoNewScopeContext* GLSLParser::compoundStatementNoNewScope() {
  CompoundStatementNoNewScopeContext *_localctx = _tracker.createInstance<CompoundStatementNoNewScopeContext>(_ctx, getState());
  enterRule(_localctx, 122, GLSLParser::RuleCompoundStatementNoNewScope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(912);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(906);
      match(GLSLParser::LEFT_BRACE);
      setState(907);
      match(GLSLParser::RIGHT_BRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(908);
      match(GLSLParser::LEFT_BRACE);
      setState(909);
      statementList(0);
      setState(910);
      match(GLSLParser::RIGHT_BRACE);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementListContext ------------------------------------------------------------------

GLSLParser::StatementListContext::StatementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::StatementContext* GLSLParser::StatementListContext::statement() {
  return getRuleContext<GLSLParser::StatementContext>(0);
}

GLSLParser::StatementListContext* GLSLParser::StatementListContext::statementList() {
  return getRuleContext<GLSLParser::StatementListContext>(0);
}


size_t GLSLParser::StatementListContext::getRuleIndex() const {
  return GLSLParser::RuleStatementList;
}


antlrcpp::Any GLSLParser::StatementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitStatementList(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::StatementListContext* GLSLParser::statementList() {
   return statementList(0);
}

GLSLParser::StatementListContext* GLSLParser::statementList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::StatementListContext *_localctx = _tracker.createInstance<StatementListContext>(_ctx, parentState);
  GLSLParser::StatementListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 124;
  enterRecursionRule(_localctx, 124, GLSLParser::RuleStatementList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(915);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(921);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatementList);
        setState(917);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(918);
        statement(); 
      }
      setState(923);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

GLSLParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::ExpressionStatementContext::SEMICOLON() {
  return getToken(GLSLParser::SEMICOLON, 0);
}

GLSLParser::ExpressionContext* GLSLParser::ExpressionStatementContext::expression() {
  return getRuleContext<GLSLParser::ExpressionContext>(0);
}


size_t GLSLParser::ExpressionStatementContext::getRuleIndex() const {
  return GLSLParser::RuleExpressionStatement;
}


antlrcpp::Any GLSLParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::ExpressionStatementContext* GLSLParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 126, GLSLParser::RuleExpressionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(928);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GLSLParser::SEMICOLON: {
        enterOuterAlt(_localctx, 1);
        setState(924);
        match(GLSLParser::SEMICOLON);
        break;
      }

      case GLSLParser::BOOL:
      case GLSLParser::FLOAT:
      case GLSLParser::INT:
      case GLSLParser::UINT:
      case GLSLParser::DOUBLE:
      case GLSLParser::BVEC2:
      case GLSLParser::BVEC3:
      case GLSLParser::BVEC4:
      case GLSLParser::IVEC2:
      case GLSLParser::IVEC3:
      case GLSLParser::IVEC4:
      case GLSLParser::UVEC2:
      case GLSLParser::UVEC3:
      case GLSLParser::UVEC4:
      case GLSLParser::VEC2:
      case GLSLParser::VEC3:
      case GLSLParser::VEC4:
      case GLSLParser::MAT2:
      case GLSLParser::MAT3:
      case GLSLParser::MAT4:
      case GLSLParser::MAT2X2:
      case GLSLParser::MAT2X3:
      case GLSLParser::MAT2X4:
      case GLSLParser::MAT3X2:
      case GLSLParser::MAT3X3:
      case GLSLParser::MAT3X4:
      case GLSLParser::MAT4X2:
      case GLSLParser::MAT4X3:
      case GLSLParser::MAT4X4:
      case GLSLParser::DVEC2:
      case GLSLParser::DVEC3:
      case GLSLParser::DVEC4:
      case GLSLParser::DMAT2:
      case GLSLParser::DMAT3:
      case GLSLParser::DMAT4:
      case GLSLParser::DMAT2X2:
      case GLSLParser::DMAT2X3:
      case GLSLParser::DMAT2X4:
      case GLSLParser::DMAT3X2:
      case GLSLParser::DMAT3X3:
      case GLSLParser::DMAT3X4:
      case GLSLParser::DMAT4X2:
      case GLSLParser::DMAT4X3:
      case GLSLParser::DMAT4X4:
      case GLSLParser::ATOMIC_UINT:
      case GLSLParser::SAMPLER2D:
      case GLSLParser::SAMPLER3D:
      case GLSLParser::SAMPLERCUBE:
      case GLSLParser::SAMPLER2DSHADOW:
      case GLSLParser::SAMPLERCUBESHADOW:
      case GLSLParser::SAMPLER2DARRAY:
      case GLSLParser::SAMPLER2DARRAYSHADOW:
      case GLSLParser::ISAMPLER2D:
      case GLSLParser::ISAMPLER3D:
      case GLSLParser::ISAMPLERCUBE:
      case GLSLParser::ISAMPLER2DARRAY:
      case GLSLParser::USAMPLER2D:
      case GLSLParser::USAMPLER3D:
      case GLSLParser::USAMPLERCUBE:
      case GLSLParser::USAMPLER2DARRAY:
      case GLSLParser::SAMPLER1D:
      case GLSLParser::SAMPLER1DSHADOW:
      case GLSLParser::SAMPLER1DARRAY:
      case GLSLParser::SAMPLER1DARRAYSHADOW:
      case GLSLParser::ISAMPLER1D:
      case GLSLParser::ISAMPLER1DARRAY:
      case GLSLParser::USAMPLER1D:
      case GLSLParser::USAMPLER1DARRAY:
      case GLSLParser::SAMPLER2DRECT:
      case GLSLParser::SAMPLER2DRECTSHADOW:
      case GLSLParser::ISAMPLER2DRECT:
      case GLSLParser::USAMPLER2DRECT:
      case GLSLParser::SAMPLERBUFFER:
      case GLSLParser::ISAMPLERBUFFER:
      case GLSLParser::USAMPLERBUFFER:
      case GLSLParser::SAMPLERCUBEARRAY:
      case GLSLParser::SAMPLERCUBEARRAYSHADOW:
      case GLSLParser::ISAMPLERCUBEARRAY:
      case GLSLParser::USAMPLERCUBEARRAY:
      case GLSLParser::SAMPLER2DMS:
      case GLSLParser::ISAMPLER2DMS:
      case GLSLParser::USAMPLER2DMS:
      case GLSLParser::SAMPLER2DMSARRAY:
      case GLSLParser::ISAMPLER2DMSARRAY:
      case GLSLParser::USAMPLER2DMSARRAY:
      case GLSLParser::IMAGE2D:
      case GLSLParser::IIMAGE2D:
      case GLSLParser::UIMAGE2D:
      case GLSLParser::IMAGE3D:
      case GLSLParser::IIMAGE3D:
      case GLSLParser::UIMAGE3D:
      case GLSLParser::IMAGECUBE:
      case GLSLParser::IIMAGECUBE:
      case GLSLParser::UIMAGECUBE:
      case GLSLParser::IMAGEBUFFER:
      case GLSLParser::IIMAGEBUFFER:
      case GLSLParser::UIMAGEBUFFER:
      case GLSLParser::IMAGE2DARRAY:
      case GLSLParser::IIMAGE2DARRAY:
      case GLSLParser::UIMAGE2DARRAY:
      case GLSLParser::IMAGECUBEARRAY:
      case GLSLParser::IIMAGECUBEARRAY:
      case GLSLParser::UIMAGECUBEARRAY:
      case GLSLParser::IMAGE1D:
      case GLSLParser::IIMAGE1D:
      case GLSLParser::UIMAGE1D:
      case GLSLParser::IMAGE1DARRAY:
      case GLSLParser::IIMAGE1DARRAY:
      case GLSLParser::UIMAGE1DARRAY:
      case GLSLParser::IMAGE2DRECT:
      case GLSLParser::IIMAGE2DRECT:
      case GLSLParser::UIMAGE2DRECT:
      case GLSLParser::IMAGE2DMS:
      case GLSLParser::IIMAGE2DMS:
      case GLSLParser::UIMAGE2DMS:
      case GLSLParser::IMAGE2DMSARRAY:
      case GLSLParser::IIMAGE2DMSARRAY:
      case GLSLParser::UIMAGE2DMSARRAY:
      case GLSLParser::STRUCT:
      case GLSLParser::VOID_:
      case GLSLParser::IDENTIFIER:
      case GLSLParser::FLOATCONSTANT:
      case GLSLParser::INTCONSTANT:
      case GLSLParser::UINTCONSTANT:
      case GLSLParser::BOOLCONSTANT:
      case GLSLParser::DOUBLECONSTANT:
      case GLSLParser::INC_OP:
      case GLSLParser::DEC_OP:
      case GLSLParser::LEFT_PAREN:
      case GLSLParser::BANG:
      case GLSLParser::DASH:
      case GLSLParser::TILDE:
      case GLSLParser::PLUS: {
        enterOuterAlt(_localctx, 2);
        setState(925);
        expression(0);
        setState(926);
        match(GLSLParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectionStatementContext ------------------------------------------------------------------

GLSLParser::SelectionStatementContext::SelectionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::SelectionStatementContext::IF() {
  return getToken(GLSLParser::IF, 0);
}

tree::TerminalNode* GLSLParser::SelectionStatementContext::LEFT_PAREN() {
  return getToken(GLSLParser::LEFT_PAREN, 0);
}

GLSLParser::ExpressionContext* GLSLParser::SelectionStatementContext::expression() {
  return getRuleContext<GLSLParser::ExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::SelectionStatementContext::RIGHT_PAREN() {
  return getToken(GLSLParser::RIGHT_PAREN, 0);
}

GLSLParser::SelectionRestStatementContext* GLSLParser::SelectionStatementContext::selectionRestStatement() {
  return getRuleContext<GLSLParser::SelectionRestStatementContext>(0);
}


size_t GLSLParser::SelectionStatementContext::getRuleIndex() const {
  return GLSLParser::RuleSelectionStatement;
}


antlrcpp::Any GLSLParser::SelectionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitSelectionStatement(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::SelectionStatementContext* GLSLParser::selectionStatement() {
  SelectionStatementContext *_localctx = _tracker.createInstance<SelectionStatementContext>(_ctx, getState());
  enterRule(_localctx, 128, GLSLParser::RuleSelectionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(930);
    match(GLSLParser::IF);
    setState(931);
    match(GLSLParser::LEFT_PAREN);
    setState(932);
    expression(0);
    setState(933);
    match(GLSLParser::RIGHT_PAREN);
    setState(934);
    selectionRestStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectionRestStatementContext ------------------------------------------------------------------

GLSLParser::SelectionRestStatementContext::SelectionRestStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GLSLParser::StatementContext *> GLSLParser::SelectionRestStatementContext::statement() {
  return getRuleContexts<GLSLParser::StatementContext>();
}

GLSLParser::StatementContext* GLSLParser::SelectionRestStatementContext::statement(size_t i) {
  return getRuleContext<GLSLParser::StatementContext>(i);
}

tree::TerminalNode* GLSLParser::SelectionRestStatementContext::ELSE() {
  return getToken(GLSLParser::ELSE, 0);
}


size_t GLSLParser::SelectionRestStatementContext::getRuleIndex() const {
  return GLSLParser::RuleSelectionRestStatement;
}


antlrcpp::Any GLSLParser::SelectionRestStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitSelectionRestStatement(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::SelectionRestStatementContext* GLSLParser::selectionRestStatement() {
  SelectionRestStatementContext *_localctx = _tracker.createInstance<SelectionRestStatementContext>(_ctx, getState());
  enterRule(_localctx, 130, GLSLParser::RuleSelectionRestStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(941);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(936);
      statement();
      setState(937);
      match(GLSLParser::ELSE);
      setState(938);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(940);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

GLSLParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::ExpressionContext* GLSLParser::ConditionContext::expression() {
  return getRuleContext<GLSLParser::ExpressionContext>(0);
}

GLSLParser::FullySpecifiedTypeContext* GLSLParser::ConditionContext::fullySpecifiedType() {
  return getRuleContext<GLSLParser::FullySpecifiedTypeContext>(0);
}

tree::TerminalNode* GLSLParser::ConditionContext::IDENTIFIER() {
  return getToken(GLSLParser::IDENTIFIER, 0);
}

tree::TerminalNode* GLSLParser::ConditionContext::EQUAL() {
  return getToken(GLSLParser::EQUAL, 0);
}

GLSLParser::InitializerContext* GLSLParser::ConditionContext::initializer() {
  return getRuleContext<GLSLParser::InitializerContext>(0);
}


size_t GLSLParser::ConditionContext::getRuleIndex() const {
  return GLSLParser::RuleCondition;
}


antlrcpp::Any GLSLParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::ConditionContext* GLSLParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 132, GLSLParser::RuleCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(949);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(943);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(944);
      fullySpecifiedType();
      setState(945);
      match(GLSLParser::IDENTIFIER);
      setState(946);
      match(GLSLParser::EQUAL);
      setState(947);
      initializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

GLSLParser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::SwitchStatementContext::SWITCH() {
  return getToken(GLSLParser::SWITCH, 0);
}

tree::TerminalNode* GLSLParser::SwitchStatementContext::LEFT_PAREN() {
  return getToken(GLSLParser::LEFT_PAREN, 0);
}

GLSLParser::ExpressionContext* GLSLParser::SwitchStatementContext::expression() {
  return getRuleContext<GLSLParser::ExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::SwitchStatementContext::RIGHT_PAREN() {
  return getToken(GLSLParser::RIGHT_PAREN, 0);
}

tree::TerminalNode* GLSLParser::SwitchStatementContext::LEFT_BRACE() {
  return getToken(GLSLParser::LEFT_BRACE, 0);
}

GLSLParser::SwitchStatementListContext* GLSLParser::SwitchStatementContext::switchStatementList() {
  return getRuleContext<GLSLParser::SwitchStatementListContext>(0);
}

tree::TerminalNode* GLSLParser::SwitchStatementContext::RIGHT_BRACE() {
  return getToken(GLSLParser::RIGHT_BRACE, 0);
}


size_t GLSLParser::SwitchStatementContext::getRuleIndex() const {
  return GLSLParser::RuleSwitchStatement;
}


antlrcpp::Any GLSLParser::SwitchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitSwitchStatement(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::SwitchStatementContext* GLSLParser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 134, GLSLParser::RuleSwitchStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(951);
    match(GLSLParser::SWITCH);
    setState(952);
    match(GLSLParser::LEFT_PAREN);
    setState(953);
    expression(0);
    setState(954);
    match(GLSLParser::RIGHT_PAREN);
    setState(955);
    match(GLSLParser::LEFT_BRACE);
    setState(956);
    switchStatementList();
    setState(957);
    match(GLSLParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementListContext ------------------------------------------------------------------

GLSLParser::SwitchStatementListContext::SwitchStatementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::StatementListContext* GLSLParser::SwitchStatementListContext::statementList() {
  return getRuleContext<GLSLParser::StatementListContext>(0);
}


size_t GLSLParser::SwitchStatementListContext::getRuleIndex() const {
  return GLSLParser::RuleSwitchStatementList;
}


antlrcpp::Any GLSLParser::SwitchStatementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitSwitchStatementList(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::SwitchStatementListContext* GLSLParser::switchStatementList() {
  SwitchStatementListContext *_localctx = _tracker.createInstance<SwitchStatementListContext>(_ctx, getState());
  enterRule(_localctx, 136, GLSLParser::RuleSwitchStatementList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(961);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GLSLParser::CONST_:
      case GLSLParser::BOOL:
      case GLSLParser::FLOAT:
      case GLSLParser::INT:
      case GLSLParser::UINT:
      case GLSLParser::DOUBLE:
      case GLSLParser::BVEC2:
      case GLSLParser::BVEC3:
      case GLSLParser::BVEC4:
      case GLSLParser::IVEC2:
      case GLSLParser::IVEC3:
      case GLSLParser::IVEC4:
      case GLSLParser::UVEC2:
      case GLSLParser::UVEC3:
      case GLSLParser::UVEC4:
      case GLSLParser::VEC2:
      case GLSLParser::VEC3:
      case GLSLParser::VEC4:
      case GLSLParser::MAT2:
      case GLSLParser::MAT3:
      case GLSLParser::MAT4:
      case GLSLParser::MAT2X2:
      case GLSLParser::MAT2X3:
      case GLSLParser::MAT2X4:
      case GLSLParser::MAT3X2:
      case GLSLParser::MAT3X3:
      case GLSLParser::MAT3X4:
      case GLSLParser::MAT4X2:
      case GLSLParser::MAT4X3:
      case GLSLParser::MAT4X4:
      case GLSLParser::DVEC2:
      case GLSLParser::DVEC3:
      case GLSLParser::DVEC4:
      case GLSLParser::DMAT2:
      case GLSLParser::DMAT3:
      case GLSLParser::DMAT4:
      case GLSLParser::DMAT2X2:
      case GLSLParser::DMAT2X3:
      case GLSLParser::DMAT2X4:
      case GLSLParser::DMAT3X2:
      case GLSLParser::DMAT3X3:
      case GLSLParser::DMAT3X4:
      case GLSLParser::DMAT4X2:
      case GLSLParser::DMAT4X3:
      case GLSLParser::DMAT4X4:
      case GLSLParser::CENTROID:
      case GLSLParser::IN_:
      case GLSLParser::OUT_:
      case GLSLParser::INOUT:
      case GLSLParser::UNIFORM:
      case GLSLParser::PATCH:
      case GLSLParser::SAMPLE:
      case GLSLParser::BUFFER:
      case GLSLParser::SHARED:
      case GLSLParser::COHERENT:
      case GLSLParser::VOLATILE:
      case GLSLParser::RESTRICT:
      case GLSLParser::READONLY:
      case GLSLParser::WRITEONLY:
      case GLSLParser::NOPERSPECTIVE:
      case GLSLParser::FLAT:
      case GLSLParser::SMOOTH:
      case GLSLParser::LAYOUT:
      case GLSLParser::ATOMIC_UINT:
      case GLSLParser::SAMPLER2D:
      case GLSLParser::SAMPLER3D:
      case GLSLParser::SAMPLERCUBE:
      case GLSLParser::SAMPLER2DSHADOW:
      case GLSLParser::SAMPLERCUBESHADOW:
      case GLSLParser::SAMPLER2DARRAY:
      case GLSLParser::SAMPLER2DARRAYSHADOW:
      case GLSLParser::ISAMPLER2D:
      case GLSLParser::ISAMPLER3D:
      case GLSLParser::ISAMPLERCUBE:
      case GLSLParser::ISAMPLER2DARRAY:
      case GLSLParser::USAMPLER2D:
      case GLSLParser::USAMPLER3D:
      case GLSLParser::USAMPLERCUBE:
      case GLSLParser::USAMPLER2DARRAY:
      case GLSLParser::SAMPLER1D:
      case GLSLParser::SAMPLER1DSHADOW:
      case GLSLParser::SAMPLER1DARRAY:
      case GLSLParser::SAMPLER1DARRAYSHADOW:
      case GLSLParser::ISAMPLER1D:
      case GLSLParser::ISAMPLER1DARRAY:
      case GLSLParser::USAMPLER1D:
      case GLSLParser::USAMPLER1DARRAY:
      case GLSLParser::SAMPLER2DRECT:
      case GLSLParser::SAMPLER2DRECTSHADOW:
      case GLSLParser::ISAMPLER2DRECT:
      case GLSLParser::USAMPLER2DRECT:
      case GLSLParser::SAMPLERBUFFER:
      case GLSLParser::ISAMPLERBUFFER:
      case GLSLParser::USAMPLERBUFFER:
      case GLSLParser::SAMPLERCUBEARRAY:
      case GLSLParser::SAMPLERCUBEARRAYSHADOW:
      case GLSLParser::ISAMPLERCUBEARRAY:
      case GLSLParser::USAMPLERCUBEARRAY:
      case GLSLParser::SAMPLER2DMS:
      case GLSLParser::ISAMPLER2DMS:
      case GLSLParser::USAMPLER2DMS:
      case GLSLParser::SAMPLER2DMSARRAY:
      case GLSLParser::ISAMPLER2DMSARRAY:
      case GLSLParser::USAMPLER2DMSARRAY:
      case GLSLParser::IMAGE2D:
      case GLSLParser::IIMAGE2D:
      case GLSLParser::UIMAGE2D:
      case GLSLParser::IMAGE3D:
      case GLSLParser::IIMAGE3D:
      case GLSLParser::UIMAGE3D:
      case GLSLParser::IMAGECUBE:
      case GLSLParser::IIMAGECUBE:
      case GLSLParser::UIMAGECUBE:
      case GLSLParser::IMAGEBUFFER:
      case GLSLParser::IIMAGEBUFFER:
      case GLSLParser::UIMAGEBUFFER:
      case GLSLParser::IMAGE2DARRAY:
      case GLSLParser::IIMAGE2DARRAY:
      case GLSLParser::UIMAGE2DARRAY:
      case GLSLParser::IMAGECUBEARRAY:
      case GLSLParser::IIMAGECUBEARRAY:
      case GLSLParser::UIMAGECUBEARRAY:
      case GLSLParser::IMAGE1D:
      case GLSLParser::IIMAGE1D:
      case GLSLParser::UIMAGE1D:
      case GLSLParser::IMAGE1DARRAY:
      case GLSLParser::IIMAGE1DARRAY:
      case GLSLParser::UIMAGE1DARRAY:
      case GLSLParser::IMAGE2DRECT:
      case GLSLParser::IIMAGE2DRECT:
      case GLSLParser::UIMAGE2DRECT:
      case GLSLParser::IMAGE2DMS:
      case GLSLParser::IIMAGE2DMS:
      case GLSLParser::UIMAGE2DMS:
      case GLSLParser::IMAGE2DMSARRAY:
      case GLSLParser::IIMAGE2DMSARRAY:
      case GLSLParser::UIMAGE2DMSARRAY:
      case GLSLParser::STRUCT:
      case GLSLParser::VOID_:
      case GLSLParser::WHILE:
      case GLSLParser::BREAK:
      case GLSLParser::CONTINUE:
      case GLSLParser::DO:
      case GLSLParser::FOR:
      case GLSLParser::IF:
      case GLSLParser::DISCARD:
      case GLSLParser::RETURN:
      case GLSLParser::SWITCH:
      case GLSLParser::CASE:
      case GLSLParser::DEFAULT:
      case GLSLParser::SUBROUTINE:
      case GLSLParser::IDENTIFIER:
      case GLSLParser::FLOATCONSTANT:
      case GLSLParser::INTCONSTANT:
      case GLSLParser::UINTCONSTANT:
      case GLSLParser::BOOLCONSTANT:
      case GLSLParser::DOUBLECONSTANT:
      case GLSLParser::INC_OP:
      case GLSLParser::DEC_OP:
      case GLSLParser::LEFT_PAREN:
      case GLSLParser::LEFT_BRACE:
      case GLSLParser::SEMICOLON:
      case GLSLParser::BANG:
      case GLSLParser::DASH:
      case GLSLParser::TILDE:
      case GLSLParser::PLUS:
      case GLSLParser::INVARIANT:
      case GLSLParser::PRECISE:
      case GLSLParser::HIGH_PRECISION:
      case GLSLParser::MEDIUM_PRECISION:
      case GLSLParser::LOW_PRECISION:
      case GLSLParser::PRECISION: {
        enterOuterAlt(_localctx, 1);
        setState(959);
        statementList(0);
        break;
      }

      case GLSLParser::RIGHT_BRACE: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseLabelContext ------------------------------------------------------------------

GLSLParser::CaseLabelContext::CaseLabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::CaseLabelContext::CASE() {
  return getToken(GLSLParser::CASE, 0);
}

GLSLParser::ExpressionContext* GLSLParser::CaseLabelContext::expression() {
  return getRuleContext<GLSLParser::ExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::CaseLabelContext::COLON() {
  return getToken(GLSLParser::COLON, 0);
}

tree::TerminalNode* GLSLParser::CaseLabelContext::DEFAULT() {
  return getToken(GLSLParser::DEFAULT, 0);
}


size_t GLSLParser::CaseLabelContext::getRuleIndex() const {
  return GLSLParser::RuleCaseLabel;
}


antlrcpp::Any GLSLParser::CaseLabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitCaseLabel(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::CaseLabelContext* GLSLParser::caseLabel() {
  CaseLabelContext *_localctx = _tracker.createInstance<CaseLabelContext>(_ctx, getState());
  enterRule(_localctx, 138, GLSLParser::RuleCaseLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(969);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GLSLParser::CASE: {
        enterOuterAlt(_localctx, 1);
        setState(963);
        match(GLSLParser::CASE);
        setState(964);
        expression(0);
        setState(965);
        match(GLSLParser::COLON);
        break;
      }

      case GLSLParser::DEFAULT: {
        enterOuterAlt(_localctx, 2);
        setState(967);
        match(GLSLParser::DEFAULT);
        setState(968);
        match(GLSLParser::COLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationStatementContext ------------------------------------------------------------------

GLSLParser::IterationStatementContext::IterationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::IterationStatementContext::WHILE() {
  return getToken(GLSLParser::WHILE, 0);
}

tree::TerminalNode* GLSLParser::IterationStatementContext::LEFT_PAREN() {
  return getToken(GLSLParser::LEFT_PAREN, 0);
}

GLSLParser::ConditionContext* GLSLParser::IterationStatementContext::condition() {
  return getRuleContext<GLSLParser::ConditionContext>(0);
}

tree::TerminalNode* GLSLParser::IterationStatementContext::RIGHT_PAREN() {
  return getToken(GLSLParser::RIGHT_PAREN, 0);
}

GLSLParser::StatementNoNewScopeContext* GLSLParser::IterationStatementContext::statementNoNewScope() {
  return getRuleContext<GLSLParser::StatementNoNewScopeContext>(0);
}

tree::TerminalNode* GLSLParser::IterationStatementContext::DO() {
  return getToken(GLSLParser::DO, 0);
}

GLSLParser::StatementContext* GLSLParser::IterationStatementContext::statement() {
  return getRuleContext<GLSLParser::StatementContext>(0);
}

GLSLParser::ExpressionContext* GLSLParser::IterationStatementContext::expression() {
  return getRuleContext<GLSLParser::ExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::IterationStatementContext::SEMICOLON() {
  return getToken(GLSLParser::SEMICOLON, 0);
}

tree::TerminalNode* GLSLParser::IterationStatementContext::FOR() {
  return getToken(GLSLParser::FOR, 0);
}

GLSLParser::ForInitStatementContext* GLSLParser::IterationStatementContext::forInitStatement() {
  return getRuleContext<GLSLParser::ForInitStatementContext>(0);
}

GLSLParser::ForRestStatementContext* GLSLParser::IterationStatementContext::forRestStatement() {
  return getRuleContext<GLSLParser::ForRestStatementContext>(0);
}


size_t GLSLParser::IterationStatementContext::getRuleIndex() const {
  return GLSLParser::RuleIterationStatement;
}


antlrcpp::Any GLSLParser::IterationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitIterationStatement(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::IterationStatementContext* GLSLParser::iterationStatement() {
  IterationStatementContext *_localctx = _tracker.createInstance<IterationStatementContext>(_ctx, getState());
  enterRule(_localctx, 140, GLSLParser::RuleIterationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(992);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GLSLParser::WHILE: {
        enterOuterAlt(_localctx, 1);
        setState(971);
        match(GLSLParser::WHILE);
        setState(972);
        match(GLSLParser::LEFT_PAREN);
        setState(973);
        condition();
        setState(974);
        match(GLSLParser::RIGHT_PAREN);
        setState(975);
        statementNoNewScope();
        break;
      }

      case GLSLParser::DO: {
        enterOuterAlt(_localctx, 2);
        setState(977);
        match(GLSLParser::DO);
        setState(978);
        statement();
        setState(979);
        match(GLSLParser::WHILE);
        setState(980);
        match(GLSLParser::LEFT_PAREN);
        setState(981);
        expression(0);
        setState(982);
        match(GLSLParser::RIGHT_PAREN);
        setState(983);
        match(GLSLParser::SEMICOLON);
        break;
      }

      case GLSLParser::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(985);
        match(GLSLParser::FOR);
        setState(986);
        match(GLSLParser::LEFT_PAREN);
        setState(987);
        forInitStatement();
        setState(988);
        forRestStatement();
        setState(989);
        match(GLSLParser::RIGHT_PAREN);
        setState(990);
        statementNoNewScope();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitStatementContext ------------------------------------------------------------------

GLSLParser::ForInitStatementContext::ForInitStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::ExpressionStatementContext* GLSLParser::ForInitStatementContext::expressionStatement() {
  return getRuleContext<GLSLParser::ExpressionStatementContext>(0);
}

GLSLParser::DeclarationStatementContext* GLSLParser::ForInitStatementContext::declarationStatement() {
  return getRuleContext<GLSLParser::DeclarationStatementContext>(0);
}


size_t GLSLParser::ForInitStatementContext::getRuleIndex() const {
  return GLSLParser::RuleForInitStatement;
}


antlrcpp::Any GLSLParser::ForInitStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitForInitStatement(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::ForInitStatementContext* GLSLParser::forInitStatement() {
  ForInitStatementContext *_localctx = _tracker.createInstance<ForInitStatementContext>(_ctx, getState());
  enterRule(_localctx, 142, GLSLParser::RuleForInitStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(996);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(994);
      expressionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(995);
      declarationStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionoptContext ------------------------------------------------------------------

GLSLParser::ConditionoptContext::ConditionoptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::ConditionContext* GLSLParser::ConditionoptContext::condition() {
  return getRuleContext<GLSLParser::ConditionContext>(0);
}


size_t GLSLParser::ConditionoptContext::getRuleIndex() const {
  return GLSLParser::RuleConditionopt;
}


antlrcpp::Any GLSLParser::ConditionoptContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitConditionopt(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::ConditionoptContext* GLSLParser::conditionopt() {
  ConditionoptContext *_localctx = _tracker.createInstance<ConditionoptContext>(_ctx, getState());
  enterRule(_localctx, 144, GLSLParser::RuleConditionopt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1000);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GLSLParser::CONST_:
      case GLSLParser::BOOL:
      case GLSLParser::FLOAT:
      case GLSLParser::INT:
      case GLSLParser::UINT:
      case GLSLParser::DOUBLE:
      case GLSLParser::BVEC2:
      case GLSLParser::BVEC3:
      case GLSLParser::BVEC4:
      case GLSLParser::IVEC2:
      case GLSLParser::IVEC3:
      case GLSLParser::IVEC4:
      case GLSLParser::UVEC2:
      case GLSLParser::UVEC3:
      case GLSLParser::UVEC4:
      case GLSLParser::VEC2:
      case GLSLParser::VEC3:
      case GLSLParser::VEC4:
      case GLSLParser::MAT2:
      case GLSLParser::MAT3:
      case GLSLParser::MAT4:
      case GLSLParser::MAT2X2:
      case GLSLParser::MAT2X3:
      case GLSLParser::MAT2X4:
      case GLSLParser::MAT3X2:
      case GLSLParser::MAT3X3:
      case GLSLParser::MAT3X4:
      case GLSLParser::MAT4X2:
      case GLSLParser::MAT4X3:
      case GLSLParser::MAT4X4:
      case GLSLParser::DVEC2:
      case GLSLParser::DVEC3:
      case GLSLParser::DVEC4:
      case GLSLParser::DMAT2:
      case GLSLParser::DMAT3:
      case GLSLParser::DMAT4:
      case GLSLParser::DMAT2X2:
      case GLSLParser::DMAT2X3:
      case GLSLParser::DMAT2X4:
      case GLSLParser::DMAT3X2:
      case GLSLParser::DMAT3X3:
      case GLSLParser::DMAT3X4:
      case GLSLParser::DMAT4X2:
      case GLSLParser::DMAT4X3:
      case GLSLParser::DMAT4X4:
      case GLSLParser::CENTROID:
      case GLSLParser::IN_:
      case GLSLParser::OUT_:
      case GLSLParser::INOUT:
      case GLSLParser::UNIFORM:
      case GLSLParser::PATCH:
      case GLSLParser::SAMPLE:
      case GLSLParser::BUFFER:
      case GLSLParser::SHARED:
      case GLSLParser::COHERENT:
      case GLSLParser::VOLATILE:
      case GLSLParser::RESTRICT:
      case GLSLParser::READONLY:
      case GLSLParser::WRITEONLY:
      case GLSLParser::NOPERSPECTIVE:
      case GLSLParser::FLAT:
      case GLSLParser::SMOOTH:
      case GLSLParser::LAYOUT:
      case GLSLParser::ATOMIC_UINT:
      case GLSLParser::SAMPLER2D:
      case GLSLParser::SAMPLER3D:
      case GLSLParser::SAMPLERCUBE:
      case GLSLParser::SAMPLER2DSHADOW:
      case GLSLParser::SAMPLERCUBESHADOW:
      case GLSLParser::SAMPLER2DARRAY:
      case GLSLParser::SAMPLER2DARRAYSHADOW:
      case GLSLParser::ISAMPLER2D:
      case GLSLParser::ISAMPLER3D:
      case GLSLParser::ISAMPLERCUBE:
      case GLSLParser::ISAMPLER2DARRAY:
      case GLSLParser::USAMPLER2D:
      case GLSLParser::USAMPLER3D:
      case GLSLParser::USAMPLERCUBE:
      case GLSLParser::USAMPLER2DARRAY:
      case GLSLParser::SAMPLER1D:
      case GLSLParser::SAMPLER1DSHADOW:
      case GLSLParser::SAMPLER1DARRAY:
      case GLSLParser::SAMPLER1DARRAYSHADOW:
      case GLSLParser::ISAMPLER1D:
      case GLSLParser::ISAMPLER1DARRAY:
      case GLSLParser::USAMPLER1D:
      case GLSLParser::USAMPLER1DARRAY:
      case GLSLParser::SAMPLER2DRECT:
      case GLSLParser::SAMPLER2DRECTSHADOW:
      case GLSLParser::ISAMPLER2DRECT:
      case GLSLParser::USAMPLER2DRECT:
      case GLSLParser::SAMPLERBUFFER:
      case GLSLParser::ISAMPLERBUFFER:
      case GLSLParser::USAMPLERBUFFER:
      case GLSLParser::SAMPLERCUBEARRAY:
      case GLSLParser::SAMPLERCUBEARRAYSHADOW:
      case GLSLParser::ISAMPLERCUBEARRAY:
      case GLSLParser::USAMPLERCUBEARRAY:
      case GLSLParser::SAMPLER2DMS:
      case GLSLParser::ISAMPLER2DMS:
      case GLSLParser::USAMPLER2DMS:
      case GLSLParser::SAMPLER2DMSARRAY:
      case GLSLParser::ISAMPLER2DMSARRAY:
      case GLSLParser::USAMPLER2DMSARRAY:
      case GLSLParser::IMAGE2D:
      case GLSLParser::IIMAGE2D:
      case GLSLParser::UIMAGE2D:
      case GLSLParser::IMAGE3D:
      case GLSLParser::IIMAGE3D:
      case GLSLParser::UIMAGE3D:
      case GLSLParser::IMAGECUBE:
      case GLSLParser::IIMAGECUBE:
      case GLSLParser::UIMAGECUBE:
      case GLSLParser::IMAGEBUFFER:
      case GLSLParser::IIMAGEBUFFER:
      case GLSLParser::UIMAGEBUFFER:
      case GLSLParser::IMAGE2DARRAY:
      case GLSLParser::IIMAGE2DARRAY:
      case GLSLParser::UIMAGE2DARRAY:
      case GLSLParser::IMAGECUBEARRAY:
      case GLSLParser::IIMAGECUBEARRAY:
      case GLSLParser::UIMAGECUBEARRAY:
      case GLSLParser::IMAGE1D:
      case GLSLParser::IIMAGE1D:
      case GLSLParser::UIMAGE1D:
      case GLSLParser::IMAGE1DARRAY:
      case GLSLParser::IIMAGE1DARRAY:
      case GLSLParser::UIMAGE1DARRAY:
      case GLSLParser::IMAGE2DRECT:
      case GLSLParser::IIMAGE2DRECT:
      case GLSLParser::UIMAGE2DRECT:
      case GLSLParser::IMAGE2DMS:
      case GLSLParser::IIMAGE2DMS:
      case GLSLParser::UIMAGE2DMS:
      case GLSLParser::IMAGE2DMSARRAY:
      case GLSLParser::IIMAGE2DMSARRAY:
      case GLSLParser::UIMAGE2DMSARRAY:
      case GLSLParser::STRUCT:
      case GLSLParser::VOID_:
      case GLSLParser::SUBROUTINE:
      case GLSLParser::IDENTIFIER:
      case GLSLParser::FLOATCONSTANT:
      case GLSLParser::INTCONSTANT:
      case GLSLParser::UINTCONSTANT:
      case GLSLParser::BOOLCONSTANT:
      case GLSLParser::DOUBLECONSTANT:
      case GLSLParser::INC_OP:
      case GLSLParser::DEC_OP:
      case GLSLParser::LEFT_PAREN:
      case GLSLParser::BANG:
      case GLSLParser::DASH:
      case GLSLParser::TILDE:
      case GLSLParser::PLUS:
      case GLSLParser::INVARIANT:
      case GLSLParser::PRECISE:
      case GLSLParser::HIGH_PRECISION:
      case GLSLParser::MEDIUM_PRECISION:
      case GLSLParser::LOW_PRECISION: {
        enterOuterAlt(_localctx, 1);
        setState(998);
        condition();
        break;
      }

      case GLSLParser::SEMICOLON: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForRestStatementContext ------------------------------------------------------------------

GLSLParser::ForRestStatementContext::ForRestStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::ConditionoptContext* GLSLParser::ForRestStatementContext::conditionopt() {
  return getRuleContext<GLSLParser::ConditionoptContext>(0);
}

tree::TerminalNode* GLSLParser::ForRestStatementContext::SEMICOLON() {
  return getToken(GLSLParser::SEMICOLON, 0);
}

GLSLParser::ExpressionContext* GLSLParser::ForRestStatementContext::expression() {
  return getRuleContext<GLSLParser::ExpressionContext>(0);
}


size_t GLSLParser::ForRestStatementContext::getRuleIndex() const {
  return GLSLParser::RuleForRestStatement;
}


antlrcpp::Any GLSLParser::ForRestStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitForRestStatement(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::ForRestStatementContext* GLSLParser::forRestStatement() {
  ForRestStatementContext *_localctx = _tracker.createInstance<ForRestStatementContext>(_ctx, getState());
  enterRule(_localctx, 146, GLSLParser::RuleForRestStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1009);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1002);
      conditionopt();
      setState(1003);
      match(GLSLParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1005);
      conditionopt();
      setState(1006);
      match(GLSLParser::SEMICOLON);
      setState(1007);
      expression(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpStatementContext ------------------------------------------------------------------

GLSLParser::JumpStatementContext::JumpStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GLSLParser::JumpStatementContext::CONTINUE() {
  return getToken(GLSLParser::CONTINUE, 0);
}

tree::TerminalNode* GLSLParser::JumpStatementContext::SEMICOLON() {
  return getToken(GLSLParser::SEMICOLON, 0);
}

tree::TerminalNode* GLSLParser::JumpStatementContext::BREAK() {
  return getToken(GLSLParser::BREAK, 0);
}

tree::TerminalNode* GLSLParser::JumpStatementContext::RETURN() {
  return getToken(GLSLParser::RETURN, 0);
}

GLSLParser::ExpressionContext* GLSLParser::JumpStatementContext::expression() {
  return getRuleContext<GLSLParser::ExpressionContext>(0);
}

tree::TerminalNode* GLSLParser::JumpStatementContext::DISCARD() {
  return getToken(GLSLParser::DISCARD, 0);
}


size_t GLSLParser::JumpStatementContext::getRuleIndex() const {
  return GLSLParser::RuleJumpStatement;
}


antlrcpp::Any GLSLParser::JumpStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitJumpStatement(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::JumpStatementContext* GLSLParser::jumpStatement() {
  JumpStatementContext *_localctx = _tracker.createInstance<JumpStatementContext>(_ctx, getState());
  enterRule(_localctx, 148, GLSLParser::RuleJumpStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1023);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1011);
      match(GLSLParser::CONTINUE);
      setState(1012);
      match(GLSLParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1013);
      match(GLSLParser::BREAK);
      setState(1014);
      match(GLSLParser::SEMICOLON);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1015);
      match(GLSLParser::RETURN);
      setState(1016);
      match(GLSLParser::SEMICOLON);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1017);
      match(GLSLParser::RETURN);
      setState(1018);
      expression(0);
      setState(1019);
      match(GLSLParser::SEMICOLON);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1021);
      match(GLSLParser::DISCARD);
      setState(1022);
      match(GLSLParser::SEMICOLON);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TranslationUnitContext ------------------------------------------------------------------

GLSLParser::TranslationUnitContext::TranslationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::ExternalDeclarationContext* GLSLParser::TranslationUnitContext::externalDeclaration() {
  return getRuleContext<GLSLParser::ExternalDeclarationContext>(0);
}

GLSLParser::TranslationUnitContext* GLSLParser::TranslationUnitContext::translationUnit() {
  return getRuleContext<GLSLParser::TranslationUnitContext>(0);
}


size_t GLSLParser::TranslationUnitContext::getRuleIndex() const {
  return GLSLParser::RuleTranslationUnit;
}


antlrcpp::Any GLSLParser::TranslationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitTranslationUnit(this);
  else
    return visitor->visitChildren(this);
}


GLSLParser::TranslationUnitContext* GLSLParser::translationUnit() {
   return translationUnit(0);
}

GLSLParser::TranslationUnitContext* GLSLParser::translationUnit(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GLSLParser::TranslationUnitContext *_localctx = _tracker.createInstance<TranslationUnitContext>(_ctx, parentState);
  GLSLParser::TranslationUnitContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 150;
  enterRecursionRule(_localctx, 150, GLSLParser::RuleTranslationUnit, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1026);
    externalDeclaration();
    _ctx->stop = _input->LT(-1);
    setState(1032);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TranslationUnitContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTranslationUnit);
        setState(1028);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1029);
        externalDeclaration(); 
      }
      setState(1034);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExternalDeclarationContext ------------------------------------------------------------------

GLSLParser::ExternalDeclarationContext::ExternalDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::FunctionDefinitionContext* GLSLParser::ExternalDeclarationContext::functionDefinition() {
  return getRuleContext<GLSLParser::FunctionDefinitionContext>(0);
}

GLSLParser::DeclarationContext* GLSLParser::ExternalDeclarationContext::declaration() {
  return getRuleContext<GLSLParser::DeclarationContext>(0);
}

tree::TerminalNode* GLSLParser::ExternalDeclarationContext::SEMICOLON() {
  return getToken(GLSLParser::SEMICOLON, 0);
}


size_t GLSLParser::ExternalDeclarationContext::getRuleIndex() const {
  return GLSLParser::RuleExternalDeclaration;
}


antlrcpp::Any GLSLParser::ExternalDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitExternalDeclaration(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::ExternalDeclarationContext* GLSLParser::externalDeclaration() {
  ExternalDeclarationContext *_localctx = _tracker.createInstance<ExternalDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 152, GLSLParser::RuleExternalDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1038);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1035);
      functionDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1036);
      declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1037);
      match(GLSLParser::SEMICOLON);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

GLSLParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GLSLParser::FunctionPrototypeContext* GLSLParser::FunctionDefinitionContext::functionPrototype() {
  return getRuleContext<GLSLParser::FunctionPrototypeContext>(0);
}

GLSLParser::CompoundStatementNoNewScopeContext* GLSLParser::FunctionDefinitionContext::compoundStatementNoNewScope() {
  return getRuleContext<GLSLParser::CompoundStatementNoNewScopeContext>(0);
}


size_t GLSLParser::FunctionDefinitionContext::getRuleIndex() const {
  return GLSLParser::RuleFunctionDefinition;
}


antlrcpp::Any GLSLParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GLSLParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

GLSLParser::FunctionDefinitionContext* GLSLParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 154, GLSLParser::RuleFunctionDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1040);
    functionPrototype();
    setState(1041);
    compoundStatementNoNewScope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool GLSLParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return postfixExpressionSempred(dynamic_cast<PostfixExpressionContext *>(context), predicateIndex);
    case 7: return multiplicativeExpressionSempred(dynamic_cast<MultiplicativeExpressionContext *>(context), predicateIndex);
    case 8: return additiveExpressionSempred(dynamic_cast<AdditiveExpressionContext *>(context), predicateIndex);
    case 9: return shiftExpressionSempred(dynamic_cast<ShiftExpressionContext *>(context), predicateIndex);
    case 10: return relationalExpressionSempred(dynamic_cast<RelationalExpressionContext *>(context), predicateIndex);
    case 11: return equalityExpressionSempred(dynamic_cast<EqualityExpressionContext *>(context), predicateIndex);
    case 12: return andExpressionSempred(dynamic_cast<AndExpressionContext *>(context), predicateIndex);
    case 13: return exclusiveOrExpressionSempred(dynamic_cast<ExclusiveOrExpressionContext *>(context), predicateIndex);
    case 14: return inclusiveOrExpressionSempred(dynamic_cast<InclusiveOrExpressionContext *>(context), predicateIndex);
    case 15: return logicalAndExpressionSempred(dynamic_cast<LogicalAndExpressionContext *>(context), predicateIndex);
    case 16: return logicalXorExpressionSempred(dynamic_cast<LogicalXorExpressionContext *>(context), predicateIndex);
    case 17: return logicalOrExpressionSempred(dynamic_cast<LogicalOrExpressionContext *>(context), predicateIndex);
    case 21: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 24: return identifierListSempred(dynamic_cast<IdentifierListContext *>(context), predicateIndex);
    case 27: return functionHeaderWithParametersSempred(dynamic_cast<FunctionHeaderWithParametersContext *>(context), predicateIndex);
    case 32: return initDeclaratorListSempred(dynamic_cast<InitDeclaratorListContext *>(context), predicateIndex);
    case 38: return layoutQualifierIdListSempred(dynamic_cast<LayoutQualifierIdListContext *>(context), predicateIndex);
    case 41: return typeQualifierSempred(dynamic_cast<TypeQualifierContext *>(context), predicateIndex);
    case 44: return typeNameListSempred(dynamic_cast<TypeNameListContext *>(context), predicateIndex);
    case 46: return arraySpecifierSempred(dynamic_cast<ArraySpecifierContext *>(context), predicateIndex);
    case 50: return structDeclarationListSempred(dynamic_cast<StructDeclarationListContext *>(context), predicateIndex);
    case 52: return structDeclaratorListSempred(dynamic_cast<StructDeclaratorListContext *>(context), predicateIndex);
    case 55: return initializerListSempred(dynamic_cast<InitializerListContext *>(context), predicateIndex);
    case 62: return statementListSempred(dynamic_cast<StatementListContext *>(context), predicateIndex);
    case 75: return translationUnitSempred(dynamic_cast<TranslationUnitContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GLSLParser::postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 3);
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::multiplicativeExpressionSempred(MultiplicativeExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 3);
    case 7: return precpred(_ctx, 2);
    case 8: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::additiveExpressionSempred(AdditiveExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return precpred(_ctx, 2);
    case 10: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::shiftExpressionSempred(ShiftExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 2);
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::relationalExpressionSempred(RelationalExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 13: return precpred(_ctx, 4);
    case 14: return precpred(_ctx, 3);
    case 15: return precpred(_ctx, 2);
    case 16: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::equalityExpressionSempred(EqualityExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 17: return precpred(_ctx, 2);
    case 18: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::andExpressionSempred(AndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 19: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::exclusiveOrExpressionSempred(ExclusiveOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 20: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::inclusiveOrExpressionSempred(InclusiveOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 21: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::logicalAndExpressionSempred(LogicalAndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 22: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::logicalXorExpressionSempred(LogicalXorExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 23: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::logicalOrExpressionSempred(LogicalOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 24: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 25: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::identifierListSempred(IdentifierListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 26: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::functionHeaderWithParametersSempred(FunctionHeaderWithParametersContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 27: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::initDeclaratorListSempred(InitDeclaratorListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 28: return precpred(_ctx, 4);
    case 29: return precpred(_ctx, 3);
    case 30: return precpred(_ctx, 2);
    case 31: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::layoutQualifierIdListSempred(LayoutQualifierIdListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 32: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::typeQualifierSempred(TypeQualifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 33: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::typeNameListSempred(TypeNameListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 34: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::arraySpecifierSempred(ArraySpecifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 35: return precpred(_ctx, 2);
    case 36: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::structDeclarationListSempred(StructDeclarationListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 37: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::structDeclaratorListSempred(StructDeclaratorListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 38: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::initializerListSempred(InitializerListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 39: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::statementListSempred(StatementListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 40: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GLSLParser::translationUnitSempred(TranslationUnitContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 41: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> GLSLParser::_decisionToDFA;
atn::PredictionContextCache GLSLParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN GLSLParser::_atn;
std::vector<uint16_t> GLSLParser::_serializedATN;

std::vector<std::string> GLSLParser::_ruleNames = {
  "variableIdentifier", "primaryExpression", "postfixExpression", "integerExpression", 
  "functionCallHeaderWithParameters_", "unaryExpression", "unaryOperator", 
  "multiplicativeExpression", "additiveExpression", "shiftExpression", "relationalExpression", 
  "equalityExpression", "andExpression", "exclusiveOrExpression", "inclusiveOrExpression", 
  "logicalAndExpression", "logicalXorExpression", "logicalOrExpression", 
  "conditionalExpression", "assignmentExpression", "assignmentOperator", 
  "expression", "constantExpression", "declaration", "identifierList", "functionPrototype", 
  "functionDeclarator", "functionHeaderWithParameters", "functionHeader", 
  "parameterDeclarator", "parameterDeclaration", "parameterTypeSpecifier", 
  "initDeclaratorList", "singleDeclaration", "fullySpecifiedType", "invariantQualifier", 
  "interpolationQualifier", "layoutQualifier", "layoutQualifierIdList", 
  "layoutQualifierId", "preciseQualifier", "typeQualifier", "singleTypeQualifier", 
  "storageQualifier", "typeNameList", "typeSpecifier", "arraySpecifier", 
  "typeSpecifierNonarray", "precisionQualifier", "structSpecifier", "structDeclarationList", 
  "structDeclaration", "structDeclaratorList", "structDeclarator", "initializer", 
  "initializerList", "declarationStatement", "statement", "simpleStatement", 
  "compundStatement", "statementNoNewScope", "compoundStatementNoNewScope", 
  "statementList", "expressionStatement", "selectionStatement", "selectionRestStatement", 
  "condition", "switchStatement", "switchStatementList", "caseLabel", "iterationStatement", 
  "forInitStatement", "conditionopt", "forRestStatement", "jumpStatement", 
  "translationUnit", "externalDeclaration", "functionDefinition"
};

std::vector<std::string> GLSLParser::_literalNames = {
  "", "'const'", "'bool'", "'float'", "'int'", "'uint'", "'double'", "'bvec2'", 
  "'bvec3'", "'bvec4'", "'ivec2'", "'ivec3'", "'ivec4'", "'uvec2'", "'uvec3'", 
  "'uvec4'", "'vec2'", "'vec3'", "'vec4'", "'mat2'", "'mat3'", "'mat4'", 
  "'mat2x2'", "'mat2x3'", "'mat2x4'", "'mat3x2'", "'mat3x3'", "'mat3x4'", 
  "'mat4x2'", "'mat4x3'", "'mat4x4'", "'dvec2'", "'dvec3'", "'dvec4'", "'dmat2'", 
  "'dmat3'", "'dmat4'", "'dmat2x2'", "'dmat2x3'", "'dmat2x4'", "'dmat3x2'", 
  "'dmat3x3'", "'dmat3x4'", "'dmat4x2'", "'dmat4x3'", "'dmat4x4'", "'centroid'", 
  "'in'", "'out'", "'inout'", "'uniform'", "'patch'", "'sample'", "'buffer'", 
  "'shared'", "'coherent'", "'volatile'", "'restrict'", "'readonly'", "'writeonly'", 
  "'noperspective'", "'flat'", "'smooth'", "'layout'", "'atomic_uint'", 
  "'sampler2D'", "'sampler3D'", "'samplerCube'", "'sampler2DShadow'", "'samplerCubeShadow'", 
  "'sampler2DArray'", "'sampler2DArrayShadow'", "'isampler2D'", "'isampler3D'", 
  "'isamplerCube'", "'isampler2DArray'", "'usampler2D'", "'usampler3D'", 
  "'usamplerCube'", "'usampler2DArray'", "'sampler1D'", "'sampler1DShadow'", 
  "'sampler1DArray'", "'sampler1DArrayShadow'", "'isampler1D'", "'isampler1DArray'", 
  "'usampler1D'", "'usampler1DArray'", "'sampler2DRect'", "'sampler2DRectShadow'", 
  "'isampler2DRect'", "'usampler2DRect'", "'samplerBuffer'", "'isamplerBuffer'", 
  "'usamplerBuffer'", "'samplerCubeArray'", "'samplerCubeArrayShadow'", 
  "'isamplerCubeArray'", "'usamplerCubeArray'", "'sampler2DMS'", "'isampler2DMS'", 
  "'usampler2DMS'", "'sampler2DMSArray'", "'isampler2DMSArray'", "'usampler2DMSArray'", 
  "'image2D'", "'iimage2D'", "'uimage2D'", "'image3D'", "'iimage3D'", "'uimage3D'", 
  "'imageCube'", "'iimageCube'", "'uimageCube'", "'imageBuffer'", "'iimageBuffer'", 
  "'uimageBuffer'", "'image2DArray'", "'iimage2DArray'", "'uimage2DArray'", 
  "'imageCubeArray'", "'iimageCubeArray'", "'uimageCubeArray'", "'image1D'", 
  "'iimage1D'", "'uimage1D'", "'image1DArray'", "'iimage1DArray'", "'uimage1DArray'", 
  "'image2DRect'", "'iimage2DRect'", "'uimage2DRect'", "'image2DMS'", "'iimage2DMS'", 
  "'uimage2DMS'", "'image2DMSArray'", "'iimage2DMSArray'", "'uimage2DMSArray'", 
  "'struct'", "'void'", "'while'", "'break'", "'continue'", "'do'", "'else'", 
  "'for'", "'if'", "'discard'", "'return'", "'switch'", "'case'", "'default'", 
  "'subroutine'", "", "", "", "", "", "", "", "", "'<<'", "'>>'", "'++'", 
  "'--'", "'<='", "'>='", "'=='", "'!='", "'&&'", "'||'", "'^^'", "'*='", 
  "'/='", "'+='", "'%='", "'<<='", "'>>='", "'&='", "'^='", "'|='", "'-='", 
  "'('", "')'", "'['", "']'", "'{'", "'}'", "'.'", "','", "':'", "'='", 
  "';'", "'!'", "'-'", "'~'", "'+'", "'*'", "'/'", "'%'", "'<'", "'>'", 
  "'|'", "'^'", "'&'", "'?'", "'invariant'", "'precise'", "'highp'", "'mediump'", 
  "'lowp'", "'precision'"
};

std::vector<std::string> GLSLParser::_symbolicNames = {
  "", "CONST_", "BOOL", "FLOAT", "INT", "UINT", "DOUBLE", "BVEC2", "BVEC3", 
  "BVEC4", "IVEC2", "IVEC3", "IVEC4", "UVEC2", "UVEC3", "UVEC4", "VEC2", 
  "VEC3", "VEC4", "MAT2", "MAT3", "MAT4", "MAT2X2", "MAT2X3", "MAT2X4", 
  "MAT3X2", "MAT3X3", "MAT3X4", "MAT4X2", "MAT4X3", "MAT4X4", "DVEC2", "DVEC3", 
  "DVEC4", "DMAT2", "DMAT3", "DMAT4", "DMAT2X2", "DMAT2X3", "DMAT2X4", "DMAT3X2", 
  "DMAT3X3", "DMAT3X4", "DMAT4X2", "DMAT4X3", "DMAT4X4", "CENTROID", "IN_", 
  "OUT_", "INOUT", "UNIFORM", "PATCH", "SAMPLE", "BUFFER", "SHARED", "COHERENT", 
  "VOLATILE", "RESTRICT", "READONLY", "WRITEONLY", "NOPERSPECTIVE", "FLAT", 
  "SMOOTH", "LAYOUT", "ATOMIC_UINT", "SAMPLER2D", "SAMPLER3D", "SAMPLERCUBE", 
  "SAMPLER2DSHADOW", "SAMPLERCUBESHADOW", "SAMPLER2DARRAY", "SAMPLER2DARRAYSHADOW", 
  "ISAMPLER2D", "ISAMPLER3D", "ISAMPLERCUBE", "ISAMPLER2DARRAY", "USAMPLER2D", 
  "USAMPLER3D", "USAMPLERCUBE", "USAMPLER2DARRAY", "SAMPLER1D", "SAMPLER1DSHADOW", 
  "SAMPLER1DARRAY", "SAMPLER1DARRAYSHADOW", "ISAMPLER1D", "ISAMPLER1DARRAY", 
  "USAMPLER1D", "USAMPLER1DARRAY", "SAMPLER2DRECT", "SAMPLER2DRECTSHADOW", 
  "ISAMPLER2DRECT", "USAMPLER2DRECT", "SAMPLERBUFFER", "ISAMPLERBUFFER", 
  "USAMPLERBUFFER", "SAMPLERCUBEARRAY", "SAMPLERCUBEARRAYSHADOW", "ISAMPLERCUBEARRAY", 
  "USAMPLERCUBEARRAY", "SAMPLER2DMS", "ISAMPLER2DMS", "USAMPLER2DMS", "SAMPLER2DMSARRAY", 
  "ISAMPLER2DMSARRAY", "USAMPLER2DMSARRAY", "IMAGE2D", "IIMAGE2D", "UIMAGE2D", 
  "IMAGE3D", "IIMAGE3D", "UIMAGE3D", "IMAGECUBE", "IIMAGECUBE", "UIMAGECUBE", 
  "IMAGEBUFFER", "IIMAGEBUFFER", "UIMAGEBUFFER", "IMAGE2DARRAY", "IIMAGE2DARRAY", 
  "UIMAGE2DARRAY", "IMAGECUBEARRAY", "IIMAGECUBEARRAY", "UIMAGECUBEARRAY", 
  "IMAGE1D", "IIMAGE1D", "UIMAGE1D", "IMAGE1DARRAY", "IIMAGE1DARRAY", "UIMAGE1DARRAY", 
  "IMAGE2DRECT", "IIMAGE2DRECT", "UIMAGE2DRECT", "IMAGE2DMS", "IIMAGE2DMS", 
  "UIMAGE2DMS", "IMAGE2DMSARRAY", "IIMAGE2DMSARRAY", "UIMAGE2DMSARRAY", 
  "STRUCT", "VOID_", "WHILE", "BREAK", "CONTINUE", "DO", "ELSE", "FOR", 
  "IF", "DISCARD", "RETURN", "SWITCH", "CASE", "DEFAULT", "SUBROUTINE", 
  "IDENTIFIER", "TYPE_NAME", "FLOATCONSTANT", "INTCONSTANT", "UINTCONSTANT", 
  "BOOLCONSTANT", "DOUBLECONSTANT", "FIELD_SELECTION", "LEFT_OP", "RIGHT_OP", 
  "INC_OP", "DEC_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", 
  "XOR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "ADD_ASSIGN", "MOD_ASSIGN", "LEFT_ASSIGN", 
  "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "SUB_ASSIGN", 
  "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACKET", "RIGHT_BRACKET", "LEFT_BRACE", 
  "RIGHT_BRACE", "DOT", "COMMA", "COLON", "EQUAL", "SEMICOLON", "BANG", 
  "DASH", "TILDE", "PLUS", "STAR", "SLASH", "PERCENT", "LEFT_ANGLE", "RIGHT_ANGLE", 
  "VERTICAL_BAR", "CARET", "AMPERSAND", "QUESTION", "INVARIANT", "PRECISE", 
  "HIGH_PRECISION", "MEDIUM_PRECISION", "LOW_PRECISION", "PRECISION", "WS"
};

dfa::Vocabulary GLSLParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> GLSLParser::_tokenNames;

GLSLParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xd6, 0x416, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0xab, 0xa, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xb8, 0xa, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xbc, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xd3, 0xa, 0x4, 
    0x3, 0x4, 0x7, 0x4, 0xd6, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xd9, 0xb, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0xe2, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xec, 0xa, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 
    0xfc, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0xff, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x7, 0xa, 0x10a, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x10d, 0xb, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x7, 0xb, 0x118, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x11b, 
    0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x12c, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x12f, 
    0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x13a, 0xa, 0xd, 0xc, 0xd, 0xe, 
    0xd, 0x13d, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x7, 0xe, 0x145, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x148, 0xb, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 
    0xf, 0x150, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x153, 0xb, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x15b, 
    0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x15e, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x166, 0xa, 0x11, 
    0xc, 0x11, 0xe, 0x11, 0x169, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x171, 0xa, 0x12, 0xc, 0x12, 
    0xe, 0x12, 0x174, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x17c, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 
    0x17f, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x188, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x18f, 0xa, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x7, 0x17, 0x199, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x19c, 0xb, 
    0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x1cf, 0xa, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x7, 0x1a, 0x1d8, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x1db, 0xb, 
    0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 
    0x1e2, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x1eb, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 
    0x1ee, 0xb, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 
    0x1f, 0x1fb, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x205, 0xa, 0x20, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x21f, 
    0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x222, 0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x237, 0xa, 0x23, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x23d, 0xa, 0x24, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x24e, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 
    0x251, 0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x5, 0x29, 0x258, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x261, 0xa, 0x2b, 0xc, 0x2b, 
    0xe, 0x2b, 0x264, 0xb, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x26c, 0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 
    0x2d, 0x283, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x28b, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 
    0x28e, 0xb, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 
    0x294, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x29d, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x7, 
    0x30, 0x2a7, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x2aa, 0xb, 0x30, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x325, 0xa, 0x31, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x5, 0x33, 0x334, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x7, 0x34, 0x33b, 0xa, 0x34, 0xc, 0x34, 0xe, 0x34, 0x33e, 
    0xb, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x349, 0xa, 0x35, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 
    0x36, 0x351, 0xa, 0x36, 0xc, 0x36, 0xe, 0x36, 0x354, 0xb, 0x36, 0x3, 
    0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x359, 0xa, 0x37, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
    0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x365, 0xa, 0x38, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x7, 0x39, 0x36d, 
    0xa, 0x39, 0xc, 0x39, 0xe, 0x39, 0x370, 0xb, 0x39, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x376, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x37f, 
    0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
    0x3d, 0x5, 0x3d, 0x387, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 
    0x38b, 0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x5, 0x3f, 0x393, 0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x7, 0x40, 0x39a, 0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 
    0x39d, 0xb, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 
    0x3a3, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 
    0x43, 0x3b0, 0xa, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x3b8, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x46, 0x3, 0x46, 0x5, 0x46, 0x3c4, 0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x3cc, 0xa, 0x47, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
    0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
    0x48, 0x3, 0x48, 0x5, 0x48, 0x3e3, 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 
    0x5, 0x49, 0x3e7, 0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x3eb, 
    0xa, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 
    0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x3f4, 0xa, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
    0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x402, 0xa, 0x4c, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x7, 0x4d, 0x409, 
    0xa, 0x4d, 0xc, 0x4d, 0xe, 0x4d, 0x40c, 0xb, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x5, 0x4e, 0x411, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x2, 0x1b, 0x6, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x2c, 0x32, 0x38, 0x42, 0x4e, 0x54, 0x5a, 0x5e, 
    0x66, 0x6a, 0x70, 0x7e, 0x98, 0x50, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
    0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
    0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 
    0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 
    0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x2, 
    0x6, 0x3, 0x2, 0xc3, 0xc6, 0x4, 0x2, 0xae, 0xb7, 0xc1, 0xc1, 0x3, 0x2, 
    0x3e, 0x40, 0x3, 0x2, 0xd2, 0xd4, 0x2, 0x4c3, 0x2, 0x9e, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x6, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0xda, 0x3, 0x2, 0x2, 0x2, 0xa, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xc, 0xeb, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0xed, 0x3, 0x2, 0x2, 0x2, 0x10, 0xef, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x100, 0x3, 0x2, 0x2, 0x2, 0x14, 0x10e, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x18, 0x130, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x149, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x154, 0x3, 0x2, 0x2, 0x2, 0x20, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x16a, 0x3, 0x2, 0x2, 0x2, 0x24, 0x175, 0x3, 0x2, 0x2, 0x2, 0x26, 0x187, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x190, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x192, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x19d, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1d0, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1e1, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x1fa, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x204, 0x3, 0x2, 0x2, 0x2, 0x40, 0x206, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x208, 0x3, 0x2, 0x2, 0x2, 0x44, 0x236, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x48, 0x23e, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x240, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x242, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x247, 0x3, 0x2, 0x2, 0x2, 0x50, 0x257, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x259, 0x3, 0x2, 0x2, 0x2, 0x54, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x26b, 0x3, 0x2, 0x2, 0x2, 0x58, 0x282, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x284, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x293, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x29c, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x324, 0x3, 0x2, 0x2, 0x2, 0x62, 0x326, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x333, 0x3, 0x2, 0x2, 0x2, 0x66, 0x335, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x348, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x34a, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x358, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x364, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x366, 0x3, 0x2, 0x2, 0x2, 0x72, 0x371, 0x3, 0x2, 0x2, 0x2, 0x74, 0x375, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x78, 0x386, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x392, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x394, 0x3, 0x2, 0x2, 0x2, 0x80, 0x3a2, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x84, 0x3af, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x88, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x3c3, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x3e2, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x92, 0x3ea, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x96, 0x401, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x403, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x410, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0x412, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x9b, 0x2, 0x2, 
    0x9f, 0x3, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xab, 0x5, 0x2, 0x2, 0x2, 0xa1, 
    0xab, 0x7, 0x9e, 0x2, 0x2, 0xa2, 0xab, 0x7, 0x9f, 0x2, 0x2, 0xa3, 0xab, 
    0x7, 0x9d, 0x2, 0x2, 0xa4, 0xab, 0x7, 0xa0, 0x2, 0x2, 0xa5, 0xab, 0x7, 
    0xa1, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0xb8, 0x2, 0x2, 0xa7, 0xa8, 0x5, 0x2c, 
    0x17, 0x2, 0xa8, 0xa9, 0x7, 0xb9, 0x2, 0x2, 0xa9, 0xab, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0xaa, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xaa, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0xab, 0x5, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x8, 
    0x4, 0x1, 0x2, 0xad, 0xbc, 0x5, 0x4, 0x3, 0x2, 0xae, 0xaf, 0x5, 0x5c, 
    0x2f, 0x2, 0xaf, 0xb0, 0x7, 0xb8, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x28, 0x15, 
    0x2, 0xb1, 0xb2, 0x5, 0xa, 0x6, 0x2, 0xb2, 0xb3, 0x7, 0xb9, 0x2, 0x2, 
    0xb3, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0x5c, 0x2f, 0x2, 0xb5, 
    0xb7, 0x7, 0xb8, 0x2, 0x2, 0xb6, 0xb8, 0x7, 0x8d, 0x2, 0x2, 0xb7, 0xb6, 
    0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xba, 0x7, 0xb9, 0x2, 0x2, 0xba, 0xbc, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xac, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xae, 0x3, 0x2, 0x2, 
    0x2, 0xbb, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0xbd, 0xbe, 0xc, 0xa, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0xba, 0x2, 0x2, 0xbf, 
    0xc0, 0x5, 0x8, 0x5, 0x2, 0xc0, 0xc1, 0x7, 0xbb, 0x2, 0x2, 0xc1, 0xd6, 
    0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0xc, 0x9, 0x2, 0x2, 0xc3, 0xc4, 0x7, 
    0xbe, 0x2, 0x2, 0xc4, 0xd6, 0x7, 0x9b, 0x2, 0x2, 0xc5, 0xc6, 0xc, 0x8, 
    0x2, 0x2, 0xc6, 0xd6, 0x7, 0xa5, 0x2, 0x2, 0xc7, 0xc8, 0xc, 0x7, 0x2, 
    0x2, 0xc8, 0xd6, 0x7, 0xa6, 0x2, 0x2, 0xc9, 0xca, 0xc, 0x5, 0x2, 0x2, 
    0xca, 0xcb, 0x7, 0xb8, 0x2, 0x2, 0xcb, 0xcc, 0x5, 0x28, 0x15, 0x2, 0xcc, 
    0xcd, 0x5, 0xa, 0x6, 0x2, 0xcd, 0xce, 0x7, 0xb9, 0x2, 0x2, 0xce, 0xd6, 
    0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0xc, 0x3, 0x2, 0x2, 0xd0, 0xd2, 0x7, 
    0xb8, 0x2, 0x2, 0xd1, 0xd3, 0x7, 0x8d, 0x2, 0x2, 0xd2, 0xd1, 0x3, 0x2, 
    0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xd6, 0x7, 0xb9, 0x2, 0x2, 0xd5, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0xd5, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xd5, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xcf, 
    0x3, 0x2, 0x2, 0x2, 0xd6, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd5, 0x3, 
    0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0xd9, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x2c, 0x17, 
    0x2, 0xdb, 0x9, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0xbf, 0x2, 0x2, 
    0xdd, 0xde, 0x5, 0x28, 0x15, 0x2, 0xde, 0xdf, 0x5, 0xa, 0x6, 0x2, 0xdf, 
    0xe2, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdc, 
    0x3, 0x2, 0x2, 0x2, 0xe1, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0xe3, 0xec, 0x5, 0x6, 0x4, 0x2, 0xe4, 0xe5, 0x7, 0xa5, 
    0x2, 0x2, 0xe5, 0xec, 0x5, 0xc, 0x7, 0x2, 0xe6, 0xe7, 0x7, 0xa6, 0x2, 
    0x2, 0xe7, 0xec, 0x5, 0xc, 0x7, 0x2, 0xe8, 0xe9, 0x5, 0xe, 0x8, 0x2, 
    0xe9, 0xea, 0x5, 0xc, 0x7, 0x2, 0xea, 0xec, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xe3, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0xeb, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xec, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0xed, 0xee, 0x9, 0x2, 0x2, 0x2, 0xee, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0xef, 0xf0, 0x8, 0x9, 0x1, 0x2, 0xf0, 0xf1, 0x5, 0xc, 0x7, 
    0x2, 0xf1, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0xc, 0x5, 0x2, 0x2, 
    0xf3, 0xf4, 0x7, 0xc7, 0x2, 0x2, 0xf4, 0xfc, 0x5, 0xc, 0x7, 0x2, 0xf5, 
    0xf6, 0xc, 0x4, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0xc8, 0x2, 0x2, 0xf7, 0xfc, 
    0x5, 0xc, 0x7, 0x2, 0xf8, 0xf9, 0xc, 0x3, 0x2, 0x2, 0xf9, 0xfa, 0x7, 
    0xc9, 0x2, 0x2, 0xfa, 0xfc, 0x5, 0xc, 0x7, 0x2, 0xfb, 0xf2, 0x3, 0x2, 
    0x2, 0x2, 0xfb, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf8, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0xff, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfb, 0x3, 0x2, 0x2, 0x2, 
    0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x11, 0x3, 0x2, 0x2, 0x2, 0xff, 
    0xfd, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x8, 0xa, 0x1, 0x2, 0x101, 0x102, 
    0x5, 0x10, 0x9, 0x2, 0x102, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 
    0xc, 0x4, 0x2, 0x2, 0x104, 0x105, 0x7, 0xc6, 0x2, 0x2, 0x105, 0x10a, 
    0x5, 0x10, 0x9, 0x2, 0x106, 0x107, 0xc, 0x3, 0x2, 0x2, 0x107, 0x108, 
    0x7, 0xc4, 0x2, 0x2, 0x108, 0x10a, 0x5, 0x10, 0x9, 0x2, 0x109, 0x103, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0x106, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x10c, 0x13, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 0x3, 
    0x2, 0x2, 0x2, 0x10e, 0x10f, 0x8, 0xb, 0x1, 0x2, 0x10f, 0x110, 0x5, 
    0x12, 0xa, 0x2, 0x110, 0x119, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0xc, 
    0x4, 0x2, 0x2, 0x112, 0x113, 0x7, 0xa3, 0x2, 0x2, 0x113, 0x118, 0x5, 
    0x12, 0xa, 0x2, 0x114, 0x115, 0xc, 0x3, 0x2, 0x2, 0x115, 0x116, 0x7, 
    0xa4, 0x2, 0x2, 0x116, 0x118, 0x5, 0x12, 0xa, 0x2, 0x117, 0x111, 0x3, 
    0x2, 0x2, 0x2, 0x117, 0x114, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11b, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 
    0x2, 0x2, 0x2, 0x11a, 0x15, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x119, 0x3, 0x2, 
    0x2, 0x2, 0x11c, 0x11d, 0x8, 0xc, 0x1, 0x2, 0x11d, 0x11e, 0x5, 0x14, 
    0xb, 0x2, 0x11e, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0xc, 0x6, 
    0x2, 0x2, 0x120, 0x121, 0x7, 0xca, 0x2, 0x2, 0x121, 0x12c, 0x5, 0x14, 
    0xb, 0x2, 0x122, 0x123, 0xc, 0x5, 0x2, 0x2, 0x123, 0x124, 0x7, 0xcb, 
    0x2, 0x2, 0x124, 0x12c, 0x5, 0x14, 0xb, 0x2, 0x125, 0x126, 0xc, 0x4, 
    0x2, 0x2, 0x126, 0x127, 0x7, 0xa7, 0x2, 0x2, 0x127, 0x12c, 0x5, 0x14, 
    0xb, 0x2, 0x128, 0x129, 0xc, 0x3, 0x2, 0x2, 0x129, 0x12a, 0x7, 0xa8, 
    0x2, 0x2, 0x12a, 0x12c, 0x5, 0x14, 0xb, 0x2, 0x12b, 0x11f, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0x122, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12f, 0x3, 0x2, 
    0x2, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 
    0x2, 0x2, 0x12e, 0x17, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 0x3, 0x2, 0x2, 
    0x2, 0x130, 0x131, 0x8, 0xd, 0x1, 0x2, 0x131, 0x132, 0x5, 0x16, 0xc, 
    0x2, 0x132, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0xc, 0x4, 0x2, 
    0x2, 0x134, 0x135, 0x7, 0xa9, 0x2, 0x2, 0x135, 0x13a, 0x5, 0x16, 0xc, 
    0x2, 0x136, 0x137, 0xc, 0x3, 0x2, 0x2, 0x137, 0x138, 0x7, 0xaa, 0x2, 
    0x2, 0x138, 0x13a, 0x5, 0x16, 0xc, 0x2, 0x139, 0x133, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x136, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13d, 0x3, 0x2, 0x2, 
    0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x3, 0x2, 0x2, 
    0x2, 0x13c, 0x19, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 
    0x13e, 0x13f, 0x8, 0xe, 0x1, 0x2, 0x13f, 0x140, 0x5, 0x18, 0xd, 0x2, 
    0x140, 0x146, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0xc, 0x3, 0x2, 0x2, 
    0x142, 0x143, 0x7, 0xce, 0x2, 0x2, 0x143, 0x145, 0x5, 0x18, 0xd, 0x2, 
    0x144, 0x141, 0x3, 0x2, 0x2, 0x2, 0x145, 0x148, 0x3, 0x2, 0x2, 0x2, 
    0x146, 0x144, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x3, 0x2, 0x2, 0x2, 
    0x147, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x148, 0x146, 0x3, 0x2, 0x2, 0x2, 0x149, 
    0x14a, 0x8, 0xf, 0x1, 0x2, 0x14a, 0x14b, 0x5, 0x1a, 0xe, 0x2, 0x14b, 
    0x151, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0xc, 0x3, 0x2, 0x2, 0x14d, 
    0x14e, 0x7, 0xcd, 0x2, 0x2, 0x14e, 0x150, 0x5, 0x1a, 0xe, 0x2, 0x14f, 
    0x14c, 0x3, 0x2, 0x2, 0x2, 0x150, 0x153, 0x3, 0x2, 0x2, 0x2, 0x151, 
    0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 0x2, 0x2, 0x152, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 
    0x8, 0x10, 0x1, 0x2, 0x155, 0x156, 0x5, 0x1c, 0xf, 0x2, 0x156, 0x15c, 
    0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0xc, 0x3, 0x2, 0x2, 0x158, 0x159, 
    0x7, 0xcc, 0x2, 0x2, 0x159, 0x15b, 0x5, 0x1c, 0xf, 0x2, 0x15a, 0x157, 
    0x3, 0x2, 0x2, 0x2, 0x15b, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15a, 
    0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 0x8, 
    0x11, 0x1, 0x2, 0x160, 0x161, 0x5, 0x1e, 0x10, 0x2, 0x161, 0x167, 0x3, 
    0x2, 0x2, 0x2, 0x162, 0x163, 0xc, 0x3, 0x2, 0x2, 0x163, 0x164, 0x7, 
    0xab, 0x2, 0x2, 0x164, 0x166, 0x5, 0x1e, 0x10, 0x2, 0x165, 0x162, 0x3, 
    0x2, 0x2, 0x2, 0x166, 0x169, 0x3, 0x2, 0x2, 0x2, 0x167, 0x165, 0x3, 
    0x2, 0x2, 0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 0x2, 0x168, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x169, 0x167, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x8, 0x12, 
    0x1, 0x2, 0x16b, 0x16c, 0x5, 0x20, 0x11, 0x2, 0x16c, 0x172, 0x3, 0x2, 
    0x2, 0x2, 0x16d, 0x16e, 0xc, 0x3, 0x2, 0x2, 0x16e, 0x16f, 0x7, 0xad, 
    0x2, 0x2, 0x16f, 0x171, 0x5, 0x20, 0x11, 0x2, 0x170, 0x16d, 0x3, 0x2, 
    0x2, 0x2, 0x171, 0x174, 0x3, 0x2, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 
    0x2, 0x2, 0x172, 0x173, 0x3, 0x2, 0x2, 0x2, 0x173, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x174, 0x172, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x8, 0x13, 0x1, 
    0x2, 0x176, 0x177, 0x5, 0x22, 0x12, 0x2, 0x177, 0x17d, 0x3, 0x2, 0x2, 
    0x2, 0x178, 0x179, 0xc, 0x3, 0x2, 0x2, 0x179, 0x17a, 0x7, 0xac, 0x2, 
    0x2, 0x17a, 0x17c, 0x5, 0x22, 0x12, 0x2, 0x17b, 0x178, 0x3, 0x2, 0x2, 
    0x2, 0x17c, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17b, 0x3, 0x2, 0x2, 
    0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x17f, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x180, 0x188, 0x5, 0x24, 0x13, 0x2, 
    0x181, 0x182, 0x5, 0x24, 0x13, 0x2, 0x182, 0x183, 0x7, 0xcf, 0x2, 0x2, 
    0x183, 0x184, 0x5, 0x2c, 0x17, 0x2, 0x184, 0x185, 0x7, 0xc0, 0x2, 0x2, 
    0x185, 0x186, 0x5, 0x28, 0x15, 0x2, 0x186, 0x188, 0x3, 0x2, 0x2, 0x2, 
    0x187, 0x180, 0x3, 0x2, 0x2, 0x2, 0x187, 0x181, 0x3, 0x2, 0x2, 0x2, 
    0x188, 0x27, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18f, 0x5, 0x26, 0x14, 0x2, 
    0x18a, 0x18b, 0x5, 0xc, 0x7, 0x2, 0x18b, 0x18c, 0x5, 0x2a, 0x16, 0x2, 
    0x18c, 0x18d, 0x5, 0x28, 0x15, 0x2, 0x18d, 0x18f, 0x3, 0x2, 0x2, 0x2, 
    0x18e, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18a, 0x3, 0x2, 0x2, 0x2, 
    0x18f, 0x29, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x9, 0x3, 0x2, 0x2, 0x191, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x8, 0x17, 0x1, 0x2, 0x193, 
    0x194, 0x5, 0x28, 0x15, 0x2, 0x194, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x195, 
    0x196, 0xc, 0x3, 0x2, 0x2, 0x196, 0x197, 0x7, 0xbf, 0x2, 0x2, 0x197, 
    0x199, 0x5, 0x28, 0x15, 0x2, 0x198, 0x195, 0x3, 0x2, 0x2, 0x2, 0x199, 
    0x19c, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19a, 
    0x19b, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19a, 
    0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x5, 0x26, 0x14, 0x2, 0x19e, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a0, 0x5, 0x34, 0x1b, 0x2, 0x1a0, 0x1a1, 
    0x7, 0xc2, 0x2, 0x2, 0x1a1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 
    0x5, 0x42, 0x22, 0x2, 0x1a3, 0x1a4, 0x7, 0xc2, 0x2, 0x2, 0x1a4, 0x1cf, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x7, 0xd5, 0x2, 0x2, 0x1a6, 0x1a7, 
    0x5, 0x62, 0x32, 0x2, 0x1a7, 0x1a8, 0x5, 0x5c, 0x2f, 0x2, 0x1a8, 0x1a9, 
    0x7, 0xc2, 0x2, 0x2, 0x1a9, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 
    0x5, 0x54, 0x2b, 0x2, 0x1ab, 0x1ac, 0x7, 0x9b, 0x2, 0x2, 0x1ac, 0x1ad, 
    0x7, 0xbc, 0x2, 0x2, 0x1ad, 0x1ae, 0x5, 0x66, 0x34, 0x2, 0x1ae, 0x1af, 
    0x7, 0xbd, 0x2, 0x2, 0x1af, 0x1b0, 0x7, 0xc2, 0x2, 0x2, 0x1b0, 0x1cf, 
    0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x5, 0x54, 0x2b, 0x2, 0x1b2, 0x1b3, 
    0x7, 0x9b, 0x2, 0x2, 0x1b3, 0x1b4, 0x7, 0xbc, 0x2, 0x2, 0x1b4, 0x1b5, 
    0x5, 0x66, 0x34, 0x2, 0x1b5, 0x1b6, 0x7, 0xbd, 0x2, 0x2, 0x1b6, 0x1b7, 
    0x7, 0x9b, 0x2, 0x2, 0x1b7, 0x1b8, 0x7, 0xc2, 0x2, 0x2, 0x1b8, 0x1cf, 
    0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x5, 0x54, 0x2b, 0x2, 0x1ba, 0x1bb, 
    0x7, 0x9b, 0x2, 0x2, 0x1bb, 0x1bc, 0x7, 0xbc, 0x2, 0x2, 0x1bc, 0x1bd, 
    0x5, 0x66, 0x34, 0x2, 0x1bd, 0x1be, 0x7, 0xbd, 0x2, 0x2, 0x1be, 0x1bf, 
    0x7, 0x9b, 0x2, 0x2, 0x1bf, 0x1c0, 0x5, 0x5e, 0x30, 0x2, 0x1c0, 0x1c1, 
    0x7, 0xc2, 0x2, 0x2, 0x1c1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 
    0x5, 0x54, 0x2b, 0x2, 0x1c3, 0x1c4, 0x7, 0xc2, 0x2, 0x2, 0x1c4, 0x1cf, 
    0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x5, 0x54, 0x2b, 0x2, 0x1c6, 0x1c7, 
    0x7, 0x9b, 0x2, 0x2, 0x1c7, 0x1c8, 0x7, 0xc2, 0x2, 0x2, 0x1c8, 0x1cf, 
    0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x5, 0x54, 0x2b, 0x2, 0x1ca, 0x1cb, 
    0x7, 0x9b, 0x2, 0x2, 0x1cb, 0x1cc, 0x5, 0x32, 0x1a, 0x2, 0x1cc, 0x1cd, 
    0x7, 0xc2, 0x2, 0x2, 0x1cd, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x19f, 
    0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1a5, 
    0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1b1, 
    0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1c2, 
    0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1c9, 
    0x3, 0x2, 0x2, 0x2, 0x1cf, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x8, 
    0x1a, 0x1, 0x2, 0x1d1, 0x1d2, 0x7, 0xbf, 0x2, 0x2, 0x1d2, 0x1d3, 0x7, 
    0x9b, 0x2, 0x2, 0x1d3, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0xc, 
    0x3, 0x2, 0x2, 0x1d5, 0x1d6, 0x7, 0xbf, 0x2, 0x2, 0x1d6, 0x1d8, 0x7, 
    0x9b, 0x2, 0x2, 0x1d7, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1db, 0x3, 
    0x2, 0x2, 0x2, 0x1d9, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x3, 
    0x2, 0x2, 0x2, 0x1da, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1d9, 0x3, 0x2, 
    0x2, 0x2, 0x1dc, 0x1dd, 0x5, 0x36, 0x1c, 0x2, 0x1dd, 0x1de, 0x7, 0xb9, 
    0x2, 0x2, 0x1de, 0x35, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e2, 0x5, 0x3a, 
    0x1e, 0x2, 0x1e0, 0x1e2, 0x5, 0x38, 0x1d, 0x2, 0x1e1, 0x1df, 0x3, 0x2, 
    0x2, 0x2, 0x1e1, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x1e3, 0x1e4, 0x8, 0x1d, 0x1, 0x2, 0x1e4, 0x1e5, 0x5, 0x3a, 0x1e, 
    0x2, 0x1e5, 0x1e6, 0x5, 0x3e, 0x20, 0x2, 0x1e6, 0x1ec, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1e8, 0xc, 0x3, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0xbf, 0x2, 
    0x2, 0x1e9, 0x1eb, 0x5, 0x3e, 0x20, 0x2, 0x1ea, 0x1e7, 0x3, 0x2, 0x2, 
    0x2, 0x1eb, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ea, 0x3, 0x2, 0x2, 
    0x2, 0x1ec, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x1ee, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x5, 0x46, 0x24, 0x2, 
    0x1f0, 0x1f1, 0x7, 0x9b, 0x2, 0x2, 0x1f1, 0x1f2, 0x7, 0xb8, 0x2, 0x2, 
    0x1f2, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x5, 0x5c, 0x2f, 0x2, 
    0x1f4, 0x1f5, 0x7, 0x9b, 0x2, 0x2, 0x1f5, 0x1fb, 0x3, 0x2, 0x2, 0x2, 
    0x1f6, 0x1f7, 0x5, 0x5c, 0x2f, 0x2, 0x1f7, 0x1f8, 0x7, 0x9b, 0x2, 0x2, 
    0x1f8, 0x1f9, 0x5, 0x5e, 0x30, 0x2, 0x1f9, 0x1fb, 0x3, 0x2, 0x2, 0x2, 
    0x1fa, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1f6, 0x3, 0x2, 0x2, 0x2, 
    0x1fb, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x5, 0x54, 0x2b, 0x2, 
    0x1fd, 0x1fe, 0x5, 0x3c, 0x1f, 0x2, 0x1fe, 0x205, 0x3, 0x2, 0x2, 0x2, 
    0x1ff, 0x205, 0x5, 0x3c, 0x1f, 0x2, 0x200, 0x201, 0x5, 0x54, 0x2b, 0x2, 
    0x201, 0x202, 0x5, 0x40, 0x21, 0x2, 0x202, 0x205, 0x3, 0x2, 0x2, 0x2, 
    0x203, 0x205, 0x5, 0x40, 0x21, 0x2, 0x204, 0x1fc, 0x3, 0x2, 0x2, 0x2, 
    0x204, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x204, 0x200, 0x3, 0x2, 0x2, 0x2, 
    0x204, 0x203, 0x3, 0x2, 0x2, 0x2, 0x205, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x206, 
    0x207, 0x5, 0x5c, 0x2f, 0x2, 0x207, 0x41, 0x3, 0x2, 0x2, 0x2, 0x208, 
    0x209, 0x8, 0x22, 0x1, 0x2, 0x209, 0x20a, 0x5, 0x44, 0x23, 0x2, 0x20a, 
    0x220, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0xc, 0x6, 0x2, 0x2, 0x20c, 
    0x20d, 0x7, 0xbf, 0x2, 0x2, 0x20d, 0x21f, 0x7, 0x9b, 0x2, 0x2, 0x20e, 
    0x20f, 0xc, 0x5, 0x2, 0x2, 0x20f, 0x210, 0x7, 0xbf, 0x2, 0x2, 0x210, 
    0x211, 0x7, 0x9b, 0x2, 0x2, 0x211, 0x21f, 0x5, 0x5e, 0x30, 0x2, 0x212, 
    0x213, 0xc, 0x4, 0x2, 0x2, 0x213, 0x214, 0x7, 0xbf, 0x2, 0x2, 0x214, 
    0x215, 0x7, 0x9b, 0x2, 0x2, 0x215, 0x216, 0x5, 0x5e, 0x30, 0x2, 0x216, 
    0x217, 0x7, 0xc1, 0x2, 0x2, 0x217, 0x218, 0x5, 0x6e, 0x38, 0x2, 0x218, 
    0x21f, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 0xc, 0x3, 0x2, 0x2, 0x21a, 
    0x21b, 0x7, 0xbf, 0x2, 0x2, 0x21b, 0x21c, 0x7, 0x9b, 0x2, 0x2, 0x21c, 
    0x21d, 0x7, 0xc1, 0x2, 0x2, 0x21d, 0x21f, 0x5, 0x6e, 0x38, 0x2, 0x21e, 
    0x20b, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x21e, 
    0x212, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21f, 
    0x222, 0x3, 0x2, 0x2, 0x2, 0x220, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x220, 
    0x221, 0x3, 0x2, 0x2, 0x2, 0x221, 0x43, 0x3, 0x2, 0x2, 0x2, 0x222, 0x220, 
    0x3, 0x2, 0x2, 0x2, 0x223, 0x237, 0x5, 0x46, 0x24, 0x2, 0x224, 0x225, 
    0x5, 0x46, 0x24, 0x2, 0x225, 0x226, 0x7, 0x9b, 0x2, 0x2, 0x226, 0x237, 
    0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 0x5, 0x46, 0x24, 0x2, 0x228, 0x229, 
    0x7, 0x9b, 0x2, 0x2, 0x229, 0x22a, 0x5, 0x5e, 0x30, 0x2, 0x22a, 0x237, 
    0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x5, 0x46, 0x24, 0x2, 0x22c, 0x22d, 
    0x7, 0x9b, 0x2, 0x2, 0x22d, 0x22e, 0x5, 0x5e, 0x30, 0x2, 0x22e, 0x22f, 
    0x7, 0xc1, 0x2, 0x2, 0x22f, 0x230, 0x5, 0x6e, 0x38, 0x2, 0x230, 0x237, 
    0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 0x5, 0x46, 0x24, 0x2, 0x232, 0x233, 
    0x7, 0x9b, 0x2, 0x2, 0x233, 0x234, 0x7, 0xc1, 0x2, 0x2, 0x234, 0x235, 
    0x5, 0x6e, 0x38, 0x2, 0x235, 0x237, 0x3, 0x2, 0x2, 0x2, 0x236, 0x223, 
    0x3, 0x2, 0x2, 0x2, 0x236, 0x224, 0x3, 0x2, 0x2, 0x2, 0x236, 0x227, 
    0x3, 0x2, 0x2, 0x2, 0x236, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x236, 0x231, 
    0x3, 0x2, 0x2, 0x2, 0x237, 0x45, 0x3, 0x2, 0x2, 0x2, 0x238, 0x23d, 0x5, 
    0x5c, 0x2f, 0x2, 0x239, 0x23a, 0x5, 0x54, 0x2b, 0x2, 0x23a, 0x23b, 0x5, 
    0x5c, 0x2f, 0x2, 0x23b, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x238, 0x3, 
    0x2, 0x2, 0x2, 0x23c, 0x239, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x23e, 0x23f, 0x7, 0xd0, 0x2, 0x2, 0x23f, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x240, 0x241, 0x9, 0x4, 0x2, 0x2, 0x241, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x242, 0x243, 0x7, 0x41, 0x2, 0x2, 0x243, 0x244, 0x7, 0xb8, 0x2, 
    0x2, 0x244, 0x245, 0x5, 0x4e, 0x28, 0x2, 0x245, 0x246, 0x7, 0xb9, 0x2, 
    0x2, 0x246, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x8, 0x28, 0x1, 
    0x2, 0x248, 0x249, 0x5, 0x50, 0x29, 0x2, 0x249, 0x24f, 0x3, 0x2, 0x2, 
    0x2, 0x24a, 0x24b, 0xc, 0x3, 0x2, 0x2, 0x24b, 0x24c, 0x7, 0xbf, 0x2, 
    0x2, 0x24c, 0x24e, 0x5, 0x50, 0x29, 0x2, 0x24d, 0x24a, 0x3, 0x2, 0x2, 
    0x2, 0x24e, 0x251, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x24d, 0x3, 0x2, 0x2, 
    0x2, 0x24f, 0x250, 0x3, 0x2, 0x2, 0x2, 0x250, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x251, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x252, 0x258, 0x7, 0x9b, 0x2, 0x2, 
    0x253, 0x254, 0x7, 0x9b, 0x2, 0x2, 0x254, 0x255, 0x7, 0xc1, 0x2, 0x2, 
    0x255, 0x258, 0x5, 0x2e, 0x18, 0x2, 0x256, 0x258, 0x7, 0x38, 0x2, 0x2, 
    0x257, 0x252, 0x3, 0x2, 0x2, 0x2, 0x257, 0x253, 0x3, 0x2, 0x2, 0x2, 
    0x257, 0x256, 0x3, 0x2, 0x2, 0x2, 0x258, 0x51, 0x3, 0x2, 0x2, 0x2, 0x259, 
    0x25a, 0x7, 0xd1, 0x2, 0x2, 0x25a, 0x53, 0x3, 0x2, 0x2, 0x2, 0x25b, 
    0x25c, 0x8, 0x2b, 0x1, 0x2, 0x25c, 0x25d, 0x5, 0x56, 0x2c, 0x2, 0x25d, 
    0x262, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0xc, 0x3, 0x2, 0x2, 0x25f, 
    0x261, 0x5, 0x56, 0x2c, 0x2, 0x260, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x261, 
    0x264, 0x3, 0x2, 0x2, 0x2, 0x262, 0x260, 0x3, 0x2, 0x2, 0x2, 0x262, 
    0x263, 0x3, 0x2, 0x2, 0x2, 0x263, 0x55, 0x3, 0x2, 0x2, 0x2, 0x264, 0x262, 
    0x3, 0x2, 0x2, 0x2, 0x265, 0x26c, 0x5, 0x58, 0x2d, 0x2, 0x266, 0x26c, 
    0x5, 0x4c, 0x27, 0x2, 0x267, 0x26c, 0x5, 0x62, 0x32, 0x2, 0x268, 0x26c, 
    0x5, 0x4a, 0x26, 0x2, 0x269, 0x26c, 0x5, 0x48, 0x25, 0x2, 0x26a, 0x26c, 
    0x5, 0x52, 0x2a, 0x2, 0x26b, 0x265, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x266, 
    0x3, 0x2, 0x2, 0x2, 0x26b, 0x267, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x268, 
    0x3, 0x2, 0x2, 0x2, 0x26b, 0x269, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26a, 
    0x3, 0x2, 0x2, 0x2, 0x26c, 0x57, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x283, 0x7, 
    0x3, 0x2, 0x2, 0x26e, 0x283, 0x7, 0x31, 0x2, 0x2, 0x26f, 0x283, 0x7, 
    0x32, 0x2, 0x2, 0x270, 0x283, 0x7, 0x33, 0x2, 0x2, 0x271, 0x283, 0x7, 
    0x30, 0x2, 0x2, 0x272, 0x283, 0x7, 0x35, 0x2, 0x2, 0x273, 0x283, 0x7, 
    0x36, 0x2, 0x2, 0x274, 0x283, 0x7, 0x34, 0x2, 0x2, 0x275, 0x283, 0x7, 
    0x37, 0x2, 0x2, 0x276, 0x283, 0x7, 0x38, 0x2, 0x2, 0x277, 0x283, 0x7, 
    0x39, 0x2, 0x2, 0x278, 0x283, 0x7, 0x3a, 0x2, 0x2, 0x279, 0x283, 0x7, 
    0x3b, 0x2, 0x2, 0x27a, 0x283, 0x7, 0x3c, 0x2, 0x2, 0x27b, 0x283, 0x7, 
    0x3d, 0x2, 0x2, 0x27c, 0x283, 0x7, 0x9a, 0x2, 0x2, 0x27d, 0x27e, 0x7, 
    0x9a, 0x2, 0x2, 0x27e, 0x27f, 0x7, 0xb8, 0x2, 0x2, 0x27f, 0x280, 0x5, 
    0x5a, 0x2e, 0x2, 0x280, 0x281, 0x7, 0xb9, 0x2, 0x2, 0x281, 0x283, 0x3, 
    0x2, 0x2, 0x2, 0x282, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x282, 0x26e, 0x3, 
    0x2, 0x2, 0x2, 0x282, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x282, 0x270, 0x3, 
    0x2, 0x2, 0x2, 0x282, 0x271, 0x3, 0x2, 0x2, 0x2, 0x282, 0x272, 0x3, 
    0x2, 0x2, 0x2, 0x282, 0x273, 0x3, 0x2, 0x2, 0x2, 0x282, 0x274, 0x3, 
    0x2, 0x2, 0x2, 0x282, 0x275, 0x3, 0x2, 0x2, 0x2, 0x282, 0x276, 0x3, 
    0x2, 0x2, 0x2, 0x282, 0x277, 0x3, 0x2, 0x2, 0x2, 0x282, 0x278, 0x3, 
    0x2, 0x2, 0x2, 0x282, 0x279, 0x3, 0x2, 0x2, 0x2, 0x282, 0x27a, 0x3, 
    0x2, 0x2, 0x2, 0x282, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x282, 0x27c, 0x3, 
    0x2, 0x2, 0x2, 0x282, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x283, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x284, 0x285, 0x8, 0x2e, 0x1, 0x2, 0x285, 0x286, 0x7, 0x9b, 
    0x2, 0x2, 0x286, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0xc, 0x3, 
    0x2, 0x2, 0x288, 0x289, 0x7, 0xbf, 0x2, 0x2, 0x289, 0x28b, 0x7, 0x9b, 
    0x2, 0x2, 0x28a, 0x287, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28e, 0x3, 0x2, 
    0x2, 0x2, 0x28c, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 0x3, 0x2, 
    0x2, 0x2, 0x28d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28c, 0x3, 0x2, 0x2, 
    0x2, 0x28f, 0x294, 0x5, 0x60, 0x31, 0x2, 0x290, 0x291, 0x5, 0x60, 0x31, 
    0x2, 0x291, 0x292, 0x5, 0x5e, 0x30, 0x2, 0x292, 0x294, 0x3, 0x2, 0x2, 
    0x2, 0x293, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x293, 0x290, 0x3, 0x2, 0x2, 
    0x2, 0x294, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x295, 0x296, 0x8, 0x30, 0x1, 
    0x2, 0x296, 0x297, 0x7, 0xba, 0x2, 0x2, 0x297, 0x29d, 0x7, 0xbb, 0x2, 
    0x2, 0x298, 0x299, 0x7, 0xba, 0x2, 0x2, 0x299, 0x29a, 0x5, 0x26, 0x14, 
    0x2, 0x29a, 0x29b, 0x7, 0xbb, 0x2, 0x2, 0x29b, 0x29d, 0x3, 0x2, 0x2, 
    0x2, 0x29c, 0x295, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x298, 0x3, 0x2, 0x2, 
    0x2, 0x29d, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0xc, 0x4, 0x2, 
    0x2, 0x29f, 0x2a0, 0x7, 0xba, 0x2, 0x2, 0x2a0, 0x2a7, 0x7, 0xbb, 0x2, 
    0x2, 0x2a1, 0x2a2, 0xc, 0x3, 0x2, 0x2, 0x2a2, 0x2a3, 0x7, 0xba, 0x2, 
    0x2, 0x2a3, 0x2a4, 0x5, 0x26, 0x14, 0x2, 0x2a4, 0x2a5, 0x7, 0xbb, 0x2, 
    0x2, 0x2a5, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x29e, 0x3, 0x2, 0x2, 
    0x2, 0x2a6, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2aa, 0x3, 0x2, 0x2, 
    0x2, 0x2a8, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a9, 0x3, 0x2, 0x2, 
    0x2, 0x2a9, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2a8, 0x3, 0x2, 0x2, 0x2, 
    0x2ab, 0x325, 0x7, 0x8d, 0x2, 0x2, 0x2ac, 0x325, 0x7, 0x5, 0x2, 0x2, 
    0x2ad, 0x325, 0x7, 0x8, 0x2, 0x2, 0x2ae, 0x325, 0x7, 0x6, 0x2, 0x2, 
    0x2af, 0x325, 0x7, 0x7, 0x2, 0x2, 0x2b0, 0x325, 0x7, 0x4, 0x2, 0x2, 
    0x2b1, 0x325, 0x7, 0x12, 0x2, 0x2, 0x2b2, 0x325, 0x7, 0x13, 0x2, 0x2, 
    0x2b3, 0x325, 0x7, 0x14, 0x2, 0x2, 0x2b4, 0x325, 0x7, 0x21, 0x2, 0x2, 
    0x2b5, 0x325, 0x7, 0x22, 0x2, 0x2, 0x2b6, 0x325, 0x7, 0x23, 0x2, 0x2, 
    0x2b7, 0x325, 0x7, 0x9, 0x2, 0x2, 0x2b8, 0x325, 0x7, 0xa, 0x2, 0x2, 
    0x2b9, 0x325, 0x7, 0xb, 0x2, 0x2, 0x2ba, 0x325, 0x7, 0xc, 0x2, 0x2, 
    0x2bb, 0x325, 0x7, 0xd, 0x2, 0x2, 0x2bc, 0x325, 0x7, 0xe, 0x2, 0x2, 
    0x2bd, 0x325, 0x7, 0xf, 0x2, 0x2, 0x2be, 0x325, 0x7, 0x10, 0x2, 0x2, 
    0x2bf, 0x325, 0x7, 0x11, 0x2, 0x2, 0x2c0, 0x325, 0x7, 0x15, 0x2, 0x2, 
    0x2c1, 0x325, 0x7, 0x16, 0x2, 0x2, 0x2c2, 0x325, 0x7, 0x17, 0x2, 0x2, 
    0x2c3, 0x325, 0x7, 0x18, 0x2, 0x2, 0x2c4, 0x325, 0x7, 0x19, 0x2, 0x2, 
    0x2c5, 0x325, 0x7, 0x1a, 0x2, 0x2, 0x2c6, 0x325, 0x7, 0x1b, 0x2, 0x2, 
    0x2c7, 0x325, 0x7, 0x1c, 0x2, 0x2, 0x2c8, 0x325, 0x7, 0x1d, 0x2, 0x2, 
    0x2c9, 0x325, 0x7, 0x1e, 0x2, 0x2, 0x2ca, 0x325, 0x7, 0x1f, 0x2, 0x2, 
    0x2cb, 0x325, 0x7, 0x20, 0x2, 0x2, 0x2cc, 0x325, 0x7, 0x24, 0x2, 0x2, 
    0x2cd, 0x325, 0x7, 0x25, 0x2, 0x2, 0x2ce, 0x325, 0x7, 0x26, 0x2, 0x2, 
    0x2cf, 0x325, 0x7, 0x27, 0x2, 0x2, 0x2d0, 0x325, 0x7, 0x28, 0x2, 0x2, 
    0x2d1, 0x325, 0x7, 0x29, 0x2, 0x2, 0x2d2, 0x325, 0x7, 0x2a, 0x2, 0x2, 
    0x2d3, 0x325, 0x7, 0x2b, 0x2, 0x2, 0x2d4, 0x325, 0x7, 0x2c, 0x2, 0x2, 
    0x2d5, 0x325, 0x7, 0x2d, 0x2, 0x2, 0x2d6, 0x325, 0x7, 0x2e, 0x2, 0x2, 
    0x2d7, 0x325, 0x7, 0x2f, 0x2, 0x2, 0x2d8, 0x325, 0x7, 0x42, 0x2, 0x2, 
    0x2d9, 0x325, 0x7, 0x43, 0x2, 0x2, 0x2da, 0x325, 0x7, 0x44, 0x2, 0x2, 
    0x2db, 0x325, 0x7, 0x45, 0x2, 0x2, 0x2dc, 0x325, 0x7, 0x46, 0x2, 0x2, 
    0x2dd, 0x325, 0x7, 0x47, 0x2, 0x2, 0x2de, 0x325, 0x7, 0x48, 0x2, 0x2, 
    0x2df, 0x325, 0x7, 0x49, 0x2, 0x2, 0x2e0, 0x325, 0x7, 0x61, 0x2, 0x2, 
    0x2e1, 0x325, 0x7, 0x62, 0x2, 0x2, 0x2e2, 0x325, 0x7, 0x4a, 0x2, 0x2, 
    0x2e3, 0x325, 0x7, 0x4b, 0x2, 0x2, 0x2e4, 0x325, 0x7, 0x4c, 0x2, 0x2, 
    0x2e5, 0x325, 0x7, 0x4d, 0x2, 0x2, 0x2e6, 0x325, 0x7, 0x63, 0x2, 0x2, 
    0x2e7, 0x325, 0x7, 0x4e, 0x2, 0x2, 0x2e8, 0x325, 0x7, 0x4f, 0x2, 0x2, 
    0x2e9, 0x325, 0x7, 0x50, 0x2, 0x2, 0x2ea, 0x325, 0x7, 0x51, 0x2, 0x2, 
    0x2eb, 0x325, 0x7, 0x64, 0x2, 0x2, 0x2ec, 0x325, 0x7, 0x52, 0x2, 0x2, 
    0x2ed, 0x325, 0x7, 0x53, 0x2, 0x2, 0x2ee, 0x325, 0x7, 0x54, 0x2, 0x2, 
    0x2ef, 0x325, 0x7, 0x55, 0x2, 0x2, 0x2f0, 0x325, 0x7, 0x56, 0x2, 0x2, 
    0x2f1, 0x325, 0x7, 0x57, 0x2, 0x2, 0x2f2, 0x325, 0x7, 0x58, 0x2, 0x2, 
    0x2f3, 0x325, 0x7, 0x59, 0x2, 0x2, 0x2f4, 0x325, 0x7, 0x5a, 0x2, 0x2, 
    0x2f5, 0x325, 0x7, 0x5b, 0x2, 0x2, 0x2f6, 0x325, 0x7, 0x5c, 0x2, 0x2, 
    0x2f7, 0x325, 0x7, 0x5d, 0x2, 0x2, 0x2f8, 0x325, 0x7, 0x5e, 0x2, 0x2, 
    0x2f9, 0x325, 0x7, 0x5f, 0x2, 0x2, 0x2fa, 0x325, 0x7, 0x60, 0x2, 0x2, 
    0x2fb, 0x325, 0x7, 0x65, 0x2, 0x2, 0x2fc, 0x325, 0x7, 0x66, 0x2, 0x2, 
    0x2fd, 0x325, 0x7, 0x67, 0x2, 0x2, 0x2fe, 0x325, 0x7, 0x68, 0x2, 0x2, 
    0x2ff, 0x325, 0x7, 0x69, 0x2, 0x2, 0x300, 0x325, 0x7, 0x6a, 0x2, 0x2, 
    0x301, 0x325, 0x7, 0x6b, 0x2, 0x2, 0x302, 0x325, 0x7, 0x6c, 0x2, 0x2, 
    0x303, 0x325, 0x7, 0x6d, 0x2, 0x2, 0x304, 0x325, 0x7, 0x6e, 0x2, 0x2, 
    0x305, 0x325, 0x7, 0x6f, 0x2, 0x2, 0x306, 0x325, 0x7, 0x70, 0x2, 0x2, 
    0x307, 0x325, 0x7, 0x71, 0x2, 0x2, 0x308, 0x325, 0x7, 0x72, 0x2, 0x2, 
    0x309, 0x325, 0x7, 0x73, 0x2, 0x2, 0x30a, 0x325, 0x7, 0x74, 0x2, 0x2, 
    0x30b, 0x325, 0x7, 0x75, 0x2, 0x2, 0x30c, 0x325, 0x7, 0x76, 0x2, 0x2, 
    0x30d, 0x325, 0x7, 0x7d, 0x2, 0x2, 0x30e, 0x325, 0x7, 0x7e, 0x2, 0x2, 
    0x30f, 0x325, 0x7, 0x7f, 0x2, 0x2, 0x310, 0x325, 0x7, 0x80, 0x2, 0x2, 
    0x311, 0x325, 0x7, 0x81, 0x2, 0x2, 0x312, 0x325, 0x7, 0x82, 0x2, 0x2, 
    0x313, 0x325, 0x7, 0x83, 0x2, 0x2, 0x314, 0x325, 0x7, 0x84, 0x2, 0x2, 
    0x315, 0x325, 0x7, 0x85, 0x2, 0x2, 0x316, 0x325, 0x7, 0x77, 0x2, 0x2, 
    0x317, 0x325, 0x7, 0x78, 0x2, 0x2, 0x318, 0x325, 0x7, 0x79, 0x2, 0x2, 
    0x319, 0x325, 0x7, 0x7a, 0x2, 0x2, 0x31a, 0x325, 0x7, 0x7b, 0x2, 0x2, 
    0x31b, 0x325, 0x7, 0x7c, 0x2, 0x2, 0x31c, 0x325, 0x7, 0x86, 0x2, 0x2, 
    0x31d, 0x325, 0x7, 0x87, 0x2, 0x2, 0x31e, 0x325, 0x7, 0x88, 0x2, 0x2, 
    0x31f, 0x325, 0x7, 0x89, 0x2, 0x2, 0x320, 0x325, 0x7, 0x8a, 0x2, 0x2, 
    0x321, 0x325, 0x7, 0x8b, 0x2, 0x2, 0x322, 0x325, 0x5, 0x64, 0x33, 0x2, 
    0x323, 0x325, 0x7, 0x9b, 0x2, 0x2, 0x324, 0x2ab, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2ad, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2af, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2b1, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2b3, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2b5, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2b7, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2b9, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2bb, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2bd, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2bf, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2c1, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2c3, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2c5, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2c7, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2c9, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2cb, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2cd, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2cf, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2d1, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2d3, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2d5, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2d7, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2d9, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2db, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2dd, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2df, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2e1, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2e3, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2e5, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2e7, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2e9, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2eb, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2ed, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2ef, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2f1, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2f3, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2f5, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2f7, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2f9, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2fb, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2fd, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x324, 0x2ff, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x300, 0x3, 0x2, 0x2, 0x2, 0x324, 0x301, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x302, 0x3, 0x2, 0x2, 0x2, 0x324, 0x303, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x304, 0x3, 0x2, 0x2, 0x2, 0x324, 0x305, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x306, 0x3, 0x2, 0x2, 0x2, 0x324, 0x307, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x308, 0x3, 0x2, 0x2, 0x2, 0x324, 0x309, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x324, 0x30b, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x324, 0x30d, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x324, 0x30f, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x310, 0x3, 0x2, 0x2, 0x2, 0x324, 0x311, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x312, 0x3, 0x2, 0x2, 0x2, 0x324, 0x313, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x314, 0x3, 0x2, 0x2, 0x2, 0x324, 0x315, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x316, 0x3, 0x2, 0x2, 0x2, 0x324, 0x317, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x318, 0x3, 0x2, 0x2, 0x2, 0x324, 0x319, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x324, 0x31b, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x324, 0x31d, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x324, 0x31f, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x320, 0x3, 0x2, 0x2, 0x2, 0x324, 0x321, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x322, 0x3, 0x2, 0x2, 0x2, 0x324, 0x323, 0x3, 0x2, 0x2, 0x2, 
    0x325, 0x61, 0x3, 0x2, 0x2, 0x2, 0x326, 0x327, 0x9, 0x5, 0x2, 0x2, 0x327, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0x328, 0x329, 0x7, 0x8c, 0x2, 0x2, 0x329, 
    0x32a, 0x7, 0x9b, 0x2, 0x2, 0x32a, 0x32b, 0x7, 0xbc, 0x2, 0x2, 0x32b, 
    0x32c, 0x5, 0x66, 0x34, 0x2, 0x32c, 0x32d, 0x7, 0xbd, 0x2, 0x2, 0x32d, 
    0x334, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x32f, 0x7, 0x8c, 0x2, 0x2, 0x32f, 
    0x330, 0x7, 0xbc, 0x2, 0x2, 0x330, 0x331, 0x5, 0x66, 0x34, 0x2, 0x331, 
    0x332, 0x7, 0xbd, 0x2, 0x2, 0x332, 0x334, 0x3, 0x2, 0x2, 0x2, 0x333, 
    0x328, 0x3, 0x2, 0x2, 0x2, 0x333, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x334, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x335, 0x336, 0x8, 0x34, 0x1, 0x2, 0x336, 
    0x337, 0x5, 0x68, 0x35, 0x2, 0x337, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x338, 
    0x339, 0xc, 0x3, 0x2, 0x2, 0x339, 0x33b, 0x5, 0x68, 0x35, 0x2, 0x33a, 
    0x338, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x33c, 
    0x33a, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x33d, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x340, 
    0x5, 0x5c, 0x2f, 0x2, 0x340, 0x341, 0x5, 0x6a, 0x36, 0x2, 0x341, 0x342, 
    0x7, 0xc2, 0x2, 0x2, 0x342, 0x349, 0x3, 0x2, 0x2, 0x2, 0x343, 0x344, 
    0x5, 0x54, 0x2b, 0x2, 0x344, 0x345, 0x5, 0x5c, 0x2f, 0x2, 0x345, 0x346, 
    0x5, 0x6a, 0x36, 0x2, 0x346, 0x347, 0x7, 0xc2, 0x2, 0x2, 0x347, 0x349, 
    0x3, 0x2, 0x2, 0x2, 0x348, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x348, 0x343, 
    0x3, 0x2, 0x2, 0x2, 0x349, 0x69, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34b, 0x8, 
    0x36, 0x1, 0x2, 0x34b, 0x34c, 0x5, 0x6c, 0x37, 0x2, 0x34c, 0x352, 0x3, 
    0x2, 0x2, 0x2, 0x34d, 0x34e, 0xc, 0x3, 0x2, 0x2, 0x34e, 0x34f, 0x7, 
    0xbf, 0x2, 0x2, 0x34f, 0x351, 0x5, 0x6c, 0x37, 0x2, 0x350, 0x34d, 0x3, 
    0x2, 0x2, 0x2, 0x351, 0x354, 0x3, 0x2, 0x2, 0x2, 0x352, 0x350, 0x3, 
    0x2, 0x2, 0x2, 0x352, 0x353, 0x3, 0x2, 0x2, 0x2, 0x353, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x354, 0x352, 0x3, 0x2, 0x2, 0x2, 0x355, 0x359, 0x7, 0x9b, 
    0x2, 0x2, 0x356, 0x357, 0x7, 0x9b, 0x2, 0x2, 0x357, 0x359, 0x5, 0x5e, 
    0x30, 0x2, 0x358, 0x355, 0x3, 0x2, 0x2, 0x2, 0x358, 0x356, 0x3, 0x2, 
    0x2, 0x2, 0x359, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x365, 0x5, 0x28, 
    0x15, 0x2, 0x35b, 0x35c, 0x7, 0xbc, 0x2, 0x2, 0x35c, 0x35d, 0x5, 0x70, 
    0x39, 0x2, 0x35d, 0x35e, 0x7, 0xbd, 0x2, 0x2, 0x35e, 0x365, 0x3, 0x2, 
    0x2, 0x2, 0x35f, 0x360, 0x7, 0xbc, 0x2, 0x2, 0x360, 0x361, 0x5, 0x70, 
    0x39, 0x2, 0x361, 0x362, 0x7, 0xbf, 0x2, 0x2, 0x362, 0x363, 0x7, 0xbd, 
    0x2, 0x2, 0x363, 0x365, 0x3, 0x2, 0x2, 0x2, 0x364, 0x35a, 0x3, 0x2, 
    0x2, 0x2, 0x364, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x364, 0x35f, 0x3, 0x2, 
    0x2, 0x2, 0x365, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x366, 0x367, 0x8, 0x39, 
    0x1, 0x2, 0x367, 0x368, 0x5, 0x6e, 0x38, 0x2, 0x368, 0x36e, 0x3, 0x2, 
    0x2, 0x2, 0x369, 0x36a, 0xc, 0x3, 0x2, 0x2, 0x36a, 0x36b, 0x7, 0xbf, 
    0x2, 0x2, 0x36b, 0x36d, 0x5, 0x6e, 0x38, 0x2, 0x36c, 0x369, 0x3, 0x2, 
    0x2, 0x2, 0x36d, 0x370, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x36c, 0x3, 0x2, 
    0x2, 0x2, 0x36e, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x370, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x371, 0x372, 0x5, 0x30, 0x19, 
    0x2, 0x372, 0x73, 0x3, 0x2, 0x2, 0x2, 0x373, 0x376, 0x5, 0x78, 0x3d, 
    0x2, 0x374, 0x376, 0x5, 0x76, 0x3c, 0x2, 0x375, 0x373, 0x3, 0x2, 0x2, 
    0x2, 0x375, 0x374, 0x3, 0x2, 0x2, 0x2, 0x376, 0x75, 0x3, 0x2, 0x2, 0x2, 
    0x377, 0x37f, 0x5, 0x72, 0x3a, 0x2, 0x378, 0x37f, 0x5, 0x80, 0x41, 0x2, 
    0x379, 0x37f, 0x5, 0x82, 0x42, 0x2, 0x37a, 0x37f, 0x5, 0x88, 0x45, 0x2, 
    0x37b, 0x37f, 0x5, 0x8c, 0x47, 0x2, 0x37c, 0x37f, 0x5, 0x8e, 0x48, 0x2, 
    0x37d, 0x37f, 0x5, 0x96, 0x4c, 0x2, 0x37e, 0x377, 0x3, 0x2, 0x2, 0x2, 
    0x37e, 0x378, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x379, 0x3, 0x2, 0x2, 0x2, 
    0x37e, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x37b, 0x3, 0x2, 0x2, 0x2, 
    0x37e, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x37d, 0x3, 0x2, 0x2, 0x2, 
    0x37f, 0x77, 0x3, 0x2, 0x2, 0x2, 0x380, 0x381, 0x7, 0xbc, 0x2, 0x2, 
    0x381, 0x387, 0x7, 0xbd, 0x2, 0x2, 0x382, 0x383, 0x7, 0xbc, 0x2, 0x2, 
    0x383, 0x384, 0x5, 0x7e, 0x40, 0x2, 0x384, 0x385, 0x7, 0xbd, 0x2, 0x2, 
    0x385, 0x387, 0x3, 0x2, 0x2, 0x2, 0x386, 0x380, 0x3, 0x2, 0x2, 0x2, 
    0x386, 0x382, 0x3, 0x2, 0x2, 0x2, 0x387, 0x79, 0x3, 0x2, 0x2, 0x2, 0x388, 
    0x38b, 0x5, 0x7c, 0x3f, 0x2, 0x389, 0x38b, 0x5, 0x76, 0x3c, 0x2, 0x38a, 
    0x388, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x389, 0x3, 0x2, 0x2, 0x2, 0x38b, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38d, 0x7, 0xbc, 0x2, 0x2, 0x38d, 
    0x393, 0x7, 0xbd, 0x2, 0x2, 0x38e, 0x38f, 0x7, 0xbc, 0x2, 0x2, 0x38f, 
    0x390, 0x5, 0x7e, 0x40, 0x2, 0x390, 0x391, 0x7, 0xbd, 0x2, 0x2, 0x391, 
    0x393, 0x3, 0x2, 0x2, 0x2, 0x392, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x392, 
    0x38e, 0x3, 0x2, 0x2, 0x2, 0x393, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x394, 0x395, 
    0x8, 0x40, 0x1, 0x2, 0x395, 0x396, 0x5, 0x74, 0x3b, 0x2, 0x396, 0x39b, 
    0x3, 0x2, 0x2, 0x2, 0x397, 0x398, 0xc, 0x3, 0x2, 0x2, 0x398, 0x39a, 
    0x5, 0x74, 0x3b, 0x2, 0x399, 0x397, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39d, 
    0x3, 0x2, 0x2, 0x2, 0x39b, 0x399, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x39c, 
    0x3, 0x2, 0x2, 0x2, 0x39c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x39b, 0x3, 
    0x2, 0x2, 0x2, 0x39e, 0x3a3, 0x7, 0xc2, 0x2, 0x2, 0x39f, 0x3a0, 0x5, 
    0x2c, 0x17, 0x2, 0x3a0, 0x3a1, 0x7, 0xc2, 0x2, 0x2, 0x3a1, 0x3a3, 0x3, 
    0x2, 0x2, 0x2, 0x3a2, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x39f, 0x3, 
    0x2, 0x2, 0x2, 0x3a3, 0x81, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a5, 0x7, 0x94, 
    0x2, 0x2, 0x3a5, 0x3a6, 0x7, 0xb8, 0x2, 0x2, 0x3a6, 0x3a7, 0x5, 0x2c, 
    0x17, 0x2, 0x3a7, 0x3a8, 0x7, 0xb9, 0x2, 0x2, 0x3a8, 0x3a9, 0x5, 0x84, 
    0x43, 0x2, 0x3a9, 0x83, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ab, 0x5, 0x74, 
    0x3b, 0x2, 0x3ab, 0x3ac, 0x7, 0x92, 0x2, 0x2, 0x3ac, 0x3ad, 0x5, 0x74, 
    0x3b, 0x2, 0x3ad, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3b0, 0x5, 0x74, 
    0x3b, 0x2, 0x3af, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3ae, 0x3, 0x2, 
    0x2, 0x2, 0x3b0, 0x85, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b8, 0x5, 0x2c, 
    0x17, 0x2, 0x3b2, 0x3b3, 0x5, 0x46, 0x24, 0x2, 0x3b3, 0x3b4, 0x7, 0x9b, 
    0x2, 0x2, 0x3b4, 0x3b5, 0x7, 0xc1, 0x2, 0x2, 0x3b5, 0x3b6, 0x5, 0x6e, 
    0x38, 0x2, 0x3b6, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b1, 0x3, 0x2, 
    0x2, 0x2, 0x3b7, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x3b9, 0x3ba, 0x7, 0x97, 0x2, 0x2, 0x3ba, 0x3bb, 0x7, 0xb8, 0x2, 
    0x2, 0x3bb, 0x3bc, 0x5, 0x2c, 0x17, 0x2, 0x3bc, 0x3bd, 0x7, 0xb9, 0x2, 
    0x2, 0x3bd, 0x3be, 0x7, 0xbc, 0x2, 0x2, 0x3be, 0x3bf, 0x5, 0x8a, 0x46, 
    0x2, 0x3bf, 0x3c0, 0x7, 0xbd, 0x2, 0x2, 0x3c0, 0x89, 0x3, 0x2, 0x2, 
    0x2, 0x3c1, 0x3c4, 0x5, 0x7e, 0x40, 0x2, 0x3c2, 0x3c4, 0x3, 0x2, 0x2, 
    0x2, 0x3c3, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3c3, 0x3c2, 0x3, 0x2, 0x2, 
    0x2, 0x3c4, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c6, 0x7, 0x98, 0x2, 
    0x2, 0x3c6, 0x3c7, 0x5, 0x2c, 0x17, 0x2, 0x3c7, 0x3c8, 0x7, 0xc0, 0x2, 
    0x2, 0x3c8, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3ca, 0x7, 0x99, 0x2, 
    0x2, 0x3ca, 0x3cc, 0x7, 0xc0, 0x2, 0x2, 0x3cb, 0x3c5, 0x3, 0x2, 0x2, 
    0x2, 0x3cb, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x3cd, 0x3ce, 0x7, 0x8e, 0x2, 0x2, 0x3ce, 0x3cf, 0x7, 0xb8, 0x2, 0x2, 
    0x3cf, 0x3d0, 0x5, 0x86, 0x44, 0x2, 0x3d0, 0x3d1, 0x7, 0xb9, 0x2, 0x2, 
    0x3d1, 0x3d2, 0x5, 0x7a, 0x3e, 0x2, 0x3d2, 0x3e3, 0x3, 0x2, 0x2, 0x2, 
    0x3d3, 0x3d4, 0x7, 0x91, 0x2, 0x2, 0x3d4, 0x3d5, 0x5, 0x74, 0x3b, 0x2, 
    0x3d5, 0x3d6, 0x7, 0x8e, 0x2, 0x2, 0x3d6, 0x3d7, 0x7, 0xb8, 0x2, 0x2, 
    0x3d7, 0x3d8, 0x5, 0x2c, 0x17, 0x2, 0x3d8, 0x3d9, 0x7, 0xb9, 0x2, 0x2, 
    0x3d9, 0x3da, 0x7, 0xc2, 0x2, 0x2, 0x3da, 0x3e3, 0x3, 0x2, 0x2, 0x2, 
    0x3db, 0x3dc, 0x7, 0x93, 0x2, 0x2, 0x3dc, 0x3dd, 0x7, 0xb8, 0x2, 0x2, 
    0x3dd, 0x3de, 0x5, 0x90, 0x49, 0x2, 0x3de, 0x3df, 0x5, 0x94, 0x4b, 0x2, 
    0x3df, 0x3e0, 0x7, 0xb9, 0x2, 0x2, 0x3e0, 0x3e1, 0x5, 0x7a, 0x3e, 0x2, 
    0x3e1, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3cd, 0x3, 0x2, 0x2, 0x2, 
    0x3e2, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3db, 0x3, 0x2, 0x2, 0x2, 
    0x3e3, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e7, 0x5, 0x80, 0x41, 0x2, 
    0x3e5, 0x3e7, 0x5, 0x72, 0x3a, 0x2, 0x3e6, 0x3e4, 0x3, 0x2, 0x2, 0x2, 
    0x3e6, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x91, 0x3, 0x2, 0x2, 0x2, 0x3e8, 
    0x3eb, 0x5, 0x86, 0x44, 0x2, 0x3e9, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3ea, 
    0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3eb, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3ed, 0x5, 0x92, 0x4a, 0x2, 0x3ed, 
    0x3ee, 0x7, 0xc2, 0x2, 0x2, 0x3ee, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3ef, 
    0x3f0, 0x5, 0x92, 0x4a, 0x2, 0x3f0, 0x3f1, 0x7, 0xc2, 0x2, 0x2, 0x3f1, 
    0x3f2, 0x5, 0x2c, 0x17, 0x2, 0x3f2, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f3, 
    0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3f4, 
    0x95, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f6, 0x7, 0x90, 0x2, 0x2, 0x3f6, 
    0x402, 0x7, 0xc2, 0x2, 0x2, 0x3f7, 0x3f8, 0x7, 0x8f, 0x2, 0x2, 0x3f8, 
    0x402, 0x7, 0xc2, 0x2, 0x2, 0x3f9, 0x3fa, 0x7, 0x96, 0x2, 0x2, 0x3fa, 
    0x402, 0x7, 0xc2, 0x2, 0x2, 0x3fb, 0x3fc, 0x7, 0x96, 0x2, 0x2, 0x3fc, 
    0x3fd, 0x5, 0x2c, 0x17, 0x2, 0x3fd, 0x3fe, 0x7, 0xc2, 0x2, 0x2, 0x3fe, 
    0x402, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x400, 0x7, 0x95, 0x2, 0x2, 0x400, 
    0x402, 0x7, 0xc2, 0x2, 0x2, 0x401, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x401, 
    0x3f7, 0x3, 0x2, 0x2, 0x2, 0x401, 0x3f9, 0x3, 0x2, 0x2, 0x2, 0x401, 
    0x3fb, 0x3, 0x2, 0x2, 0x2, 0x401, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x402, 
    0x97, 0x3, 0x2, 0x2, 0x2, 0x403, 0x404, 0x8, 0x4d, 0x1, 0x2, 0x404, 
    0x405, 0x5, 0x9a, 0x4e, 0x2, 0x405, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x406, 
    0x407, 0xc, 0x3, 0x2, 0x2, 0x407, 0x409, 0x5, 0x9a, 0x4e, 0x2, 0x408, 
    0x406, 0x3, 0x2, 0x2, 0x2, 0x409, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40a, 
    0x408, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x40b, 0x3, 0x2, 0x2, 0x2, 0x40b, 
    0x99, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x411, 
    0x5, 0x9c, 0x4f, 0x2, 0x40e, 0x411, 0x5, 0x30, 0x19, 0x2, 0x40f, 0x411, 
    0x7, 0xc2, 0x2, 0x2, 0x410, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x410, 0x40e, 
    0x3, 0x2, 0x2, 0x2, 0x410, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x411, 0x9b, 0x3, 
    0x2, 0x2, 0x2, 0x412, 0x413, 0x5, 0x34, 0x1b, 0x2, 0x413, 0x414, 0x5, 
    0x7c, 0x3f, 0x2, 0x414, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x4b, 0xaa, 0xb7, 
    0xbb, 0xd2, 0xd5, 0xd7, 0xe1, 0xeb, 0xfb, 0xfd, 0x109, 0x10b, 0x117, 
    0x119, 0x12b, 0x12d, 0x139, 0x13b, 0x146, 0x151, 0x15c, 0x167, 0x172, 
    0x17d, 0x187, 0x18e, 0x19a, 0x1ce, 0x1d9, 0x1e1, 0x1ec, 0x1fa, 0x204, 
    0x21e, 0x220, 0x236, 0x23c, 0x24f, 0x257, 0x262, 0x26b, 0x282, 0x28c, 
    0x293, 0x29c, 0x2a6, 0x2a8, 0x324, 0x333, 0x33c, 0x348, 0x352, 0x358, 
    0x364, 0x36e, 0x375, 0x37e, 0x386, 0x38a, 0x392, 0x39b, 0x3a2, 0x3af, 
    0x3b7, 0x3c3, 0x3cb, 0x3e2, 0x3e6, 0x3ea, 0x3f3, 0x401, 0x40a, 0x410, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

GLSLParser::Initializer GLSLParser::_init;
