
// Generated from GLSLLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  GLSLLexer : public antlr4::Lexer {
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

  GLSLLexer(antlr4::CharStream *input);
  ~GLSLLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

