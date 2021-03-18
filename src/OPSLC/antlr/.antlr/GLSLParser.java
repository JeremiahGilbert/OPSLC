// Generated from b:\Development\Repositories\OPVK\src\OPSC\antlr\GLSLParser.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class GLSLParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		CONST_=1, BOOL=2, FLOAT=3, INT=4, UINT=5, DOUBLE=6, BVEC2=7, BVEC3=8, 
		BVEC4=9, IVEC2=10, IVEC3=11, IVEC4=12, UVEC2=13, UVEC3=14, UVEC4=15, VEC2=16, 
		VEC3=17, VEC4=18, MAT2=19, MAT3=20, MAT4=21, MAT2X2=22, MAT2X3=23, MAT2X4=24, 
		MAT3X2=25, MAT3X3=26, MAT3X4=27, MAT4X2=28, MAT4X3=29, MAT4X4=30, DVEC2=31, 
		DVEC3=32, DVEC4=33, DMAT2=34, DMAT3=35, DMAT4=36, DMAT2X2=37, DMAT2X3=38, 
		DMAT2X4=39, DMAT3X2=40, DMAT3X3=41, DMAT3X4=42, DMAT4X2=43, DMAT4X3=44, 
		DMAT4X4=45, CENTROID=46, IN_=47, OUT_=48, INOUT=49, UNIFORM=50, PATCH=51, 
		SAMPLE=52, BUFFER=53, SHARED=54, COHERENT=55, VOLATILE=56, RESTRICT=57, 
		READONLY=58, WRITEONLY=59, NOPERSPECTIVE=60, FLAT=61, SMOOTH=62, LAYOUT=63, 
		ATOMIC_UINT=64, SAMPLER2D=65, SAMPLER3D=66, SAMPLERCUBE=67, SAMPLER2DSHADOW=68, 
		SAMPLERCUBESHADOW=69, SAMPLER2DARRAY=70, SAMPLER2DARRAYSHADOW=71, ISAMPLER2D=72, 
		ISAMPLER3D=73, ISAMPLERCUBE=74, ISAMPLER2DARRAY=75, USAMPLER2D=76, USAMPLER3D=77, 
		USAMPLERCUBE=78, USAMPLER2DARRAY=79, SAMPLER1D=80, SAMPLER1DSHADOW=81, 
		SAMPLER1DARRAY=82, SAMPLER1DARRAYSHADOW=83, ISAMPLER1D=84, ISAMPLER1DARRAY=85, 
		USAMPLER1D=86, USAMPLER1DARRAY=87, SAMPLER2DRECT=88, SAMPLER2DRECTSHADOW=89, 
		ISAMPLER2DRECT=90, USAMPLER2DRECT=91, SAMPLERBUFFER=92, ISAMPLERBUFFER=93, 
		USAMPLERBUFFER=94, SAMPLERCUBEARRAY=95, SAMPLERCUBEARRAYSHADOW=96, ISAMPLERCUBEARRAY=97, 
		USAMPLERCUBEARRAY=98, SAMPLER2DMS=99, ISAMPLER2DMS=100, USAMPLER2DMS=101, 
		SAMPLER2DMSARRAY=102, ISAMPLER2DMSARRAY=103, USAMPLER2DMSARRAY=104, IMAGE2D=105, 
		IIMAGE2D=106, UIMAGE2D=107, IMAGE3D=108, IIMAGE3D=109, UIMAGE3D=110, IMAGECUBE=111, 
		IIMAGECUBE=112, UIMAGECUBE=113, IMAGEBUFFER=114, IIMAGEBUFFER=115, UIMAGEBUFFER=116, 
		IMAGE2DARRAY=117, IIMAGE2DARRAY=118, UIMAGE2DARRAY=119, IMAGECUBEARRAY=120, 
		IIMAGECUBEARRAY=121, UIMAGECUBEARRAY=122, IMAGE1D=123, IIMAGE1D=124, UIMAGE1D=125, 
		IMAGE1DARRAY=126, IIMAGE1DARRAY=127, UIMAGE1DARRAY=128, IMAGE2DRECT=129, 
		IIMAGE2DRECT=130, UIMAGE2DRECT=131, IMAGE2DMS=132, IIMAGE2DMS=133, UIMAGE2DMS=134, 
		IMAGE2DMSARRAY=135, IIMAGE2DMSARRAY=136, UIMAGE2DMSARRAY=137, STRUCT=138, 
		VOID_=139, WHILE=140, BREAK=141, CONTINUE=142, DO=143, ELSE=144, FOR=145, 
		IF=146, DISCARD=147, RETURN=148, SWITCH=149, CASE=150, DEFAULT=151, SUBROUTINE=152, 
		IDENTIFIER=153, TYPE_NAME=154, FLOATCONSTANT=155, INTCONSTANT=156, UINTCONSTANT=157, 
		BOOLCONSTANT=158, DOUBLECONSTANT=159, FIELD_SELECTION=160, LEFT_OP=161, 
		RIGHT_OP=162, INC_OP=163, DEC_OP=164, LE_OP=165, GE_OP=166, EQ_OP=167, 
		NE_OP=168, AND_OP=169, OR_OP=170, XOR_OP=171, MUL_ASSIGN=172, DIV_ASSIGN=173, 
		ADD_ASSIGN=174, MOD_ASSIGN=175, LEFT_ASSIGN=176, RIGHT_ASSIGN=177, AND_ASSIGN=178, 
		XOR_ASSIGN=179, OR_ASSIGN=180, SUB_ASSIGN=181, LEFT_PAREN=182, RIGHT_PAREN=183, 
		LEFT_BRACKET=184, RIGHT_BRACKET=185, LEFT_BRACE=186, RIGHT_BRACE=187, 
		DOT=188, COMMA=189, COLON=190, EQUAL=191, SEMICOLON=192, BANG=193, DASH=194, 
		TILDE=195, PLUS=196, STAR=197, SLASH=198, PERCENT=199, LEFT_ANGLE=200, 
		RIGHT_ANGLE=201, VERTICAL_BAR=202, CARET=203, AMPERSAND=204, QUESTION=205, 
		INVARIANT=206, PRECISE=207, HIGH_PRECISION=208, MEDIUM_PRECISION=209, 
		LOW_PRECISION=210, PRECISION=211, WS=212;
	public static final int
		RULE_variableIdentifier = 0, RULE_primaryExpression = 1, RULE_postfixExpression = 2, 
		RULE_integerExpression = 3, RULE_functionCallHeaderWithParameters_ = 4, 
		RULE_unaryExpression = 5, RULE_unaryOperator = 6, RULE_multiplicativeExpression = 7, 
		RULE_additiveExpression = 8, RULE_shiftExpression = 9, RULE_relationalExpression = 10, 
		RULE_equalityExpression = 11, RULE_andExpression = 12, RULE_exclusiveOrExpression = 13, 
		RULE_inclusiveOrExpression = 14, RULE_logicalAndExpression = 15, RULE_logicalXorExpression = 16, 
		RULE_logicalOrExpression = 17, RULE_conditionalExpression = 18, RULE_assignmentExpression = 19, 
		RULE_assignmentOperator = 20, RULE_expression = 21, RULE_constantExpression = 22, 
		RULE_declaration = 23, RULE_identifierList = 24, RULE_functionPrototype = 25, 
		RULE_functionDeclarator = 26, RULE_functionHeaderWithParameters = 27, 
		RULE_functionHeader = 28, RULE_parameterDeclarator = 29, RULE_parameterDeclaration = 30, 
		RULE_parameterTypeSpecifier = 31, RULE_initDeclaratorList = 32, RULE_singleDeclaration = 33, 
		RULE_fullySpecifiedType = 34, RULE_invariantQualifier = 35, RULE_interpolationQualifier = 36, 
		RULE_layoutQualifier = 37, RULE_layoutQualifierIdList = 38, RULE_layoutQualifierId = 39, 
		RULE_preciseQualifier = 40, RULE_typeQualifier = 41, RULE_singleTypeQualifier = 42, 
		RULE_storageQualifier = 43, RULE_typeNameList = 44, RULE_typeSpecifier = 45, 
		RULE_arraySpecifier = 46, RULE_typeSpecifierNonarray = 47, RULE_precisionQualifier = 48, 
		RULE_structSpecifier = 49, RULE_structDeclarationList = 50, RULE_structDeclaration = 51, 
		RULE_structDeclaratorList = 52, RULE_structDeclarator = 53, RULE_initializer = 54, 
		RULE_initializerList = 55, RULE_declarationStatement = 56, RULE_statement = 57, 
		RULE_simpleStatement = 58, RULE_compundStatement = 59, RULE_statementNoNewScope = 60, 
		RULE_compoundStatementNoNewScope = 61, RULE_statementList = 62, RULE_expressionStatement = 63, 
		RULE_selectionStatement = 64, RULE_selectionRestStatement = 65, RULE_condition = 66, 
		RULE_switchStatement = 67, RULE_switchStatementList = 68, RULE_caseLabel = 69, 
		RULE_iterationStatement = 70, RULE_forInitStatement = 71, RULE_conditionopt = 72, 
		RULE_forRestStatement = 73, RULE_jumpStatement = 74, RULE_translationUnit = 75, 
		RULE_externalDeclaration = 76, RULE_functionDefinition = 77;
	public static final String[] ruleNames = {
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

	private static final String[] _LITERAL_NAMES = {
		null, "'const'", "'bool'", "'float'", "'int'", "'uint'", "'double'", "'bvec2'", 
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
		"'subroutine'", null, null, null, null, null, null, null, null, "'<<'", 
		"'>>'", "'++'", "'--'", "'<='", "'>='", "'=='", "'!='", "'&&'", "'||'", 
		"'^^'", "'*='", "'/='", "'+='", "'%='", "'<<='", "'>>='", "'&='", "'^='", 
		"'|='", "'-='", "'('", "')'", "'['", "']'", "'{'", "'}'", "'.'", "','", 
		"':'", "'='", "';'", "'!'", "'-'", "'~'", "'+'", "'*'", "'/'", "'%'", 
		"'<'", "'>'", "'|'", "'^'", "'&'", "'?'", "'invariant'", "'precise'", 
		"'highp'", "'mediump'", "'lowp'", "'precision'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "CONST_", "BOOL", "FLOAT", "INT", "UINT", "DOUBLE", "BVEC2", "BVEC3", 
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
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "GLSLParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public GLSLParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class VariableIdentifierContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(GLSLParser.IDENTIFIER, 0); }
		public VariableIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableIdentifier; }
	}

	public final VariableIdentifierContext variableIdentifier() throws RecognitionException {
		VariableIdentifierContext _localctx = new VariableIdentifierContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_variableIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(156);
			match(IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrimaryExpressionContext extends ParserRuleContext {
		public VariableIdentifierContext variableIdentifier() {
			return getRuleContext(VariableIdentifierContext.class,0);
		}
		public TerminalNode INTCONSTANT() { return getToken(GLSLParser.INTCONSTANT, 0); }
		public TerminalNode UINTCONSTANT() { return getToken(GLSLParser.UINTCONSTANT, 0); }
		public TerminalNode FLOATCONSTANT() { return getToken(GLSLParser.FLOATCONSTANT, 0); }
		public TerminalNode BOOLCONSTANT() { return getToken(GLSLParser.BOOLCONSTANT, 0); }
		public TerminalNode DOUBLECONSTANT() { return getToken(GLSLParser.DOUBLECONSTANT, 0); }
		public TerminalNode LEFT_PAREN() { return getToken(GLSLParser.LEFT_PAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RIGHT_PAREN() { return getToken(GLSLParser.RIGHT_PAREN, 0); }
		public PrimaryExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primaryExpression; }
	}

	public final PrimaryExpressionContext primaryExpression() throws RecognitionException {
		PrimaryExpressionContext _localctx = new PrimaryExpressionContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_primaryExpression);
		try {
			setState(168);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(158);
				variableIdentifier();
				}
				break;
			case INTCONSTANT:
				enterOuterAlt(_localctx, 2);
				{
				setState(159);
				match(INTCONSTANT);
				}
				break;
			case UINTCONSTANT:
				enterOuterAlt(_localctx, 3);
				{
				setState(160);
				match(UINTCONSTANT);
				}
				break;
			case FLOATCONSTANT:
				enterOuterAlt(_localctx, 4);
				{
				setState(161);
				match(FLOATCONSTANT);
				}
				break;
			case BOOLCONSTANT:
				enterOuterAlt(_localctx, 5);
				{
				setState(162);
				match(BOOLCONSTANT);
				}
				break;
			case DOUBLECONSTANT:
				enterOuterAlt(_localctx, 6);
				{
				setState(163);
				match(DOUBLECONSTANT);
				}
				break;
			case LEFT_PAREN:
				enterOuterAlt(_localctx, 7);
				{
				setState(164);
				match(LEFT_PAREN);
				setState(165);
				expression(0);
				setState(166);
				match(RIGHT_PAREN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PostfixExpressionContext extends ParserRuleContext {
		public PrimaryExpressionContext primaryExpression() {
			return getRuleContext(PrimaryExpressionContext.class,0);
		}
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public TerminalNode LEFT_PAREN() { return getToken(GLSLParser.LEFT_PAREN, 0); }
		public AssignmentExpressionContext assignmentExpression() {
			return getRuleContext(AssignmentExpressionContext.class,0);
		}
		public FunctionCallHeaderWithParameters_Context functionCallHeaderWithParameters_() {
			return getRuleContext(FunctionCallHeaderWithParameters_Context.class,0);
		}
		public TerminalNode RIGHT_PAREN() { return getToken(GLSLParser.RIGHT_PAREN, 0); }
		public TerminalNode VOID_() { return getToken(GLSLParser.VOID_, 0); }
		public PostfixExpressionContext postfixExpression() {
			return getRuleContext(PostfixExpressionContext.class,0);
		}
		public TerminalNode LEFT_BRACKET() { return getToken(GLSLParser.LEFT_BRACKET, 0); }
		public IntegerExpressionContext integerExpression() {
			return getRuleContext(IntegerExpressionContext.class,0);
		}
		public TerminalNode RIGHT_BRACKET() { return getToken(GLSLParser.RIGHT_BRACKET, 0); }
		public TerminalNode DOT() { return getToken(GLSLParser.DOT, 0); }
		public TerminalNode IDENTIFIER() { return getToken(GLSLParser.IDENTIFIER, 0); }
		public TerminalNode INC_OP() { return getToken(GLSLParser.INC_OP, 0); }
		public TerminalNode DEC_OP() { return getToken(GLSLParser.DEC_OP, 0); }
		public PostfixExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_postfixExpression; }
	}

	public final PostfixExpressionContext postfixExpression() throws RecognitionException {
		return postfixExpression(0);
	}

	private PostfixExpressionContext postfixExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		PostfixExpressionContext _localctx = new PostfixExpressionContext(_ctx, _parentState);
		PostfixExpressionContext _prevctx = _localctx;
		int _startState = 4;
		enterRecursionRule(_localctx, 4, RULE_postfixExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(185);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				{
				setState(171);
				primaryExpression();
				}
				break;
			case 2:
				{
				setState(172);
				typeSpecifier();
				setState(173);
				match(LEFT_PAREN);
				setState(174);
				assignmentExpression();
				setState(175);
				functionCallHeaderWithParameters_();
				setState(176);
				match(RIGHT_PAREN);
				}
				break;
			case 3:
				{
				setState(178);
				typeSpecifier();
				setState(179);
				match(LEFT_PAREN);
				setState(181);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==VOID_) {
					{
					setState(180);
					match(VOID_);
					}
				}

				setState(183);
				match(RIGHT_PAREN);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(213);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(211);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
					case 1:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(187);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(188);
						match(LEFT_BRACKET);
						setState(189);
						integerExpression();
						setState(190);
						match(RIGHT_BRACKET);
						}
						break;
					case 2:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(192);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(193);
						match(DOT);
						setState(194);
						match(IDENTIFIER);
						}
						break;
					case 3:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(195);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(196);
						match(INC_OP);
						}
						break;
					case 4:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(197);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(198);
						match(DEC_OP);
						}
						break;
					case 5:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(199);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(200);
						match(LEFT_PAREN);
						setState(201);
						assignmentExpression();
						setState(202);
						functionCallHeaderWithParameters_();
						setState(203);
						match(RIGHT_PAREN);
						}
						break;
					case 6:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(205);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(206);
						match(LEFT_PAREN);
						setState(208);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==VOID_) {
							{
							setState(207);
							match(VOID_);
							}
						}

						setState(210);
						match(RIGHT_PAREN);
						}
						break;
					}
					} 
				}
				setState(215);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class IntegerExpressionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public IntegerExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_integerExpression; }
	}

	public final IntegerExpressionContext integerExpression() throws RecognitionException {
		IntegerExpressionContext _localctx = new IntegerExpressionContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_integerExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(216);
			expression(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionCallHeaderWithParameters_Context extends ParserRuleContext {
		public TerminalNode COMMA() { return getToken(GLSLParser.COMMA, 0); }
		public AssignmentExpressionContext assignmentExpression() {
			return getRuleContext(AssignmentExpressionContext.class,0);
		}
		public FunctionCallHeaderWithParameters_Context functionCallHeaderWithParameters_() {
			return getRuleContext(FunctionCallHeaderWithParameters_Context.class,0);
		}
		public FunctionCallHeaderWithParameters_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionCallHeaderWithParameters_; }
	}

	public final FunctionCallHeaderWithParameters_Context functionCallHeaderWithParameters_() throws RecognitionException {
		FunctionCallHeaderWithParameters_Context _localctx = new FunctionCallHeaderWithParameters_Context(_ctx, getState());
		enterRule(_localctx, 8, RULE_functionCallHeaderWithParameters_);
		try {
			setState(223);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COMMA:
				enterOuterAlt(_localctx, 1);
				{
				setState(218);
				match(COMMA);
				setState(219);
				assignmentExpression();
				setState(220);
				functionCallHeaderWithParameters_();
				}
				break;
			case RIGHT_PAREN:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnaryExpressionContext extends ParserRuleContext {
		public PostfixExpressionContext postfixExpression() {
			return getRuleContext(PostfixExpressionContext.class,0);
		}
		public TerminalNode INC_OP() { return getToken(GLSLParser.INC_OP, 0); }
		public UnaryExpressionContext unaryExpression() {
			return getRuleContext(UnaryExpressionContext.class,0);
		}
		public TerminalNode DEC_OP() { return getToken(GLSLParser.DEC_OP, 0); }
		public UnaryOperatorContext unaryOperator() {
			return getRuleContext(UnaryOperatorContext.class,0);
		}
		public UnaryExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unaryExpression; }
	}

	public final UnaryExpressionContext unaryExpression() throws RecognitionException {
		UnaryExpressionContext _localctx = new UnaryExpressionContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_unaryExpression);
		try {
			setState(233);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BOOL:
			case FLOAT:
			case INT:
			case UINT:
			case DOUBLE:
			case BVEC2:
			case BVEC3:
			case BVEC4:
			case IVEC2:
			case IVEC3:
			case IVEC4:
			case UVEC2:
			case UVEC3:
			case UVEC4:
			case VEC2:
			case VEC3:
			case VEC4:
			case MAT2:
			case MAT3:
			case MAT4:
			case MAT2X2:
			case MAT2X3:
			case MAT2X4:
			case MAT3X2:
			case MAT3X3:
			case MAT3X4:
			case MAT4X2:
			case MAT4X3:
			case MAT4X4:
			case DVEC2:
			case DVEC3:
			case DVEC4:
			case DMAT2:
			case DMAT3:
			case DMAT4:
			case DMAT2X2:
			case DMAT2X3:
			case DMAT2X4:
			case DMAT3X2:
			case DMAT3X3:
			case DMAT3X4:
			case DMAT4X2:
			case DMAT4X3:
			case DMAT4X4:
			case ATOMIC_UINT:
			case SAMPLER2D:
			case SAMPLER3D:
			case SAMPLERCUBE:
			case SAMPLER2DSHADOW:
			case SAMPLERCUBESHADOW:
			case SAMPLER2DARRAY:
			case SAMPLER2DARRAYSHADOW:
			case ISAMPLER2D:
			case ISAMPLER3D:
			case ISAMPLERCUBE:
			case ISAMPLER2DARRAY:
			case USAMPLER2D:
			case USAMPLER3D:
			case USAMPLERCUBE:
			case USAMPLER2DARRAY:
			case SAMPLER1D:
			case SAMPLER1DSHADOW:
			case SAMPLER1DARRAY:
			case SAMPLER1DARRAYSHADOW:
			case ISAMPLER1D:
			case ISAMPLER1DARRAY:
			case USAMPLER1D:
			case USAMPLER1DARRAY:
			case SAMPLER2DRECT:
			case SAMPLER2DRECTSHADOW:
			case ISAMPLER2DRECT:
			case USAMPLER2DRECT:
			case SAMPLERBUFFER:
			case ISAMPLERBUFFER:
			case USAMPLERBUFFER:
			case SAMPLERCUBEARRAY:
			case SAMPLERCUBEARRAYSHADOW:
			case ISAMPLERCUBEARRAY:
			case USAMPLERCUBEARRAY:
			case SAMPLER2DMS:
			case ISAMPLER2DMS:
			case USAMPLER2DMS:
			case SAMPLER2DMSARRAY:
			case ISAMPLER2DMSARRAY:
			case USAMPLER2DMSARRAY:
			case IMAGE2D:
			case IIMAGE2D:
			case UIMAGE2D:
			case IMAGE3D:
			case IIMAGE3D:
			case UIMAGE3D:
			case IMAGECUBE:
			case IIMAGECUBE:
			case UIMAGECUBE:
			case IMAGEBUFFER:
			case IIMAGEBUFFER:
			case UIMAGEBUFFER:
			case IMAGE2DARRAY:
			case IIMAGE2DARRAY:
			case UIMAGE2DARRAY:
			case IMAGECUBEARRAY:
			case IIMAGECUBEARRAY:
			case UIMAGECUBEARRAY:
			case IMAGE1D:
			case IIMAGE1D:
			case UIMAGE1D:
			case IMAGE1DARRAY:
			case IIMAGE1DARRAY:
			case UIMAGE1DARRAY:
			case IMAGE2DRECT:
			case IIMAGE2DRECT:
			case UIMAGE2DRECT:
			case IMAGE2DMS:
			case IIMAGE2DMS:
			case UIMAGE2DMS:
			case IMAGE2DMSARRAY:
			case IIMAGE2DMSARRAY:
			case UIMAGE2DMSARRAY:
			case STRUCT:
			case VOID_:
			case IDENTIFIER:
			case FLOATCONSTANT:
			case INTCONSTANT:
			case UINTCONSTANT:
			case BOOLCONSTANT:
			case DOUBLECONSTANT:
			case LEFT_PAREN:
				enterOuterAlt(_localctx, 1);
				{
				setState(225);
				postfixExpression(0);
				}
				break;
			case INC_OP:
				enterOuterAlt(_localctx, 2);
				{
				setState(226);
				match(INC_OP);
				setState(227);
				unaryExpression();
				}
				break;
			case DEC_OP:
				enterOuterAlt(_localctx, 3);
				{
				setState(228);
				match(DEC_OP);
				setState(229);
				unaryExpression();
				}
				break;
			case BANG:
			case DASH:
			case TILDE:
			case PLUS:
				enterOuterAlt(_localctx, 4);
				{
				setState(230);
				unaryOperator();
				setState(231);
				unaryExpression();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnaryOperatorContext extends ParserRuleContext {
		public TerminalNode PLUS() { return getToken(GLSLParser.PLUS, 0); }
		public TerminalNode DASH() { return getToken(GLSLParser.DASH, 0); }
		public TerminalNode BANG() { return getToken(GLSLParser.BANG, 0); }
		public TerminalNode TILDE() { return getToken(GLSLParser.TILDE, 0); }
		public UnaryOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unaryOperator; }
	}

	public final UnaryOperatorContext unaryOperator() throws RecognitionException {
		UnaryOperatorContext _localctx = new UnaryOperatorContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_unaryOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(235);
			_la = _input.LA(1);
			if ( !(((((_la - 193)) & ~0x3f) == 0 && ((1L << (_la - 193)) & ((1L << (BANG - 193)) | (1L << (DASH - 193)) | (1L << (TILDE - 193)) | (1L << (PLUS - 193)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MultiplicativeExpressionContext extends ParserRuleContext {
		public UnaryExpressionContext unaryExpression() {
			return getRuleContext(UnaryExpressionContext.class,0);
		}
		public MultiplicativeExpressionContext multiplicativeExpression() {
			return getRuleContext(MultiplicativeExpressionContext.class,0);
		}
		public TerminalNode STAR() { return getToken(GLSLParser.STAR, 0); }
		public TerminalNode SLASH() { return getToken(GLSLParser.SLASH, 0); }
		public TerminalNode PERCENT() { return getToken(GLSLParser.PERCENT, 0); }
		public MultiplicativeExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multiplicativeExpression; }
	}

	public final MultiplicativeExpressionContext multiplicativeExpression() throws RecognitionException {
		return multiplicativeExpression(0);
	}

	private MultiplicativeExpressionContext multiplicativeExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		MultiplicativeExpressionContext _localctx = new MultiplicativeExpressionContext(_ctx, _parentState);
		MultiplicativeExpressionContext _prevctx = _localctx;
		int _startState = 14;
		enterRecursionRule(_localctx, 14, RULE_multiplicativeExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(238);
			unaryExpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(251);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(249);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
					case 1:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(240);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(241);
						match(STAR);
						setState(242);
						unaryExpression();
						}
						break;
					case 2:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(243);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(244);
						match(SLASH);
						setState(245);
						unaryExpression();
						}
						break;
					case 3:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(246);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(247);
						match(PERCENT);
						setState(248);
						unaryExpression();
						}
						break;
					}
					} 
				}
				setState(253);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class AdditiveExpressionContext extends ParserRuleContext {
		public MultiplicativeExpressionContext multiplicativeExpression() {
			return getRuleContext(MultiplicativeExpressionContext.class,0);
		}
		public AdditiveExpressionContext additiveExpression() {
			return getRuleContext(AdditiveExpressionContext.class,0);
		}
		public TerminalNode PLUS() { return getToken(GLSLParser.PLUS, 0); }
		public TerminalNode DASH() { return getToken(GLSLParser.DASH, 0); }
		public AdditiveExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_additiveExpression; }
	}

	public final AdditiveExpressionContext additiveExpression() throws RecognitionException {
		return additiveExpression(0);
	}

	private AdditiveExpressionContext additiveExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		AdditiveExpressionContext _localctx = new AdditiveExpressionContext(_ctx, _parentState);
		AdditiveExpressionContext _prevctx = _localctx;
		int _startState = 16;
		enterRecursionRule(_localctx, 16, RULE_additiveExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(255);
			multiplicativeExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(265);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(263);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
					case 1:
						{
						_localctx = new AdditiveExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveExpression);
						setState(257);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(258);
						match(PLUS);
						setState(259);
						multiplicativeExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new AdditiveExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveExpression);
						setState(260);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(261);
						match(DASH);
						setState(262);
						multiplicativeExpression(0);
						}
						break;
					}
					} 
				}
				setState(267);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ShiftExpressionContext extends ParserRuleContext {
		public AdditiveExpressionContext additiveExpression() {
			return getRuleContext(AdditiveExpressionContext.class,0);
		}
		public ShiftExpressionContext shiftExpression() {
			return getRuleContext(ShiftExpressionContext.class,0);
		}
		public TerminalNode LEFT_OP() { return getToken(GLSLParser.LEFT_OP, 0); }
		public TerminalNode RIGHT_OP() { return getToken(GLSLParser.RIGHT_OP, 0); }
		public ShiftExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_shiftExpression; }
	}

	public final ShiftExpressionContext shiftExpression() throws RecognitionException {
		return shiftExpression(0);
	}

	private ShiftExpressionContext shiftExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ShiftExpressionContext _localctx = new ShiftExpressionContext(_ctx, _parentState);
		ShiftExpressionContext _prevctx = _localctx;
		int _startState = 18;
		enterRecursionRule(_localctx, 18, RULE_shiftExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(269);
			additiveExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(279);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(277);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
					case 1:
						{
						_localctx = new ShiftExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_shiftExpression);
						setState(271);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(272);
						match(LEFT_OP);
						setState(273);
						additiveExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new ShiftExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_shiftExpression);
						setState(274);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(275);
						match(RIGHT_OP);
						setState(276);
						additiveExpression(0);
						}
						break;
					}
					} 
				}
				setState(281);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class RelationalExpressionContext extends ParserRuleContext {
		public ShiftExpressionContext shiftExpression() {
			return getRuleContext(ShiftExpressionContext.class,0);
		}
		public RelationalExpressionContext relationalExpression() {
			return getRuleContext(RelationalExpressionContext.class,0);
		}
		public TerminalNode LEFT_ANGLE() { return getToken(GLSLParser.LEFT_ANGLE, 0); }
		public TerminalNode RIGHT_ANGLE() { return getToken(GLSLParser.RIGHT_ANGLE, 0); }
		public TerminalNode LE_OP() { return getToken(GLSLParser.LE_OP, 0); }
		public TerminalNode GE_OP() { return getToken(GLSLParser.GE_OP, 0); }
		public RelationalExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_relationalExpression; }
	}

	public final RelationalExpressionContext relationalExpression() throws RecognitionException {
		return relationalExpression(0);
	}

	private RelationalExpressionContext relationalExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		RelationalExpressionContext _localctx = new RelationalExpressionContext(_ctx, _parentState);
		RelationalExpressionContext _prevctx = _localctx;
		int _startState = 20;
		enterRecursionRule(_localctx, 20, RULE_relationalExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(283);
			shiftExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(299);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(297);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
					case 1:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(285);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(286);
						match(LEFT_ANGLE);
						setState(287);
						shiftExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(288);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(289);
						match(RIGHT_ANGLE);
						setState(290);
						shiftExpression(0);
						}
						break;
					case 3:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(291);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(292);
						match(LE_OP);
						setState(293);
						shiftExpression(0);
						}
						break;
					case 4:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(294);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(295);
						match(GE_OP);
						setState(296);
						shiftExpression(0);
						}
						break;
					}
					} 
				}
				setState(301);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class EqualityExpressionContext extends ParserRuleContext {
		public RelationalExpressionContext relationalExpression() {
			return getRuleContext(RelationalExpressionContext.class,0);
		}
		public EqualityExpressionContext equalityExpression() {
			return getRuleContext(EqualityExpressionContext.class,0);
		}
		public TerminalNode EQ_OP() { return getToken(GLSLParser.EQ_OP, 0); }
		public TerminalNode NE_OP() { return getToken(GLSLParser.NE_OP, 0); }
		public EqualityExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_equalityExpression; }
	}

	public final EqualityExpressionContext equalityExpression() throws RecognitionException {
		return equalityExpression(0);
	}

	private EqualityExpressionContext equalityExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		EqualityExpressionContext _localctx = new EqualityExpressionContext(_ctx, _parentState);
		EqualityExpressionContext _prevctx = _localctx;
		int _startState = 22;
		enterRecursionRule(_localctx, 22, RULE_equalityExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(303);
			relationalExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(313);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(311);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
					case 1:
						{
						_localctx = new EqualityExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityExpression);
						setState(305);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(306);
						match(EQ_OP);
						setState(307);
						relationalExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new EqualityExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityExpression);
						setState(308);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(309);
						match(NE_OP);
						setState(310);
						relationalExpression(0);
						}
						break;
					}
					} 
				}
				setState(315);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class AndExpressionContext extends ParserRuleContext {
		public EqualityExpressionContext equalityExpression() {
			return getRuleContext(EqualityExpressionContext.class,0);
		}
		public AndExpressionContext andExpression() {
			return getRuleContext(AndExpressionContext.class,0);
		}
		public TerminalNode AMPERSAND() { return getToken(GLSLParser.AMPERSAND, 0); }
		public AndExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_andExpression; }
	}

	public final AndExpressionContext andExpression() throws RecognitionException {
		return andExpression(0);
	}

	private AndExpressionContext andExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		AndExpressionContext _localctx = new AndExpressionContext(_ctx, _parentState);
		AndExpressionContext _prevctx = _localctx;
		int _startState = 24;
		enterRecursionRule(_localctx, 24, RULE_andExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(317);
			equalityExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(324);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AndExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_andExpression);
					setState(319);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(320);
					match(AMPERSAND);
					setState(321);
					equalityExpression(0);
					}
					} 
				}
				setState(326);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ExclusiveOrExpressionContext extends ParserRuleContext {
		public AndExpressionContext andExpression() {
			return getRuleContext(AndExpressionContext.class,0);
		}
		public ExclusiveOrExpressionContext exclusiveOrExpression() {
			return getRuleContext(ExclusiveOrExpressionContext.class,0);
		}
		public TerminalNode CARET() { return getToken(GLSLParser.CARET, 0); }
		public ExclusiveOrExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exclusiveOrExpression; }
	}

	public final ExclusiveOrExpressionContext exclusiveOrExpression() throws RecognitionException {
		return exclusiveOrExpression(0);
	}

	private ExclusiveOrExpressionContext exclusiveOrExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExclusiveOrExpressionContext _localctx = new ExclusiveOrExpressionContext(_ctx, _parentState);
		ExclusiveOrExpressionContext _prevctx = _localctx;
		int _startState = 26;
		enterRecursionRule(_localctx, 26, RULE_exclusiveOrExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(328);
			andExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(335);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExclusiveOrExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_exclusiveOrExpression);
					setState(330);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(331);
					match(CARET);
					setState(332);
					andExpression(0);
					}
					} 
				}
				setState(337);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class InclusiveOrExpressionContext extends ParserRuleContext {
		public ExclusiveOrExpressionContext exclusiveOrExpression() {
			return getRuleContext(ExclusiveOrExpressionContext.class,0);
		}
		public InclusiveOrExpressionContext inclusiveOrExpression() {
			return getRuleContext(InclusiveOrExpressionContext.class,0);
		}
		public TerminalNode VERTICAL_BAR() { return getToken(GLSLParser.VERTICAL_BAR, 0); }
		public InclusiveOrExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inclusiveOrExpression; }
	}

	public final InclusiveOrExpressionContext inclusiveOrExpression() throws RecognitionException {
		return inclusiveOrExpression(0);
	}

	private InclusiveOrExpressionContext inclusiveOrExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		InclusiveOrExpressionContext _localctx = new InclusiveOrExpressionContext(_ctx, _parentState);
		InclusiveOrExpressionContext _prevctx = _localctx;
		int _startState = 28;
		enterRecursionRule(_localctx, 28, RULE_inclusiveOrExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(339);
			exclusiveOrExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(346);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InclusiveOrExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_inclusiveOrExpression);
					setState(341);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(342);
					match(VERTICAL_BAR);
					setState(343);
					exclusiveOrExpression(0);
					}
					} 
				}
				setState(348);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class LogicalAndExpressionContext extends ParserRuleContext {
		public InclusiveOrExpressionContext inclusiveOrExpression() {
			return getRuleContext(InclusiveOrExpressionContext.class,0);
		}
		public LogicalAndExpressionContext logicalAndExpression() {
			return getRuleContext(LogicalAndExpressionContext.class,0);
		}
		public TerminalNode AND_OP() { return getToken(GLSLParser.AND_OP, 0); }
		public LogicalAndExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicalAndExpression; }
	}

	public final LogicalAndExpressionContext logicalAndExpression() throws RecognitionException {
		return logicalAndExpression(0);
	}

	private LogicalAndExpressionContext logicalAndExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		LogicalAndExpressionContext _localctx = new LogicalAndExpressionContext(_ctx, _parentState);
		LogicalAndExpressionContext _prevctx = _localctx;
		int _startState = 30;
		enterRecursionRule(_localctx, 30, RULE_logicalAndExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(350);
			inclusiveOrExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(357);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LogicalAndExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_logicalAndExpression);
					setState(352);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(353);
					match(AND_OP);
					setState(354);
					inclusiveOrExpression(0);
					}
					} 
				}
				setState(359);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class LogicalXorExpressionContext extends ParserRuleContext {
		public LogicalAndExpressionContext logicalAndExpression() {
			return getRuleContext(LogicalAndExpressionContext.class,0);
		}
		public LogicalXorExpressionContext logicalXorExpression() {
			return getRuleContext(LogicalXorExpressionContext.class,0);
		}
		public TerminalNode XOR_OP() { return getToken(GLSLParser.XOR_OP, 0); }
		public LogicalXorExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicalXorExpression; }
	}

	public final LogicalXorExpressionContext logicalXorExpression() throws RecognitionException {
		return logicalXorExpression(0);
	}

	private LogicalXorExpressionContext logicalXorExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		LogicalXorExpressionContext _localctx = new LogicalXorExpressionContext(_ctx, _parentState);
		LogicalXorExpressionContext _prevctx = _localctx;
		int _startState = 32;
		enterRecursionRule(_localctx, 32, RULE_logicalXorExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(361);
			logicalAndExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(368);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LogicalXorExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_logicalXorExpression);
					setState(363);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(364);
					match(XOR_OP);
					setState(365);
					logicalAndExpression(0);
					}
					} 
				}
				setState(370);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class LogicalOrExpressionContext extends ParserRuleContext {
		public LogicalXorExpressionContext logicalXorExpression() {
			return getRuleContext(LogicalXorExpressionContext.class,0);
		}
		public LogicalOrExpressionContext logicalOrExpression() {
			return getRuleContext(LogicalOrExpressionContext.class,0);
		}
		public TerminalNode OR_OP() { return getToken(GLSLParser.OR_OP, 0); }
		public LogicalOrExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicalOrExpression; }
	}

	public final LogicalOrExpressionContext logicalOrExpression() throws RecognitionException {
		return logicalOrExpression(0);
	}

	private LogicalOrExpressionContext logicalOrExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		LogicalOrExpressionContext _localctx = new LogicalOrExpressionContext(_ctx, _parentState);
		LogicalOrExpressionContext _prevctx = _localctx;
		int _startState = 34;
		enterRecursionRule(_localctx, 34, RULE_logicalOrExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(372);
			logicalXorExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(379);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LogicalOrExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_logicalOrExpression);
					setState(374);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(375);
					match(OR_OP);
					setState(376);
					logicalXorExpression(0);
					}
					} 
				}
				setState(381);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ConditionalExpressionContext extends ParserRuleContext {
		public LogicalOrExpressionContext logicalOrExpression() {
			return getRuleContext(LogicalOrExpressionContext.class,0);
		}
		public TerminalNode QUESTION() { return getToken(GLSLParser.QUESTION, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode COLON() { return getToken(GLSLParser.COLON, 0); }
		public AssignmentExpressionContext assignmentExpression() {
			return getRuleContext(AssignmentExpressionContext.class,0);
		}
		public ConditionalExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conditionalExpression; }
	}

	public final ConditionalExpressionContext conditionalExpression() throws RecognitionException {
		ConditionalExpressionContext _localctx = new ConditionalExpressionContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_conditionalExpression);
		try {
			setState(389);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,24,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(382);
				logicalOrExpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(383);
				logicalOrExpression(0);
				setState(384);
				match(QUESTION);
				setState(385);
				expression(0);
				setState(386);
				match(COLON);
				setState(387);
				assignmentExpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignmentExpressionContext extends ParserRuleContext {
		public ConditionalExpressionContext conditionalExpression() {
			return getRuleContext(ConditionalExpressionContext.class,0);
		}
		public UnaryExpressionContext unaryExpression() {
			return getRuleContext(UnaryExpressionContext.class,0);
		}
		public AssignmentOperatorContext assignmentOperator() {
			return getRuleContext(AssignmentOperatorContext.class,0);
		}
		public AssignmentExpressionContext assignmentExpression() {
			return getRuleContext(AssignmentExpressionContext.class,0);
		}
		public AssignmentExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignmentExpression; }
	}

	public final AssignmentExpressionContext assignmentExpression() throws RecognitionException {
		AssignmentExpressionContext _localctx = new AssignmentExpressionContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_assignmentExpression);
		try {
			setState(396);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(391);
				conditionalExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(392);
				unaryExpression();
				setState(393);
				assignmentOperator();
				setState(394);
				assignmentExpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignmentOperatorContext extends ParserRuleContext {
		public TerminalNode EQUAL() { return getToken(GLSLParser.EQUAL, 0); }
		public TerminalNode MUL_ASSIGN() { return getToken(GLSLParser.MUL_ASSIGN, 0); }
		public TerminalNode DIV_ASSIGN() { return getToken(GLSLParser.DIV_ASSIGN, 0); }
		public TerminalNode MOD_ASSIGN() { return getToken(GLSLParser.MOD_ASSIGN, 0); }
		public TerminalNode ADD_ASSIGN() { return getToken(GLSLParser.ADD_ASSIGN, 0); }
		public TerminalNode SUB_ASSIGN() { return getToken(GLSLParser.SUB_ASSIGN, 0); }
		public TerminalNode LEFT_ASSIGN() { return getToken(GLSLParser.LEFT_ASSIGN, 0); }
		public TerminalNode RIGHT_ASSIGN() { return getToken(GLSLParser.RIGHT_ASSIGN, 0); }
		public TerminalNode AND_ASSIGN() { return getToken(GLSLParser.AND_ASSIGN, 0); }
		public TerminalNode XOR_ASSIGN() { return getToken(GLSLParser.XOR_ASSIGN, 0); }
		public TerminalNode OR_ASSIGN() { return getToken(GLSLParser.OR_ASSIGN, 0); }
		public AssignmentOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignmentOperator; }
	}

	public final AssignmentOperatorContext assignmentOperator() throws RecognitionException {
		AssignmentOperatorContext _localctx = new AssignmentOperatorContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_assignmentOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(398);
			_la = _input.LA(1);
			if ( !(((((_la - 172)) & ~0x3f) == 0 && ((1L << (_la - 172)) & ((1L << (MUL_ASSIGN - 172)) | (1L << (DIV_ASSIGN - 172)) | (1L << (ADD_ASSIGN - 172)) | (1L << (MOD_ASSIGN - 172)) | (1L << (LEFT_ASSIGN - 172)) | (1L << (RIGHT_ASSIGN - 172)) | (1L << (AND_ASSIGN - 172)) | (1L << (XOR_ASSIGN - 172)) | (1L << (OR_ASSIGN - 172)) | (1L << (SUB_ASSIGN - 172)) | (1L << (EQUAL - 172)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public AssignmentExpressionContext assignmentExpression() {
			return getRuleContext(AssignmentExpressionContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(GLSLParser.COMMA, 0); }
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 42;
		enterRecursionRule(_localctx, 42, RULE_expression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(401);
			assignmentExpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(408);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_expression);
					setState(403);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(404);
					match(COMMA);
					setState(405);
					assignmentExpression();
					}
					} 
				}
				setState(410);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ConstantExpressionContext extends ParserRuleContext {
		public ConditionalExpressionContext conditionalExpression() {
			return getRuleContext(ConditionalExpressionContext.class,0);
		}
		public ConstantExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constantExpression; }
	}

	public final ConstantExpressionContext constantExpression() throws RecognitionException {
		ConstantExpressionContext _localctx = new ConstantExpressionContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_constantExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(411);
			conditionalExpression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationContext extends ParserRuleContext {
		public FunctionPrototypeContext functionPrototype() {
			return getRuleContext(FunctionPrototypeContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(GLSLParser.SEMICOLON, 0); }
		public InitDeclaratorListContext initDeclaratorList() {
			return getRuleContext(InitDeclaratorListContext.class,0);
		}
		public TerminalNode PRECISION() { return getToken(GLSLParser.PRECISION, 0); }
		public PrecisionQualifierContext precisionQualifier() {
			return getRuleContext(PrecisionQualifierContext.class,0);
		}
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public List<TerminalNode> IDENTIFIER() { return getTokens(GLSLParser.IDENTIFIER); }
		public TerminalNode IDENTIFIER(int i) {
			return getToken(GLSLParser.IDENTIFIER, i);
		}
		public TerminalNode LEFT_BRACE() { return getToken(GLSLParser.LEFT_BRACE, 0); }
		public StructDeclarationListContext structDeclarationList() {
			return getRuleContext(StructDeclarationListContext.class,0);
		}
		public TerminalNode RIGHT_BRACE() { return getToken(GLSLParser.RIGHT_BRACE, 0); }
		public ArraySpecifierContext arraySpecifier() {
			return getRuleContext(ArraySpecifierContext.class,0);
		}
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_declaration);
		try {
			setState(460);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,27,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(413);
				functionPrototype();
				setState(414);
				match(SEMICOLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(416);
				initDeclaratorList(0);
				setState(417);
				match(SEMICOLON);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(419);
				match(PRECISION);
				setState(420);
				precisionQualifier();
				setState(421);
				typeSpecifier();
				setState(422);
				match(SEMICOLON);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(424);
				typeQualifier(0);
				setState(425);
				match(IDENTIFIER);
				setState(426);
				match(LEFT_BRACE);
				setState(427);
				structDeclarationList(0);
				setState(428);
				match(RIGHT_BRACE);
				setState(429);
				match(SEMICOLON);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(431);
				typeQualifier(0);
				setState(432);
				match(IDENTIFIER);
				setState(433);
				match(LEFT_BRACE);
				setState(434);
				structDeclarationList(0);
				setState(435);
				match(RIGHT_BRACE);
				setState(436);
				match(IDENTIFIER);
				setState(437);
				match(SEMICOLON);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(439);
				typeQualifier(0);
				setState(440);
				match(IDENTIFIER);
				setState(441);
				match(LEFT_BRACE);
				setState(442);
				structDeclarationList(0);
				setState(443);
				match(RIGHT_BRACE);
				setState(444);
				match(IDENTIFIER);
				setState(445);
				arraySpecifier(0);
				setState(446);
				match(SEMICOLON);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(448);
				typeQualifier(0);
				setState(449);
				match(SEMICOLON);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(451);
				typeQualifier(0);
				setState(452);
				match(IDENTIFIER);
				setState(453);
				match(SEMICOLON);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(455);
				typeQualifier(0);
				setState(456);
				match(IDENTIFIER);
				setState(457);
				identifierList(0);
				setState(458);
				match(SEMICOLON);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierListContext extends ParserRuleContext {
		public TerminalNode COMMA() { return getToken(GLSLParser.COMMA, 0); }
		public TerminalNode IDENTIFIER() { return getToken(GLSLParser.IDENTIFIER, 0); }
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public IdentifierListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierList; }
	}

	public final IdentifierListContext identifierList() throws RecognitionException {
		return identifierList(0);
	}

	private IdentifierListContext identifierList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		IdentifierListContext _localctx = new IdentifierListContext(_ctx, _parentState);
		IdentifierListContext _prevctx = _localctx;
		int _startState = 48;
		enterRecursionRule(_localctx, 48, RULE_identifierList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(463);
			match(COMMA);
			setState(464);
			match(IDENTIFIER);
			}
			_ctx.stop = _input.LT(-1);
			setState(471);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new IdentifierListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_identifierList);
					setState(466);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(467);
					match(COMMA);
					setState(468);
					match(IDENTIFIER);
					}
					} 
				}
				setState(473);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class FunctionPrototypeContext extends ParserRuleContext {
		public FunctionDeclaratorContext functionDeclarator() {
			return getRuleContext(FunctionDeclaratorContext.class,0);
		}
		public TerminalNode RIGHT_PAREN() { return getToken(GLSLParser.RIGHT_PAREN, 0); }
		public FunctionPrototypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionPrototype; }
	}

	public final FunctionPrototypeContext functionPrototype() throws RecognitionException {
		FunctionPrototypeContext _localctx = new FunctionPrototypeContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_functionPrototype);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(474);
			functionDeclarator();
			setState(475);
			match(RIGHT_PAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionDeclaratorContext extends ParserRuleContext {
		public FunctionHeaderContext functionHeader() {
			return getRuleContext(FunctionHeaderContext.class,0);
		}
		public FunctionHeaderWithParametersContext functionHeaderWithParameters() {
			return getRuleContext(FunctionHeaderWithParametersContext.class,0);
		}
		public FunctionDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionDeclarator; }
	}

	public final FunctionDeclaratorContext functionDeclarator() throws RecognitionException {
		FunctionDeclaratorContext _localctx = new FunctionDeclaratorContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_functionDeclarator);
		try {
			setState(479);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(477);
				functionHeader();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(478);
				functionHeaderWithParameters(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionHeaderWithParametersContext extends ParserRuleContext {
		public FunctionHeaderContext functionHeader() {
			return getRuleContext(FunctionHeaderContext.class,0);
		}
		public ParameterDeclarationContext parameterDeclaration() {
			return getRuleContext(ParameterDeclarationContext.class,0);
		}
		public FunctionHeaderWithParametersContext functionHeaderWithParameters() {
			return getRuleContext(FunctionHeaderWithParametersContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(GLSLParser.COMMA, 0); }
		public FunctionHeaderWithParametersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionHeaderWithParameters; }
	}

	public final FunctionHeaderWithParametersContext functionHeaderWithParameters() throws RecognitionException {
		return functionHeaderWithParameters(0);
	}

	private FunctionHeaderWithParametersContext functionHeaderWithParameters(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		FunctionHeaderWithParametersContext _localctx = new FunctionHeaderWithParametersContext(_ctx, _parentState);
		FunctionHeaderWithParametersContext _prevctx = _localctx;
		int _startState = 54;
		enterRecursionRule(_localctx, 54, RULE_functionHeaderWithParameters, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(482);
			functionHeader();
			setState(483);
			parameterDeclaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(490);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,30,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new FunctionHeaderWithParametersContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_functionHeaderWithParameters);
					setState(485);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(486);
					match(COMMA);
					setState(487);
					parameterDeclaration();
					}
					} 
				}
				setState(492);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,30,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class FunctionHeaderContext extends ParserRuleContext {
		public FullySpecifiedTypeContext fullySpecifiedType() {
			return getRuleContext(FullySpecifiedTypeContext.class,0);
		}
		public TerminalNode IDENTIFIER() { return getToken(GLSLParser.IDENTIFIER, 0); }
		public TerminalNode LEFT_PAREN() { return getToken(GLSLParser.LEFT_PAREN, 0); }
		public FunctionHeaderContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionHeader; }
	}

	public final FunctionHeaderContext functionHeader() throws RecognitionException {
		FunctionHeaderContext _localctx = new FunctionHeaderContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_functionHeader);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(493);
			fullySpecifiedType();
			setState(494);
			match(IDENTIFIER);
			setState(495);
			match(LEFT_PAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParameterDeclaratorContext extends ParserRuleContext {
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public TerminalNode IDENTIFIER() { return getToken(GLSLParser.IDENTIFIER, 0); }
		public ArraySpecifierContext arraySpecifier() {
			return getRuleContext(ArraySpecifierContext.class,0);
		}
		public ParameterDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterDeclarator; }
	}

	public final ParameterDeclaratorContext parameterDeclarator() throws RecognitionException {
		ParameterDeclaratorContext _localctx = new ParameterDeclaratorContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_parameterDeclarator);
		try {
			setState(504);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(497);
				typeSpecifier();
				setState(498);
				match(IDENTIFIER);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(500);
				typeSpecifier();
				setState(501);
				match(IDENTIFIER);
				setState(502);
				arraySpecifier(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParameterDeclarationContext extends ParserRuleContext {
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public ParameterDeclaratorContext parameterDeclarator() {
			return getRuleContext(ParameterDeclaratorContext.class,0);
		}
		public ParameterTypeSpecifierContext parameterTypeSpecifier() {
			return getRuleContext(ParameterTypeSpecifierContext.class,0);
		}
		public ParameterDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterDeclaration; }
	}

	public final ParameterDeclarationContext parameterDeclaration() throws RecognitionException {
		ParameterDeclarationContext _localctx = new ParameterDeclarationContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_parameterDeclaration);
		try {
			setState(514);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(506);
				typeQualifier(0);
				setState(507);
				parameterDeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(509);
				parameterDeclarator();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(510);
				typeQualifier(0);
				setState(511);
				parameterTypeSpecifier();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(513);
				parameterTypeSpecifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParameterTypeSpecifierContext extends ParserRuleContext {
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public ParameterTypeSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterTypeSpecifier; }
	}

	public final ParameterTypeSpecifierContext parameterTypeSpecifier() throws RecognitionException {
		ParameterTypeSpecifierContext _localctx = new ParameterTypeSpecifierContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_parameterTypeSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(516);
			typeSpecifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitDeclaratorListContext extends ParserRuleContext {
		public SingleDeclarationContext singleDeclaration() {
			return getRuleContext(SingleDeclarationContext.class,0);
		}
		public InitDeclaratorListContext initDeclaratorList() {
			return getRuleContext(InitDeclaratorListContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(GLSLParser.COMMA, 0); }
		public TerminalNode IDENTIFIER() { return getToken(GLSLParser.IDENTIFIER, 0); }
		public ArraySpecifierContext arraySpecifier() {
			return getRuleContext(ArraySpecifierContext.class,0);
		}
		public TerminalNode EQUAL() { return getToken(GLSLParser.EQUAL, 0); }
		public InitializerContext initializer() {
			return getRuleContext(InitializerContext.class,0);
		}
		public InitDeclaratorListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initDeclaratorList; }
	}

	public final InitDeclaratorListContext initDeclaratorList() throws RecognitionException {
		return initDeclaratorList(0);
	}

	private InitDeclaratorListContext initDeclaratorList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		InitDeclaratorListContext _localctx = new InitDeclaratorListContext(_ctx, _parentState);
		InitDeclaratorListContext _prevctx = _localctx;
		int _startState = 64;
		enterRecursionRule(_localctx, 64, RULE_initDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(519);
			singleDeclaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(542);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,34,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(540);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,33,_ctx) ) {
					case 1:
						{
						_localctx = new InitDeclaratorListContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_initDeclaratorList);
						setState(521);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(522);
						match(COMMA);
						setState(523);
						match(IDENTIFIER);
						}
						break;
					case 2:
						{
						_localctx = new InitDeclaratorListContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_initDeclaratorList);
						setState(524);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(525);
						match(COMMA);
						setState(526);
						match(IDENTIFIER);
						setState(527);
						arraySpecifier(0);
						}
						break;
					case 3:
						{
						_localctx = new InitDeclaratorListContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_initDeclaratorList);
						setState(528);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(529);
						match(COMMA);
						setState(530);
						match(IDENTIFIER);
						setState(531);
						arraySpecifier(0);
						setState(532);
						match(EQUAL);
						setState(533);
						initializer();
						}
						break;
					case 4:
						{
						_localctx = new InitDeclaratorListContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_initDeclaratorList);
						setState(535);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(536);
						match(COMMA);
						setState(537);
						match(IDENTIFIER);
						setState(538);
						match(EQUAL);
						setState(539);
						initializer();
						}
						break;
					}
					} 
				}
				setState(544);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,34,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class SingleDeclarationContext extends ParserRuleContext {
		public FullySpecifiedTypeContext fullySpecifiedType() {
			return getRuleContext(FullySpecifiedTypeContext.class,0);
		}
		public TerminalNode IDENTIFIER() { return getToken(GLSLParser.IDENTIFIER, 0); }
		public ArraySpecifierContext arraySpecifier() {
			return getRuleContext(ArraySpecifierContext.class,0);
		}
		public TerminalNode EQUAL() { return getToken(GLSLParser.EQUAL, 0); }
		public InitializerContext initializer() {
			return getRuleContext(InitializerContext.class,0);
		}
		public SingleDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_singleDeclaration; }
	}

	public final SingleDeclarationContext singleDeclaration() throws RecognitionException {
		SingleDeclarationContext _localctx = new SingleDeclarationContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_singleDeclaration);
		try {
			setState(564);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,35,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(545);
				fullySpecifiedType();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(546);
				fullySpecifiedType();
				setState(547);
				match(IDENTIFIER);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(549);
				fullySpecifiedType();
				setState(550);
				match(IDENTIFIER);
				setState(551);
				arraySpecifier(0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(553);
				fullySpecifiedType();
				setState(554);
				match(IDENTIFIER);
				setState(555);
				arraySpecifier(0);
				setState(556);
				match(EQUAL);
				setState(557);
				initializer();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(559);
				fullySpecifiedType();
				setState(560);
				match(IDENTIFIER);
				setState(561);
				match(EQUAL);
				setState(562);
				initializer();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FullySpecifiedTypeContext extends ParserRuleContext {
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public FullySpecifiedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fullySpecifiedType; }
	}

	public final FullySpecifiedTypeContext fullySpecifiedType() throws RecognitionException {
		FullySpecifiedTypeContext _localctx = new FullySpecifiedTypeContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_fullySpecifiedType);
		try {
			setState(570);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BOOL:
			case FLOAT:
			case INT:
			case UINT:
			case DOUBLE:
			case BVEC2:
			case BVEC3:
			case BVEC4:
			case IVEC2:
			case IVEC3:
			case IVEC4:
			case UVEC2:
			case UVEC3:
			case UVEC4:
			case VEC2:
			case VEC3:
			case VEC4:
			case MAT2:
			case MAT3:
			case MAT4:
			case MAT2X2:
			case MAT2X3:
			case MAT2X4:
			case MAT3X2:
			case MAT3X3:
			case MAT3X4:
			case MAT4X2:
			case MAT4X3:
			case MAT4X4:
			case DVEC2:
			case DVEC3:
			case DVEC4:
			case DMAT2:
			case DMAT3:
			case DMAT4:
			case DMAT2X2:
			case DMAT2X3:
			case DMAT2X4:
			case DMAT3X2:
			case DMAT3X3:
			case DMAT3X4:
			case DMAT4X2:
			case DMAT4X3:
			case DMAT4X4:
			case ATOMIC_UINT:
			case SAMPLER2D:
			case SAMPLER3D:
			case SAMPLERCUBE:
			case SAMPLER2DSHADOW:
			case SAMPLERCUBESHADOW:
			case SAMPLER2DARRAY:
			case SAMPLER2DARRAYSHADOW:
			case ISAMPLER2D:
			case ISAMPLER3D:
			case ISAMPLERCUBE:
			case ISAMPLER2DARRAY:
			case USAMPLER2D:
			case USAMPLER3D:
			case USAMPLERCUBE:
			case USAMPLER2DARRAY:
			case SAMPLER1D:
			case SAMPLER1DSHADOW:
			case SAMPLER1DARRAY:
			case SAMPLER1DARRAYSHADOW:
			case ISAMPLER1D:
			case ISAMPLER1DARRAY:
			case USAMPLER1D:
			case USAMPLER1DARRAY:
			case SAMPLER2DRECT:
			case SAMPLER2DRECTSHADOW:
			case ISAMPLER2DRECT:
			case USAMPLER2DRECT:
			case SAMPLERBUFFER:
			case ISAMPLERBUFFER:
			case USAMPLERBUFFER:
			case SAMPLERCUBEARRAY:
			case SAMPLERCUBEARRAYSHADOW:
			case ISAMPLERCUBEARRAY:
			case USAMPLERCUBEARRAY:
			case SAMPLER2DMS:
			case ISAMPLER2DMS:
			case USAMPLER2DMS:
			case SAMPLER2DMSARRAY:
			case ISAMPLER2DMSARRAY:
			case USAMPLER2DMSARRAY:
			case IMAGE2D:
			case IIMAGE2D:
			case UIMAGE2D:
			case IMAGE3D:
			case IIMAGE3D:
			case UIMAGE3D:
			case IMAGECUBE:
			case IIMAGECUBE:
			case UIMAGECUBE:
			case IMAGEBUFFER:
			case IIMAGEBUFFER:
			case UIMAGEBUFFER:
			case IMAGE2DARRAY:
			case IIMAGE2DARRAY:
			case UIMAGE2DARRAY:
			case IMAGECUBEARRAY:
			case IIMAGECUBEARRAY:
			case UIMAGECUBEARRAY:
			case IMAGE1D:
			case IIMAGE1D:
			case UIMAGE1D:
			case IMAGE1DARRAY:
			case IIMAGE1DARRAY:
			case UIMAGE1DARRAY:
			case IMAGE2DRECT:
			case IIMAGE2DRECT:
			case UIMAGE2DRECT:
			case IMAGE2DMS:
			case IIMAGE2DMS:
			case UIMAGE2DMS:
			case IMAGE2DMSARRAY:
			case IIMAGE2DMSARRAY:
			case UIMAGE2DMSARRAY:
			case STRUCT:
			case VOID_:
			case IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(566);
				typeSpecifier();
				}
				break;
			case CONST_:
			case CENTROID:
			case IN_:
			case OUT_:
			case INOUT:
			case UNIFORM:
			case PATCH:
			case SAMPLE:
			case BUFFER:
			case SHARED:
			case COHERENT:
			case VOLATILE:
			case RESTRICT:
			case READONLY:
			case WRITEONLY:
			case NOPERSPECTIVE:
			case FLAT:
			case SMOOTH:
			case LAYOUT:
			case SUBROUTINE:
			case INVARIANT:
			case PRECISE:
			case HIGH_PRECISION:
			case MEDIUM_PRECISION:
			case LOW_PRECISION:
				enterOuterAlt(_localctx, 2);
				{
				setState(567);
				typeQualifier(0);
				setState(568);
				typeSpecifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InvariantQualifierContext extends ParserRuleContext {
		public TerminalNode INVARIANT() { return getToken(GLSLParser.INVARIANT, 0); }
		public InvariantQualifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_invariantQualifier; }
	}

	public final InvariantQualifierContext invariantQualifier() throws RecognitionException {
		InvariantQualifierContext _localctx = new InvariantQualifierContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_invariantQualifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(572);
			match(INVARIANT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InterpolationQualifierContext extends ParserRuleContext {
		public TerminalNode SMOOTH() { return getToken(GLSLParser.SMOOTH, 0); }
		public TerminalNode FLAT() { return getToken(GLSLParser.FLAT, 0); }
		public TerminalNode NOPERSPECTIVE() { return getToken(GLSLParser.NOPERSPECTIVE, 0); }
		public InterpolationQualifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_interpolationQualifier; }
	}

	public final InterpolationQualifierContext interpolationQualifier() throws RecognitionException {
		InterpolationQualifierContext _localctx = new InterpolationQualifierContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_interpolationQualifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(574);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << NOPERSPECTIVE) | (1L << FLAT) | (1L << SMOOTH))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LayoutQualifierContext extends ParserRuleContext {
		public TerminalNode LAYOUT() { return getToken(GLSLParser.LAYOUT, 0); }
		public TerminalNode LEFT_PAREN() { return getToken(GLSLParser.LEFT_PAREN, 0); }
		public LayoutQualifierIdListContext layoutQualifierIdList() {
			return getRuleContext(LayoutQualifierIdListContext.class,0);
		}
		public TerminalNode RIGHT_PAREN() { return getToken(GLSLParser.RIGHT_PAREN, 0); }
		public LayoutQualifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_layoutQualifier; }
	}

	public final LayoutQualifierContext layoutQualifier() throws RecognitionException {
		LayoutQualifierContext _localctx = new LayoutQualifierContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_layoutQualifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(576);
			match(LAYOUT);
			setState(577);
			match(LEFT_PAREN);
			setState(578);
			layoutQualifierIdList(0);
			setState(579);
			match(RIGHT_PAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LayoutQualifierIdListContext extends ParserRuleContext {
		public LayoutQualifierIdContext layoutQualifierId() {
			return getRuleContext(LayoutQualifierIdContext.class,0);
		}
		public LayoutQualifierIdListContext layoutQualifierIdList() {
			return getRuleContext(LayoutQualifierIdListContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(GLSLParser.COMMA, 0); }
		public LayoutQualifierIdListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_layoutQualifierIdList; }
	}

	public final LayoutQualifierIdListContext layoutQualifierIdList() throws RecognitionException {
		return layoutQualifierIdList(0);
	}

	private LayoutQualifierIdListContext layoutQualifierIdList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		LayoutQualifierIdListContext _localctx = new LayoutQualifierIdListContext(_ctx, _parentState);
		LayoutQualifierIdListContext _prevctx = _localctx;
		int _startState = 76;
		enterRecursionRule(_localctx, 76, RULE_layoutQualifierIdList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(582);
			layoutQualifierId();
			}
			_ctx.stop = _input.LT(-1);
			setState(589);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LayoutQualifierIdListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_layoutQualifierIdList);
					setState(584);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(585);
					match(COMMA);
					setState(586);
					layoutQualifierId();
					}
					} 
				}
				setState(591);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class LayoutQualifierIdContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(GLSLParser.IDENTIFIER, 0); }
		public TerminalNode EQUAL() { return getToken(GLSLParser.EQUAL, 0); }
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public TerminalNode SHARED() { return getToken(GLSLParser.SHARED, 0); }
		public LayoutQualifierIdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_layoutQualifierId; }
	}

	public final LayoutQualifierIdContext layoutQualifierId() throws RecognitionException {
		LayoutQualifierIdContext _localctx = new LayoutQualifierIdContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_layoutQualifierId);
		try {
			setState(597);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(592);
				match(IDENTIFIER);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(593);
				match(IDENTIFIER);
				setState(594);
				match(EQUAL);
				setState(595);
				constantExpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(596);
				match(SHARED);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PreciseQualifierContext extends ParserRuleContext {
		public TerminalNode PRECISE() { return getToken(GLSLParser.PRECISE, 0); }
		public PreciseQualifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_preciseQualifier; }
	}

	public final PreciseQualifierContext preciseQualifier() throws RecognitionException {
		PreciseQualifierContext _localctx = new PreciseQualifierContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_preciseQualifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(599);
			match(PRECISE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeQualifierContext extends ParserRuleContext {
		public SingleTypeQualifierContext singleTypeQualifier() {
			return getRuleContext(SingleTypeQualifierContext.class,0);
		}
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public TypeQualifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeQualifier; }
	}

	public final TypeQualifierContext typeQualifier() throws RecognitionException {
		return typeQualifier(0);
	}

	private TypeQualifierContext typeQualifier(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TypeQualifierContext _localctx = new TypeQualifierContext(_ctx, _parentState);
		TypeQualifierContext _prevctx = _localctx;
		int _startState = 82;
		enterRecursionRule(_localctx, 82, RULE_typeQualifier, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(602);
			singleTypeQualifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(608);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,39,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TypeQualifierContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_typeQualifier);
					setState(604);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(605);
					singleTypeQualifier();
					}
					} 
				}
				setState(610);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,39,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class SingleTypeQualifierContext extends ParserRuleContext {
		public StorageQualifierContext storageQualifier() {
			return getRuleContext(StorageQualifierContext.class,0);
		}
		public LayoutQualifierContext layoutQualifier() {
			return getRuleContext(LayoutQualifierContext.class,0);
		}
		public PrecisionQualifierContext precisionQualifier() {
			return getRuleContext(PrecisionQualifierContext.class,0);
		}
		public InterpolationQualifierContext interpolationQualifier() {
			return getRuleContext(InterpolationQualifierContext.class,0);
		}
		public InvariantQualifierContext invariantQualifier() {
			return getRuleContext(InvariantQualifierContext.class,0);
		}
		public PreciseQualifierContext preciseQualifier() {
			return getRuleContext(PreciseQualifierContext.class,0);
		}
		public SingleTypeQualifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_singleTypeQualifier; }
	}

	public final SingleTypeQualifierContext singleTypeQualifier() throws RecognitionException {
		SingleTypeQualifierContext _localctx = new SingleTypeQualifierContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_singleTypeQualifier);
		try {
			setState(617);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CONST_:
			case CENTROID:
			case IN_:
			case OUT_:
			case INOUT:
			case UNIFORM:
			case PATCH:
			case SAMPLE:
			case BUFFER:
			case SHARED:
			case COHERENT:
			case VOLATILE:
			case RESTRICT:
			case READONLY:
			case WRITEONLY:
			case SUBROUTINE:
				enterOuterAlt(_localctx, 1);
				{
				setState(611);
				storageQualifier();
				}
				break;
			case LAYOUT:
				enterOuterAlt(_localctx, 2);
				{
				setState(612);
				layoutQualifier();
				}
				break;
			case HIGH_PRECISION:
			case MEDIUM_PRECISION:
			case LOW_PRECISION:
				enterOuterAlt(_localctx, 3);
				{
				setState(613);
				precisionQualifier();
				}
				break;
			case NOPERSPECTIVE:
			case FLAT:
			case SMOOTH:
				enterOuterAlt(_localctx, 4);
				{
				setState(614);
				interpolationQualifier();
				}
				break;
			case INVARIANT:
				enterOuterAlt(_localctx, 5);
				{
				setState(615);
				invariantQualifier();
				}
				break;
			case PRECISE:
				enterOuterAlt(_localctx, 6);
				{
				setState(616);
				preciseQualifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StorageQualifierContext extends ParserRuleContext {
		public TerminalNode CONST_() { return getToken(GLSLParser.CONST_, 0); }
		public TerminalNode IN_() { return getToken(GLSLParser.IN_, 0); }
		public TerminalNode OUT_() { return getToken(GLSLParser.OUT_, 0); }
		public TerminalNode INOUT() { return getToken(GLSLParser.INOUT, 0); }
		public TerminalNode CENTROID() { return getToken(GLSLParser.CENTROID, 0); }
		public TerminalNode PATCH() { return getToken(GLSLParser.PATCH, 0); }
		public TerminalNode SAMPLE() { return getToken(GLSLParser.SAMPLE, 0); }
		public TerminalNode UNIFORM() { return getToken(GLSLParser.UNIFORM, 0); }
		public TerminalNode BUFFER() { return getToken(GLSLParser.BUFFER, 0); }
		public TerminalNode SHARED() { return getToken(GLSLParser.SHARED, 0); }
		public TerminalNode COHERENT() { return getToken(GLSLParser.COHERENT, 0); }
		public TerminalNode VOLATILE() { return getToken(GLSLParser.VOLATILE, 0); }
		public TerminalNode RESTRICT() { return getToken(GLSLParser.RESTRICT, 0); }
		public TerminalNode READONLY() { return getToken(GLSLParser.READONLY, 0); }
		public TerminalNode WRITEONLY() { return getToken(GLSLParser.WRITEONLY, 0); }
		public TerminalNode SUBROUTINE() { return getToken(GLSLParser.SUBROUTINE, 0); }
		public TerminalNode LEFT_PAREN() { return getToken(GLSLParser.LEFT_PAREN, 0); }
		public TypeNameListContext typeNameList() {
			return getRuleContext(TypeNameListContext.class,0);
		}
		public TerminalNode RIGHT_PAREN() { return getToken(GLSLParser.RIGHT_PAREN, 0); }
		public StorageQualifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_storageQualifier; }
	}

	public final StorageQualifierContext storageQualifier() throws RecognitionException {
		StorageQualifierContext _localctx = new StorageQualifierContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_storageQualifier);
		try {
			setState(640);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(619);
				match(CONST_);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(620);
				match(IN_);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(621);
				match(OUT_);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(622);
				match(INOUT);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(623);
				match(CENTROID);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(624);
				match(PATCH);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(625);
				match(SAMPLE);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(626);
				match(UNIFORM);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(627);
				match(BUFFER);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(628);
				match(SHARED);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(629);
				match(COHERENT);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(630);
				match(VOLATILE);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(631);
				match(RESTRICT);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(632);
				match(READONLY);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(633);
				match(WRITEONLY);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(634);
				match(SUBROUTINE);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(635);
				match(SUBROUTINE);
				setState(636);
				match(LEFT_PAREN);
				setState(637);
				typeNameList(0);
				setState(638);
				match(RIGHT_PAREN);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeNameListContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(GLSLParser.IDENTIFIER, 0); }
		public TypeNameListContext typeNameList() {
			return getRuleContext(TypeNameListContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(GLSLParser.COMMA, 0); }
		public TypeNameListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeNameList; }
	}

	public final TypeNameListContext typeNameList() throws RecognitionException {
		return typeNameList(0);
	}

	private TypeNameListContext typeNameList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TypeNameListContext _localctx = new TypeNameListContext(_ctx, _parentState);
		TypeNameListContext _prevctx = _localctx;
		int _startState = 88;
		enterRecursionRule(_localctx, 88, RULE_typeNameList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(643);
			match(IDENTIFIER);
			}
			_ctx.stop = _input.LT(-1);
			setState(650);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,42,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TypeNameListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_typeNameList);
					setState(645);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(646);
					match(COMMA);
					setState(647);
					match(IDENTIFIER);
					}
					} 
				}
				setState(652);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,42,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class TypeSpecifierContext extends ParserRuleContext {
		public TypeSpecifierNonarrayContext typeSpecifierNonarray() {
			return getRuleContext(TypeSpecifierNonarrayContext.class,0);
		}
		public ArraySpecifierContext arraySpecifier() {
			return getRuleContext(ArraySpecifierContext.class,0);
		}
		public TypeSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeSpecifier; }
	}

	public final TypeSpecifierContext typeSpecifier() throws RecognitionException {
		TypeSpecifierContext _localctx = new TypeSpecifierContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_typeSpecifier);
		try {
			setState(657);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(653);
				typeSpecifierNonarray();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(654);
				typeSpecifierNonarray();
				setState(655);
				arraySpecifier(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ArraySpecifierContext extends ParserRuleContext {
		public TerminalNode LEFT_BRACKET() { return getToken(GLSLParser.LEFT_BRACKET, 0); }
		public TerminalNode RIGHT_BRACKET() { return getToken(GLSLParser.RIGHT_BRACKET, 0); }
		public ConditionalExpressionContext conditionalExpression() {
			return getRuleContext(ConditionalExpressionContext.class,0);
		}
		public ArraySpecifierContext arraySpecifier() {
			return getRuleContext(ArraySpecifierContext.class,0);
		}
		public ArraySpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arraySpecifier; }
	}

	public final ArraySpecifierContext arraySpecifier() throws RecognitionException {
		return arraySpecifier(0);
	}

	private ArraySpecifierContext arraySpecifier(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ArraySpecifierContext _localctx = new ArraySpecifierContext(_ctx, _parentState);
		ArraySpecifierContext _prevctx = _localctx;
		int _startState = 92;
		enterRecursionRule(_localctx, 92, RULE_arraySpecifier, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(666);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,44,_ctx) ) {
			case 1:
				{
				setState(660);
				match(LEFT_BRACKET);
				setState(661);
				match(RIGHT_BRACKET);
				}
				break;
			case 2:
				{
				setState(662);
				match(LEFT_BRACKET);
				setState(663);
				conditionalExpression();
				setState(664);
				match(RIGHT_BRACKET);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(678);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,46,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(676);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
					case 1:
						{
						_localctx = new ArraySpecifierContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arraySpecifier);
						setState(668);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(669);
						match(LEFT_BRACKET);
						setState(670);
						match(RIGHT_BRACKET);
						}
						break;
					case 2:
						{
						_localctx = new ArraySpecifierContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arraySpecifier);
						setState(671);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(672);
						match(LEFT_BRACKET);
						setState(673);
						conditionalExpression();
						setState(674);
						match(RIGHT_BRACKET);
						}
						break;
					}
					} 
				}
				setState(680);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,46,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class TypeSpecifierNonarrayContext extends ParserRuleContext {
		public TerminalNode VOID_() { return getToken(GLSLParser.VOID_, 0); }
		public TerminalNode FLOAT() { return getToken(GLSLParser.FLOAT, 0); }
		public TerminalNode DOUBLE() { return getToken(GLSLParser.DOUBLE, 0); }
		public TerminalNode INT() { return getToken(GLSLParser.INT, 0); }
		public TerminalNode UINT() { return getToken(GLSLParser.UINT, 0); }
		public TerminalNode BOOL() { return getToken(GLSLParser.BOOL, 0); }
		public TerminalNode VEC2() { return getToken(GLSLParser.VEC2, 0); }
		public TerminalNode VEC3() { return getToken(GLSLParser.VEC3, 0); }
		public TerminalNode VEC4() { return getToken(GLSLParser.VEC4, 0); }
		public TerminalNode DVEC2() { return getToken(GLSLParser.DVEC2, 0); }
		public TerminalNode DVEC3() { return getToken(GLSLParser.DVEC3, 0); }
		public TerminalNode DVEC4() { return getToken(GLSLParser.DVEC4, 0); }
		public TerminalNode BVEC2() { return getToken(GLSLParser.BVEC2, 0); }
		public TerminalNode BVEC3() { return getToken(GLSLParser.BVEC3, 0); }
		public TerminalNode BVEC4() { return getToken(GLSLParser.BVEC4, 0); }
		public TerminalNode IVEC2() { return getToken(GLSLParser.IVEC2, 0); }
		public TerminalNode IVEC3() { return getToken(GLSLParser.IVEC3, 0); }
		public TerminalNode IVEC4() { return getToken(GLSLParser.IVEC4, 0); }
		public TerminalNode UVEC2() { return getToken(GLSLParser.UVEC2, 0); }
		public TerminalNode UVEC3() { return getToken(GLSLParser.UVEC3, 0); }
		public TerminalNode UVEC4() { return getToken(GLSLParser.UVEC4, 0); }
		public TerminalNode MAT2() { return getToken(GLSLParser.MAT2, 0); }
		public TerminalNode MAT3() { return getToken(GLSLParser.MAT3, 0); }
		public TerminalNode MAT4() { return getToken(GLSLParser.MAT4, 0); }
		public TerminalNode MAT2X2() { return getToken(GLSLParser.MAT2X2, 0); }
		public TerminalNode MAT2X3() { return getToken(GLSLParser.MAT2X3, 0); }
		public TerminalNode MAT2X4() { return getToken(GLSLParser.MAT2X4, 0); }
		public TerminalNode MAT3X2() { return getToken(GLSLParser.MAT3X2, 0); }
		public TerminalNode MAT3X3() { return getToken(GLSLParser.MAT3X3, 0); }
		public TerminalNode MAT3X4() { return getToken(GLSLParser.MAT3X4, 0); }
		public TerminalNode MAT4X2() { return getToken(GLSLParser.MAT4X2, 0); }
		public TerminalNode MAT4X3() { return getToken(GLSLParser.MAT4X3, 0); }
		public TerminalNode MAT4X4() { return getToken(GLSLParser.MAT4X4, 0); }
		public TerminalNode DMAT2() { return getToken(GLSLParser.DMAT2, 0); }
		public TerminalNode DMAT3() { return getToken(GLSLParser.DMAT3, 0); }
		public TerminalNode DMAT4() { return getToken(GLSLParser.DMAT4, 0); }
		public TerminalNode DMAT2X2() { return getToken(GLSLParser.DMAT2X2, 0); }
		public TerminalNode DMAT2X3() { return getToken(GLSLParser.DMAT2X3, 0); }
		public TerminalNode DMAT2X4() { return getToken(GLSLParser.DMAT2X4, 0); }
		public TerminalNode DMAT3X2() { return getToken(GLSLParser.DMAT3X2, 0); }
		public TerminalNode DMAT3X3() { return getToken(GLSLParser.DMAT3X3, 0); }
		public TerminalNode DMAT3X4() { return getToken(GLSLParser.DMAT3X4, 0); }
		public TerminalNode DMAT4X2() { return getToken(GLSLParser.DMAT4X2, 0); }
		public TerminalNode DMAT4X3() { return getToken(GLSLParser.DMAT4X3, 0); }
		public TerminalNode DMAT4X4() { return getToken(GLSLParser.DMAT4X4, 0); }
		public TerminalNode ATOMIC_UINT() { return getToken(GLSLParser.ATOMIC_UINT, 0); }
		public TerminalNode SAMPLER2D() { return getToken(GLSLParser.SAMPLER2D, 0); }
		public TerminalNode SAMPLER3D() { return getToken(GLSLParser.SAMPLER3D, 0); }
		public TerminalNode SAMPLERCUBE() { return getToken(GLSLParser.SAMPLERCUBE, 0); }
		public TerminalNode SAMPLER2DSHADOW() { return getToken(GLSLParser.SAMPLER2DSHADOW, 0); }
		public TerminalNode SAMPLERCUBESHADOW() { return getToken(GLSLParser.SAMPLERCUBESHADOW, 0); }
		public TerminalNode SAMPLER2DARRAY() { return getToken(GLSLParser.SAMPLER2DARRAY, 0); }
		public TerminalNode SAMPLER2DARRAYSHADOW() { return getToken(GLSLParser.SAMPLER2DARRAYSHADOW, 0); }
		public TerminalNode SAMPLERCUBEARRAY() { return getToken(GLSLParser.SAMPLERCUBEARRAY, 0); }
		public TerminalNode SAMPLERCUBEARRAYSHADOW() { return getToken(GLSLParser.SAMPLERCUBEARRAYSHADOW, 0); }
		public TerminalNode ISAMPLER2D() { return getToken(GLSLParser.ISAMPLER2D, 0); }
		public TerminalNode ISAMPLER3D() { return getToken(GLSLParser.ISAMPLER3D, 0); }
		public TerminalNode ISAMPLERCUBE() { return getToken(GLSLParser.ISAMPLERCUBE, 0); }
		public TerminalNode ISAMPLER2DARRAY() { return getToken(GLSLParser.ISAMPLER2DARRAY, 0); }
		public TerminalNode ISAMPLERCUBEARRAY() { return getToken(GLSLParser.ISAMPLERCUBEARRAY, 0); }
		public TerminalNode USAMPLER2D() { return getToken(GLSLParser.USAMPLER2D, 0); }
		public TerminalNode USAMPLER3D() { return getToken(GLSLParser.USAMPLER3D, 0); }
		public TerminalNode USAMPLERCUBE() { return getToken(GLSLParser.USAMPLERCUBE, 0); }
		public TerminalNode USAMPLER2DARRAY() { return getToken(GLSLParser.USAMPLER2DARRAY, 0); }
		public TerminalNode USAMPLERCUBEARRAY() { return getToken(GLSLParser.USAMPLERCUBEARRAY, 0); }
		public TerminalNode SAMPLER1D() { return getToken(GLSLParser.SAMPLER1D, 0); }
		public TerminalNode SAMPLER1DSHADOW() { return getToken(GLSLParser.SAMPLER1DSHADOW, 0); }
		public TerminalNode SAMPLER1DARRAY() { return getToken(GLSLParser.SAMPLER1DARRAY, 0); }
		public TerminalNode SAMPLER1DARRAYSHADOW() { return getToken(GLSLParser.SAMPLER1DARRAYSHADOW, 0); }
		public TerminalNode ISAMPLER1D() { return getToken(GLSLParser.ISAMPLER1D, 0); }
		public TerminalNode ISAMPLER1DARRAY() { return getToken(GLSLParser.ISAMPLER1DARRAY, 0); }
		public TerminalNode USAMPLER1D() { return getToken(GLSLParser.USAMPLER1D, 0); }
		public TerminalNode USAMPLER1DARRAY() { return getToken(GLSLParser.USAMPLER1DARRAY, 0); }
		public TerminalNode SAMPLER2DRECT() { return getToken(GLSLParser.SAMPLER2DRECT, 0); }
		public TerminalNode SAMPLER2DRECTSHADOW() { return getToken(GLSLParser.SAMPLER2DRECTSHADOW, 0); }
		public TerminalNode ISAMPLER2DRECT() { return getToken(GLSLParser.ISAMPLER2DRECT, 0); }
		public TerminalNode USAMPLER2DRECT() { return getToken(GLSLParser.USAMPLER2DRECT, 0); }
		public TerminalNode SAMPLERBUFFER() { return getToken(GLSLParser.SAMPLERBUFFER, 0); }
		public TerminalNode ISAMPLERBUFFER() { return getToken(GLSLParser.ISAMPLERBUFFER, 0); }
		public TerminalNode USAMPLERBUFFER() { return getToken(GLSLParser.USAMPLERBUFFER, 0); }
		public TerminalNode SAMPLER2DMS() { return getToken(GLSLParser.SAMPLER2DMS, 0); }
		public TerminalNode ISAMPLER2DMS() { return getToken(GLSLParser.ISAMPLER2DMS, 0); }
		public TerminalNode USAMPLER2DMS() { return getToken(GLSLParser.USAMPLER2DMS, 0); }
		public TerminalNode SAMPLER2DMSARRAY() { return getToken(GLSLParser.SAMPLER2DMSARRAY, 0); }
		public TerminalNode ISAMPLER2DMSARRAY() { return getToken(GLSLParser.ISAMPLER2DMSARRAY, 0); }
		public TerminalNode USAMPLER2DMSARRAY() { return getToken(GLSLParser.USAMPLER2DMSARRAY, 0); }
		public TerminalNode IMAGE2D() { return getToken(GLSLParser.IMAGE2D, 0); }
		public TerminalNode IIMAGE2D() { return getToken(GLSLParser.IIMAGE2D, 0); }
		public TerminalNode UIMAGE2D() { return getToken(GLSLParser.UIMAGE2D, 0); }
		public TerminalNode IMAGE3D() { return getToken(GLSLParser.IMAGE3D, 0); }
		public TerminalNode IIMAGE3D() { return getToken(GLSLParser.IIMAGE3D, 0); }
		public TerminalNode UIMAGE3D() { return getToken(GLSLParser.UIMAGE3D, 0); }
		public TerminalNode IMAGECUBE() { return getToken(GLSLParser.IMAGECUBE, 0); }
		public TerminalNode IIMAGECUBE() { return getToken(GLSLParser.IIMAGECUBE, 0); }
		public TerminalNode UIMAGECUBE() { return getToken(GLSLParser.UIMAGECUBE, 0); }
		public TerminalNode IMAGEBUFFER() { return getToken(GLSLParser.IMAGEBUFFER, 0); }
		public TerminalNode IIMAGEBUFFER() { return getToken(GLSLParser.IIMAGEBUFFER, 0); }
		public TerminalNode UIMAGEBUFFER() { return getToken(GLSLParser.UIMAGEBUFFER, 0); }
		public TerminalNode IMAGE1D() { return getToken(GLSLParser.IMAGE1D, 0); }
		public TerminalNode IIMAGE1D() { return getToken(GLSLParser.IIMAGE1D, 0); }
		public TerminalNode UIMAGE1D() { return getToken(GLSLParser.UIMAGE1D, 0); }
		public TerminalNode IMAGE1DARRAY() { return getToken(GLSLParser.IMAGE1DARRAY, 0); }
		public TerminalNode IIMAGE1DARRAY() { return getToken(GLSLParser.IIMAGE1DARRAY, 0); }
		public TerminalNode UIMAGE1DARRAY() { return getToken(GLSLParser.UIMAGE1DARRAY, 0); }
		public TerminalNode IMAGE2DRECT() { return getToken(GLSLParser.IMAGE2DRECT, 0); }
		public TerminalNode IIMAGE2DRECT() { return getToken(GLSLParser.IIMAGE2DRECT, 0); }
		public TerminalNode UIMAGE2DRECT() { return getToken(GLSLParser.UIMAGE2DRECT, 0); }
		public TerminalNode IMAGE2DARRAY() { return getToken(GLSLParser.IMAGE2DARRAY, 0); }
		public TerminalNode IIMAGE2DARRAY() { return getToken(GLSLParser.IIMAGE2DARRAY, 0); }
		public TerminalNode UIMAGE2DARRAY() { return getToken(GLSLParser.UIMAGE2DARRAY, 0); }
		public TerminalNode IMAGECUBEARRAY() { return getToken(GLSLParser.IMAGECUBEARRAY, 0); }
		public TerminalNode IIMAGECUBEARRAY() { return getToken(GLSLParser.IIMAGECUBEARRAY, 0); }
		public TerminalNode UIMAGECUBEARRAY() { return getToken(GLSLParser.UIMAGECUBEARRAY, 0); }
		public TerminalNode IMAGE2DMS() { return getToken(GLSLParser.IMAGE2DMS, 0); }
		public TerminalNode IIMAGE2DMS() { return getToken(GLSLParser.IIMAGE2DMS, 0); }
		public TerminalNode UIMAGE2DMS() { return getToken(GLSLParser.UIMAGE2DMS, 0); }
		public TerminalNode IMAGE2DMSARRAY() { return getToken(GLSLParser.IMAGE2DMSARRAY, 0); }
		public TerminalNode IIMAGE2DMSARRAY() { return getToken(GLSLParser.IIMAGE2DMSARRAY, 0); }
		public TerminalNode UIMAGE2DMSARRAY() { return getToken(GLSLParser.UIMAGE2DMSARRAY, 0); }
		public StructSpecifierContext structSpecifier() {
			return getRuleContext(StructSpecifierContext.class,0);
		}
		public TerminalNode IDENTIFIER() { return getToken(GLSLParser.IDENTIFIER, 0); }
		public TypeSpecifierNonarrayContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeSpecifierNonarray; }
	}

	public final TypeSpecifierNonarrayContext typeSpecifierNonarray() throws RecognitionException {
		TypeSpecifierNonarrayContext _localctx = new TypeSpecifierNonarrayContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_typeSpecifierNonarray);
		try {
			setState(802);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VOID_:
				enterOuterAlt(_localctx, 1);
				{
				setState(681);
				match(VOID_);
				}
				break;
			case FLOAT:
				enterOuterAlt(_localctx, 2);
				{
				setState(682);
				match(FLOAT);
				}
				break;
			case DOUBLE:
				enterOuterAlt(_localctx, 3);
				{
				setState(683);
				match(DOUBLE);
				}
				break;
			case INT:
				enterOuterAlt(_localctx, 4);
				{
				setState(684);
				match(INT);
				}
				break;
			case UINT:
				enterOuterAlt(_localctx, 5);
				{
				setState(685);
				match(UINT);
				}
				break;
			case BOOL:
				enterOuterAlt(_localctx, 6);
				{
				setState(686);
				match(BOOL);
				}
				break;
			case VEC2:
				enterOuterAlt(_localctx, 7);
				{
				setState(687);
				match(VEC2);
				}
				break;
			case VEC3:
				enterOuterAlt(_localctx, 8);
				{
				setState(688);
				match(VEC3);
				}
				break;
			case VEC4:
				enterOuterAlt(_localctx, 9);
				{
				setState(689);
				match(VEC4);
				}
				break;
			case DVEC2:
				enterOuterAlt(_localctx, 10);
				{
				setState(690);
				match(DVEC2);
				}
				break;
			case DVEC3:
				enterOuterAlt(_localctx, 11);
				{
				setState(691);
				match(DVEC3);
				}
				break;
			case DVEC4:
				enterOuterAlt(_localctx, 12);
				{
				setState(692);
				match(DVEC4);
				}
				break;
			case BVEC2:
				enterOuterAlt(_localctx, 13);
				{
				setState(693);
				match(BVEC2);
				}
				break;
			case BVEC3:
				enterOuterAlt(_localctx, 14);
				{
				setState(694);
				match(BVEC3);
				}
				break;
			case BVEC4:
				enterOuterAlt(_localctx, 15);
				{
				setState(695);
				match(BVEC4);
				}
				break;
			case IVEC2:
				enterOuterAlt(_localctx, 16);
				{
				setState(696);
				match(IVEC2);
				}
				break;
			case IVEC3:
				enterOuterAlt(_localctx, 17);
				{
				setState(697);
				match(IVEC3);
				}
				break;
			case IVEC4:
				enterOuterAlt(_localctx, 18);
				{
				setState(698);
				match(IVEC4);
				}
				break;
			case UVEC2:
				enterOuterAlt(_localctx, 19);
				{
				setState(699);
				match(UVEC2);
				}
				break;
			case UVEC3:
				enterOuterAlt(_localctx, 20);
				{
				setState(700);
				match(UVEC3);
				}
				break;
			case UVEC4:
				enterOuterAlt(_localctx, 21);
				{
				setState(701);
				match(UVEC4);
				}
				break;
			case MAT2:
				enterOuterAlt(_localctx, 22);
				{
				setState(702);
				match(MAT2);
				}
				break;
			case MAT3:
				enterOuterAlt(_localctx, 23);
				{
				setState(703);
				match(MAT3);
				}
				break;
			case MAT4:
				enterOuterAlt(_localctx, 24);
				{
				setState(704);
				match(MAT4);
				}
				break;
			case MAT2X2:
				enterOuterAlt(_localctx, 25);
				{
				setState(705);
				match(MAT2X2);
				}
				break;
			case MAT2X3:
				enterOuterAlt(_localctx, 26);
				{
				setState(706);
				match(MAT2X3);
				}
				break;
			case MAT2X4:
				enterOuterAlt(_localctx, 27);
				{
				setState(707);
				match(MAT2X4);
				}
				break;
			case MAT3X2:
				enterOuterAlt(_localctx, 28);
				{
				setState(708);
				match(MAT3X2);
				}
				break;
			case MAT3X3:
				enterOuterAlt(_localctx, 29);
				{
				setState(709);
				match(MAT3X3);
				}
				break;
			case MAT3X4:
				enterOuterAlt(_localctx, 30);
				{
				setState(710);
				match(MAT3X4);
				}
				break;
			case MAT4X2:
				enterOuterAlt(_localctx, 31);
				{
				setState(711);
				match(MAT4X2);
				}
				break;
			case MAT4X3:
				enterOuterAlt(_localctx, 32);
				{
				setState(712);
				match(MAT4X3);
				}
				break;
			case MAT4X4:
				enterOuterAlt(_localctx, 33);
				{
				setState(713);
				match(MAT4X4);
				}
				break;
			case DMAT2:
				enterOuterAlt(_localctx, 34);
				{
				setState(714);
				match(DMAT2);
				}
				break;
			case DMAT3:
				enterOuterAlt(_localctx, 35);
				{
				setState(715);
				match(DMAT3);
				}
				break;
			case DMAT4:
				enterOuterAlt(_localctx, 36);
				{
				setState(716);
				match(DMAT4);
				}
				break;
			case DMAT2X2:
				enterOuterAlt(_localctx, 37);
				{
				setState(717);
				match(DMAT2X2);
				}
				break;
			case DMAT2X3:
				enterOuterAlt(_localctx, 38);
				{
				setState(718);
				match(DMAT2X3);
				}
				break;
			case DMAT2X4:
				enterOuterAlt(_localctx, 39);
				{
				setState(719);
				match(DMAT2X4);
				}
				break;
			case DMAT3X2:
				enterOuterAlt(_localctx, 40);
				{
				setState(720);
				match(DMAT3X2);
				}
				break;
			case DMAT3X3:
				enterOuterAlt(_localctx, 41);
				{
				setState(721);
				match(DMAT3X3);
				}
				break;
			case DMAT3X4:
				enterOuterAlt(_localctx, 42);
				{
				setState(722);
				match(DMAT3X4);
				}
				break;
			case DMAT4X2:
				enterOuterAlt(_localctx, 43);
				{
				setState(723);
				match(DMAT4X2);
				}
				break;
			case DMAT4X3:
				enterOuterAlt(_localctx, 44);
				{
				setState(724);
				match(DMAT4X3);
				}
				break;
			case DMAT4X4:
				enterOuterAlt(_localctx, 45);
				{
				setState(725);
				match(DMAT4X4);
				}
				break;
			case ATOMIC_UINT:
				enterOuterAlt(_localctx, 46);
				{
				setState(726);
				match(ATOMIC_UINT);
				}
				break;
			case SAMPLER2D:
				enterOuterAlt(_localctx, 47);
				{
				setState(727);
				match(SAMPLER2D);
				}
				break;
			case SAMPLER3D:
				enterOuterAlt(_localctx, 48);
				{
				setState(728);
				match(SAMPLER3D);
				}
				break;
			case SAMPLERCUBE:
				enterOuterAlt(_localctx, 49);
				{
				setState(729);
				match(SAMPLERCUBE);
				}
				break;
			case SAMPLER2DSHADOW:
				enterOuterAlt(_localctx, 50);
				{
				setState(730);
				match(SAMPLER2DSHADOW);
				}
				break;
			case SAMPLERCUBESHADOW:
				enterOuterAlt(_localctx, 51);
				{
				setState(731);
				match(SAMPLERCUBESHADOW);
				}
				break;
			case SAMPLER2DARRAY:
				enterOuterAlt(_localctx, 52);
				{
				setState(732);
				match(SAMPLER2DARRAY);
				}
				break;
			case SAMPLER2DARRAYSHADOW:
				enterOuterAlt(_localctx, 53);
				{
				setState(733);
				match(SAMPLER2DARRAYSHADOW);
				}
				break;
			case SAMPLERCUBEARRAY:
				enterOuterAlt(_localctx, 54);
				{
				setState(734);
				match(SAMPLERCUBEARRAY);
				}
				break;
			case SAMPLERCUBEARRAYSHADOW:
				enterOuterAlt(_localctx, 55);
				{
				setState(735);
				match(SAMPLERCUBEARRAYSHADOW);
				}
				break;
			case ISAMPLER2D:
				enterOuterAlt(_localctx, 56);
				{
				setState(736);
				match(ISAMPLER2D);
				}
				break;
			case ISAMPLER3D:
				enterOuterAlt(_localctx, 57);
				{
				setState(737);
				match(ISAMPLER3D);
				}
				break;
			case ISAMPLERCUBE:
				enterOuterAlt(_localctx, 58);
				{
				setState(738);
				match(ISAMPLERCUBE);
				}
				break;
			case ISAMPLER2DARRAY:
				enterOuterAlt(_localctx, 59);
				{
				setState(739);
				match(ISAMPLER2DARRAY);
				}
				break;
			case ISAMPLERCUBEARRAY:
				enterOuterAlt(_localctx, 60);
				{
				setState(740);
				match(ISAMPLERCUBEARRAY);
				}
				break;
			case USAMPLER2D:
				enterOuterAlt(_localctx, 61);
				{
				setState(741);
				match(USAMPLER2D);
				}
				break;
			case USAMPLER3D:
				enterOuterAlt(_localctx, 62);
				{
				setState(742);
				match(USAMPLER3D);
				}
				break;
			case USAMPLERCUBE:
				enterOuterAlt(_localctx, 63);
				{
				setState(743);
				match(USAMPLERCUBE);
				}
				break;
			case USAMPLER2DARRAY:
				enterOuterAlt(_localctx, 64);
				{
				setState(744);
				match(USAMPLER2DARRAY);
				}
				break;
			case USAMPLERCUBEARRAY:
				enterOuterAlt(_localctx, 65);
				{
				setState(745);
				match(USAMPLERCUBEARRAY);
				}
				break;
			case SAMPLER1D:
				enterOuterAlt(_localctx, 66);
				{
				setState(746);
				match(SAMPLER1D);
				}
				break;
			case SAMPLER1DSHADOW:
				enterOuterAlt(_localctx, 67);
				{
				setState(747);
				match(SAMPLER1DSHADOW);
				}
				break;
			case SAMPLER1DARRAY:
				enterOuterAlt(_localctx, 68);
				{
				setState(748);
				match(SAMPLER1DARRAY);
				}
				break;
			case SAMPLER1DARRAYSHADOW:
				enterOuterAlt(_localctx, 69);
				{
				setState(749);
				match(SAMPLER1DARRAYSHADOW);
				}
				break;
			case ISAMPLER1D:
				enterOuterAlt(_localctx, 70);
				{
				setState(750);
				match(ISAMPLER1D);
				}
				break;
			case ISAMPLER1DARRAY:
				enterOuterAlt(_localctx, 71);
				{
				setState(751);
				match(ISAMPLER1DARRAY);
				}
				break;
			case USAMPLER1D:
				enterOuterAlt(_localctx, 72);
				{
				setState(752);
				match(USAMPLER1D);
				}
				break;
			case USAMPLER1DARRAY:
				enterOuterAlt(_localctx, 73);
				{
				setState(753);
				match(USAMPLER1DARRAY);
				}
				break;
			case SAMPLER2DRECT:
				enterOuterAlt(_localctx, 74);
				{
				setState(754);
				match(SAMPLER2DRECT);
				}
				break;
			case SAMPLER2DRECTSHADOW:
				enterOuterAlt(_localctx, 75);
				{
				setState(755);
				match(SAMPLER2DRECTSHADOW);
				}
				break;
			case ISAMPLER2DRECT:
				enterOuterAlt(_localctx, 76);
				{
				setState(756);
				match(ISAMPLER2DRECT);
				}
				break;
			case USAMPLER2DRECT:
				enterOuterAlt(_localctx, 77);
				{
				setState(757);
				match(USAMPLER2DRECT);
				}
				break;
			case SAMPLERBUFFER:
				enterOuterAlt(_localctx, 78);
				{
				setState(758);
				match(SAMPLERBUFFER);
				}
				break;
			case ISAMPLERBUFFER:
				enterOuterAlt(_localctx, 79);
				{
				setState(759);
				match(ISAMPLERBUFFER);
				}
				break;
			case USAMPLERBUFFER:
				enterOuterAlt(_localctx, 80);
				{
				setState(760);
				match(USAMPLERBUFFER);
				}
				break;
			case SAMPLER2DMS:
				enterOuterAlt(_localctx, 81);
				{
				setState(761);
				match(SAMPLER2DMS);
				}
				break;
			case ISAMPLER2DMS:
				enterOuterAlt(_localctx, 82);
				{
				setState(762);
				match(ISAMPLER2DMS);
				}
				break;
			case USAMPLER2DMS:
				enterOuterAlt(_localctx, 83);
				{
				setState(763);
				match(USAMPLER2DMS);
				}
				break;
			case SAMPLER2DMSARRAY:
				enterOuterAlt(_localctx, 84);
				{
				setState(764);
				match(SAMPLER2DMSARRAY);
				}
				break;
			case ISAMPLER2DMSARRAY:
				enterOuterAlt(_localctx, 85);
				{
				setState(765);
				match(ISAMPLER2DMSARRAY);
				}
				break;
			case USAMPLER2DMSARRAY:
				enterOuterAlt(_localctx, 86);
				{
				setState(766);
				match(USAMPLER2DMSARRAY);
				}
				break;
			case IMAGE2D:
				enterOuterAlt(_localctx, 87);
				{
				setState(767);
				match(IMAGE2D);
				}
				break;
			case IIMAGE2D:
				enterOuterAlt(_localctx, 88);
				{
				setState(768);
				match(IIMAGE2D);
				}
				break;
			case UIMAGE2D:
				enterOuterAlt(_localctx, 89);
				{
				setState(769);
				match(UIMAGE2D);
				}
				break;
			case IMAGE3D:
				enterOuterAlt(_localctx, 90);
				{
				setState(770);
				match(IMAGE3D);
				}
				break;
			case IIMAGE3D:
				enterOuterAlt(_localctx, 91);
				{
				setState(771);
				match(IIMAGE3D);
				}
				break;
			case UIMAGE3D:
				enterOuterAlt(_localctx, 92);
				{
				setState(772);
				match(UIMAGE3D);
				}
				break;
			case IMAGECUBE:
				enterOuterAlt(_localctx, 93);
				{
				setState(773);
				match(IMAGECUBE);
				}
				break;
			case IIMAGECUBE:
				enterOuterAlt(_localctx, 94);
				{
				setState(774);
				match(IIMAGECUBE);
				}
				break;
			case UIMAGECUBE:
				enterOuterAlt(_localctx, 95);
				{
				setState(775);
				match(UIMAGECUBE);
				}
				break;
			case IMAGEBUFFER:
				enterOuterAlt(_localctx, 96);
				{
				setState(776);
				match(IMAGEBUFFER);
				}
				break;
			case IIMAGEBUFFER:
				enterOuterAlt(_localctx, 97);
				{
				setState(777);
				match(IIMAGEBUFFER);
				}
				break;
			case UIMAGEBUFFER:
				enterOuterAlt(_localctx, 98);
				{
				setState(778);
				match(UIMAGEBUFFER);
				}
				break;
			case IMAGE1D:
				enterOuterAlt(_localctx, 99);
				{
				setState(779);
				match(IMAGE1D);
				}
				break;
			case IIMAGE1D:
				enterOuterAlt(_localctx, 100);
				{
				setState(780);
				match(IIMAGE1D);
				}
				break;
			case UIMAGE1D:
				enterOuterAlt(_localctx, 101);
				{
				setState(781);
				match(UIMAGE1D);
				}
				break;
			case IMAGE1DARRAY:
				enterOuterAlt(_localctx, 102);
				{
				setState(782);
				match(IMAGE1DARRAY);
				}
				break;
			case IIMAGE1DARRAY:
				enterOuterAlt(_localctx, 103);
				{
				setState(783);
				match(IIMAGE1DARRAY);
				}
				break;
			case UIMAGE1DARRAY:
				enterOuterAlt(_localctx, 104);
				{
				setState(784);
				match(UIMAGE1DARRAY);
				}
				break;
			case IMAGE2DRECT:
				enterOuterAlt(_localctx, 105);
				{
				setState(785);
				match(IMAGE2DRECT);
				}
				break;
			case IIMAGE2DRECT:
				enterOuterAlt(_localctx, 106);
				{
				setState(786);
				match(IIMAGE2DRECT);
				}
				break;
			case UIMAGE2DRECT:
				enterOuterAlt(_localctx, 107);
				{
				setState(787);
				match(UIMAGE2DRECT);
				}
				break;
			case IMAGE2DARRAY:
				enterOuterAlt(_localctx, 108);
				{
				setState(788);
				match(IMAGE2DARRAY);
				}
				break;
			case IIMAGE2DARRAY:
				enterOuterAlt(_localctx, 109);
				{
				setState(789);
				match(IIMAGE2DARRAY);
				}
				break;
			case UIMAGE2DARRAY:
				enterOuterAlt(_localctx, 110);
				{
				setState(790);
				match(UIMAGE2DARRAY);
				}
				break;
			case IMAGECUBEARRAY:
				enterOuterAlt(_localctx, 111);
				{
				setState(791);
				match(IMAGECUBEARRAY);
				}
				break;
			case IIMAGECUBEARRAY:
				enterOuterAlt(_localctx, 112);
				{
				setState(792);
				match(IIMAGECUBEARRAY);
				}
				break;
			case UIMAGECUBEARRAY:
				enterOuterAlt(_localctx, 113);
				{
				setState(793);
				match(UIMAGECUBEARRAY);
				}
				break;
			case IMAGE2DMS:
				enterOuterAlt(_localctx, 114);
				{
				setState(794);
				match(IMAGE2DMS);
				}
				break;
			case IIMAGE2DMS:
				enterOuterAlt(_localctx, 115);
				{
				setState(795);
				match(IIMAGE2DMS);
				}
				break;
			case UIMAGE2DMS:
				enterOuterAlt(_localctx, 116);
				{
				setState(796);
				match(UIMAGE2DMS);
				}
				break;
			case IMAGE2DMSARRAY:
				enterOuterAlt(_localctx, 117);
				{
				setState(797);
				match(IMAGE2DMSARRAY);
				}
				break;
			case IIMAGE2DMSARRAY:
				enterOuterAlt(_localctx, 118);
				{
				setState(798);
				match(IIMAGE2DMSARRAY);
				}
				break;
			case UIMAGE2DMSARRAY:
				enterOuterAlt(_localctx, 119);
				{
				setState(799);
				match(UIMAGE2DMSARRAY);
				}
				break;
			case STRUCT:
				enterOuterAlt(_localctx, 120);
				{
				setState(800);
				structSpecifier();
				}
				break;
			case IDENTIFIER:
				enterOuterAlt(_localctx, 121);
				{
				setState(801);
				match(IDENTIFIER);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrecisionQualifierContext extends ParserRuleContext {
		public TerminalNode HIGH_PRECISION() { return getToken(GLSLParser.HIGH_PRECISION, 0); }
		public TerminalNode MEDIUM_PRECISION() { return getToken(GLSLParser.MEDIUM_PRECISION, 0); }
		public TerminalNode LOW_PRECISION() { return getToken(GLSLParser.LOW_PRECISION, 0); }
		public PrecisionQualifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_precisionQualifier; }
	}

	public final PrecisionQualifierContext precisionQualifier() throws RecognitionException {
		PrecisionQualifierContext _localctx = new PrecisionQualifierContext(_ctx, getState());
		enterRule(_localctx, 96, RULE_precisionQualifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(804);
			_la = _input.LA(1);
			if ( !(((((_la - 208)) & ~0x3f) == 0 && ((1L << (_la - 208)) & ((1L << (HIGH_PRECISION - 208)) | (1L << (MEDIUM_PRECISION - 208)) | (1L << (LOW_PRECISION - 208)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StructSpecifierContext extends ParserRuleContext {
		public TerminalNode STRUCT() { return getToken(GLSLParser.STRUCT, 0); }
		public TerminalNode IDENTIFIER() { return getToken(GLSLParser.IDENTIFIER, 0); }
		public TerminalNode LEFT_BRACE() { return getToken(GLSLParser.LEFT_BRACE, 0); }
		public StructDeclarationListContext structDeclarationList() {
			return getRuleContext(StructDeclarationListContext.class,0);
		}
		public TerminalNode RIGHT_BRACE() { return getToken(GLSLParser.RIGHT_BRACE, 0); }
		public StructSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structSpecifier; }
	}

	public final StructSpecifierContext structSpecifier() throws RecognitionException {
		StructSpecifierContext _localctx = new StructSpecifierContext(_ctx, getState());
		enterRule(_localctx, 98, RULE_structSpecifier);
		try {
			setState(817);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,48,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(806);
				match(STRUCT);
				setState(807);
				match(IDENTIFIER);
				setState(808);
				match(LEFT_BRACE);
				setState(809);
				structDeclarationList(0);
				setState(810);
				match(RIGHT_BRACE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(812);
				match(STRUCT);
				setState(813);
				match(LEFT_BRACE);
				setState(814);
				structDeclarationList(0);
				setState(815);
				match(RIGHT_BRACE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StructDeclarationListContext extends ParserRuleContext {
		public StructDeclarationContext structDeclaration() {
			return getRuleContext(StructDeclarationContext.class,0);
		}
		public StructDeclarationListContext structDeclarationList() {
			return getRuleContext(StructDeclarationListContext.class,0);
		}
		public StructDeclarationListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structDeclarationList; }
	}

	public final StructDeclarationListContext structDeclarationList() throws RecognitionException {
		return structDeclarationList(0);
	}

	private StructDeclarationListContext structDeclarationList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		StructDeclarationListContext _localctx = new StructDeclarationListContext(_ctx, _parentState);
		StructDeclarationListContext _prevctx = _localctx;
		int _startState = 100;
		enterRecursionRule(_localctx, 100, RULE_structDeclarationList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(820);
			structDeclaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(826);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,49,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StructDeclarationListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_structDeclarationList);
					setState(822);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(823);
					structDeclaration();
					}
					} 
				}
				setState(828);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,49,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class StructDeclarationContext extends ParserRuleContext {
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public StructDeclaratorListContext structDeclaratorList() {
			return getRuleContext(StructDeclaratorListContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(GLSLParser.SEMICOLON, 0); }
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public StructDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structDeclaration; }
	}

	public final StructDeclarationContext structDeclaration() throws RecognitionException {
		StructDeclarationContext _localctx = new StructDeclarationContext(_ctx, getState());
		enterRule(_localctx, 102, RULE_structDeclaration);
		try {
			setState(838);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BOOL:
			case FLOAT:
			case INT:
			case UINT:
			case DOUBLE:
			case BVEC2:
			case BVEC3:
			case BVEC4:
			case IVEC2:
			case IVEC3:
			case IVEC4:
			case UVEC2:
			case UVEC3:
			case UVEC4:
			case VEC2:
			case VEC3:
			case VEC4:
			case MAT2:
			case MAT3:
			case MAT4:
			case MAT2X2:
			case MAT2X3:
			case MAT2X4:
			case MAT3X2:
			case MAT3X3:
			case MAT3X4:
			case MAT4X2:
			case MAT4X3:
			case MAT4X4:
			case DVEC2:
			case DVEC3:
			case DVEC4:
			case DMAT2:
			case DMAT3:
			case DMAT4:
			case DMAT2X2:
			case DMAT2X3:
			case DMAT2X4:
			case DMAT3X2:
			case DMAT3X3:
			case DMAT3X4:
			case DMAT4X2:
			case DMAT4X3:
			case DMAT4X4:
			case ATOMIC_UINT:
			case SAMPLER2D:
			case SAMPLER3D:
			case SAMPLERCUBE:
			case SAMPLER2DSHADOW:
			case SAMPLERCUBESHADOW:
			case SAMPLER2DARRAY:
			case SAMPLER2DARRAYSHADOW:
			case ISAMPLER2D:
			case ISAMPLER3D:
			case ISAMPLERCUBE:
			case ISAMPLER2DARRAY:
			case USAMPLER2D:
			case USAMPLER3D:
			case USAMPLERCUBE:
			case USAMPLER2DARRAY:
			case SAMPLER1D:
			case SAMPLER1DSHADOW:
			case SAMPLER1DARRAY:
			case SAMPLER1DARRAYSHADOW:
			case ISAMPLER1D:
			case ISAMPLER1DARRAY:
			case USAMPLER1D:
			case USAMPLER1DARRAY:
			case SAMPLER2DRECT:
			case SAMPLER2DRECTSHADOW:
			case ISAMPLER2DRECT:
			case USAMPLER2DRECT:
			case SAMPLERBUFFER:
			case ISAMPLERBUFFER:
			case USAMPLERBUFFER:
			case SAMPLERCUBEARRAY:
			case SAMPLERCUBEARRAYSHADOW:
			case ISAMPLERCUBEARRAY:
			case USAMPLERCUBEARRAY:
			case SAMPLER2DMS:
			case ISAMPLER2DMS:
			case USAMPLER2DMS:
			case SAMPLER2DMSARRAY:
			case ISAMPLER2DMSARRAY:
			case USAMPLER2DMSARRAY:
			case IMAGE2D:
			case IIMAGE2D:
			case UIMAGE2D:
			case IMAGE3D:
			case IIMAGE3D:
			case UIMAGE3D:
			case IMAGECUBE:
			case IIMAGECUBE:
			case UIMAGECUBE:
			case IMAGEBUFFER:
			case IIMAGEBUFFER:
			case UIMAGEBUFFER:
			case IMAGE2DARRAY:
			case IIMAGE2DARRAY:
			case UIMAGE2DARRAY:
			case IMAGECUBEARRAY:
			case IIMAGECUBEARRAY:
			case UIMAGECUBEARRAY:
			case IMAGE1D:
			case IIMAGE1D:
			case UIMAGE1D:
			case IMAGE1DARRAY:
			case IIMAGE1DARRAY:
			case UIMAGE1DARRAY:
			case IMAGE2DRECT:
			case IIMAGE2DRECT:
			case UIMAGE2DRECT:
			case IMAGE2DMS:
			case IIMAGE2DMS:
			case UIMAGE2DMS:
			case IMAGE2DMSARRAY:
			case IIMAGE2DMSARRAY:
			case UIMAGE2DMSARRAY:
			case STRUCT:
			case VOID_:
			case IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(829);
				typeSpecifier();
				setState(830);
				structDeclaratorList(0);
				setState(831);
				match(SEMICOLON);
				}
				break;
			case CONST_:
			case CENTROID:
			case IN_:
			case OUT_:
			case INOUT:
			case UNIFORM:
			case PATCH:
			case SAMPLE:
			case BUFFER:
			case SHARED:
			case COHERENT:
			case VOLATILE:
			case RESTRICT:
			case READONLY:
			case WRITEONLY:
			case NOPERSPECTIVE:
			case FLAT:
			case SMOOTH:
			case LAYOUT:
			case SUBROUTINE:
			case INVARIANT:
			case PRECISE:
			case HIGH_PRECISION:
			case MEDIUM_PRECISION:
			case LOW_PRECISION:
				enterOuterAlt(_localctx, 2);
				{
				setState(833);
				typeQualifier(0);
				setState(834);
				typeSpecifier();
				setState(835);
				structDeclaratorList(0);
				setState(836);
				match(SEMICOLON);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StructDeclaratorListContext extends ParserRuleContext {
		public StructDeclaratorContext structDeclarator() {
			return getRuleContext(StructDeclaratorContext.class,0);
		}
		public StructDeclaratorListContext structDeclaratorList() {
			return getRuleContext(StructDeclaratorListContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(GLSLParser.COMMA, 0); }
		public StructDeclaratorListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structDeclaratorList; }
	}

	public final StructDeclaratorListContext structDeclaratorList() throws RecognitionException {
		return structDeclaratorList(0);
	}

	private StructDeclaratorListContext structDeclaratorList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		StructDeclaratorListContext _localctx = new StructDeclaratorListContext(_ctx, _parentState);
		StructDeclaratorListContext _prevctx = _localctx;
		int _startState = 104;
		enterRecursionRule(_localctx, 104, RULE_structDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(841);
			structDeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(848);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StructDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_structDeclaratorList);
					setState(843);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(844);
					match(COMMA);
					setState(845);
					structDeclarator();
					}
					} 
				}
				setState(850);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class StructDeclaratorContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(GLSLParser.IDENTIFIER, 0); }
		public ArraySpecifierContext arraySpecifier() {
			return getRuleContext(ArraySpecifierContext.class,0);
		}
		public StructDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structDeclarator; }
	}

	public final StructDeclaratorContext structDeclarator() throws RecognitionException {
		StructDeclaratorContext _localctx = new StructDeclaratorContext(_ctx, getState());
		enterRule(_localctx, 106, RULE_structDeclarator);
		try {
			setState(854);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,52,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(851);
				match(IDENTIFIER);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(852);
				match(IDENTIFIER);
				setState(853);
				arraySpecifier(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitializerContext extends ParserRuleContext {
		public AssignmentExpressionContext assignmentExpression() {
			return getRuleContext(AssignmentExpressionContext.class,0);
		}
		public TerminalNode LEFT_BRACE() { return getToken(GLSLParser.LEFT_BRACE, 0); }
		public InitializerListContext initializerList() {
			return getRuleContext(InitializerListContext.class,0);
		}
		public TerminalNode RIGHT_BRACE() { return getToken(GLSLParser.RIGHT_BRACE, 0); }
		public TerminalNode COMMA() { return getToken(GLSLParser.COMMA, 0); }
		public InitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializer; }
	}

	public final InitializerContext initializer() throws RecognitionException {
		InitializerContext _localctx = new InitializerContext(_ctx, getState());
		enterRule(_localctx, 108, RULE_initializer);
		try {
			setState(866);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,53,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(856);
				assignmentExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(857);
				match(LEFT_BRACE);
				setState(858);
				initializerList(0);
				setState(859);
				match(RIGHT_BRACE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(861);
				match(LEFT_BRACE);
				setState(862);
				initializerList(0);
				setState(863);
				match(COMMA);
				setState(864);
				match(RIGHT_BRACE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitializerListContext extends ParserRuleContext {
		public InitializerContext initializer() {
			return getRuleContext(InitializerContext.class,0);
		}
		public InitializerListContext initializerList() {
			return getRuleContext(InitializerListContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(GLSLParser.COMMA, 0); }
		public InitializerListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializerList; }
	}

	public final InitializerListContext initializerList() throws RecognitionException {
		return initializerList(0);
	}

	private InitializerListContext initializerList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		InitializerListContext _localctx = new InitializerListContext(_ctx, _parentState);
		InitializerListContext _prevctx = _localctx;
		int _startState = 110;
		enterRecursionRule(_localctx, 110, RULE_initializerList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(869);
			initializer();
			}
			_ctx.stop = _input.LT(-1);
			setState(876);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitializerListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initializerList);
					setState(871);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(872);
					match(COMMA);
					setState(873);
					initializer();
					}
					} 
				}
				setState(878);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class DeclarationStatementContext extends ParserRuleContext {
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public DeclarationStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationStatement; }
	}

	public final DeclarationStatementContext declarationStatement() throws RecognitionException {
		DeclarationStatementContext _localctx = new DeclarationStatementContext(_ctx, getState());
		enterRule(_localctx, 112, RULE_declarationStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(879);
			declaration();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public CompundStatementContext compundStatement() {
			return getRuleContext(CompundStatementContext.class,0);
		}
		public SimpleStatementContext simpleStatement() {
			return getRuleContext(SimpleStatementContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 114, RULE_statement);
		try {
			setState(883);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LEFT_BRACE:
				enterOuterAlt(_localctx, 1);
				{
				setState(881);
				compundStatement();
				}
				break;
			case CONST_:
			case BOOL:
			case FLOAT:
			case INT:
			case UINT:
			case DOUBLE:
			case BVEC2:
			case BVEC3:
			case BVEC4:
			case IVEC2:
			case IVEC3:
			case IVEC4:
			case UVEC2:
			case UVEC3:
			case UVEC4:
			case VEC2:
			case VEC3:
			case VEC4:
			case MAT2:
			case MAT3:
			case MAT4:
			case MAT2X2:
			case MAT2X3:
			case MAT2X4:
			case MAT3X2:
			case MAT3X3:
			case MAT3X4:
			case MAT4X2:
			case MAT4X3:
			case MAT4X4:
			case DVEC2:
			case DVEC3:
			case DVEC4:
			case DMAT2:
			case DMAT3:
			case DMAT4:
			case DMAT2X2:
			case DMAT2X3:
			case DMAT2X4:
			case DMAT3X2:
			case DMAT3X3:
			case DMAT3X4:
			case DMAT4X2:
			case DMAT4X3:
			case DMAT4X4:
			case CENTROID:
			case IN_:
			case OUT_:
			case INOUT:
			case UNIFORM:
			case PATCH:
			case SAMPLE:
			case BUFFER:
			case SHARED:
			case COHERENT:
			case VOLATILE:
			case RESTRICT:
			case READONLY:
			case WRITEONLY:
			case NOPERSPECTIVE:
			case FLAT:
			case SMOOTH:
			case LAYOUT:
			case ATOMIC_UINT:
			case SAMPLER2D:
			case SAMPLER3D:
			case SAMPLERCUBE:
			case SAMPLER2DSHADOW:
			case SAMPLERCUBESHADOW:
			case SAMPLER2DARRAY:
			case SAMPLER2DARRAYSHADOW:
			case ISAMPLER2D:
			case ISAMPLER3D:
			case ISAMPLERCUBE:
			case ISAMPLER2DARRAY:
			case USAMPLER2D:
			case USAMPLER3D:
			case USAMPLERCUBE:
			case USAMPLER2DARRAY:
			case SAMPLER1D:
			case SAMPLER1DSHADOW:
			case SAMPLER1DARRAY:
			case SAMPLER1DARRAYSHADOW:
			case ISAMPLER1D:
			case ISAMPLER1DARRAY:
			case USAMPLER1D:
			case USAMPLER1DARRAY:
			case SAMPLER2DRECT:
			case SAMPLER2DRECTSHADOW:
			case ISAMPLER2DRECT:
			case USAMPLER2DRECT:
			case SAMPLERBUFFER:
			case ISAMPLERBUFFER:
			case USAMPLERBUFFER:
			case SAMPLERCUBEARRAY:
			case SAMPLERCUBEARRAYSHADOW:
			case ISAMPLERCUBEARRAY:
			case USAMPLERCUBEARRAY:
			case SAMPLER2DMS:
			case ISAMPLER2DMS:
			case USAMPLER2DMS:
			case SAMPLER2DMSARRAY:
			case ISAMPLER2DMSARRAY:
			case USAMPLER2DMSARRAY:
			case IMAGE2D:
			case IIMAGE2D:
			case UIMAGE2D:
			case IMAGE3D:
			case IIMAGE3D:
			case UIMAGE3D:
			case IMAGECUBE:
			case IIMAGECUBE:
			case UIMAGECUBE:
			case IMAGEBUFFER:
			case IIMAGEBUFFER:
			case UIMAGEBUFFER:
			case IMAGE2DARRAY:
			case IIMAGE2DARRAY:
			case UIMAGE2DARRAY:
			case IMAGECUBEARRAY:
			case IIMAGECUBEARRAY:
			case UIMAGECUBEARRAY:
			case IMAGE1D:
			case IIMAGE1D:
			case UIMAGE1D:
			case IMAGE1DARRAY:
			case IIMAGE1DARRAY:
			case UIMAGE1DARRAY:
			case IMAGE2DRECT:
			case IIMAGE2DRECT:
			case UIMAGE2DRECT:
			case IMAGE2DMS:
			case IIMAGE2DMS:
			case UIMAGE2DMS:
			case IMAGE2DMSARRAY:
			case IIMAGE2DMSARRAY:
			case UIMAGE2DMSARRAY:
			case STRUCT:
			case VOID_:
			case WHILE:
			case BREAK:
			case CONTINUE:
			case DO:
			case FOR:
			case IF:
			case DISCARD:
			case RETURN:
			case SWITCH:
			case CASE:
			case DEFAULT:
			case SUBROUTINE:
			case IDENTIFIER:
			case FLOATCONSTANT:
			case INTCONSTANT:
			case UINTCONSTANT:
			case BOOLCONSTANT:
			case DOUBLECONSTANT:
			case INC_OP:
			case DEC_OP:
			case LEFT_PAREN:
			case SEMICOLON:
			case BANG:
			case DASH:
			case TILDE:
			case PLUS:
			case INVARIANT:
			case PRECISE:
			case HIGH_PRECISION:
			case MEDIUM_PRECISION:
			case LOW_PRECISION:
			case PRECISION:
				enterOuterAlt(_localctx, 2);
				{
				setState(882);
				simpleStatement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimpleStatementContext extends ParserRuleContext {
		public DeclarationStatementContext declarationStatement() {
			return getRuleContext(DeclarationStatementContext.class,0);
		}
		public ExpressionStatementContext expressionStatement() {
			return getRuleContext(ExpressionStatementContext.class,0);
		}
		public SelectionStatementContext selectionStatement() {
			return getRuleContext(SelectionStatementContext.class,0);
		}
		public SwitchStatementContext switchStatement() {
			return getRuleContext(SwitchStatementContext.class,0);
		}
		public CaseLabelContext caseLabel() {
			return getRuleContext(CaseLabelContext.class,0);
		}
		public IterationStatementContext iterationStatement() {
			return getRuleContext(IterationStatementContext.class,0);
		}
		public JumpStatementContext jumpStatement() {
			return getRuleContext(JumpStatementContext.class,0);
		}
		public SimpleStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleStatement; }
	}

	public final SimpleStatementContext simpleStatement() throws RecognitionException {
		SimpleStatementContext _localctx = new SimpleStatementContext(_ctx, getState());
		enterRule(_localctx, 116, RULE_simpleStatement);
		try {
			setState(892);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(885);
				declarationStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(886);
				expressionStatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(887);
				selectionStatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(888);
				switchStatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(889);
				caseLabel();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(890);
				iterationStatement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(891);
				jumpStatement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CompundStatementContext extends ParserRuleContext {
		public TerminalNode LEFT_BRACE() { return getToken(GLSLParser.LEFT_BRACE, 0); }
		public TerminalNode RIGHT_BRACE() { return getToken(GLSLParser.RIGHT_BRACE, 0); }
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public CompundStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compundStatement; }
	}

	public final CompundStatementContext compundStatement() throws RecognitionException {
		CompundStatementContext _localctx = new CompundStatementContext(_ctx, getState());
		enterRule(_localctx, 118, RULE_compundStatement);
		try {
			setState(900);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,57,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(894);
				match(LEFT_BRACE);
				setState(895);
				match(RIGHT_BRACE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(896);
				match(LEFT_BRACE);
				setState(897);
				statementList(0);
				setState(898);
				match(RIGHT_BRACE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementNoNewScopeContext extends ParserRuleContext {
		public CompoundStatementNoNewScopeContext compoundStatementNoNewScope() {
			return getRuleContext(CompoundStatementNoNewScopeContext.class,0);
		}
		public SimpleStatementContext simpleStatement() {
			return getRuleContext(SimpleStatementContext.class,0);
		}
		public StatementNoNewScopeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statementNoNewScope; }
	}

	public final StatementNoNewScopeContext statementNoNewScope() throws RecognitionException {
		StatementNoNewScopeContext _localctx = new StatementNoNewScopeContext(_ctx, getState());
		enterRule(_localctx, 120, RULE_statementNoNewScope);
		try {
			setState(904);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LEFT_BRACE:
				enterOuterAlt(_localctx, 1);
				{
				setState(902);
				compoundStatementNoNewScope();
				}
				break;
			case CONST_:
			case BOOL:
			case FLOAT:
			case INT:
			case UINT:
			case DOUBLE:
			case BVEC2:
			case BVEC3:
			case BVEC4:
			case IVEC2:
			case IVEC3:
			case IVEC4:
			case UVEC2:
			case UVEC3:
			case UVEC4:
			case VEC2:
			case VEC3:
			case VEC4:
			case MAT2:
			case MAT3:
			case MAT4:
			case MAT2X2:
			case MAT2X3:
			case MAT2X4:
			case MAT3X2:
			case MAT3X3:
			case MAT3X4:
			case MAT4X2:
			case MAT4X3:
			case MAT4X4:
			case DVEC2:
			case DVEC3:
			case DVEC4:
			case DMAT2:
			case DMAT3:
			case DMAT4:
			case DMAT2X2:
			case DMAT2X3:
			case DMAT2X4:
			case DMAT3X2:
			case DMAT3X3:
			case DMAT3X4:
			case DMAT4X2:
			case DMAT4X3:
			case DMAT4X4:
			case CENTROID:
			case IN_:
			case OUT_:
			case INOUT:
			case UNIFORM:
			case PATCH:
			case SAMPLE:
			case BUFFER:
			case SHARED:
			case COHERENT:
			case VOLATILE:
			case RESTRICT:
			case READONLY:
			case WRITEONLY:
			case NOPERSPECTIVE:
			case FLAT:
			case SMOOTH:
			case LAYOUT:
			case ATOMIC_UINT:
			case SAMPLER2D:
			case SAMPLER3D:
			case SAMPLERCUBE:
			case SAMPLER2DSHADOW:
			case SAMPLERCUBESHADOW:
			case SAMPLER2DARRAY:
			case SAMPLER2DARRAYSHADOW:
			case ISAMPLER2D:
			case ISAMPLER3D:
			case ISAMPLERCUBE:
			case ISAMPLER2DARRAY:
			case USAMPLER2D:
			case USAMPLER3D:
			case USAMPLERCUBE:
			case USAMPLER2DARRAY:
			case SAMPLER1D:
			case SAMPLER1DSHADOW:
			case SAMPLER1DARRAY:
			case SAMPLER1DARRAYSHADOW:
			case ISAMPLER1D:
			case ISAMPLER1DARRAY:
			case USAMPLER1D:
			case USAMPLER1DARRAY:
			case SAMPLER2DRECT:
			case SAMPLER2DRECTSHADOW:
			case ISAMPLER2DRECT:
			case USAMPLER2DRECT:
			case SAMPLERBUFFER:
			case ISAMPLERBUFFER:
			case USAMPLERBUFFER:
			case SAMPLERCUBEARRAY:
			case SAMPLERCUBEARRAYSHADOW:
			case ISAMPLERCUBEARRAY:
			case USAMPLERCUBEARRAY:
			case SAMPLER2DMS:
			case ISAMPLER2DMS:
			case USAMPLER2DMS:
			case SAMPLER2DMSARRAY:
			case ISAMPLER2DMSARRAY:
			case USAMPLER2DMSARRAY:
			case IMAGE2D:
			case IIMAGE2D:
			case UIMAGE2D:
			case IMAGE3D:
			case IIMAGE3D:
			case UIMAGE3D:
			case IMAGECUBE:
			case IIMAGECUBE:
			case UIMAGECUBE:
			case IMAGEBUFFER:
			case IIMAGEBUFFER:
			case UIMAGEBUFFER:
			case IMAGE2DARRAY:
			case IIMAGE2DARRAY:
			case UIMAGE2DARRAY:
			case IMAGECUBEARRAY:
			case IIMAGECUBEARRAY:
			case UIMAGECUBEARRAY:
			case IMAGE1D:
			case IIMAGE1D:
			case UIMAGE1D:
			case IMAGE1DARRAY:
			case IIMAGE1DARRAY:
			case UIMAGE1DARRAY:
			case IMAGE2DRECT:
			case IIMAGE2DRECT:
			case UIMAGE2DRECT:
			case IMAGE2DMS:
			case IIMAGE2DMS:
			case UIMAGE2DMS:
			case IMAGE2DMSARRAY:
			case IIMAGE2DMSARRAY:
			case UIMAGE2DMSARRAY:
			case STRUCT:
			case VOID_:
			case WHILE:
			case BREAK:
			case CONTINUE:
			case DO:
			case FOR:
			case IF:
			case DISCARD:
			case RETURN:
			case SWITCH:
			case CASE:
			case DEFAULT:
			case SUBROUTINE:
			case IDENTIFIER:
			case FLOATCONSTANT:
			case INTCONSTANT:
			case UINTCONSTANT:
			case BOOLCONSTANT:
			case DOUBLECONSTANT:
			case INC_OP:
			case DEC_OP:
			case LEFT_PAREN:
			case SEMICOLON:
			case BANG:
			case DASH:
			case TILDE:
			case PLUS:
			case INVARIANT:
			case PRECISE:
			case HIGH_PRECISION:
			case MEDIUM_PRECISION:
			case LOW_PRECISION:
			case PRECISION:
				enterOuterAlt(_localctx, 2);
				{
				setState(903);
				simpleStatement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CompoundStatementNoNewScopeContext extends ParserRuleContext {
		public TerminalNode LEFT_BRACE() { return getToken(GLSLParser.LEFT_BRACE, 0); }
		public TerminalNode RIGHT_BRACE() { return getToken(GLSLParser.RIGHT_BRACE, 0); }
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public CompoundStatementNoNewScopeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoundStatementNoNewScope; }
	}

	public final CompoundStatementNoNewScopeContext compoundStatementNoNewScope() throws RecognitionException {
		CompoundStatementNoNewScopeContext _localctx = new CompoundStatementNoNewScopeContext(_ctx, getState());
		enterRule(_localctx, 122, RULE_compoundStatementNoNewScope);
		try {
			setState(912);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(906);
				match(LEFT_BRACE);
				setState(907);
				match(RIGHT_BRACE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(908);
				match(LEFT_BRACE);
				setState(909);
				statementList(0);
				setState(910);
				match(RIGHT_BRACE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementListContext extends ParserRuleContext {
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public StatementListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statementList; }
	}

	public final StatementListContext statementList() throws RecognitionException {
		return statementList(0);
	}

	private StatementListContext statementList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		StatementListContext _localctx = new StatementListContext(_ctx, _parentState);
		StatementListContext _prevctx = _localctx;
		int _startState = 124;
		enterRecursionRule(_localctx, 124, RULE_statementList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(915);
			statement();
			}
			_ctx.stop = _input.LT(-1);
			setState(921);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StatementListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_statementList);
					setState(917);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(918);
					statement();
					}
					} 
				}
				setState(923);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ExpressionStatementContext extends ParserRuleContext {
		public TerminalNode SEMICOLON() { return getToken(GLSLParser.SEMICOLON, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ExpressionStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionStatement; }
	}

	public final ExpressionStatementContext expressionStatement() throws RecognitionException {
		ExpressionStatementContext _localctx = new ExpressionStatementContext(_ctx, getState());
		enterRule(_localctx, 126, RULE_expressionStatement);
		try {
			setState(928);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SEMICOLON:
				enterOuterAlt(_localctx, 1);
				{
				setState(924);
				match(SEMICOLON);
				}
				break;
			case BOOL:
			case FLOAT:
			case INT:
			case UINT:
			case DOUBLE:
			case BVEC2:
			case BVEC3:
			case BVEC4:
			case IVEC2:
			case IVEC3:
			case IVEC4:
			case UVEC2:
			case UVEC3:
			case UVEC4:
			case VEC2:
			case VEC3:
			case VEC4:
			case MAT2:
			case MAT3:
			case MAT4:
			case MAT2X2:
			case MAT2X3:
			case MAT2X4:
			case MAT3X2:
			case MAT3X3:
			case MAT3X4:
			case MAT4X2:
			case MAT4X3:
			case MAT4X4:
			case DVEC2:
			case DVEC3:
			case DVEC4:
			case DMAT2:
			case DMAT3:
			case DMAT4:
			case DMAT2X2:
			case DMAT2X3:
			case DMAT2X4:
			case DMAT3X2:
			case DMAT3X3:
			case DMAT3X4:
			case DMAT4X2:
			case DMAT4X3:
			case DMAT4X4:
			case ATOMIC_UINT:
			case SAMPLER2D:
			case SAMPLER3D:
			case SAMPLERCUBE:
			case SAMPLER2DSHADOW:
			case SAMPLERCUBESHADOW:
			case SAMPLER2DARRAY:
			case SAMPLER2DARRAYSHADOW:
			case ISAMPLER2D:
			case ISAMPLER3D:
			case ISAMPLERCUBE:
			case ISAMPLER2DARRAY:
			case USAMPLER2D:
			case USAMPLER3D:
			case USAMPLERCUBE:
			case USAMPLER2DARRAY:
			case SAMPLER1D:
			case SAMPLER1DSHADOW:
			case SAMPLER1DARRAY:
			case SAMPLER1DARRAYSHADOW:
			case ISAMPLER1D:
			case ISAMPLER1DARRAY:
			case USAMPLER1D:
			case USAMPLER1DARRAY:
			case SAMPLER2DRECT:
			case SAMPLER2DRECTSHADOW:
			case ISAMPLER2DRECT:
			case USAMPLER2DRECT:
			case SAMPLERBUFFER:
			case ISAMPLERBUFFER:
			case USAMPLERBUFFER:
			case SAMPLERCUBEARRAY:
			case SAMPLERCUBEARRAYSHADOW:
			case ISAMPLERCUBEARRAY:
			case USAMPLERCUBEARRAY:
			case SAMPLER2DMS:
			case ISAMPLER2DMS:
			case USAMPLER2DMS:
			case SAMPLER2DMSARRAY:
			case ISAMPLER2DMSARRAY:
			case USAMPLER2DMSARRAY:
			case IMAGE2D:
			case IIMAGE2D:
			case UIMAGE2D:
			case IMAGE3D:
			case IIMAGE3D:
			case UIMAGE3D:
			case IMAGECUBE:
			case IIMAGECUBE:
			case UIMAGECUBE:
			case IMAGEBUFFER:
			case IIMAGEBUFFER:
			case UIMAGEBUFFER:
			case IMAGE2DARRAY:
			case IIMAGE2DARRAY:
			case UIMAGE2DARRAY:
			case IMAGECUBEARRAY:
			case IIMAGECUBEARRAY:
			case UIMAGECUBEARRAY:
			case IMAGE1D:
			case IIMAGE1D:
			case UIMAGE1D:
			case IMAGE1DARRAY:
			case IIMAGE1DARRAY:
			case UIMAGE1DARRAY:
			case IMAGE2DRECT:
			case IIMAGE2DRECT:
			case UIMAGE2DRECT:
			case IMAGE2DMS:
			case IIMAGE2DMS:
			case UIMAGE2DMS:
			case IMAGE2DMSARRAY:
			case IIMAGE2DMSARRAY:
			case UIMAGE2DMSARRAY:
			case STRUCT:
			case VOID_:
			case IDENTIFIER:
			case FLOATCONSTANT:
			case INTCONSTANT:
			case UINTCONSTANT:
			case BOOLCONSTANT:
			case DOUBLECONSTANT:
			case INC_OP:
			case DEC_OP:
			case LEFT_PAREN:
			case BANG:
			case DASH:
			case TILDE:
			case PLUS:
				enterOuterAlt(_localctx, 2);
				{
				setState(925);
				expression(0);
				setState(926);
				match(SEMICOLON);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SelectionStatementContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(GLSLParser.IF, 0); }
		public TerminalNode LEFT_PAREN() { return getToken(GLSLParser.LEFT_PAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RIGHT_PAREN() { return getToken(GLSLParser.RIGHT_PAREN, 0); }
		public SelectionRestStatementContext selectionRestStatement() {
			return getRuleContext(SelectionRestStatementContext.class,0);
		}
		public SelectionStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selectionStatement; }
	}

	public final SelectionStatementContext selectionStatement() throws RecognitionException {
		SelectionStatementContext _localctx = new SelectionStatementContext(_ctx, getState());
		enterRule(_localctx, 128, RULE_selectionStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(930);
			match(IF);
			setState(931);
			match(LEFT_PAREN);
			setState(932);
			expression(0);
			setState(933);
			match(RIGHT_PAREN);
			setState(934);
			selectionRestStatement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SelectionRestStatementContext extends ParserRuleContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public TerminalNode ELSE() { return getToken(GLSLParser.ELSE, 0); }
		public SelectionRestStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selectionRestStatement; }
	}

	public final SelectionRestStatementContext selectionRestStatement() throws RecognitionException {
		SelectionRestStatementContext _localctx = new SelectionRestStatementContext(_ctx, getState());
		enterRule(_localctx, 130, RULE_selectionRestStatement);
		try {
			setState(941);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,62,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(936);
				statement();
				setState(937);
				match(ELSE);
				setState(938);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(940);
				statement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConditionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public FullySpecifiedTypeContext fullySpecifiedType() {
			return getRuleContext(FullySpecifiedTypeContext.class,0);
		}
		public TerminalNode IDENTIFIER() { return getToken(GLSLParser.IDENTIFIER, 0); }
		public TerminalNode EQUAL() { return getToken(GLSLParser.EQUAL, 0); }
		public InitializerContext initializer() {
			return getRuleContext(InitializerContext.class,0);
		}
		public ConditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condition; }
	}

	public final ConditionContext condition() throws RecognitionException {
		ConditionContext _localctx = new ConditionContext(_ctx, getState());
		enterRule(_localctx, 132, RULE_condition);
		try {
			setState(949);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,63,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(943);
				expression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(944);
				fullySpecifiedType();
				setState(945);
				match(IDENTIFIER);
				setState(946);
				match(EQUAL);
				setState(947);
				initializer();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SwitchStatementContext extends ParserRuleContext {
		public TerminalNode SWITCH() { return getToken(GLSLParser.SWITCH, 0); }
		public TerminalNode LEFT_PAREN() { return getToken(GLSLParser.LEFT_PAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RIGHT_PAREN() { return getToken(GLSLParser.RIGHT_PAREN, 0); }
		public TerminalNode LEFT_BRACE() { return getToken(GLSLParser.LEFT_BRACE, 0); }
		public SwitchStatementListContext switchStatementList() {
			return getRuleContext(SwitchStatementListContext.class,0);
		}
		public TerminalNode RIGHT_BRACE() { return getToken(GLSLParser.RIGHT_BRACE, 0); }
		public SwitchStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_switchStatement; }
	}

	public final SwitchStatementContext switchStatement() throws RecognitionException {
		SwitchStatementContext _localctx = new SwitchStatementContext(_ctx, getState());
		enterRule(_localctx, 134, RULE_switchStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(951);
			match(SWITCH);
			setState(952);
			match(LEFT_PAREN);
			setState(953);
			expression(0);
			setState(954);
			match(RIGHT_PAREN);
			setState(955);
			match(LEFT_BRACE);
			setState(956);
			switchStatementList();
			setState(957);
			match(RIGHT_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SwitchStatementListContext extends ParserRuleContext {
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public SwitchStatementListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_switchStatementList; }
	}

	public final SwitchStatementListContext switchStatementList() throws RecognitionException {
		SwitchStatementListContext _localctx = new SwitchStatementListContext(_ctx, getState());
		enterRule(_localctx, 136, RULE_switchStatementList);
		try {
			setState(961);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CONST_:
			case BOOL:
			case FLOAT:
			case INT:
			case UINT:
			case DOUBLE:
			case BVEC2:
			case BVEC3:
			case BVEC4:
			case IVEC2:
			case IVEC3:
			case IVEC4:
			case UVEC2:
			case UVEC3:
			case UVEC4:
			case VEC2:
			case VEC3:
			case VEC4:
			case MAT2:
			case MAT3:
			case MAT4:
			case MAT2X2:
			case MAT2X3:
			case MAT2X4:
			case MAT3X2:
			case MAT3X3:
			case MAT3X4:
			case MAT4X2:
			case MAT4X3:
			case MAT4X4:
			case DVEC2:
			case DVEC3:
			case DVEC4:
			case DMAT2:
			case DMAT3:
			case DMAT4:
			case DMAT2X2:
			case DMAT2X3:
			case DMAT2X4:
			case DMAT3X2:
			case DMAT3X3:
			case DMAT3X4:
			case DMAT4X2:
			case DMAT4X3:
			case DMAT4X4:
			case CENTROID:
			case IN_:
			case OUT_:
			case INOUT:
			case UNIFORM:
			case PATCH:
			case SAMPLE:
			case BUFFER:
			case SHARED:
			case COHERENT:
			case VOLATILE:
			case RESTRICT:
			case READONLY:
			case WRITEONLY:
			case NOPERSPECTIVE:
			case FLAT:
			case SMOOTH:
			case LAYOUT:
			case ATOMIC_UINT:
			case SAMPLER2D:
			case SAMPLER3D:
			case SAMPLERCUBE:
			case SAMPLER2DSHADOW:
			case SAMPLERCUBESHADOW:
			case SAMPLER2DARRAY:
			case SAMPLER2DARRAYSHADOW:
			case ISAMPLER2D:
			case ISAMPLER3D:
			case ISAMPLERCUBE:
			case ISAMPLER2DARRAY:
			case USAMPLER2D:
			case USAMPLER3D:
			case USAMPLERCUBE:
			case USAMPLER2DARRAY:
			case SAMPLER1D:
			case SAMPLER1DSHADOW:
			case SAMPLER1DARRAY:
			case SAMPLER1DARRAYSHADOW:
			case ISAMPLER1D:
			case ISAMPLER1DARRAY:
			case USAMPLER1D:
			case USAMPLER1DARRAY:
			case SAMPLER2DRECT:
			case SAMPLER2DRECTSHADOW:
			case ISAMPLER2DRECT:
			case USAMPLER2DRECT:
			case SAMPLERBUFFER:
			case ISAMPLERBUFFER:
			case USAMPLERBUFFER:
			case SAMPLERCUBEARRAY:
			case SAMPLERCUBEARRAYSHADOW:
			case ISAMPLERCUBEARRAY:
			case USAMPLERCUBEARRAY:
			case SAMPLER2DMS:
			case ISAMPLER2DMS:
			case USAMPLER2DMS:
			case SAMPLER2DMSARRAY:
			case ISAMPLER2DMSARRAY:
			case USAMPLER2DMSARRAY:
			case IMAGE2D:
			case IIMAGE2D:
			case UIMAGE2D:
			case IMAGE3D:
			case IIMAGE3D:
			case UIMAGE3D:
			case IMAGECUBE:
			case IIMAGECUBE:
			case UIMAGECUBE:
			case IMAGEBUFFER:
			case IIMAGEBUFFER:
			case UIMAGEBUFFER:
			case IMAGE2DARRAY:
			case IIMAGE2DARRAY:
			case UIMAGE2DARRAY:
			case IMAGECUBEARRAY:
			case IIMAGECUBEARRAY:
			case UIMAGECUBEARRAY:
			case IMAGE1D:
			case IIMAGE1D:
			case UIMAGE1D:
			case IMAGE1DARRAY:
			case IIMAGE1DARRAY:
			case UIMAGE1DARRAY:
			case IMAGE2DRECT:
			case IIMAGE2DRECT:
			case UIMAGE2DRECT:
			case IMAGE2DMS:
			case IIMAGE2DMS:
			case UIMAGE2DMS:
			case IMAGE2DMSARRAY:
			case IIMAGE2DMSARRAY:
			case UIMAGE2DMSARRAY:
			case STRUCT:
			case VOID_:
			case WHILE:
			case BREAK:
			case CONTINUE:
			case DO:
			case FOR:
			case IF:
			case DISCARD:
			case RETURN:
			case SWITCH:
			case CASE:
			case DEFAULT:
			case SUBROUTINE:
			case IDENTIFIER:
			case FLOATCONSTANT:
			case INTCONSTANT:
			case UINTCONSTANT:
			case BOOLCONSTANT:
			case DOUBLECONSTANT:
			case INC_OP:
			case DEC_OP:
			case LEFT_PAREN:
			case LEFT_BRACE:
			case SEMICOLON:
			case BANG:
			case DASH:
			case TILDE:
			case PLUS:
			case INVARIANT:
			case PRECISE:
			case HIGH_PRECISION:
			case MEDIUM_PRECISION:
			case LOW_PRECISION:
			case PRECISION:
				enterOuterAlt(_localctx, 1);
				{
				setState(959);
				statementList(0);
				}
				break;
			case RIGHT_BRACE:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CaseLabelContext extends ParserRuleContext {
		public TerminalNode CASE() { return getToken(GLSLParser.CASE, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode COLON() { return getToken(GLSLParser.COLON, 0); }
		public TerminalNode DEFAULT() { return getToken(GLSLParser.DEFAULT, 0); }
		public CaseLabelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_caseLabel; }
	}

	public final CaseLabelContext caseLabel() throws RecognitionException {
		CaseLabelContext _localctx = new CaseLabelContext(_ctx, getState());
		enterRule(_localctx, 138, RULE_caseLabel);
		try {
			setState(969);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CASE:
				enterOuterAlt(_localctx, 1);
				{
				setState(963);
				match(CASE);
				setState(964);
				expression(0);
				setState(965);
				match(COLON);
				}
				break;
			case DEFAULT:
				enterOuterAlt(_localctx, 2);
				{
				setState(967);
				match(DEFAULT);
				setState(968);
				match(COLON);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IterationStatementContext extends ParserRuleContext {
		public TerminalNode WHILE() { return getToken(GLSLParser.WHILE, 0); }
		public TerminalNode LEFT_PAREN() { return getToken(GLSLParser.LEFT_PAREN, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public TerminalNode RIGHT_PAREN() { return getToken(GLSLParser.RIGHT_PAREN, 0); }
		public StatementNoNewScopeContext statementNoNewScope() {
			return getRuleContext(StatementNoNewScopeContext.class,0);
		}
		public TerminalNode DO() { return getToken(GLSLParser.DO, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(GLSLParser.SEMICOLON, 0); }
		public TerminalNode FOR() { return getToken(GLSLParser.FOR, 0); }
		public ForInitStatementContext forInitStatement() {
			return getRuleContext(ForInitStatementContext.class,0);
		}
		public ForRestStatementContext forRestStatement() {
			return getRuleContext(ForRestStatementContext.class,0);
		}
		public IterationStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_iterationStatement; }
	}

	public final IterationStatementContext iterationStatement() throws RecognitionException {
		IterationStatementContext _localctx = new IterationStatementContext(_ctx, getState());
		enterRule(_localctx, 140, RULE_iterationStatement);
		try {
			setState(992);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case WHILE:
				enterOuterAlt(_localctx, 1);
				{
				setState(971);
				match(WHILE);
				setState(972);
				match(LEFT_PAREN);
				setState(973);
				condition();
				setState(974);
				match(RIGHT_PAREN);
				setState(975);
				statementNoNewScope();
				}
				break;
			case DO:
				enterOuterAlt(_localctx, 2);
				{
				setState(977);
				match(DO);
				setState(978);
				statement();
				setState(979);
				match(WHILE);
				setState(980);
				match(LEFT_PAREN);
				setState(981);
				expression(0);
				setState(982);
				match(RIGHT_PAREN);
				setState(983);
				match(SEMICOLON);
				}
				break;
			case FOR:
				enterOuterAlt(_localctx, 3);
				{
				setState(985);
				match(FOR);
				setState(986);
				match(LEFT_PAREN);
				setState(987);
				forInitStatement();
				setState(988);
				forRestStatement();
				setState(989);
				match(RIGHT_PAREN);
				setState(990);
				statementNoNewScope();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForInitStatementContext extends ParserRuleContext {
		public ExpressionStatementContext expressionStatement() {
			return getRuleContext(ExpressionStatementContext.class,0);
		}
		public DeclarationStatementContext declarationStatement() {
			return getRuleContext(DeclarationStatementContext.class,0);
		}
		public ForInitStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forInitStatement; }
	}

	public final ForInitStatementContext forInitStatement() throws RecognitionException {
		ForInitStatementContext _localctx = new ForInitStatementContext(_ctx, getState());
		enterRule(_localctx, 142, RULE_forInitStatement);
		try {
			setState(996);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,67,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(994);
				expressionStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(995);
				declarationStatement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConditionoptContext extends ParserRuleContext {
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public ConditionoptContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conditionopt; }
	}

	public final ConditionoptContext conditionopt() throws RecognitionException {
		ConditionoptContext _localctx = new ConditionoptContext(_ctx, getState());
		enterRule(_localctx, 144, RULE_conditionopt);
		try {
			setState(1000);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CONST_:
			case BOOL:
			case FLOAT:
			case INT:
			case UINT:
			case DOUBLE:
			case BVEC2:
			case BVEC3:
			case BVEC4:
			case IVEC2:
			case IVEC3:
			case IVEC4:
			case UVEC2:
			case UVEC3:
			case UVEC4:
			case VEC2:
			case VEC3:
			case VEC4:
			case MAT2:
			case MAT3:
			case MAT4:
			case MAT2X2:
			case MAT2X3:
			case MAT2X4:
			case MAT3X2:
			case MAT3X3:
			case MAT3X4:
			case MAT4X2:
			case MAT4X3:
			case MAT4X4:
			case DVEC2:
			case DVEC3:
			case DVEC4:
			case DMAT2:
			case DMAT3:
			case DMAT4:
			case DMAT2X2:
			case DMAT2X3:
			case DMAT2X4:
			case DMAT3X2:
			case DMAT3X3:
			case DMAT3X4:
			case DMAT4X2:
			case DMAT4X3:
			case DMAT4X4:
			case CENTROID:
			case IN_:
			case OUT_:
			case INOUT:
			case UNIFORM:
			case PATCH:
			case SAMPLE:
			case BUFFER:
			case SHARED:
			case COHERENT:
			case VOLATILE:
			case RESTRICT:
			case READONLY:
			case WRITEONLY:
			case NOPERSPECTIVE:
			case FLAT:
			case SMOOTH:
			case LAYOUT:
			case ATOMIC_UINT:
			case SAMPLER2D:
			case SAMPLER3D:
			case SAMPLERCUBE:
			case SAMPLER2DSHADOW:
			case SAMPLERCUBESHADOW:
			case SAMPLER2DARRAY:
			case SAMPLER2DARRAYSHADOW:
			case ISAMPLER2D:
			case ISAMPLER3D:
			case ISAMPLERCUBE:
			case ISAMPLER2DARRAY:
			case USAMPLER2D:
			case USAMPLER3D:
			case USAMPLERCUBE:
			case USAMPLER2DARRAY:
			case SAMPLER1D:
			case SAMPLER1DSHADOW:
			case SAMPLER1DARRAY:
			case SAMPLER1DARRAYSHADOW:
			case ISAMPLER1D:
			case ISAMPLER1DARRAY:
			case USAMPLER1D:
			case USAMPLER1DARRAY:
			case SAMPLER2DRECT:
			case SAMPLER2DRECTSHADOW:
			case ISAMPLER2DRECT:
			case USAMPLER2DRECT:
			case SAMPLERBUFFER:
			case ISAMPLERBUFFER:
			case USAMPLERBUFFER:
			case SAMPLERCUBEARRAY:
			case SAMPLERCUBEARRAYSHADOW:
			case ISAMPLERCUBEARRAY:
			case USAMPLERCUBEARRAY:
			case SAMPLER2DMS:
			case ISAMPLER2DMS:
			case USAMPLER2DMS:
			case SAMPLER2DMSARRAY:
			case ISAMPLER2DMSARRAY:
			case USAMPLER2DMSARRAY:
			case IMAGE2D:
			case IIMAGE2D:
			case UIMAGE2D:
			case IMAGE3D:
			case IIMAGE3D:
			case UIMAGE3D:
			case IMAGECUBE:
			case IIMAGECUBE:
			case UIMAGECUBE:
			case IMAGEBUFFER:
			case IIMAGEBUFFER:
			case UIMAGEBUFFER:
			case IMAGE2DARRAY:
			case IIMAGE2DARRAY:
			case UIMAGE2DARRAY:
			case IMAGECUBEARRAY:
			case IIMAGECUBEARRAY:
			case UIMAGECUBEARRAY:
			case IMAGE1D:
			case IIMAGE1D:
			case UIMAGE1D:
			case IMAGE1DARRAY:
			case IIMAGE1DARRAY:
			case UIMAGE1DARRAY:
			case IMAGE2DRECT:
			case IIMAGE2DRECT:
			case UIMAGE2DRECT:
			case IMAGE2DMS:
			case IIMAGE2DMS:
			case UIMAGE2DMS:
			case IMAGE2DMSARRAY:
			case IIMAGE2DMSARRAY:
			case UIMAGE2DMSARRAY:
			case STRUCT:
			case VOID_:
			case SUBROUTINE:
			case IDENTIFIER:
			case FLOATCONSTANT:
			case INTCONSTANT:
			case UINTCONSTANT:
			case BOOLCONSTANT:
			case DOUBLECONSTANT:
			case INC_OP:
			case DEC_OP:
			case LEFT_PAREN:
			case BANG:
			case DASH:
			case TILDE:
			case PLUS:
			case INVARIANT:
			case PRECISE:
			case HIGH_PRECISION:
			case MEDIUM_PRECISION:
			case LOW_PRECISION:
				enterOuterAlt(_localctx, 1);
				{
				setState(998);
				condition();
				}
				break;
			case SEMICOLON:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForRestStatementContext extends ParserRuleContext {
		public ConditionoptContext conditionopt() {
			return getRuleContext(ConditionoptContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(GLSLParser.SEMICOLON, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ForRestStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forRestStatement; }
	}

	public final ForRestStatementContext forRestStatement() throws RecognitionException {
		ForRestStatementContext _localctx = new ForRestStatementContext(_ctx, getState());
		enterRule(_localctx, 146, RULE_forRestStatement);
		try {
			setState(1009);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,69,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1002);
				conditionopt();
				setState(1003);
				match(SEMICOLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1005);
				conditionopt();
				setState(1006);
				match(SEMICOLON);
				setState(1007);
				expression(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class JumpStatementContext extends ParserRuleContext {
		public TerminalNode CONTINUE() { return getToken(GLSLParser.CONTINUE, 0); }
		public TerminalNode SEMICOLON() { return getToken(GLSLParser.SEMICOLON, 0); }
		public TerminalNode BREAK() { return getToken(GLSLParser.BREAK, 0); }
		public TerminalNode RETURN() { return getToken(GLSLParser.RETURN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode DISCARD() { return getToken(GLSLParser.DISCARD, 0); }
		public JumpStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_jumpStatement; }
	}

	public final JumpStatementContext jumpStatement() throws RecognitionException {
		JumpStatementContext _localctx = new JumpStatementContext(_ctx, getState());
		enterRule(_localctx, 148, RULE_jumpStatement);
		try {
			setState(1023);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,70,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1011);
				match(CONTINUE);
				setState(1012);
				match(SEMICOLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1013);
				match(BREAK);
				setState(1014);
				match(SEMICOLON);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1015);
				match(RETURN);
				setState(1016);
				match(SEMICOLON);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1017);
				match(RETURN);
				setState(1018);
				expression(0);
				setState(1019);
				match(SEMICOLON);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1021);
				match(DISCARD);
				setState(1022);
				match(SEMICOLON);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TranslationUnitContext extends ParserRuleContext {
		public ExternalDeclarationContext externalDeclaration() {
			return getRuleContext(ExternalDeclarationContext.class,0);
		}
		public TranslationUnitContext translationUnit() {
			return getRuleContext(TranslationUnitContext.class,0);
		}
		public TranslationUnitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_translationUnit; }
	}

	public final TranslationUnitContext translationUnit() throws RecognitionException {
		return translationUnit(0);
	}

	private TranslationUnitContext translationUnit(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TranslationUnitContext _localctx = new TranslationUnitContext(_ctx, _parentState);
		TranslationUnitContext _prevctx = _localctx;
		int _startState = 150;
		enterRecursionRule(_localctx, 150, RULE_translationUnit, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1026);
			externalDeclaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1032);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,71,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TranslationUnitContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_translationUnit);
					setState(1028);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1029);
					externalDeclaration();
					}
					} 
				}
				setState(1034);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,71,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ExternalDeclarationContext extends ParserRuleContext {
		public FunctionDefinitionContext functionDefinition() {
			return getRuleContext(FunctionDefinitionContext.class,0);
		}
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(GLSLParser.SEMICOLON, 0); }
		public ExternalDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_externalDeclaration; }
	}

	public final ExternalDeclarationContext externalDeclaration() throws RecognitionException {
		ExternalDeclarationContext _localctx = new ExternalDeclarationContext(_ctx, getState());
		enterRule(_localctx, 152, RULE_externalDeclaration);
		try {
			setState(1038);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,72,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1035);
				functionDefinition();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1036);
				declaration();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1037);
				match(SEMICOLON);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionDefinitionContext extends ParserRuleContext {
		public FunctionPrototypeContext functionPrototype() {
			return getRuleContext(FunctionPrototypeContext.class,0);
		}
		public CompoundStatementNoNewScopeContext compoundStatementNoNewScope() {
			return getRuleContext(CompoundStatementNoNewScopeContext.class,0);
		}
		public FunctionDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionDefinition; }
	}

	public final FunctionDefinitionContext functionDefinition() throws RecognitionException {
		FunctionDefinitionContext _localctx = new FunctionDefinitionContext(_ctx, getState());
		enterRule(_localctx, 154, RULE_functionDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1040);
			functionPrototype();
			setState(1041);
			compoundStatementNoNewScope();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 2:
			return postfixExpression_sempred((PostfixExpressionContext)_localctx, predIndex);
		case 7:
			return multiplicativeExpression_sempred((MultiplicativeExpressionContext)_localctx, predIndex);
		case 8:
			return additiveExpression_sempred((AdditiveExpressionContext)_localctx, predIndex);
		case 9:
			return shiftExpression_sempred((ShiftExpressionContext)_localctx, predIndex);
		case 10:
			return relationalExpression_sempred((RelationalExpressionContext)_localctx, predIndex);
		case 11:
			return equalityExpression_sempred((EqualityExpressionContext)_localctx, predIndex);
		case 12:
			return andExpression_sempred((AndExpressionContext)_localctx, predIndex);
		case 13:
			return exclusiveOrExpression_sempred((ExclusiveOrExpressionContext)_localctx, predIndex);
		case 14:
			return inclusiveOrExpression_sempred((InclusiveOrExpressionContext)_localctx, predIndex);
		case 15:
			return logicalAndExpression_sempred((LogicalAndExpressionContext)_localctx, predIndex);
		case 16:
			return logicalXorExpression_sempred((LogicalXorExpressionContext)_localctx, predIndex);
		case 17:
			return logicalOrExpression_sempred((LogicalOrExpressionContext)_localctx, predIndex);
		case 21:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		case 24:
			return identifierList_sempred((IdentifierListContext)_localctx, predIndex);
		case 27:
			return functionHeaderWithParameters_sempred((FunctionHeaderWithParametersContext)_localctx, predIndex);
		case 32:
			return initDeclaratorList_sempred((InitDeclaratorListContext)_localctx, predIndex);
		case 38:
			return layoutQualifierIdList_sempred((LayoutQualifierIdListContext)_localctx, predIndex);
		case 41:
			return typeQualifier_sempred((TypeQualifierContext)_localctx, predIndex);
		case 44:
			return typeNameList_sempred((TypeNameListContext)_localctx, predIndex);
		case 46:
			return arraySpecifier_sempred((ArraySpecifierContext)_localctx, predIndex);
		case 50:
			return structDeclarationList_sempred((StructDeclarationListContext)_localctx, predIndex);
		case 52:
			return structDeclaratorList_sempred((StructDeclaratorListContext)_localctx, predIndex);
		case 55:
			return initializerList_sempred((InitializerListContext)_localctx, predIndex);
		case 62:
			return statementList_sempred((StatementListContext)_localctx, predIndex);
		case 75:
			return translationUnit_sempred((TranslationUnitContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean postfixExpression_sempred(PostfixExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 8);
		case 1:
			return precpred(_ctx, 7);
		case 2:
			return precpred(_ctx, 6);
		case 3:
			return precpred(_ctx, 5);
		case 4:
			return precpred(_ctx, 3);
		case 5:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean multiplicativeExpression_sempred(MultiplicativeExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 6:
			return precpred(_ctx, 3);
		case 7:
			return precpred(_ctx, 2);
		case 8:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean additiveExpression_sempred(AdditiveExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 9:
			return precpred(_ctx, 2);
		case 10:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean shiftExpression_sempred(ShiftExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 11:
			return precpred(_ctx, 2);
		case 12:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean relationalExpression_sempred(RelationalExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 13:
			return precpred(_ctx, 4);
		case 14:
			return precpred(_ctx, 3);
		case 15:
			return precpred(_ctx, 2);
		case 16:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean equalityExpression_sempred(EqualityExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 17:
			return precpred(_ctx, 2);
		case 18:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean andExpression_sempred(AndExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 19:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean exclusiveOrExpression_sempred(ExclusiveOrExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 20:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean inclusiveOrExpression_sempred(InclusiveOrExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 21:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean logicalAndExpression_sempred(LogicalAndExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 22:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean logicalXorExpression_sempred(LogicalXorExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 23:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean logicalOrExpression_sempred(LogicalOrExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 24:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 25:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean identifierList_sempred(IdentifierListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 26:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean functionHeaderWithParameters_sempred(FunctionHeaderWithParametersContext _localctx, int predIndex) {
		switch (predIndex) {
		case 27:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean initDeclaratorList_sempred(InitDeclaratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 28:
			return precpred(_ctx, 4);
		case 29:
			return precpred(_ctx, 3);
		case 30:
			return precpred(_ctx, 2);
		case 31:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean layoutQualifierIdList_sempred(LayoutQualifierIdListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 32:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean typeQualifier_sempred(TypeQualifierContext _localctx, int predIndex) {
		switch (predIndex) {
		case 33:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean typeNameList_sempred(TypeNameListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 34:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean arraySpecifier_sempred(ArraySpecifierContext _localctx, int predIndex) {
		switch (predIndex) {
		case 35:
			return precpred(_ctx, 2);
		case 36:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean structDeclarationList_sempred(StructDeclarationListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 37:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean structDeclaratorList_sempred(StructDeclaratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 38:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean initializerList_sempred(InitializerListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 39:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean statementList_sempred(StatementListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 40:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean translationUnit_sempred(TranslationUnitContext _localctx, int predIndex) {
		switch (predIndex) {
		case 41:
			return precpred(_ctx, 1);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00d6\u0416\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\5\3\u00ab\n\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3"+
		"\4\3\4\5\4\u00b8\n\4\3\4\3\4\5\4\u00bc\n\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4"+
		"\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\5\4\u00d3\n\4"+
		"\3\4\7\4\u00d6\n\4\f\4\16\4\u00d9\13\4\3\5\3\5\3\6\3\6\3\6\3\6\3\6\5\6"+
		"\u00e2\n\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7\u00ec\n\7\3\b\3\b\3\t\3"+
		"\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\7\t\u00fc\n\t\f\t\16\t\u00ff"+
		"\13\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\7\n\u010a\n\n\f\n\16\n\u010d"+
		"\13\n\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\7\13\u0118\n\13\f\13"+
		"\16\13\u011b\13\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f"+
		"\3\f\3\f\7\f\u012c\n\f\f\f\16\f\u012f\13\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r"+
		"\3\r\3\r\7\r\u013a\n\r\f\r\16\r\u013d\13\r\3\16\3\16\3\16\3\16\3\16\3"+
		"\16\7\16\u0145\n\16\f\16\16\16\u0148\13\16\3\17\3\17\3\17\3\17\3\17\3"+
		"\17\7\17\u0150\n\17\f\17\16\17\u0153\13\17\3\20\3\20\3\20\3\20\3\20\3"+
		"\20\7\20\u015b\n\20\f\20\16\20\u015e\13\20\3\21\3\21\3\21\3\21\3\21\3"+
		"\21\7\21\u0166\n\21\f\21\16\21\u0169\13\21\3\22\3\22\3\22\3\22\3\22\3"+
		"\22\7\22\u0171\n\22\f\22\16\22\u0174\13\22\3\23\3\23\3\23\3\23\3\23\3"+
		"\23\7\23\u017c\n\23\f\23\16\23\u017f\13\23\3\24\3\24\3\24\3\24\3\24\3"+
		"\24\3\24\5\24\u0188\n\24\3\25\3\25\3\25\3\25\3\25\5\25\u018f\n\25\3\26"+
		"\3\26\3\27\3\27\3\27\3\27\3\27\3\27\7\27\u0199\n\27\f\27\16\27\u019c\13"+
		"\27\3\30\3\30\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3"+
		"\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3"+
		"\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3"+
		"\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\5\31\u01cf\n\31\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\7\32\u01d8\n\32\f\32\16\32\u01db\13\32\3\33\3\33"+
		"\3\33\3\34\3\34\5\34\u01e2\n\34\3\35\3\35\3\35\3\35\3\35\3\35\3\35\7\35"+
		"\u01eb\n\35\f\35\16\35\u01ee\13\35\3\36\3\36\3\36\3\36\3\37\3\37\3\37"+
		"\3\37\3\37\3\37\3\37\5\37\u01fb\n\37\3 \3 \3 \3 \3 \3 \3 \3 \5 \u0205"+
		"\n \3!\3!\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\""+
		"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\7\"\u021f\n\"\f\"\16\"\u0222\13\"\3#\3#\3"+
		"#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\5#\u0237\n#\3$\3$\3"+
		"$\3$\5$\u023d\n$\3%\3%\3&\3&\3\'\3\'\3\'\3\'\3\'\3(\3(\3(\3(\3(\3(\7("+
		"\u024e\n(\f(\16(\u0251\13(\3)\3)\3)\3)\3)\5)\u0258\n)\3*\3*\3+\3+\3+\3"+
		"+\3+\7+\u0261\n+\f+\16+\u0264\13+\3,\3,\3,\3,\3,\3,\5,\u026c\n,\3-\3-"+
		"\3-\3-\3-\3-\3-\3-\3-\3-\3-\3-\3-\3-\3-\3-\3-\3-\3-\3-\3-\5-\u0283\n-"+
		"\3.\3.\3.\3.\3.\3.\7.\u028b\n.\f.\16.\u028e\13.\3/\3/\3/\3/\5/\u0294\n"+
		"/\3\60\3\60\3\60\3\60\3\60\3\60\3\60\5\60\u029d\n\60\3\60\3\60\3\60\3"+
		"\60\3\60\3\60\3\60\3\60\7\60\u02a7\n\60\f\60\16\60\u02aa\13\60\3\61\3"+
		"\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\5\61\u0325\n\61\3\62\3\62\3\63"+
		"\3\63\3\63\3\63\3\63\3\63\3\63\3\63\3\63\3\63\3\63\5\63\u0334\n\63\3\64"+
		"\3\64\3\64\3\64\3\64\7\64\u033b\n\64\f\64\16\64\u033e\13\64\3\65\3\65"+
		"\3\65\3\65\3\65\3\65\3\65\3\65\3\65\5\65\u0349\n\65\3\66\3\66\3\66\3\66"+
		"\3\66\3\66\7\66\u0351\n\66\f\66\16\66\u0354\13\66\3\67\3\67\3\67\5\67"+
		"\u0359\n\67\38\38\38\38\38\38\38\38\38\38\58\u0365\n8\39\39\39\39\39\3"+
		"9\79\u036d\n9\f9\169\u0370\139\3:\3:\3;\3;\5;\u0376\n;\3<\3<\3<\3<\3<"+
		"\3<\3<\5<\u037f\n<\3=\3=\3=\3=\3=\3=\5=\u0387\n=\3>\3>\5>\u038b\n>\3?"+
		"\3?\3?\3?\3?\3?\5?\u0393\n?\3@\3@\3@\3@\3@\7@\u039a\n@\f@\16@\u039d\13"+
		"@\3A\3A\3A\3A\5A\u03a3\nA\3B\3B\3B\3B\3B\3B\3C\3C\3C\3C\3C\5C\u03b0\n"+
		"C\3D\3D\3D\3D\3D\3D\5D\u03b8\nD\3E\3E\3E\3E\3E\3E\3E\3E\3F\3F\5F\u03c4"+
		"\nF\3G\3G\3G\3G\3G\3G\5G\u03cc\nG\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H"+
		"\3H\3H\3H\3H\3H\3H\3H\3H\3H\5H\u03e3\nH\3I\3I\5I\u03e7\nI\3J\3J\5J\u03eb"+
		"\nJ\3K\3K\3K\3K\3K\3K\3K\5K\u03f4\nK\3L\3L\3L\3L\3L\3L\3L\3L\3L\3L\3L"+
		"\3L\5L\u0402\nL\3M\3M\3M\3M\3M\7M\u0409\nM\fM\16M\u040c\13M\3N\3N\3N\5"+
		"N\u0411\nN\3O\3O\3O\3O\2\33\6\20\22\24\26\30\32\34\36 \"$,\628BNTZ^fj"+
		"p~\u0098P\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\66"+
		"8:<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a"+
		"\u008c\u008e\u0090\u0092\u0094\u0096\u0098\u009a\u009c\2\6\3\2\u00c3\u00c6"+
		"\4\2\u00ae\u00b7\u00c1\u00c1\3\2>@\3\2\u00d2\u00d4\2\u04c3\2\u009e\3\2"+
		"\2\2\4\u00aa\3\2\2\2\6\u00bb\3\2\2\2\b\u00da\3\2\2\2\n\u00e1\3\2\2\2\f"+
		"\u00eb\3\2\2\2\16\u00ed\3\2\2\2\20\u00ef\3\2\2\2\22\u0100\3\2\2\2\24\u010e"+
		"\3\2\2\2\26\u011c\3\2\2\2\30\u0130\3\2\2\2\32\u013e\3\2\2\2\34\u0149\3"+
		"\2\2\2\36\u0154\3\2\2\2 \u015f\3\2\2\2\"\u016a\3\2\2\2$\u0175\3\2\2\2"+
		"&\u0187\3\2\2\2(\u018e\3\2\2\2*\u0190\3\2\2\2,\u0192\3\2\2\2.\u019d\3"+
		"\2\2\2\60\u01ce\3\2\2\2\62\u01d0\3\2\2\2\64\u01dc\3\2\2\2\66\u01e1\3\2"+
		"\2\28\u01e3\3\2\2\2:\u01ef\3\2\2\2<\u01fa\3\2\2\2>\u0204\3\2\2\2@\u0206"+
		"\3\2\2\2B\u0208\3\2\2\2D\u0236\3\2\2\2F\u023c\3\2\2\2H\u023e\3\2\2\2J"+
		"\u0240\3\2\2\2L\u0242\3\2\2\2N\u0247\3\2\2\2P\u0257\3\2\2\2R\u0259\3\2"+
		"\2\2T\u025b\3\2\2\2V\u026b\3\2\2\2X\u0282\3\2\2\2Z\u0284\3\2\2\2\\\u0293"+
		"\3\2\2\2^\u029c\3\2\2\2`\u0324\3\2\2\2b\u0326\3\2\2\2d\u0333\3\2\2\2f"+
		"\u0335\3\2\2\2h\u0348\3\2\2\2j\u034a\3\2\2\2l\u0358\3\2\2\2n\u0364\3\2"+
		"\2\2p\u0366\3\2\2\2r\u0371\3\2\2\2t\u0375\3\2\2\2v\u037e\3\2\2\2x\u0386"+
		"\3\2\2\2z\u038a\3\2\2\2|\u0392\3\2\2\2~\u0394\3\2\2\2\u0080\u03a2\3\2"+
		"\2\2\u0082\u03a4\3\2\2\2\u0084\u03af\3\2\2\2\u0086\u03b7\3\2\2\2\u0088"+
		"\u03b9\3\2\2\2\u008a\u03c3\3\2\2\2\u008c\u03cb\3\2\2\2\u008e\u03e2\3\2"+
		"\2\2\u0090\u03e6\3\2\2\2\u0092\u03ea\3\2\2\2\u0094\u03f3\3\2\2\2\u0096"+
		"\u0401\3\2\2\2\u0098\u0403\3\2\2\2\u009a\u0410\3\2\2\2\u009c\u0412\3\2"+
		"\2\2\u009e\u009f\7\u009b\2\2\u009f\3\3\2\2\2\u00a0\u00ab\5\2\2\2\u00a1"+
		"\u00ab\7\u009e\2\2\u00a2\u00ab\7\u009f\2\2\u00a3\u00ab\7\u009d\2\2\u00a4"+
		"\u00ab\7\u00a0\2\2\u00a5\u00ab\7\u00a1\2\2\u00a6\u00a7\7\u00b8\2\2\u00a7"+
		"\u00a8\5,\27\2\u00a8\u00a9\7\u00b9\2\2\u00a9\u00ab\3\2\2\2\u00aa\u00a0"+
		"\3\2\2\2\u00aa\u00a1\3\2\2\2\u00aa\u00a2\3\2\2\2\u00aa\u00a3\3\2\2\2\u00aa"+
		"\u00a4\3\2\2\2\u00aa\u00a5\3\2\2\2\u00aa\u00a6\3\2\2\2\u00ab\5\3\2\2\2"+
		"\u00ac\u00ad\b\4\1\2\u00ad\u00bc\5\4\3\2\u00ae\u00af\5\\/\2\u00af\u00b0"+
		"\7\u00b8\2\2\u00b0\u00b1\5(\25\2\u00b1\u00b2\5\n\6\2\u00b2\u00b3\7\u00b9"+
		"\2\2\u00b3\u00bc\3\2\2\2\u00b4\u00b5\5\\/\2\u00b5\u00b7\7\u00b8\2\2\u00b6"+
		"\u00b8\7\u008d\2\2\u00b7\u00b6\3\2\2\2\u00b7\u00b8\3\2\2\2\u00b8\u00b9"+
		"\3\2\2\2\u00b9\u00ba\7\u00b9\2\2\u00ba\u00bc\3\2\2\2\u00bb\u00ac\3\2\2"+
		"\2\u00bb\u00ae\3\2\2\2\u00bb\u00b4\3\2\2\2\u00bc\u00d7\3\2\2\2\u00bd\u00be"+
		"\f\n\2\2\u00be\u00bf\7\u00ba\2\2\u00bf\u00c0\5\b\5\2\u00c0\u00c1\7\u00bb"+
		"\2\2\u00c1\u00d6\3\2\2\2\u00c2\u00c3\f\t\2\2\u00c3\u00c4\7\u00be\2\2\u00c4"+
		"\u00d6\7\u009b\2\2\u00c5\u00c6\f\b\2\2\u00c6\u00d6\7\u00a5\2\2\u00c7\u00c8"+
		"\f\7\2\2\u00c8\u00d6\7\u00a6\2\2\u00c9\u00ca\f\5\2\2\u00ca\u00cb\7\u00b8"+
		"\2\2\u00cb\u00cc\5(\25\2\u00cc\u00cd\5\n\6\2\u00cd\u00ce\7\u00b9\2\2\u00ce"+
		"\u00d6\3\2\2\2\u00cf\u00d0\f\3\2\2\u00d0\u00d2\7\u00b8\2\2\u00d1\u00d3"+
		"\7\u008d\2\2\u00d2\u00d1\3\2\2\2\u00d2\u00d3\3\2\2\2\u00d3\u00d4\3\2\2"+
		"\2\u00d4\u00d6\7\u00b9\2\2\u00d5\u00bd\3\2\2\2\u00d5\u00c2\3\2\2\2\u00d5"+
		"\u00c5\3\2\2\2\u00d5\u00c7\3\2\2\2\u00d5\u00c9\3\2\2\2\u00d5\u00cf\3\2"+
		"\2\2\u00d6\u00d9\3\2\2\2\u00d7\u00d5\3\2\2\2\u00d7\u00d8\3\2\2\2\u00d8"+
		"\7\3\2\2\2\u00d9\u00d7\3\2\2\2\u00da\u00db\5,\27\2\u00db\t\3\2\2\2\u00dc"+
		"\u00dd\7\u00bf\2\2\u00dd\u00de\5(\25\2\u00de\u00df\5\n\6\2\u00df\u00e2"+
		"\3\2\2\2\u00e0\u00e2\3\2\2\2\u00e1\u00dc\3\2\2\2\u00e1\u00e0\3\2\2\2\u00e2"+
		"\13\3\2\2\2\u00e3\u00ec\5\6\4\2\u00e4\u00e5\7\u00a5\2\2\u00e5\u00ec\5"+
		"\f\7\2\u00e6\u00e7\7\u00a6\2\2\u00e7\u00ec\5\f\7\2\u00e8\u00e9\5\16\b"+
		"\2\u00e9\u00ea\5\f\7\2\u00ea\u00ec\3\2\2\2\u00eb\u00e3\3\2\2\2\u00eb\u00e4"+
		"\3\2\2\2\u00eb\u00e6\3\2\2\2\u00eb\u00e8\3\2\2\2\u00ec\r\3\2\2\2\u00ed"+
		"\u00ee\t\2\2\2\u00ee\17\3\2\2\2\u00ef\u00f0\b\t\1\2\u00f0\u00f1\5\f\7"+
		"\2\u00f1\u00fd\3\2\2\2\u00f2\u00f3\f\5\2\2\u00f3\u00f4\7\u00c7\2\2\u00f4"+
		"\u00fc\5\f\7\2\u00f5\u00f6\f\4\2\2\u00f6\u00f7\7\u00c8\2\2\u00f7\u00fc"+
		"\5\f\7\2\u00f8\u00f9\f\3\2\2\u00f9\u00fa\7\u00c9\2\2\u00fa\u00fc\5\f\7"+
		"\2\u00fb\u00f2\3\2\2\2\u00fb\u00f5\3\2\2\2\u00fb\u00f8\3\2\2\2\u00fc\u00ff"+
		"\3\2\2\2\u00fd\u00fb\3\2\2\2\u00fd\u00fe\3\2\2\2\u00fe\21\3\2\2\2\u00ff"+
		"\u00fd\3\2\2\2\u0100\u0101\b\n\1\2\u0101\u0102\5\20\t\2\u0102\u010b\3"+
		"\2\2\2\u0103\u0104\f\4\2\2\u0104\u0105\7\u00c6\2\2\u0105\u010a\5\20\t"+
		"\2\u0106\u0107\f\3\2\2\u0107\u0108\7\u00c4\2\2\u0108\u010a\5\20\t\2\u0109"+
		"\u0103\3\2\2\2\u0109\u0106\3\2\2\2\u010a\u010d\3\2\2\2\u010b\u0109\3\2"+
		"\2\2\u010b\u010c\3\2\2\2\u010c\23\3\2\2\2\u010d\u010b\3\2\2\2\u010e\u010f"+
		"\b\13\1\2\u010f\u0110\5\22\n\2\u0110\u0119\3\2\2\2\u0111\u0112\f\4\2\2"+
		"\u0112\u0113\7\u00a3\2\2\u0113\u0118\5\22\n\2\u0114\u0115\f\3\2\2\u0115"+
		"\u0116\7\u00a4\2\2\u0116\u0118\5\22\n\2\u0117\u0111\3\2\2\2\u0117\u0114"+
		"\3\2\2\2\u0118\u011b\3\2\2\2\u0119\u0117\3\2\2\2\u0119\u011a\3\2\2\2\u011a"+
		"\25\3\2\2\2\u011b\u0119\3\2\2\2\u011c\u011d\b\f\1\2\u011d\u011e\5\24\13"+
		"\2\u011e\u012d\3\2\2\2\u011f\u0120\f\6\2\2\u0120\u0121\7\u00ca\2\2\u0121"+
		"\u012c\5\24\13\2\u0122\u0123\f\5\2\2\u0123\u0124\7\u00cb\2\2\u0124\u012c"+
		"\5\24\13\2\u0125\u0126\f\4\2\2\u0126\u0127\7\u00a7\2\2\u0127\u012c\5\24"+
		"\13\2\u0128\u0129\f\3\2\2\u0129\u012a\7\u00a8\2\2\u012a\u012c\5\24\13"+
		"\2\u012b\u011f\3\2\2\2\u012b\u0122\3\2\2\2\u012b\u0125\3\2\2\2\u012b\u0128"+
		"\3\2\2\2\u012c\u012f\3\2\2\2\u012d\u012b\3\2\2\2\u012d\u012e\3\2\2\2\u012e"+
		"\27\3\2\2\2\u012f\u012d\3\2\2\2\u0130\u0131\b\r\1\2\u0131\u0132\5\26\f"+
		"\2\u0132\u013b\3\2\2\2\u0133\u0134\f\4\2\2\u0134\u0135\7\u00a9\2\2\u0135"+
		"\u013a\5\26\f\2\u0136\u0137\f\3\2\2\u0137\u0138\7\u00aa\2\2\u0138\u013a"+
		"\5\26\f\2\u0139\u0133\3\2\2\2\u0139\u0136\3\2\2\2\u013a\u013d\3\2\2\2"+
		"\u013b\u0139\3\2\2\2\u013b\u013c\3\2\2\2\u013c\31\3\2\2\2\u013d\u013b"+
		"\3\2\2\2\u013e\u013f\b\16\1\2\u013f\u0140\5\30\r\2\u0140\u0146\3\2\2\2"+
		"\u0141\u0142\f\3\2\2\u0142\u0143\7\u00ce\2\2\u0143\u0145\5\30\r\2\u0144"+
		"\u0141\3\2\2\2\u0145\u0148\3\2\2\2\u0146\u0144\3\2\2\2\u0146\u0147\3\2"+
		"\2\2\u0147\33\3\2\2\2\u0148\u0146\3\2\2\2\u0149\u014a\b\17\1\2\u014a\u014b"+
		"\5\32\16\2\u014b\u0151\3\2\2\2\u014c\u014d\f\3\2\2\u014d\u014e\7\u00cd"+
		"\2\2\u014e\u0150\5\32\16\2\u014f\u014c\3\2\2\2\u0150\u0153\3\2\2\2\u0151"+
		"\u014f\3\2\2\2\u0151\u0152\3\2\2\2\u0152\35\3\2\2\2\u0153\u0151\3\2\2"+
		"\2\u0154\u0155\b\20\1\2\u0155\u0156\5\34\17\2\u0156\u015c\3\2\2\2\u0157"+
		"\u0158\f\3\2\2\u0158\u0159\7\u00cc\2\2\u0159\u015b\5\34\17\2\u015a\u0157"+
		"\3\2\2\2\u015b\u015e\3\2\2\2\u015c\u015a\3\2\2\2\u015c\u015d\3\2\2\2\u015d"+
		"\37\3\2\2\2\u015e\u015c\3\2\2\2\u015f\u0160\b\21\1\2\u0160\u0161\5\36"+
		"\20\2\u0161\u0167\3\2\2\2\u0162\u0163\f\3\2\2\u0163\u0164\7\u00ab\2\2"+
		"\u0164\u0166\5\36\20\2\u0165\u0162\3\2\2\2\u0166\u0169\3\2\2\2\u0167\u0165"+
		"\3\2\2\2\u0167\u0168\3\2\2\2\u0168!\3\2\2\2\u0169\u0167\3\2\2\2\u016a"+
		"\u016b\b\22\1\2\u016b\u016c\5 \21\2\u016c\u0172\3\2\2\2\u016d\u016e\f"+
		"\3\2\2\u016e\u016f\7\u00ad\2\2\u016f\u0171\5 \21\2\u0170\u016d\3\2\2\2"+
		"\u0171\u0174\3\2\2\2\u0172\u0170\3\2\2\2\u0172\u0173\3\2\2\2\u0173#\3"+
		"\2\2\2\u0174\u0172\3\2\2\2\u0175\u0176\b\23\1\2\u0176\u0177\5\"\22\2\u0177"+
		"\u017d\3\2\2\2\u0178\u0179\f\3\2\2\u0179\u017a\7\u00ac\2\2\u017a\u017c"+
		"\5\"\22\2\u017b\u0178\3\2\2\2\u017c\u017f\3\2\2\2\u017d\u017b\3\2\2\2"+
		"\u017d\u017e\3\2\2\2\u017e%\3\2\2\2\u017f\u017d\3\2\2\2\u0180\u0188\5"+
		"$\23\2\u0181\u0182\5$\23\2\u0182\u0183\7\u00cf\2\2\u0183\u0184\5,\27\2"+
		"\u0184\u0185\7\u00c0\2\2\u0185\u0186\5(\25\2\u0186\u0188\3\2\2\2\u0187"+
		"\u0180\3\2\2\2\u0187\u0181\3\2\2\2\u0188\'\3\2\2\2\u0189\u018f\5&\24\2"+
		"\u018a\u018b\5\f\7\2\u018b\u018c\5*\26\2\u018c\u018d\5(\25\2\u018d\u018f"+
		"\3\2\2\2\u018e\u0189\3\2\2\2\u018e\u018a\3\2\2\2\u018f)\3\2\2\2\u0190"+
		"\u0191\t\3\2\2\u0191+\3\2\2\2\u0192\u0193\b\27\1\2\u0193\u0194\5(\25\2"+
		"\u0194\u019a\3\2\2\2\u0195\u0196\f\3\2\2\u0196\u0197\7\u00bf\2\2\u0197"+
		"\u0199\5(\25\2\u0198\u0195\3\2\2\2\u0199\u019c\3\2\2\2\u019a\u0198\3\2"+
		"\2\2\u019a\u019b\3\2\2\2\u019b-\3\2\2\2\u019c\u019a\3\2\2\2\u019d\u019e"+
		"\5&\24\2\u019e/\3\2\2\2\u019f\u01a0\5\64\33\2\u01a0\u01a1\7\u00c2\2\2"+
		"\u01a1\u01cf\3\2\2\2\u01a2\u01a3\5B\"\2\u01a3\u01a4\7\u00c2\2\2\u01a4"+
		"\u01cf\3\2\2\2\u01a5\u01a6\7\u00d5\2\2\u01a6\u01a7\5b\62\2\u01a7\u01a8"+
		"\5\\/\2\u01a8\u01a9\7\u00c2\2\2\u01a9\u01cf\3\2\2\2\u01aa\u01ab\5T+\2"+
		"\u01ab\u01ac\7\u009b\2\2\u01ac\u01ad\7\u00bc\2\2\u01ad\u01ae\5f\64\2\u01ae"+
		"\u01af\7\u00bd\2\2\u01af\u01b0\7\u00c2\2\2\u01b0\u01cf\3\2\2\2\u01b1\u01b2"+
		"\5T+\2\u01b2\u01b3\7\u009b\2\2\u01b3\u01b4\7\u00bc\2\2\u01b4\u01b5\5f"+
		"\64\2\u01b5\u01b6\7\u00bd\2\2\u01b6\u01b7\7\u009b\2\2\u01b7\u01b8\7\u00c2"+
		"\2\2\u01b8\u01cf\3\2\2\2\u01b9\u01ba\5T+\2\u01ba\u01bb\7\u009b\2\2\u01bb"+
		"\u01bc\7\u00bc\2\2\u01bc\u01bd\5f\64\2\u01bd\u01be\7\u00bd\2\2\u01be\u01bf"+
		"\7\u009b\2\2\u01bf\u01c0\5^\60\2\u01c0\u01c1\7\u00c2\2\2\u01c1\u01cf\3"+
		"\2\2\2\u01c2\u01c3\5T+\2\u01c3\u01c4\7\u00c2\2\2\u01c4\u01cf\3\2\2\2\u01c5"+
		"\u01c6\5T+\2\u01c6\u01c7\7\u009b\2\2\u01c7\u01c8\7\u00c2\2\2\u01c8\u01cf"+
		"\3\2\2\2\u01c9\u01ca\5T+\2\u01ca\u01cb\7\u009b\2\2\u01cb\u01cc\5\62\32"+
		"\2\u01cc\u01cd\7\u00c2\2\2\u01cd\u01cf\3\2\2\2\u01ce\u019f\3\2\2\2\u01ce"+
		"\u01a2\3\2\2\2\u01ce\u01a5\3\2\2\2\u01ce\u01aa\3\2\2\2\u01ce\u01b1\3\2"+
		"\2\2\u01ce\u01b9\3\2\2\2\u01ce\u01c2\3\2\2\2\u01ce\u01c5\3\2\2\2\u01ce"+
		"\u01c9\3\2\2\2\u01cf\61\3\2\2\2\u01d0\u01d1\b\32\1\2\u01d1\u01d2\7\u00bf"+
		"\2\2\u01d2\u01d3\7\u009b\2\2\u01d3\u01d9\3\2\2\2\u01d4\u01d5\f\3\2\2\u01d5"+
		"\u01d6\7\u00bf\2\2\u01d6\u01d8\7\u009b\2\2\u01d7\u01d4\3\2\2\2\u01d8\u01db"+
		"\3\2\2\2\u01d9\u01d7\3\2\2\2\u01d9\u01da\3\2\2\2\u01da\63\3\2\2\2\u01db"+
		"\u01d9\3\2\2\2\u01dc\u01dd\5\66\34\2\u01dd\u01de\7\u00b9\2\2\u01de\65"+
		"\3\2\2\2\u01df\u01e2\5:\36\2\u01e0\u01e2\58\35\2\u01e1\u01df\3\2\2\2\u01e1"+
		"\u01e0\3\2\2\2\u01e2\67\3\2\2\2\u01e3\u01e4\b\35\1\2\u01e4\u01e5\5:\36"+
		"\2\u01e5\u01e6\5> \2\u01e6\u01ec\3\2\2\2\u01e7\u01e8\f\3\2\2\u01e8\u01e9"+
		"\7\u00bf\2\2\u01e9\u01eb\5> \2\u01ea\u01e7\3\2\2\2\u01eb\u01ee\3\2\2\2"+
		"\u01ec\u01ea\3\2\2\2\u01ec\u01ed\3\2\2\2\u01ed9\3\2\2\2\u01ee\u01ec\3"+
		"\2\2\2\u01ef\u01f0\5F$\2\u01f0\u01f1\7\u009b\2\2\u01f1\u01f2\7\u00b8\2"+
		"\2\u01f2;\3\2\2\2\u01f3\u01f4\5\\/\2\u01f4\u01f5\7\u009b\2\2\u01f5\u01fb"+
		"\3\2\2\2\u01f6\u01f7\5\\/\2\u01f7\u01f8\7\u009b\2\2\u01f8\u01f9\5^\60"+
		"\2\u01f9\u01fb\3\2\2\2\u01fa\u01f3\3\2\2\2\u01fa\u01f6\3\2\2\2\u01fb="+
		"\3\2\2\2\u01fc\u01fd\5T+\2\u01fd\u01fe\5<\37\2\u01fe\u0205\3\2\2\2\u01ff"+
		"\u0205\5<\37\2\u0200\u0201\5T+\2\u0201\u0202\5@!\2\u0202\u0205\3\2\2\2"+
		"\u0203\u0205\5@!\2\u0204\u01fc\3\2\2\2\u0204\u01ff\3\2\2\2\u0204\u0200"+
		"\3\2\2\2\u0204\u0203\3\2\2\2\u0205?\3\2\2\2\u0206\u0207\5\\/\2\u0207A"+
		"\3\2\2\2\u0208\u0209\b\"\1\2\u0209\u020a\5D#\2\u020a\u0220\3\2\2\2\u020b"+
		"\u020c\f\6\2\2\u020c\u020d\7\u00bf\2\2\u020d\u021f\7\u009b\2\2\u020e\u020f"+
		"\f\5\2\2\u020f\u0210\7\u00bf\2\2\u0210\u0211\7\u009b\2\2\u0211\u021f\5"+
		"^\60\2\u0212\u0213\f\4\2\2\u0213\u0214\7\u00bf\2\2\u0214\u0215\7\u009b"+
		"\2\2\u0215\u0216\5^\60\2\u0216\u0217\7\u00c1\2\2\u0217\u0218\5n8\2\u0218"+
		"\u021f\3\2\2\2\u0219\u021a\f\3\2\2\u021a\u021b\7\u00bf\2\2\u021b\u021c"+
		"\7\u009b\2\2\u021c\u021d\7\u00c1\2\2\u021d\u021f\5n8\2\u021e\u020b\3\2"+
		"\2\2\u021e\u020e\3\2\2\2\u021e\u0212\3\2\2\2\u021e\u0219\3\2\2\2\u021f"+
		"\u0222\3\2\2\2\u0220\u021e\3\2\2\2\u0220\u0221\3\2\2\2\u0221C\3\2\2\2"+
		"\u0222\u0220\3\2\2\2\u0223\u0237\5F$\2\u0224\u0225\5F$\2\u0225\u0226\7"+
		"\u009b\2\2\u0226\u0237\3\2\2\2\u0227\u0228\5F$\2\u0228\u0229\7\u009b\2"+
		"\2\u0229\u022a\5^\60\2\u022a\u0237\3\2\2\2\u022b\u022c\5F$\2\u022c\u022d"+
		"\7\u009b\2\2\u022d\u022e\5^\60\2\u022e\u022f\7\u00c1\2\2\u022f\u0230\5"+
		"n8\2\u0230\u0237\3\2\2\2\u0231\u0232\5F$\2\u0232\u0233\7\u009b\2\2\u0233"+
		"\u0234\7\u00c1\2\2\u0234\u0235\5n8\2\u0235\u0237\3\2\2\2\u0236\u0223\3"+
		"\2\2\2\u0236\u0224\3\2\2\2\u0236\u0227\3\2\2\2\u0236\u022b\3\2\2\2\u0236"+
		"\u0231\3\2\2\2\u0237E\3\2\2\2\u0238\u023d\5\\/\2\u0239\u023a\5T+\2\u023a"+
		"\u023b\5\\/\2\u023b\u023d\3\2\2\2\u023c\u0238\3\2\2\2\u023c\u0239\3\2"+
		"\2\2\u023dG\3\2\2\2\u023e\u023f\7\u00d0\2\2\u023fI\3\2\2\2\u0240\u0241"+
		"\t\4\2\2\u0241K\3\2\2\2\u0242\u0243\7A\2\2\u0243\u0244\7\u00b8\2\2\u0244"+
		"\u0245\5N(\2\u0245\u0246\7\u00b9\2\2\u0246M\3\2\2\2\u0247\u0248\b(\1\2"+
		"\u0248\u0249\5P)\2\u0249\u024f\3\2\2\2\u024a\u024b\f\3\2\2\u024b\u024c"+
		"\7\u00bf\2\2\u024c\u024e\5P)\2\u024d\u024a\3\2\2\2\u024e\u0251\3\2\2\2"+
		"\u024f\u024d\3\2\2\2\u024f\u0250\3\2\2\2\u0250O\3\2\2\2\u0251\u024f\3"+
		"\2\2\2\u0252\u0258\7\u009b\2\2\u0253\u0254\7\u009b\2\2\u0254\u0255\7\u00c1"+
		"\2\2\u0255\u0258\5.\30\2\u0256\u0258\78\2\2\u0257\u0252\3\2\2\2\u0257"+
		"\u0253\3\2\2\2\u0257\u0256\3\2\2\2\u0258Q\3\2\2\2\u0259\u025a\7\u00d1"+
		"\2\2\u025aS\3\2\2\2\u025b\u025c\b+\1\2\u025c\u025d\5V,\2\u025d\u0262\3"+
		"\2\2\2\u025e\u025f\f\3\2\2\u025f\u0261\5V,\2\u0260\u025e\3\2\2\2\u0261"+
		"\u0264\3\2\2\2\u0262\u0260\3\2\2\2\u0262\u0263\3\2\2\2\u0263U\3\2\2\2"+
		"\u0264\u0262\3\2\2\2\u0265\u026c\5X-\2\u0266\u026c\5L\'\2\u0267\u026c"+
		"\5b\62\2\u0268\u026c\5J&\2\u0269\u026c\5H%\2\u026a\u026c\5R*\2\u026b\u0265"+
		"\3\2\2\2\u026b\u0266\3\2\2\2\u026b\u0267\3\2\2\2\u026b\u0268\3\2\2\2\u026b"+
		"\u0269\3\2\2\2\u026b\u026a\3\2\2\2\u026cW\3\2\2\2\u026d\u0283\7\3\2\2"+
		"\u026e\u0283\7\61\2\2\u026f\u0283\7\62\2\2\u0270\u0283\7\63\2\2\u0271"+
		"\u0283\7\60\2\2\u0272\u0283\7\65\2\2\u0273\u0283\7\66\2\2\u0274\u0283"+
		"\7\64\2\2\u0275\u0283\7\67\2\2\u0276\u0283\78\2\2\u0277\u0283\79\2\2\u0278"+
		"\u0283\7:\2\2\u0279\u0283\7;\2\2\u027a\u0283\7<\2\2\u027b\u0283\7=\2\2"+
		"\u027c\u0283\7\u009a\2\2\u027d\u027e\7\u009a\2\2\u027e\u027f\7\u00b8\2"+
		"\2\u027f\u0280\5Z.\2\u0280\u0281\7\u00b9\2\2\u0281\u0283\3\2\2\2\u0282"+
		"\u026d\3\2\2\2\u0282\u026e\3\2\2\2\u0282\u026f\3\2\2\2\u0282\u0270\3\2"+
		"\2\2\u0282\u0271\3\2\2\2\u0282\u0272\3\2\2\2\u0282\u0273\3\2\2\2\u0282"+
		"\u0274\3\2\2\2\u0282\u0275\3\2\2\2\u0282\u0276\3\2\2\2\u0282\u0277\3\2"+
		"\2\2\u0282\u0278\3\2\2\2\u0282\u0279\3\2\2\2\u0282\u027a\3\2\2\2\u0282"+
		"\u027b\3\2\2\2\u0282\u027c\3\2\2\2\u0282\u027d\3\2\2\2\u0283Y\3\2\2\2"+
		"\u0284\u0285\b.\1\2\u0285\u0286\7\u009b\2\2\u0286\u028c\3\2\2\2\u0287"+
		"\u0288\f\3\2\2\u0288\u0289\7\u00bf\2\2\u0289\u028b\7\u009b\2\2\u028a\u0287"+
		"\3\2\2\2\u028b\u028e\3\2\2\2\u028c\u028a\3\2\2\2\u028c\u028d\3\2\2\2\u028d"+
		"[\3\2\2\2\u028e\u028c\3\2\2\2\u028f\u0294\5`\61\2\u0290\u0291\5`\61\2"+
		"\u0291\u0292\5^\60\2\u0292\u0294\3\2\2\2\u0293\u028f\3\2\2\2\u0293\u0290"+
		"\3\2\2\2\u0294]\3\2\2\2\u0295\u0296\b\60\1\2\u0296\u0297\7\u00ba\2\2\u0297"+
		"\u029d\7\u00bb\2\2\u0298\u0299\7\u00ba\2\2\u0299\u029a\5&\24\2\u029a\u029b"+
		"\7\u00bb\2\2\u029b\u029d\3\2\2\2\u029c\u0295\3\2\2\2\u029c\u0298\3\2\2"+
		"\2\u029d\u02a8\3\2\2\2\u029e\u029f\f\4\2\2\u029f\u02a0\7\u00ba\2\2\u02a0"+
		"\u02a7\7\u00bb\2\2\u02a1\u02a2\f\3\2\2\u02a2\u02a3\7\u00ba\2\2\u02a3\u02a4"+
		"\5&\24\2\u02a4\u02a5\7\u00bb\2\2\u02a5\u02a7\3\2\2\2\u02a6\u029e\3\2\2"+
		"\2\u02a6\u02a1\3\2\2\2\u02a7\u02aa\3\2\2\2\u02a8\u02a6\3\2\2\2\u02a8\u02a9"+
		"\3\2\2\2\u02a9_\3\2\2\2\u02aa\u02a8\3\2\2\2\u02ab\u0325\7\u008d\2\2\u02ac"+
		"\u0325\7\5\2\2\u02ad\u0325\7\b\2\2\u02ae\u0325\7\6\2\2\u02af\u0325\7\7"+
		"\2\2\u02b0\u0325\7\4\2\2\u02b1\u0325\7\22\2\2\u02b2\u0325\7\23\2\2\u02b3"+
		"\u0325\7\24\2\2\u02b4\u0325\7!\2\2\u02b5\u0325\7\"\2\2\u02b6\u0325\7#"+
		"\2\2\u02b7\u0325\7\t\2\2\u02b8\u0325\7\n\2\2\u02b9\u0325\7\13\2\2\u02ba"+
		"\u0325\7\f\2\2\u02bb\u0325\7\r\2\2\u02bc\u0325\7\16\2\2\u02bd\u0325\7"+
		"\17\2\2\u02be\u0325\7\20\2\2\u02bf\u0325\7\21\2\2\u02c0\u0325\7\25\2\2"+
		"\u02c1\u0325\7\26\2\2\u02c2\u0325\7\27\2\2\u02c3\u0325\7\30\2\2\u02c4"+
		"\u0325\7\31\2\2\u02c5\u0325\7\32\2\2\u02c6\u0325\7\33\2\2\u02c7\u0325"+
		"\7\34\2\2\u02c8\u0325\7\35\2\2\u02c9\u0325\7\36\2\2\u02ca\u0325\7\37\2"+
		"\2\u02cb\u0325\7 \2\2\u02cc\u0325\7$\2\2\u02cd\u0325\7%\2\2\u02ce\u0325"+
		"\7&\2\2\u02cf\u0325\7\'\2\2\u02d0\u0325\7(\2\2\u02d1\u0325\7)\2\2\u02d2"+
		"\u0325\7*\2\2\u02d3\u0325\7+\2\2\u02d4\u0325\7,\2\2\u02d5\u0325\7-\2\2"+
		"\u02d6\u0325\7.\2\2\u02d7\u0325\7/\2\2\u02d8\u0325\7B\2\2\u02d9\u0325"+
		"\7C\2\2\u02da\u0325\7D\2\2\u02db\u0325\7E\2\2\u02dc\u0325\7F\2\2\u02dd"+
		"\u0325\7G\2\2\u02de\u0325\7H\2\2\u02df\u0325\7I\2\2\u02e0\u0325\7a\2\2"+
		"\u02e1\u0325\7b\2\2\u02e2\u0325\7J\2\2\u02e3\u0325\7K\2\2\u02e4\u0325"+
		"\7L\2\2\u02e5\u0325\7M\2\2\u02e6\u0325\7c\2\2\u02e7\u0325\7N\2\2\u02e8"+
		"\u0325\7O\2\2\u02e9\u0325\7P\2\2\u02ea\u0325\7Q\2\2\u02eb\u0325\7d\2\2"+
		"\u02ec\u0325\7R\2\2\u02ed\u0325\7S\2\2\u02ee\u0325\7T\2\2\u02ef\u0325"+
		"\7U\2\2\u02f0\u0325\7V\2\2\u02f1\u0325\7W\2\2\u02f2\u0325\7X\2\2\u02f3"+
		"\u0325\7Y\2\2\u02f4\u0325\7Z\2\2\u02f5\u0325\7[\2\2\u02f6\u0325\7\\\2"+
		"\2\u02f7\u0325\7]\2\2\u02f8\u0325\7^\2\2\u02f9\u0325\7_\2\2\u02fa\u0325"+
		"\7`\2\2\u02fb\u0325\7e\2\2\u02fc\u0325\7f\2\2\u02fd\u0325\7g\2\2\u02fe"+
		"\u0325\7h\2\2\u02ff\u0325\7i\2\2\u0300\u0325\7j\2\2\u0301\u0325\7k\2\2"+
		"\u0302\u0325\7l\2\2\u0303\u0325\7m\2\2\u0304\u0325\7n\2\2\u0305\u0325"+
		"\7o\2\2\u0306\u0325\7p\2\2\u0307\u0325\7q\2\2\u0308\u0325\7r\2\2\u0309"+
		"\u0325\7s\2\2\u030a\u0325\7t\2\2\u030b\u0325\7u\2\2\u030c\u0325\7v\2\2"+
		"\u030d\u0325\7}\2\2\u030e\u0325\7~\2\2\u030f\u0325\7\177\2\2\u0310\u0325"+
		"\7\u0080\2\2\u0311\u0325\7\u0081\2\2\u0312\u0325\7\u0082\2\2\u0313\u0325"+
		"\7\u0083\2\2\u0314\u0325\7\u0084\2\2\u0315\u0325\7\u0085\2\2\u0316\u0325"+
		"\7w\2\2\u0317\u0325\7x\2\2\u0318\u0325\7y\2\2\u0319\u0325\7z\2\2\u031a"+
		"\u0325\7{\2\2\u031b\u0325\7|\2\2\u031c\u0325\7\u0086\2\2\u031d\u0325\7"+
		"\u0087\2\2\u031e\u0325\7\u0088\2\2\u031f\u0325\7\u0089\2\2\u0320\u0325"+
		"\7\u008a\2\2\u0321\u0325\7\u008b\2\2\u0322\u0325\5d\63\2\u0323\u0325\7"+
		"\u009b\2\2\u0324\u02ab\3\2\2\2\u0324\u02ac\3\2\2\2\u0324\u02ad\3\2\2\2"+
		"\u0324\u02ae\3\2\2\2\u0324\u02af\3\2\2\2\u0324\u02b0\3\2\2\2\u0324\u02b1"+
		"\3\2\2\2\u0324\u02b2\3\2\2\2\u0324\u02b3\3\2\2\2\u0324\u02b4\3\2\2\2\u0324"+
		"\u02b5\3\2\2\2\u0324\u02b6\3\2\2\2\u0324\u02b7\3\2\2\2\u0324\u02b8\3\2"+
		"\2\2\u0324\u02b9\3\2\2\2\u0324\u02ba\3\2\2\2\u0324\u02bb\3\2\2\2\u0324"+
		"\u02bc\3\2\2\2\u0324\u02bd\3\2\2\2\u0324\u02be\3\2\2\2\u0324\u02bf\3\2"+
		"\2\2\u0324\u02c0\3\2\2\2\u0324\u02c1\3\2\2\2\u0324\u02c2\3\2\2\2\u0324"+
		"\u02c3\3\2\2\2\u0324\u02c4\3\2\2\2\u0324\u02c5\3\2\2\2\u0324\u02c6\3\2"+
		"\2\2\u0324\u02c7\3\2\2\2\u0324\u02c8\3\2\2\2\u0324\u02c9\3\2\2\2\u0324"+
		"\u02ca\3\2\2\2\u0324\u02cb\3\2\2\2\u0324\u02cc\3\2\2\2\u0324\u02cd\3\2"+
		"\2\2\u0324\u02ce\3\2\2\2\u0324\u02cf\3\2\2\2\u0324\u02d0\3\2\2\2\u0324"+
		"\u02d1\3\2\2\2\u0324\u02d2\3\2\2\2\u0324\u02d3\3\2\2\2\u0324\u02d4\3\2"+
		"\2\2\u0324\u02d5\3\2\2\2\u0324\u02d6\3\2\2\2\u0324\u02d7\3\2\2\2\u0324"+
		"\u02d8\3\2\2\2\u0324\u02d9\3\2\2\2\u0324\u02da\3\2\2\2\u0324\u02db\3\2"+
		"\2\2\u0324\u02dc\3\2\2\2\u0324\u02dd\3\2\2\2\u0324\u02de\3\2\2\2\u0324"+
		"\u02df\3\2\2\2\u0324\u02e0\3\2\2\2\u0324\u02e1\3\2\2\2\u0324\u02e2\3\2"+
		"\2\2\u0324\u02e3\3\2\2\2\u0324\u02e4\3\2\2\2\u0324\u02e5\3\2\2\2\u0324"+
		"\u02e6\3\2\2\2\u0324\u02e7\3\2\2\2\u0324\u02e8\3\2\2\2\u0324\u02e9\3\2"+
		"\2\2\u0324\u02ea\3\2\2\2\u0324\u02eb\3\2\2\2\u0324\u02ec\3\2\2\2\u0324"+
		"\u02ed\3\2\2\2\u0324\u02ee\3\2\2\2\u0324\u02ef\3\2\2\2\u0324\u02f0\3\2"+
		"\2\2\u0324\u02f1\3\2\2\2\u0324\u02f2\3\2\2\2\u0324\u02f3\3\2\2\2\u0324"+
		"\u02f4\3\2\2\2\u0324\u02f5\3\2\2\2\u0324\u02f6\3\2\2\2\u0324\u02f7\3\2"+
		"\2\2\u0324\u02f8\3\2\2\2\u0324\u02f9\3\2\2\2\u0324\u02fa\3\2\2\2\u0324"+
		"\u02fb\3\2\2\2\u0324\u02fc\3\2\2\2\u0324\u02fd\3\2\2\2\u0324\u02fe\3\2"+
		"\2\2\u0324\u02ff\3\2\2\2\u0324\u0300\3\2\2\2\u0324\u0301\3\2\2\2\u0324"+
		"\u0302\3\2\2\2\u0324\u0303\3\2\2\2\u0324\u0304\3\2\2\2\u0324\u0305\3\2"+
		"\2\2\u0324\u0306\3\2\2\2\u0324\u0307\3\2\2\2\u0324\u0308\3\2\2\2\u0324"+
		"\u0309\3\2\2\2\u0324\u030a\3\2\2\2\u0324\u030b\3\2\2\2\u0324\u030c\3\2"+
		"\2\2\u0324\u030d\3\2\2\2\u0324\u030e\3\2\2\2\u0324\u030f\3\2\2\2\u0324"+
		"\u0310\3\2\2\2\u0324\u0311\3\2\2\2\u0324\u0312\3\2\2\2\u0324\u0313\3\2"+
		"\2\2\u0324\u0314\3\2\2\2\u0324\u0315\3\2\2\2\u0324\u0316\3\2\2\2\u0324"+
		"\u0317\3\2\2\2\u0324\u0318\3\2\2\2\u0324\u0319\3\2\2\2\u0324\u031a\3\2"+
		"\2\2\u0324\u031b\3\2\2\2\u0324\u031c\3\2\2\2\u0324\u031d\3\2\2\2\u0324"+
		"\u031e\3\2\2\2\u0324\u031f\3\2\2\2\u0324\u0320\3\2\2\2\u0324\u0321\3\2"+
		"\2\2\u0324\u0322\3\2\2\2\u0324\u0323\3\2\2\2\u0325a\3\2\2\2\u0326\u0327"+
		"\t\5\2\2\u0327c\3\2\2\2\u0328\u0329\7\u008c\2\2\u0329\u032a\7\u009b\2"+
		"\2\u032a\u032b\7\u00bc\2\2\u032b\u032c\5f\64\2\u032c\u032d\7\u00bd\2\2"+
		"\u032d\u0334\3\2\2\2\u032e\u032f\7\u008c\2\2\u032f\u0330\7\u00bc\2\2\u0330"+
		"\u0331\5f\64\2\u0331\u0332\7\u00bd\2\2\u0332\u0334\3\2\2\2\u0333\u0328"+
		"\3\2\2\2\u0333\u032e\3\2\2\2\u0334e\3\2\2\2\u0335\u0336\b\64\1\2\u0336"+
		"\u0337\5h\65\2\u0337\u033c\3\2\2\2\u0338\u0339\f\3\2\2\u0339\u033b\5h"+
		"\65\2\u033a\u0338\3\2\2\2\u033b\u033e\3\2\2\2\u033c\u033a\3\2\2\2\u033c"+
		"\u033d\3\2\2\2\u033dg\3\2\2\2\u033e\u033c\3\2\2\2\u033f\u0340\5\\/\2\u0340"+
		"\u0341\5j\66\2\u0341\u0342\7\u00c2\2\2\u0342\u0349\3\2\2\2\u0343\u0344"+
		"\5T+\2\u0344\u0345\5\\/\2\u0345\u0346\5j\66\2\u0346\u0347\7\u00c2\2\2"+
		"\u0347\u0349\3\2\2\2\u0348\u033f\3\2\2\2\u0348\u0343\3\2\2\2\u0349i\3"+
		"\2\2\2\u034a\u034b\b\66\1\2\u034b\u034c\5l\67\2\u034c\u0352\3\2\2\2\u034d"+
		"\u034e\f\3\2\2\u034e\u034f\7\u00bf\2\2\u034f\u0351\5l\67\2\u0350\u034d"+
		"\3\2\2\2\u0351\u0354\3\2\2\2\u0352\u0350\3\2\2\2\u0352\u0353\3\2\2\2\u0353"+
		"k\3\2\2\2\u0354\u0352\3\2\2\2\u0355\u0359\7\u009b\2\2\u0356\u0357\7\u009b"+
		"\2\2\u0357\u0359\5^\60\2\u0358\u0355\3\2\2\2\u0358\u0356\3\2\2\2\u0359"+
		"m\3\2\2\2\u035a\u0365\5(\25\2\u035b\u035c\7\u00bc\2\2\u035c\u035d\5p9"+
		"\2\u035d\u035e\7\u00bd\2\2\u035e\u0365\3\2\2\2\u035f\u0360\7\u00bc\2\2"+
		"\u0360\u0361\5p9\2\u0361\u0362\7\u00bf\2\2\u0362\u0363\7\u00bd\2\2\u0363"+
		"\u0365\3\2\2\2\u0364\u035a\3\2\2\2\u0364\u035b\3\2\2\2\u0364\u035f\3\2"+
		"\2\2\u0365o\3\2\2\2\u0366\u0367\b9\1\2\u0367\u0368\5n8\2\u0368\u036e\3"+
		"\2\2\2\u0369\u036a\f\3\2\2\u036a\u036b\7\u00bf\2\2\u036b\u036d\5n8\2\u036c"+
		"\u0369\3\2\2\2\u036d\u0370\3\2\2\2\u036e\u036c\3\2\2\2\u036e\u036f\3\2"+
		"\2\2\u036fq\3\2\2\2\u0370\u036e\3\2\2\2\u0371\u0372\5\60\31\2\u0372s\3"+
		"\2\2\2\u0373\u0376\5x=\2\u0374\u0376\5v<\2\u0375\u0373\3\2\2\2\u0375\u0374"+
		"\3\2\2\2\u0376u\3\2\2\2\u0377\u037f\5r:\2\u0378\u037f\5\u0080A\2\u0379"+
		"\u037f\5\u0082B\2\u037a\u037f\5\u0088E\2\u037b\u037f\5\u008cG\2\u037c"+
		"\u037f\5\u008eH\2\u037d\u037f\5\u0096L\2\u037e\u0377\3\2\2\2\u037e\u0378"+
		"\3\2\2\2\u037e\u0379\3\2\2\2\u037e\u037a\3\2\2\2\u037e\u037b\3\2\2\2\u037e"+
		"\u037c\3\2\2\2\u037e\u037d\3\2\2\2\u037fw\3\2\2\2\u0380\u0381\7\u00bc"+
		"\2\2\u0381\u0387\7\u00bd\2\2\u0382\u0383\7\u00bc\2\2\u0383\u0384\5~@\2"+
		"\u0384\u0385\7\u00bd\2\2\u0385\u0387\3\2\2\2\u0386\u0380\3\2\2\2\u0386"+
		"\u0382\3\2\2\2\u0387y\3\2\2\2\u0388\u038b\5|?\2\u0389\u038b\5v<\2\u038a"+
		"\u0388\3\2\2\2\u038a\u0389\3\2\2\2\u038b{\3\2\2\2\u038c\u038d\7\u00bc"+
		"\2\2\u038d\u0393\7\u00bd\2\2\u038e\u038f\7\u00bc\2\2\u038f\u0390\5~@\2"+
		"\u0390\u0391\7\u00bd\2\2\u0391\u0393\3\2\2\2\u0392\u038c\3\2\2\2\u0392"+
		"\u038e\3\2\2\2\u0393}\3\2\2\2\u0394\u0395\b@\1\2\u0395\u0396\5t;\2\u0396"+
		"\u039b\3\2\2\2\u0397\u0398\f\3\2\2\u0398\u039a\5t;\2\u0399\u0397\3\2\2"+
		"\2\u039a\u039d\3\2\2\2\u039b\u0399\3\2\2\2\u039b\u039c\3\2\2\2\u039c\177"+
		"\3\2\2\2\u039d\u039b\3\2\2\2\u039e\u03a3\7\u00c2\2\2\u039f\u03a0\5,\27"+
		"\2\u03a0\u03a1\7\u00c2\2\2\u03a1\u03a3\3\2\2\2\u03a2\u039e\3\2\2\2\u03a2"+
		"\u039f\3\2\2\2\u03a3\u0081\3\2\2\2\u03a4\u03a5\7\u0094\2\2\u03a5\u03a6"+
		"\7\u00b8\2\2\u03a6\u03a7\5,\27\2\u03a7\u03a8\7\u00b9\2\2\u03a8\u03a9\5"+
		"\u0084C\2\u03a9\u0083\3\2\2\2\u03aa\u03ab\5t;\2\u03ab\u03ac\7\u0092\2"+
		"\2\u03ac\u03ad\5t;\2\u03ad\u03b0\3\2\2\2\u03ae\u03b0\5t;\2\u03af\u03aa"+
		"\3\2\2\2\u03af\u03ae\3\2\2\2\u03b0\u0085\3\2\2\2\u03b1\u03b8\5,\27\2\u03b2"+
		"\u03b3\5F$\2\u03b3\u03b4\7\u009b\2\2\u03b4\u03b5\7\u00c1\2\2\u03b5\u03b6"+
		"\5n8\2\u03b6\u03b8\3\2\2\2\u03b7\u03b1\3\2\2\2\u03b7\u03b2\3\2\2\2\u03b8"+
		"\u0087\3\2\2\2\u03b9\u03ba\7\u0097\2\2\u03ba\u03bb\7\u00b8\2\2\u03bb\u03bc"+
		"\5,\27\2\u03bc\u03bd\7\u00b9\2\2\u03bd\u03be\7\u00bc\2\2\u03be\u03bf\5"+
		"\u008aF\2\u03bf\u03c0\7\u00bd\2\2\u03c0\u0089\3\2\2\2\u03c1\u03c4\5~@"+
		"\2\u03c2\u03c4\3\2\2\2\u03c3\u03c1\3\2\2\2\u03c3\u03c2\3\2\2\2\u03c4\u008b"+
		"\3\2\2\2\u03c5\u03c6\7\u0098\2\2\u03c6\u03c7\5,\27\2\u03c7\u03c8\7\u00c0"+
		"\2\2\u03c8\u03cc\3\2\2\2\u03c9\u03ca\7\u0099\2\2\u03ca\u03cc\7\u00c0\2"+
		"\2\u03cb\u03c5\3\2\2\2\u03cb\u03c9\3\2\2\2\u03cc\u008d\3\2\2\2\u03cd\u03ce"+
		"\7\u008e\2\2\u03ce\u03cf\7\u00b8\2\2\u03cf\u03d0\5\u0086D\2\u03d0\u03d1"+
		"\7\u00b9\2\2\u03d1\u03d2\5z>\2\u03d2\u03e3\3\2\2\2\u03d3\u03d4\7\u0091"+
		"\2\2\u03d4\u03d5\5t;\2\u03d5\u03d6\7\u008e\2\2\u03d6\u03d7\7\u00b8\2\2"+
		"\u03d7\u03d8\5,\27\2\u03d8\u03d9\7\u00b9\2\2\u03d9\u03da\7\u00c2\2\2\u03da"+
		"\u03e3\3\2\2\2\u03db\u03dc\7\u0093\2\2\u03dc\u03dd\7\u00b8\2\2\u03dd\u03de"+
		"\5\u0090I\2\u03de\u03df\5\u0094K\2\u03df\u03e0\7\u00b9\2\2\u03e0\u03e1"+
		"\5z>\2\u03e1\u03e3\3\2\2\2\u03e2\u03cd\3\2\2\2\u03e2\u03d3\3\2\2\2\u03e2"+
		"\u03db\3\2\2\2\u03e3\u008f\3\2\2\2\u03e4\u03e7\5\u0080A\2\u03e5\u03e7"+
		"\5r:\2\u03e6\u03e4\3\2\2\2\u03e6\u03e5\3\2\2\2\u03e7\u0091\3\2\2\2\u03e8"+
		"\u03eb\5\u0086D\2\u03e9\u03eb\3\2\2\2\u03ea\u03e8\3\2\2\2\u03ea\u03e9"+
		"\3\2\2\2\u03eb\u0093\3\2\2\2\u03ec\u03ed\5\u0092J\2\u03ed\u03ee\7\u00c2"+
		"\2\2\u03ee\u03f4\3\2\2\2\u03ef\u03f0\5\u0092J\2\u03f0\u03f1\7\u00c2\2"+
		"\2\u03f1\u03f2\5,\27\2\u03f2\u03f4\3\2\2\2\u03f3\u03ec\3\2\2\2\u03f3\u03ef"+
		"\3\2\2\2\u03f4\u0095\3\2\2\2\u03f5\u03f6\7\u0090\2\2\u03f6\u0402\7\u00c2"+
		"\2\2\u03f7\u03f8\7\u008f\2\2\u03f8\u0402\7\u00c2\2\2\u03f9\u03fa\7\u0096"+
		"\2\2\u03fa\u0402\7\u00c2\2\2\u03fb\u03fc\7\u0096\2\2\u03fc\u03fd\5,\27"+
		"\2\u03fd\u03fe\7\u00c2\2\2\u03fe\u0402\3\2\2\2\u03ff\u0400\7\u0095\2\2"+
		"\u0400\u0402\7\u00c2\2\2\u0401\u03f5\3\2\2\2\u0401\u03f7\3\2\2\2\u0401"+
		"\u03f9\3\2\2\2\u0401\u03fb\3\2\2\2\u0401\u03ff\3\2\2\2\u0402\u0097\3\2"+
		"\2\2\u0403\u0404\bM\1\2\u0404\u0405\5\u009aN\2\u0405\u040a\3\2\2\2\u0406"+
		"\u0407\f\3\2\2\u0407\u0409\5\u009aN\2\u0408\u0406\3\2\2\2\u0409\u040c"+
		"\3\2\2\2\u040a\u0408\3\2\2\2\u040a\u040b\3\2\2\2\u040b\u0099\3\2\2\2\u040c"+
		"\u040a\3\2\2\2\u040d\u0411\5\u009cO\2\u040e\u0411\5\60\31\2\u040f\u0411"+
		"\7\u00c2\2\2\u0410\u040d\3\2\2\2\u0410\u040e\3\2\2\2\u0410\u040f\3\2\2"+
		"\2\u0411\u009b\3\2\2\2\u0412\u0413\5\64\33\2\u0413\u0414\5|?\2\u0414\u009d"+
		"\3\2\2\2K\u00aa\u00b7\u00bb\u00d2\u00d5\u00d7\u00e1\u00eb\u00fb\u00fd"+
		"\u0109\u010b\u0117\u0119\u012b\u012d\u0139\u013b\u0146\u0151\u015c\u0167"+
		"\u0172\u017d\u0187\u018e\u019a\u01ce\u01d9\u01e1\u01ec\u01fa\u0204\u021e"+
		"\u0220\u0236\u023c\u024f\u0257\u0262\u026b\u0282\u028c\u0293\u029c\u02a6"+
		"\u02a8\u0324\u0333\u033c\u0348\u0352\u0358\u0364\u036e\u0375\u037e\u0386"+
		"\u038a\u0392\u039b\u03a2\u03af\u03b7\u03c3\u03cb\u03e2\u03e6\u03ea\u03f3"+
		"\u0401\u040a\u0410";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}