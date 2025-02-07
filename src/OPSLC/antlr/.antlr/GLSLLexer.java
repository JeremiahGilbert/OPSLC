// Generated from b:\Development\Repositories\OPVK\src\OPSC\antlr\GLSLLexer.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class GLSLLexer extends Lexer {
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
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"CONST_", "BOOL", "FLOAT", "INT", "UINT", "DOUBLE", "BVEC2", "BVEC3", 
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
		"HIGH_PRECISION", "MEDIUM_PRECISION", "LOW_PRECISION", "PRECISION", "WS", 
		"Identifier", "Identifier_", "Nondigit", "Digit", "FloatingConstant", 
		"FractionalConstant", "ExponentPart", "Sign", "DigitSequence", "DecimalConstant", 
		"OctalConstant", "HexadecimalConstant"
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


	public GLSLLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "GLSLLexer.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\u00d6\u08c8\b\1\4"+
		"\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n"+
		"\4\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64"+
		"\t\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t"+
		"=\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4"+
		"I\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\tS\4T\t"+
		"T\4U\tU\4V\tV\4W\tW\4X\tX\4Y\tY\4Z\tZ\4[\t[\4\\\t\\\4]\t]\4^\t^\4_\t_"+
		"\4`\t`\4a\ta\4b\tb\4c\tc\4d\td\4e\te\4f\tf\4g\tg\4h\th\4i\ti\4j\tj\4k"+
		"\tk\4l\tl\4m\tm\4n\tn\4o\to\4p\tp\4q\tq\4r\tr\4s\ts\4t\tt\4u\tu\4v\tv"+
		"\4w\tw\4x\tx\4y\ty\4z\tz\4{\t{\4|\t|\4}\t}\4~\t~\4\177\t\177\4\u0080\t"+
		"\u0080\4\u0081\t\u0081\4\u0082\t\u0082\4\u0083\t\u0083\4\u0084\t\u0084"+
		"\4\u0085\t\u0085\4\u0086\t\u0086\4\u0087\t\u0087\4\u0088\t\u0088\4\u0089"+
		"\t\u0089\4\u008a\t\u008a\4\u008b\t\u008b\4\u008c\t\u008c\4\u008d\t\u008d"+
		"\4\u008e\t\u008e\4\u008f\t\u008f\4\u0090\t\u0090\4\u0091\t\u0091\4\u0092"+
		"\t\u0092\4\u0093\t\u0093\4\u0094\t\u0094\4\u0095\t\u0095\4\u0096\t\u0096"+
		"\4\u0097\t\u0097\4\u0098\t\u0098\4\u0099\t\u0099\4\u009a\t\u009a\4\u009b"+
		"\t\u009b\4\u009c\t\u009c\4\u009d\t\u009d\4\u009e\t\u009e\4\u009f\t\u009f"+
		"\4\u00a0\t\u00a0\4\u00a1\t\u00a1\4\u00a2\t\u00a2\4\u00a3\t\u00a3\4\u00a4"+
		"\t\u00a4\4\u00a5\t\u00a5\4\u00a6\t\u00a6\4\u00a7\t\u00a7\4\u00a8\t\u00a8"+
		"\4\u00a9\t\u00a9\4\u00aa\t\u00aa\4\u00ab\t\u00ab\4\u00ac\t\u00ac\4\u00ad"+
		"\t\u00ad\4\u00ae\t\u00ae\4\u00af\t\u00af\4\u00b0\t\u00b0\4\u00b1\t\u00b1"+
		"\4\u00b2\t\u00b2\4\u00b3\t\u00b3\4\u00b4\t\u00b4\4\u00b5\t\u00b5\4\u00b6"+
		"\t\u00b6\4\u00b7\t\u00b7\4\u00b8\t\u00b8\4\u00b9\t\u00b9\4\u00ba\t\u00ba"+
		"\4\u00bb\t\u00bb\4\u00bc\t\u00bc\4\u00bd\t\u00bd\4\u00be\t\u00be\4\u00bf"+
		"\t\u00bf\4\u00c0\t\u00c0\4\u00c1\t\u00c1\4\u00c2\t\u00c2\4\u00c3\t\u00c3"+
		"\4\u00c4\t\u00c4\4\u00c5\t\u00c5\4\u00c6\t\u00c6\4\u00c7\t\u00c7\4\u00c8"+
		"\t\u00c8\4\u00c9\t\u00c9\4\u00ca\t\u00ca\4\u00cb\t\u00cb\4\u00cc\t\u00cc"+
		"\4\u00cd\t\u00cd\4\u00ce\t\u00ce\4\u00cf\t\u00cf\4\u00d0\t\u00d0\4\u00d1"+
		"\t\u00d1\4\u00d2\t\u00d2\4\u00d3\t\u00d3\4\u00d4\t\u00d4\4\u00d5\t\u00d5"+
		"\4\u00d6\t\u00d6\4\u00d7\t\u00d7\4\u00d8\t\u00d8\4\u00d9\t\u00d9\4\u00da"+
		"\t\u00da\4\u00db\t\u00db\4\u00dc\t\u00dc\4\u00dd\t\u00dd\4\u00de\t\u00de"+
		"\4\u00df\t\u00df\4\u00e0\t\u00e0\4\u00e1\t\u00e1\3\2\3\2\3\2\3\2\3\2\3"+
		"\2\3\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\6\3\6"+
		"\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3"+
		"\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3"+
		"\13\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20\3\20\3\20"+
		"\3\21\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\23\3\23\3\23\3\23"+
		"\3\23\3\24\3\24\3\24\3\24\3\24\3\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26"+
		"\3\26\3\26\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\30\3\30"+
		"\3\30\3\30\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\36\3\36\3\36\3\36\3\36"+
		"\3\36\3\36\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3 \3 \3 \3 \3 \3 \3!\3!"+
		"\3!\3!\3!\3!\3\"\3\"\3\"\3\"\3\"\3\"\3#\3#\3#\3#\3#\3#\3$\3$\3$\3$\3$"+
		"\3$\3%\3%\3%\3%\3%\3%\3&\3&\3&\3&\3&\3&\3&\3&\3\'\3\'\3\'\3\'\3\'\3\'"+
		"\3\'\3\'\3(\3(\3(\3(\3(\3(\3(\3(\3)\3)\3)\3)\3)\3)\3)\3)\3*\3*\3*\3*\3"+
		"*\3*\3*\3*\3+\3+\3+\3+\3+\3+\3+\3+\3,\3,\3,\3,\3,\3,\3,\3,\3-\3-\3-\3"+
		"-\3-\3-\3-\3-\3.\3.\3.\3.\3.\3.\3.\3.\3/\3/\3/\3/\3/\3/\3/\3/\3/\3\60"+
		"\3\60\3\60\3\61\3\61\3\61\3\61\3\62\3\62\3\62\3\62\3\62\3\62\3\63\3\63"+
		"\3\63\3\63\3\63\3\63\3\63\3\63\3\64\3\64\3\64\3\64\3\64\3\64\3\65\3\65"+
		"\3\65\3\65\3\65\3\65\3\65\3\66\3\66\3\66\3\66\3\66\3\66\3\66\3\67\3\67"+
		"\3\67\3\67\3\67\3\67\3\67\38\38\38\38\38\38\38\38\38\39\39\39\39\39\3"+
		"9\39\39\39\3:\3:\3:\3:\3:\3:\3:\3:\3:\3;\3;\3;\3;\3;\3;\3;\3;\3;\3<\3"+
		"<\3<\3<\3<\3<\3<\3<\3<\3<\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3"+
		">\3>\3>\3>\3>\3?\3?\3?\3?\3?\3?\3?\3@\3@\3@\3@\3@\3@\3@\3A\3A\3A\3A\3"+
		"A\3A\3A\3A\3A\3A\3A\3A\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3C\3C\3C\3C\3C\3"+
		"C\3C\3C\3C\3C\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3E\3E\3E\3E\3E\3E\3"+
		"E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3"+
		"F\3F\3F\3F\3F\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3H\3H\3H\3"+
		"H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3I\3I\3I\3I\3I\3"+
		"I\3I\3I\3I\3I\3I\3J\3J\3J\3J\3J\3J\3J\3J\3J\3J\3J\3K\3K\3K\3K\3K\3K\3"+
		"K\3K\3K\3K\3K\3K\3K\3L\3L\3L\3L\3L\3L\3L\3L\3L\3L\3L\3L\3L\3L\3L\3L\3"+
		"M\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3O\3"+
		"O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3P\3P\3P\3P\3P\3P\3P\3P\3P\3P\3P\3"+
		"P\3P\3P\3P\3P\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3R\3R\3R\3R\3R\3R\3R\3R\3"+
		"R\3R\3R\3R\3R\3R\3R\3R\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3"+
		"T\3T\3T\3T\3T\3T\3T\3T\3T\3T\3T\3T\3T\3T\3T\3T\3T\3T\3T\3T\3T\3U\3U\3"+
		"U\3U\3U\3U\3U\3U\3U\3U\3U\3V\3V\3V\3V\3V\3V\3V\3V\3V\3V\3V\3V\3V\3V\3"+
		"V\3V\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\3"+
		"X\3X\3X\3X\3X\3X\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Z\3Z\3Z\3"+
		"Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3[\3[\3[\3[\3[\3[\3"+
		"[\3[\3[\3[\3[\3[\3[\3[\3[\3\\\3\\\3\\\3\\\3\\\3\\\3\\\3\\\3\\\3\\\3\\"+
		"\3\\\3\\\3\\\3\\\3]\3]\3]\3]\3]\3]\3]\3]\3]\3]\3]\3]\3]\3]\3^\3^\3^\3"+
		"^\3^\3^\3^\3^\3^\3^\3^\3^\3^\3^\3^\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3"+
		"_\3_\3_\3_\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3a\3a\3"+
		"a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3b\3b\3"+
		"b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3c\3c\3c\3c\3c\3c\3c\3"+
		"c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3"+
		"e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3"+
		"f\3f\3f\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3h\3h\3h\3"+
		"h\3h\3h\3h\3h\3h\3h\3h\3h\3h\3h\3h\3h\3h\3h\3i\3i\3i\3i\3i\3i\3i\3i\3"+
		"i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3j\3j\3j\3j\3j\3j\3j\3j\3k\3k\3k\3k\3k\3"+
		"k\3k\3k\3k\3l\3l\3l\3l\3l\3l\3l\3l\3l\3m\3m\3m\3m\3m\3m\3m\3m\3n\3n\3"+
		"n\3n\3n\3n\3n\3n\3n\3o\3o\3o\3o\3o\3o\3o\3o\3o\3p\3p\3p\3p\3p\3p\3p\3"+
		"p\3p\3p\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3r\3r\3r\3r\3r\3r\3r\3r\3r\3"+
		"r\3r\3s\3s\3s\3s\3s\3s\3s\3s\3s\3s\3s\3s\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3v\3v\3v\3v\3v\3v\3"+
		"v\3v\3v\3v\3v\3v\3v\3w\3w\3w\3w\3w\3w\3w\3w\3w\3w\3w\3w\3w\3w\3x\3x\3"+
		"x\3x\3x\3x\3x\3x\3x\3x\3x\3x\3x\3x\3y\3y\3y\3y\3y\3y\3y\3y\3y\3y\3y\3"+
		"y\3y\3y\3y\3z\3z\3z\3z\3z\3z\3z\3z\3z\3z\3z\3z\3z\3z\3z\3z\3{\3{\3{\3"+
		"{\3{\3{\3{\3{\3{\3{\3{\3{\3{\3{\3{\3{\3|\3|\3|\3|\3|\3|\3|\3|\3}\3}\3"+
		"}\3}\3}\3}\3}\3}\3}\3~\3~\3~\3~\3~\3~\3~\3~\3~\3\177\3\177\3\177\3\177"+
		"\3\177\3\177\3\177\3\177\3\177\3\177\3\177\3\177\3\177\3\u0080\3\u0080"+
		"\3\u0080\3\u0080\3\u0080\3\u0080\3\u0080\3\u0080\3\u0080\3\u0080\3\u0080"+
		"\3\u0080\3\u0080\3\u0080\3\u0081\3\u0081\3\u0081\3\u0081\3\u0081\3\u0081"+
		"\3\u0081\3\u0081\3\u0081\3\u0081\3\u0081\3\u0081\3\u0081\3\u0081\3\u0082"+
		"\3\u0082\3\u0082\3\u0082\3\u0082\3\u0082\3\u0082\3\u0082\3\u0082\3\u0082"+
		"\3\u0082\3\u0082\3\u0083\3\u0083\3\u0083\3\u0083\3\u0083\3\u0083\3\u0083"+
		"\3\u0083\3\u0083\3\u0083\3\u0083\3\u0083\3\u0083\3\u0084\3\u0084\3\u0084"+
		"\3\u0084\3\u0084\3\u0084\3\u0084\3\u0084\3\u0084\3\u0084\3\u0084\3\u0084"+
		"\3\u0084\3\u0085\3\u0085\3\u0085\3\u0085\3\u0085\3\u0085\3\u0085\3\u0085"+
		"\3\u0085\3\u0085\3\u0086\3\u0086\3\u0086\3\u0086\3\u0086\3\u0086\3\u0086"+
		"\3\u0086\3\u0086\3\u0086\3\u0086\3\u0087\3\u0087\3\u0087\3\u0087\3\u0087"+
		"\3\u0087\3\u0087\3\u0087\3\u0087\3\u0087\3\u0087\3\u0088\3\u0088\3\u0088"+
		"\3\u0088\3\u0088\3\u0088\3\u0088\3\u0088\3\u0088\3\u0088\3\u0088\3\u0088"+
		"\3\u0088\3\u0088\3\u0088\3\u0089\3\u0089\3\u0089\3\u0089\3\u0089\3\u0089"+
		"\3\u0089\3\u0089\3\u0089\3\u0089\3\u0089\3\u0089\3\u0089\3\u0089\3\u0089"+
		"\3\u0089\3\u008a\3\u008a\3\u008a\3\u008a\3\u008a\3\u008a\3\u008a\3\u008a"+
		"\3\u008a\3\u008a\3\u008a\3\u008a\3\u008a\3\u008a\3\u008a\3\u008a\3\u008b"+
		"\3\u008b\3\u008b\3\u008b\3\u008b\3\u008b\3\u008b\3\u008c\3\u008c\3\u008c"+
		"\3\u008c\3\u008c\3\u008d\3\u008d\3\u008d\3\u008d\3\u008d\3\u008d\3\u008e"+
		"\3\u008e\3\u008e\3\u008e\3\u008e\3\u008e\3\u008f\3\u008f\3\u008f\3\u008f"+
		"\3\u008f\3\u008f\3\u008f\3\u008f\3\u008f\3\u0090\3\u0090\3\u0090\3\u0091"+
		"\3\u0091\3\u0091\3\u0091\3\u0091\3\u0092\3\u0092\3\u0092\3\u0092\3\u0093"+
		"\3\u0093\3\u0093\3\u0094\3\u0094\3\u0094\3\u0094\3\u0094\3\u0094\3\u0094"+
		"\3\u0094\3\u0095\3\u0095\3\u0095\3\u0095\3\u0095\3\u0095\3\u0095\3\u0096"+
		"\3\u0096\3\u0096\3\u0096\3\u0096\3\u0096\3\u0096\3\u0097\3\u0097\3\u0097"+
		"\3\u0097\3\u0097\3\u0098\3\u0098\3\u0098\3\u0098\3\u0098\3\u0098\3\u0098"+
		"\3\u0098\3\u0099\3\u0099\3\u0099\3\u0099\3\u0099\3\u0099\3\u0099\3\u0099"+
		"\3\u0099\3\u0099\3\u0099\3\u009a\3\u009a\3\u009b\3\u009b\3\u009c\3\u009c"+
		"\5\u009c\u07b9\n\u009c\3\u009d\3\u009d\3\u009d\5\u009d\u07be\n\u009d\3"+
		"\u009e\3\u009e\3\u009e\3\u009f\3\u009f\3\u009f\3\u009f\3\u009f\3\u009f"+
		"\3\u009f\3\u009f\3\u009f\5\u009f\u07cc\n\u009f\3\u00a0\3\u00a0\3\u00a0"+
		"\3\u00a0\3\u00a0\5\u00a0\u07d3\n\u00a0\3\u00a1\3\u00a1\3\u00a2\3\u00a2"+
		"\3\u00a2\3\u00a3\3\u00a3\3\u00a3\3\u00a4\3\u00a4\3\u00a4\3\u00a5\3\u00a5"+
		"\3\u00a5\3\u00a6\3\u00a6\3\u00a6\3\u00a7\3\u00a7\3\u00a7\3\u00a8\3\u00a8"+
		"\3\u00a8\3\u00a9\3\u00a9\3\u00a9\3\u00aa\3\u00aa\3\u00aa\3\u00ab\3\u00ab"+
		"\3\u00ab\3\u00ac\3\u00ac\3\u00ac\3\u00ad\3\u00ad\3\u00ad\3\u00ae\3\u00ae"+
		"\3\u00ae\3\u00af\3\u00af\3\u00af\3\u00b0\3\u00b0\3\u00b0\3\u00b1\3\u00b1"+
		"\3\u00b1\3\u00b1\3\u00b2\3\u00b2\3\u00b2\3\u00b2\3\u00b3\3\u00b3\3\u00b3"+
		"\3\u00b4\3\u00b4\3\u00b4\3\u00b5\3\u00b5\3\u00b5\3\u00b6\3\u00b6\3\u00b6"+
		"\3\u00b7\3\u00b7\3\u00b8\3\u00b8\3\u00b9\3\u00b9\3\u00ba\3\u00ba\3\u00bb"+
		"\3\u00bb\3\u00bc\3\u00bc\3\u00bd\3\u00bd\3\u00be\3\u00be\3\u00bf\3\u00bf"+
		"\3\u00c0\3\u00c0\3\u00c1\3\u00c1\3\u00c2\3\u00c2\3\u00c3\3\u00c3\3\u00c4"+
		"\3\u00c4\3\u00c5\3\u00c5\3\u00c6\3\u00c6\3\u00c7\3\u00c7\3\u00c8\3\u00c8"+
		"\3\u00c9\3\u00c9\3\u00ca\3\u00ca\3\u00cb\3\u00cb\3\u00cc\3\u00cc\3\u00cd"+
		"\3\u00cd\3\u00ce\3\u00ce\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf"+
		"\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0"+
		"\3\u00d0\3\u00d0\3\u00d0\3\u00d1\3\u00d1\3\u00d1\3\u00d1\3\u00d1\3\u00d1"+
		"\3\u00d2\3\u00d2\3\u00d2\3\u00d2\3\u00d2\3\u00d2\3\u00d2\3\u00d2\3\u00d3"+
		"\3\u00d3\3\u00d3\3\u00d3\3\u00d3\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d4"+
		"\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d5\3\u00d5\3\u00d5\3\u00d5"+
		"\3\u00d6\3\u00d6\3\u00d6\3\u00d7\3\u00d7\3\u00d7\3\u00d7\3\u00d7\3\u00d7"+
		"\3\u00d7\5\u00d7\u0885\n\u00d7\3\u00d8\3\u00d8\3\u00d9\3\u00d9\3\u00da"+
		"\3\u00da\5\u00da\u088d\n\u00da\3\u00da\3\u00da\3\u00da\5\u00da\u0892\n"+
		"\u00da\3\u00db\3\u00db\3\u00db\3\u00db\3\u00db\3\u00db\3\u00db\3\u00db"+
		"\3\u00db\5\u00db\u089d\n\u00db\3\u00dc\3\u00dc\5\u00dc\u08a1\n\u00dc\3"+
		"\u00dc\3\u00dc\3\u00dc\5\u00dc\u08a6\n\u00dc\3\u00dc\5\u00dc\u08a9\n\u00dc"+
		"\3\u00dd\3\u00dd\3\u00de\3\u00de\3\u00de\3\u00de\5\u00de\u08b1\n\u00de"+
		"\3\u00df\3\u00df\7\u00df\u08b5\n\u00df\f\u00df\16\u00df\u08b8\13\u00df"+
		"\3\u00e0\3\u00e0\7\u00e0\u08bc\n\u00e0\f\u00e0\16\u00e0\u08bf\13\u00e0"+
		"\3\u00e1\3\u00e1\3\u00e1\3\u00e1\5\u00e1\u08c5\n\u00e1\3\u00e1\3\u00e1"+
		"\2\2\u00e2\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33"+
		"\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67"+
		"\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\62c\63e\64g\65"+
		"i\66k\67m8o9q:s;u<w=y>{?}@\177A\u0081B\u0083C\u0085D\u0087E\u0089F\u008b"+
		"G\u008dH\u008fI\u0091J\u0093K\u0095L\u0097M\u0099N\u009bO\u009dP\u009f"+
		"Q\u00a1R\u00a3S\u00a5T\u00a7U\u00a9V\u00abW\u00adX\u00afY\u00b1Z\u00b3"+
		"[\u00b5\\\u00b7]\u00b9^\u00bb_\u00bd`\u00bfa\u00c1b\u00c3c\u00c5d\u00c7"+
		"e\u00c9f\u00cbg\u00cdh\u00cfi\u00d1j\u00d3k\u00d5l\u00d7m\u00d9n\u00db"+
		"o\u00ddp\u00dfq\u00e1r\u00e3s\u00e5t\u00e7u\u00e9v\u00ebw\u00edx\u00ef"+
		"y\u00f1z\u00f3{\u00f5|\u00f7}\u00f9~\u00fb\177\u00fd\u0080\u00ff\u0081"+
		"\u0101\u0082\u0103\u0083\u0105\u0084\u0107\u0085\u0109\u0086\u010b\u0087"+
		"\u010d\u0088\u010f\u0089\u0111\u008a\u0113\u008b\u0115\u008c\u0117\u008d"+
		"\u0119\u008e\u011b\u008f\u011d\u0090\u011f\u0091\u0121\u0092\u0123\u0093"+
		"\u0125\u0094\u0127\u0095\u0129\u0096\u012b\u0097\u012d\u0098\u012f\u0099"+
		"\u0131\u009a\u0133\u009b\u0135\u009c\u0137\u009d\u0139\u009e\u013b\u009f"+
		"\u013d\u00a0\u013f\u00a1\u0141\u00a2\u0143\u00a3\u0145\u00a4\u0147\u00a5"+
		"\u0149\u00a6\u014b\u00a7\u014d\u00a8\u014f\u00a9\u0151\u00aa\u0153\u00ab"+
		"\u0155\u00ac\u0157\u00ad\u0159\u00ae\u015b\u00af\u015d\u00b0\u015f\u00b1"+
		"\u0161\u00b2\u0163\u00b3\u0165\u00b4\u0167\u00b5\u0169\u00b6\u016b\u00b7"+
		"\u016d\u00b8\u016f\u00b9\u0171\u00ba\u0173\u00bb\u0175\u00bc\u0177\u00bd"+
		"\u0179\u00be\u017b\u00bf\u017d\u00c0\u017f\u00c1\u0181\u00c2\u0183\u00c3"+
		"\u0185\u00c4\u0187\u00c5\u0189\u00c6\u018b\u00c7\u018d\u00c8\u018f\u00c9"+
		"\u0191\u00ca\u0193\u00cb\u0195\u00cc\u0197\u00cd\u0199\u00ce\u019b\u00cf"+
		"\u019d\u00d0\u019f\u00d1\u01a1\u00d2\u01a3\u00d3\u01a5\u00d4\u01a7\u00d5"+
		"\u01a9\u00d6\u01ab\2\u01ad\2\u01af\2\u01b1\2\u01b3\2\u01b5\2\u01b7\2\u01b9"+
		"\2\u01bb\2\u01bd\2\u01bf\2\u01c1\2\3\2\13\4\2HHhh\4\2WWww\5\2\13\f\17"+
		"\17\"\"\5\2C\\aac|\3\2\62;\4\2--//\3\2\63;\3\2\629\4\2\62;Ch\2\u08cd\2"+
		"\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2"+
		"\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2"+
		"\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2"+
		"\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2"+
		"\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2"+
		"\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2"+
		"\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U"+
		"\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2"+
		"\2\2\2c\3\2\2\2\2e\3\2\2\2\2g\3\2\2\2\2i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2"+
		"\2o\3\2\2\2\2q\3\2\2\2\2s\3\2\2\2\2u\3\2\2\2\2w\3\2\2\2\2y\3\2\2\2\2{"+
		"\3\2\2\2\2}\3\2\2\2\2\177\3\2\2\2\2\u0081\3\2\2\2\2\u0083\3\2\2\2\2\u0085"+
		"\3\2\2\2\2\u0087\3\2\2\2\2\u0089\3\2\2\2\2\u008b\3\2\2\2\2\u008d\3\2\2"+
		"\2\2\u008f\3\2\2\2\2\u0091\3\2\2\2\2\u0093\3\2\2\2\2\u0095\3\2\2\2\2\u0097"+
		"\3\2\2\2\2\u0099\3\2\2\2\2\u009b\3\2\2\2\2\u009d\3\2\2\2\2\u009f\3\2\2"+
		"\2\2\u00a1\3\2\2\2\2\u00a3\3\2\2\2\2\u00a5\3\2\2\2\2\u00a7\3\2\2\2\2\u00a9"+
		"\3\2\2\2\2\u00ab\3\2\2\2\2\u00ad\3\2\2\2\2\u00af\3\2\2\2\2\u00b1\3\2\2"+
		"\2\2\u00b3\3\2\2\2\2\u00b5\3\2\2\2\2\u00b7\3\2\2\2\2\u00b9\3\2\2\2\2\u00bb"+
		"\3\2\2\2\2\u00bd\3\2\2\2\2\u00bf\3\2\2\2\2\u00c1\3\2\2\2\2\u00c3\3\2\2"+
		"\2\2\u00c5\3\2\2\2\2\u00c7\3\2\2\2\2\u00c9\3\2\2\2\2\u00cb\3\2\2\2\2\u00cd"+
		"\3\2\2\2\2\u00cf\3\2\2\2\2\u00d1\3\2\2\2\2\u00d3\3\2\2\2\2\u00d5\3\2\2"+
		"\2\2\u00d7\3\2\2\2\2\u00d9\3\2\2\2\2\u00db\3\2\2\2\2\u00dd\3\2\2\2\2\u00df"+
		"\3\2\2\2\2\u00e1\3\2\2\2\2\u00e3\3\2\2\2\2\u00e5\3\2\2\2\2\u00e7\3\2\2"+
		"\2\2\u00e9\3\2\2\2\2\u00eb\3\2\2\2\2\u00ed\3\2\2\2\2\u00ef\3\2\2\2\2\u00f1"+
		"\3\2\2\2\2\u00f3\3\2\2\2\2\u00f5\3\2\2\2\2\u00f7\3\2\2\2\2\u00f9\3\2\2"+
		"\2\2\u00fb\3\2\2\2\2\u00fd\3\2\2\2\2\u00ff\3\2\2\2\2\u0101\3\2\2\2\2\u0103"+
		"\3\2\2\2\2\u0105\3\2\2\2\2\u0107\3\2\2\2\2\u0109\3\2\2\2\2\u010b\3\2\2"+
		"\2\2\u010d\3\2\2\2\2\u010f\3\2\2\2\2\u0111\3\2\2\2\2\u0113\3\2\2\2\2\u0115"+
		"\3\2\2\2\2\u0117\3\2\2\2\2\u0119\3\2\2\2\2\u011b\3\2\2\2\2\u011d\3\2\2"+
		"\2\2\u011f\3\2\2\2\2\u0121\3\2\2\2\2\u0123\3\2\2\2\2\u0125\3\2\2\2\2\u0127"+
		"\3\2\2\2\2\u0129\3\2\2\2\2\u012b\3\2\2\2\2\u012d\3\2\2\2\2\u012f\3\2\2"+
		"\2\2\u0131\3\2\2\2\2\u0133\3\2\2\2\2\u0135\3\2\2\2\2\u0137\3\2\2\2\2\u0139"+
		"\3\2\2\2\2\u013b\3\2\2\2\2\u013d\3\2\2\2\2\u013f\3\2\2\2\2\u0141\3\2\2"+
		"\2\2\u0143\3\2\2\2\2\u0145\3\2\2\2\2\u0147\3\2\2\2\2\u0149\3\2\2\2\2\u014b"+
		"\3\2\2\2\2\u014d\3\2\2\2\2\u014f\3\2\2\2\2\u0151\3\2\2\2\2\u0153\3\2\2"+
		"\2\2\u0155\3\2\2\2\2\u0157\3\2\2\2\2\u0159\3\2\2\2\2\u015b\3\2\2\2\2\u015d"+
		"\3\2\2\2\2\u015f\3\2\2\2\2\u0161\3\2\2\2\2\u0163\3\2\2\2\2\u0165\3\2\2"+
		"\2\2\u0167\3\2\2\2\2\u0169\3\2\2\2\2\u016b\3\2\2\2\2\u016d\3\2\2\2\2\u016f"+
		"\3\2\2\2\2\u0171\3\2\2\2\2\u0173\3\2\2\2\2\u0175\3\2\2\2\2\u0177\3\2\2"+
		"\2\2\u0179\3\2\2\2\2\u017b\3\2\2\2\2\u017d\3\2\2\2\2\u017f\3\2\2\2\2\u0181"+
		"\3\2\2\2\2\u0183\3\2\2\2\2\u0185\3\2\2\2\2\u0187\3\2\2\2\2\u0189\3\2\2"+
		"\2\2\u018b\3\2\2\2\2\u018d\3\2\2\2\2\u018f\3\2\2\2\2\u0191\3\2\2\2\2\u0193"+
		"\3\2\2\2\2\u0195\3\2\2\2\2\u0197\3\2\2\2\2\u0199\3\2\2\2\2\u019b\3\2\2"+
		"\2\2\u019d\3\2\2\2\2\u019f\3\2\2\2\2\u01a1\3\2\2\2\2\u01a3\3\2\2\2\2\u01a5"+
		"\3\2\2\2\2\u01a7\3\2\2\2\2\u01a9\3\2\2\2\3\u01c3\3\2\2\2\5\u01c9\3\2\2"+
		"\2\7\u01ce\3\2\2\2\t\u01d4\3\2\2\2\13\u01d8\3\2\2\2\r\u01dd\3\2\2\2\17"+
		"\u01e4\3\2\2\2\21\u01ea\3\2\2\2\23\u01f0\3\2\2\2\25\u01f6\3\2\2\2\27\u01fc"+
		"\3\2\2\2\31\u0202\3\2\2\2\33\u0208\3\2\2\2\35\u020e\3\2\2\2\37\u0214\3"+
		"\2\2\2!\u021a\3\2\2\2#\u021f\3\2\2\2%\u0224\3\2\2\2\'\u0229\3\2\2\2)\u022e"+
		"\3\2\2\2+\u0233\3\2\2\2-\u0238\3\2\2\2/\u023f\3\2\2\2\61\u0246\3\2\2\2"+
		"\63\u024d\3\2\2\2\65\u0254\3\2\2\2\67\u025b\3\2\2\29\u0262\3\2\2\2;\u0269"+
		"\3\2\2\2=\u0270\3\2\2\2?\u0277\3\2\2\2A\u027d\3\2\2\2C\u0283\3\2\2\2E"+
		"\u0289\3\2\2\2G\u028f\3\2\2\2I\u0295\3\2\2\2K\u029b\3\2\2\2M\u02a3\3\2"+
		"\2\2O\u02ab\3\2\2\2Q\u02b3\3\2\2\2S\u02bb\3\2\2\2U\u02c3\3\2\2\2W\u02cb"+
		"\3\2\2\2Y\u02d3\3\2\2\2[\u02db\3\2\2\2]\u02e3\3\2\2\2_\u02ec\3\2\2\2a"+
		"\u02ef\3\2\2\2c\u02f3\3\2\2\2e\u02f9\3\2\2\2g\u0301\3\2\2\2i\u0307\3\2"+
		"\2\2k\u030e\3\2\2\2m\u0315\3\2\2\2o\u031c\3\2\2\2q\u0325\3\2\2\2s\u032e"+
		"\3\2\2\2u\u0337\3\2\2\2w\u0340\3\2\2\2y\u034a\3\2\2\2{\u0358\3\2\2\2}"+
		"\u035d\3\2\2\2\177\u0364\3\2\2\2\u0081\u036b\3\2\2\2\u0083\u0377\3\2\2"+
		"\2\u0085\u0381\3\2\2\2\u0087\u038b\3\2\2\2\u0089\u0397\3\2\2\2\u008b\u03a7"+
		"\3\2\2\2\u008d\u03b9\3\2\2\2\u008f\u03c8\3\2\2\2\u0091\u03dd\3\2\2\2\u0093"+
		"\u03e8\3\2\2\2\u0095\u03f3\3\2\2\2\u0097\u0400\3\2\2\2\u0099\u0410\3\2"+
		"\2\2\u009b\u041b\3\2\2\2\u009d\u0426\3\2\2\2\u009f\u0433\3\2\2\2\u00a1"+
		"\u0443\3\2\2\2\u00a3\u044d\3\2\2\2\u00a5\u045d\3\2\2\2\u00a7\u046c\3\2"+
		"\2\2\u00a9\u0481\3\2\2\2\u00ab\u048c\3\2\2\2\u00ad\u049c\3\2\2\2\u00af"+
		"\u04a7\3\2\2\2\u00b1\u04b7\3\2\2\2\u00b3\u04c5\3\2\2\2\u00b5\u04d9\3\2"+
		"\2\2\u00b7\u04e8\3\2\2\2\u00b9\u04f7\3\2\2\2\u00bb\u0505\3\2\2\2\u00bd"+
		"\u0514\3\2\2\2\u00bf\u0523\3\2\2\2\u00c1\u0534\3\2\2\2\u00c3\u054b\3\2"+
		"\2\2\u00c5\u055d\3\2\2\2\u00c7\u056f\3\2\2\2\u00c9\u057b\3\2\2\2\u00cb"+
		"\u0588\3\2\2\2\u00cd\u0595\3\2\2\2\u00cf\u05a6\3\2\2\2\u00d1\u05b8\3\2"+
		"\2\2\u00d3\u05ca\3\2\2\2\u00d5\u05d2\3\2\2\2\u00d7\u05db\3\2\2\2\u00d9"+
		"\u05e4\3\2\2\2\u00db\u05ec\3\2\2\2\u00dd\u05f5\3\2\2\2\u00df\u05fe\3\2"+
		"\2\2\u00e1\u0608\3\2\2\2\u00e3\u0613\3\2\2\2\u00e5\u061e\3\2\2\2\u00e7"+
		"\u062a\3\2\2\2\u00e9\u0637\3\2\2\2\u00eb\u0644\3\2\2\2\u00ed\u0651\3\2"+
		"\2\2\u00ef\u065f\3\2\2\2\u00f1\u066d\3\2\2\2\u00f3\u067c\3\2\2\2\u00f5"+
		"\u068c\3\2\2\2\u00f7\u069c\3\2\2\2\u00f9\u06a4\3\2\2\2\u00fb\u06ad\3\2"+
		"\2\2\u00fd\u06b6\3\2\2\2\u00ff\u06c3\3\2\2\2\u0101\u06d1\3\2\2\2\u0103"+
		"\u06df\3\2\2\2\u0105\u06eb\3\2\2\2\u0107\u06f8\3\2\2\2\u0109\u0705\3\2"+
		"\2\2\u010b\u070f\3\2\2\2\u010d\u071a\3\2\2\2\u010f\u0725\3\2\2\2\u0111"+
		"\u0734\3\2\2\2\u0113\u0744\3\2\2\2\u0115\u0754\3\2\2\2\u0117\u075b\3\2"+
		"\2\2\u0119\u0760\3\2\2\2\u011b\u0766\3\2\2\2\u011d\u076c\3\2\2\2\u011f"+
		"\u0775\3\2\2\2\u0121\u0778\3\2\2\2\u0123\u077d\3\2\2\2\u0125\u0781\3\2"+
		"\2\2\u0127\u0784\3\2\2\2\u0129\u078c\3\2\2\2\u012b\u0793\3\2\2\2\u012d"+
		"\u079a\3\2\2\2\u012f\u079f\3\2\2\2\u0131\u07a7\3\2\2\2\u0133\u07b2\3\2"+
		"\2\2\u0135\u07b4\3\2\2\2\u0137\u07b6\3\2\2\2\u0139\u07bd\3\2\2\2\u013b"+
		"\u07bf\3\2\2\2\u013d\u07cb\3\2\2\2\u013f\u07cd\3\2\2\2\u0141\u07d4\3\2"+
		"\2\2\u0143\u07d6\3\2\2\2\u0145\u07d9\3\2\2\2\u0147\u07dc\3\2\2\2\u0149"+
		"\u07df\3\2\2\2\u014b\u07e2\3\2\2\2\u014d\u07e5\3\2\2\2\u014f\u07e8\3\2"+
		"\2\2\u0151\u07eb\3\2\2\2\u0153\u07ee\3\2\2\2\u0155\u07f1\3\2\2\2\u0157"+
		"\u07f4\3\2\2\2\u0159\u07f7\3\2\2\2\u015b\u07fa\3\2\2\2\u015d\u07fd\3\2"+
		"\2\2\u015f\u0800\3\2\2\2\u0161\u0803\3\2\2\2\u0163\u0807\3\2\2\2\u0165"+
		"\u080b\3\2\2\2\u0167\u080e\3\2\2\2\u0169\u0811\3\2\2\2\u016b\u0814\3\2"+
		"\2\2\u016d\u0817\3\2\2\2\u016f\u0819\3\2\2\2\u0171\u081b\3\2\2\2\u0173"+
		"\u081d\3\2\2\2\u0175\u081f\3\2\2\2\u0177\u0821\3\2\2\2\u0179\u0823\3\2"+
		"\2\2\u017b\u0825\3\2\2\2\u017d\u0827\3\2\2\2\u017f\u0829\3\2\2\2\u0181"+
		"\u082b\3\2\2\2\u0183\u082d\3\2\2\2\u0185\u082f\3\2\2\2\u0187\u0831\3\2"+
		"\2\2\u0189\u0833\3\2\2\2\u018b\u0835\3\2\2\2\u018d\u0837\3\2\2\2\u018f"+
		"\u0839\3\2\2\2\u0191\u083b\3\2\2\2\u0193\u083d\3\2\2\2\u0195\u083f\3\2"+
		"\2\2\u0197\u0841\3\2\2\2\u0199\u0843\3\2\2\2\u019b\u0845\3\2\2\2\u019d"+
		"\u0847\3\2\2\2\u019f\u0851\3\2\2\2\u01a1\u0859\3\2\2\2\u01a3\u085f\3\2"+
		"\2\2\u01a5\u0867\3\2\2\2\u01a7\u086c\3\2\2\2\u01a9\u0876\3\2\2\2\u01ab"+
		"\u087a\3\2\2\2\u01ad\u0884\3\2\2\2\u01af\u0886\3\2\2\2\u01b1\u0888\3\2"+
		"\2\2\u01b3\u0891\3\2\2\2\u01b5\u089c\3\2\2\2\u01b7\u08a8\3\2\2\2\u01b9"+
		"\u08aa\3\2\2\2\u01bb\u08b0\3\2\2\2\u01bd\u08b2\3\2\2\2\u01bf\u08b9\3\2"+
		"\2\2\u01c1\u08c4\3\2\2\2\u01c3\u01c4\7e\2\2\u01c4\u01c5\7q\2\2\u01c5\u01c6"+
		"\7p\2\2\u01c6\u01c7\7u\2\2\u01c7\u01c8\7v\2\2\u01c8\4\3\2\2\2\u01c9\u01ca"+
		"\7d\2\2\u01ca\u01cb\7q\2\2\u01cb\u01cc\7q\2\2\u01cc\u01cd\7n\2\2\u01cd"+
		"\6\3\2\2\2\u01ce\u01cf\7h\2\2\u01cf\u01d0\7n\2\2\u01d0\u01d1\7q\2\2\u01d1"+
		"\u01d2\7c\2\2\u01d2\u01d3\7v\2\2\u01d3\b\3\2\2\2\u01d4\u01d5\7k\2\2\u01d5"+
		"\u01d6\7p\2\2\u01d6\u01d7\7v\2\2\u01d7\n\3\2\2\2\u01d8\u01d9\7w\2\2\u01d9"+
		"\u01da\7k\2\2\u01da\u01db\7p\2\2\u01db\u01dc\7v\2\2\u01dc\f\3\2\2\2\u01dd"+
		"\u01de\7f\2\2\u01de\u01df\7q\2\2\u01df\u01e0\7w\2\2\u01e0\u01e1\7d\2\2"+
		"\u01e1\u01e2\7n\2\2\u01e2\u01e3\7g\2\2\u01e3\16\3\2\2\2\u01e4\u01e5\7"+
		"d\2\2\u01e5\u01e6\7x\2\2\u01e6\u01e7\7g\2\2\u01e7\u01e8\7e\2\2\u01e8\u01e9"+
		"\7\64\2\2\u01e9\20\3\2\2\2\u01ea\u01eb\7d\2\2\u01eb\u01ec\7x\2\2\u01ec"+
		"\u01ed\7g\2\2\u01ed\u01ee\7e\2\2\u01ee\u01ef\7\65\2\2\u01ef\22\3\2\2\2"+
		"\u01f0\u01f1\7d\2\2\u01f1\u01f2\7x\2\2\u01f2\u01f3\7g\2\2\u01f3\u01f4"+
		"\7e\2\2\u01f4\u01f5\7\66\2\2\u01f5\24\3\2\2\2\u01f6\u01f7\7k\2\2\u01f7"+
		"\u01f8\7x\2\2\u01f8\u01f9\7g\2\2\u01f9\u01fa\7e\2\2\u01fa\u01fb\7\64\2"+
		"\2\u01fb\26\3\2\2\2\u01fc\u01fd\7k\2\2\u01fd\u01fe\7x\2\2\u01fe\u01ff"+
		"\7g\2\2\u01ff\u0200\7e\2\2\u0200\u0201\7\65\2\2\u0201\30\3\2\2\2\u0202"+
		"\u0203\7k\2\2\u0203\u0204\7x\2\2\u0204\u0205\7g\2\2\u0205\u0206\7e\2\2"+
		"\u0206\u0207\7\66\2\2\u0207\32\3\2\2\2\u0208\u0209\7w\2\2\u0209\u020a"+
		"\7x\2\2\u020a\u020b\7g\2\2\u020b\u020c\7e\2\2\u020c\u020d\7\64\2\2\u020d"+
		"\34\3\2\2\2\u020e\u020f\7w\2\2\u020f\u0210\7x\2\2\u0210\u0211\7g\2\2\u0211"+
		"\u0212\7e\2\2\u0212\u0213\7\65\2\2\u0213\36\3\2\2\2\u0214\u0215\7w\2\2"+
		"\u0215\u0216\7x\2\2\u0216\u0217\7g\2\2\u0217\u0218\7e\2\2\u0218\u0219"+
		"\7\66\2\2\u0219 \3\2\2\2\u021a\u021b\7x\2\2\u021b\u021c\7g\2\2\u021c\u021d"+
		"\7e\2\2\u021d\u021e\7\64\2\2\u021e\"\3\2\2\2\u021f\u0220\7x\2\2\u0220"+
		"\u0221\7g\2\2\u0221\u0222\7e\2\2\u0222\u0223\7\65\2\2\u0223$\3\2\2\2\u0224"+
		"\u0225\7x\2\2\u0225\u0226\7g\2\2\u0226\u0227\7e\2\2\u0227\u0228\7\66\2"+
		"\2\u0228&\3\2\2\2\u0229\u022a\7o\2\2\u022a\u022b\7c\2\2\u022b\u022c\7"+
		"v\2\2\u022c\u022d\7\64\2\2\u022d(\3\2\2\2\u022e\u022f\7o\2\2\u022f\u0230"+
		"\7c\2\2\u0230\u0231\7v\2\2\u0231\u0232\7\65\2\2\u0232*\3\2\2\2\u0233\u0234"+
		"\7o\2\2\u0234\u0235\7c\2\2\u0235\u0236\7v\2\2\u0236\u0237\7\66\2\2\u0237"+
		",\3\2\2\2\u0238\u0239\7o\2\2\u0239\u023a\7c\2\2\u023a\u023b\7v\2\2\u023b"+
		"\u023c\7\64\2\2\u023c\u023d\7z\2\2\u023d\u023e\7\64\2\2\u023e.\3\2\2\2"+
		"\u023f\u0240\7o\2\2\u0240\u0241\7c\2\2\u0241\u0242\7v\2\2\u0242\u0243"+
		"\7\64\2\2\u0243\u0244\7z\2\2\u0244\u0245\7\65\2\2\u0245\60\3\2\2\2\u0246"+
		"\u0247\7o\2\2\u0247\u0248\7c\2\2\u0248\u0249\7v\2\2\u0249\u024a\7\64\2"+
		"\2\u024a\u024b\7z\2\2\u024b\u024c\7\66\2\2\u024c\62\3\2\2\2\u024d\u024e"+
		"\7o\2\2\u024e\u024f\7c\2\2\u024f\u0250\7v\2\2\u0250\u0251\7\65\2\2\u0251"+
		"\u0252\7z\2\2\u0252\u0253\7\64\2\2\u0253\64\3\2\2\2\u0254\u0255\7o\2\2"+
		"\u0255\u0256\7c\2\2\u0256\u0257\7v\2\2\u0257\u0258\7\65\2\2\u0258\u0259"+
		"\7z\2\2\u0259\u025a\7\65\2\2\u025a\66\3\2\2\2\u025b\u025c\7o\2\2\u025c"+
		"\u025d\7c\2\2\u025d\u025e\7v\2\2\u025e\u025f\7\65\2\2\u025f\u0260\7z\2"+
		"\2\u0260\u0261\7\66\2\2\u02618\3\2\2\2\u0262\u0263\7o\2\2\u0263\u0264"+
		"\7c\2\2\u0264\u0265\7v\2\2\u0265\u0266\7\66\2\2\u0266\u0267\7z\2\2\u0267"+
		"\u0268\7\64\2\2\u0268:\3\2\2\2\u0269\u026a\7o\2\2\u026a\u026b\7c\2\2\u026b"+
		"\u026c\7v\2\2\u026c\u026d\7\66\2\2\u026d\u026e\7z\2\2\u026e\u026f\7\65"+
		"\2\2\u026f<\3\2\2\2\u0270\u0271\7o\2\2\u0271\u0272\7c\2\2\u0272\u0273"+
		"\7v\2\2\u0273\u0274\7\66\2\2\u0274\u0275\7z\2\2\u0275\u0276\7\66\2\2\u0276"+
		">\3\2\2\2\u0277\u0278\7f\2\2\u0278\u0279\7x\2\2\u0279\u027a\7g\2\2\u027a"+
		"\u027b\7e\2\2\u027b\u027c\7\64\2\2\u027c@\3\2\2\2\u027d\u027e\7f\2\2\u027e"+
		"\u027f\7x\2\2\u027f\u0280\7g\2\2\u0280\u0281\7e\2\2\u0281\u0282\7\65\2"+
		"\2\u0282B\3\2\2\2\u0283\u0284\7f\2\2\u0284\u0285\7x\2\2\u0285\u0286\7"+
		"g\2\2\u0286\u0287\7e\2\2\u0287\u0288\7\66\2\2\u0288D\3\2\2\2\u0289\u028a"+
		"\7f\2\2\u028a\u028b\7o\2\2\u028b\u028c\7c\2\2\u028c\u028d\7v\2\2\u028d"+
		"\u028e\7\64\2\2\u028eF\3\2\2\2\u028f\u0290\7f\2\2\u0290\u0291\7o\2\2\u0291"+
		"\u0292\7c\2\2\u0292\u0293\7v\2\2\u0293\u0294\7\65\2\2\u0294H\3\2\2\2\u0295"+
		"\u0296\7f\2\2\u0296\u0297\7o\2\2\u0297\u0298\7c\2\2\u0298\u0299\7v\2\2"+
		"\u0299\u029a\7\66\2\2\u029aJ\3\2\2\2\u029b\u029c\7f\2\2\u029c\u029d\7"+
		"o\2\2\u029d\u029e\7c\2\2\u029e\u029f\7v\2\2\u029f\u02a0\7\64\2\2\u02a0"+
		"\u02a1\7z\2\2\u02a1\u02a2\7\64\2\2\u02a2L\3\2\2\2\u02a3\u02a4\7f\2\2\u02a4"+
		"\u02a5\7o\2\2\u02a5\u02a6\7c\2\2\u02a6\u02a7\7v\2\2\u02a7\u02a8\7\64\2"+
		"\2\u02a8\u02a9\7z\2\2\u02a9\u02aa\7\65\2\2\u02aaN\3\2\2\2\u02ab\u02ac"+
		"\7f\2\2\u02ac\u02ad\7o\2\2\u02ad\u02ae\7c\2\2\u02ae\u02af\7v\2\2\u02af"+
		"\u02b0\7\64\2\2\u02b0\u02b1\7z\2\2\u02b1\u02b2\7\66\2\2\u02b2P\3\2\2\2"+
		"\u02b3\u02b4\7f\2\2\u02b4\u02b5\7o\2\2\u02b5\u02b6\7c\2\2\u02b6\u02b7"+
		"\7v\2\2\u02b7\u02b8\7\65\2\2\u02b8\u02b9\7z\2\2\u02b9\u02ba\7\64\2\2\u02ba"+
		"R\3\2\2\2\u02bb\u02bc\7f\2\2\u02bc\u02bd\7o\2\2\u02bd\u02be\7c\2\2\u02be"+
		"\u02bf\7v\2\2\u02bf\u02c0\7\65\2\2\u02c0\u02c1\7z\2\2\u02c1\u02c2\7\65"+
		"\2\2\u02c2T\3\2\2\2\u02c3\u02c4\7f\2\2\u02c4\u02c5\7o\2\2\u02c5\u02c6"+
		"\7c\2\2\u02c6\u02c7\7v\2\2\u02c7\u02c8\7\65\2\2\u02c8\u02c9\7z\2\2\u02c9"+
		"\u02ca\7\66\2\2\u02caV\3\2\2\2\u02cb\u02cc\7f\2\2\u02cc\u02cd\7o\2\2\u02cd"+
		"\u02ce\7c\2\2\u02ce\u02cf\7v\2\2\u02cf\u02d0\7\66\2\2\u02d0\u02d1\7z\2"+
		"\2\u02d1\u02d2\7\64\2\2\u02d2X\3\2\2\2\u02d3\u02d4\7f\2\2\u02d4\u02d5"+
		"\7o\2\2\u02d5\u02d6\7c\2\2\u02d6\u02d7\7v\2\2\u02d7\u02d8\7\66\2\2\u02d8"+
		"\u02d9\7z\2\2\u02d9\u02da\7\65\2\2\u02daZ\3\2\2\2\u02db\u02dc\7f\2\2\u02dc"+
		"\u02dd\7o\2\2\u02dd\u02de\7c\2\2\u02de\u02df\7v\2\2\u02df\u02e0\7\66\2"+
		"\2\u02e0\u02e1\7z\2\2\u02e1\u02e2\7\66\2\2\u02e2\\\3\2\2\2\u02e3\u02e4"+
		"\7e\2\2\u02e4\u02e5\7g\2\2\u02e5\u02e6\7p\2\2\u02e6\u02e7\7v\2\2\u02e7"+
		"\u02e8\7t\2\2\u02e8\u02e9\7q\2\2\u02e9\u02ea\7k\2\2\u02ea\u02eb\7f\2\2"+
		"\u02eb^\3\2\2\2\u02ec\u02ed\7k\2\2\u02ed\u02ee\7p\2\2\u02ee`\3\2\2\2\u02ef"+
		"\u02f0\7q\2\2\u02f0\u02f1\7w\2\2\u02f1\u02f2\7v\2\2\u02f2b\3\2\2\2\u02f3"+
		"\u02f4\7k\2\2\u02f4\u02f5\7p\2\2\u02f5\u02f6\7q\2\2\u02f6\u02f7\7w\2\2"+
		"\u02f7\u02f8\7v\2\2\u02f8d\3\2\2\2\u02f9\u02fa\7w\2\2\u02fa\u02fb\7p\2"+
		"\2\u02fb\u02fc\7k\2\2\u02fc\u02fd\7h\2\2\u02fd\u02fe\7q\2\2\u02fe\u02ff"+
		"\7t\2\2\u02ff\u0300\7o\2\2\u0300f\3\2\2\2\u0301\u0302\7r\2\2\u0302\u0303"+
		"\7c\2\2\u0303\u0304\7v\2\2\u0304\u0305\7e\2\2\u0305\u0306\7j\2\2\u0306"+
		"h\3\2\2\2\u0307\u0308\7u\2\2\u0308\u0309\7c\2\2\u0309\u030a\7o\2\2\u030a"+
		"\u030b\7r\2\2\u030b\u030c\7n\2\2\u030c\u030d\7g\2\2\u030dj\3\2\2\2\u030e"+
		"\u030f\7d\2\2\u030f\u0310\7w\2\2\u0310\u0311\7h\2\2\u0311\u0312\7h\2\2"+
		"\u0312\u0313\7g\2\2\u0313\u0314\7t\2\2\u0314l\3\2\2\2\u0315\u0316\7u\2"+
		"\2\u0316\u0317\7j\2\2\u0317\u0318\7c\2\2\u0318\u0319\7t\2\2\u0319\u031a"+
		"\7g\2\2\u031a\u031b\7f\2\2\u031bn\3\2\2\2\u031c\u031d\7e\2\2\u031d\u031e"+
		"\7q\2\2\u031e\u031f\7j\2\2\u031f\u0320\7g\2\2\u0320\u0321\7t\2\2\u0321"+
		"\u0322\7g\2\2\u0322\u0323\7p\2\2\u0323\u0324\7v\2\2\u0324p\3\2\2\2\u0325"+
		"\u0326\7x\2\2\u0326\u0327\7q\2\2\u0327\u0328\7n\2\2\u0328\u0329\7c\2\2"+
		"\u0329\u032a\7v\2\2\u032a\u032b\7k\2\2\u032b\u032c\7n\2\2\u032c\u032d"+
		"\7g\2\2\u032dr\3\2\2\2\u032e\u032f\7t\2\2\u032f\u0330\7g\2\2\u0330\u0331"+
		"\7u\2\2\u0331\u0332\7v\2\2\u0332\u0333\7t\2\2\u0333\u0334\7k\2\2\u0334"+
		"\u0335\7e\2\2\u0335\u0336\7v\2\2\u0336t\3\2\2\2\u0337\u0338\7t\2\2\u0338"+
		"\u0339\7g\2\2\u0339\u033a\7c\2\2\u033a\u033b\7f\2\2\u033b\u033c\7q\2\2"+
		"\u033c\u033d\7p\2\2\u033d\u033e\7n\2\2\u033e\u033f\7{\2\2\u033fv\3\2\2"+
		"\2\u0340\u0341\7y\2\2\u0341\u0342\7t\2\2\u0342\u0343\7k\2\2\u0343\u0344"+
		"\7v\2\2\u0344\u0345\7g\2\2\u0345\u0346\7q\2\2\u0346\u0347\7p\2\2\u0347"+
		"\u0348\7n\2\2\u0348\u0349\7{\2\2\u0349x\3\2\2\2\u034a\u034b\7p\2\2\u034b"+
		"\u034c\7q\2\2\u034c\u034d\7r\2\2\u034d\u034e\7g\2\2\u034e\u034f\7t\2\2"+
		"\u034f\u0350\7u\2\2\u0350\u0351\7r\2\2\u0351\u0352\7g\2\2\u0352\u0353"+
		"\7e\2\2\u0353\u0354\7v\2\2\u0354\u0355\7k\2\2\u0355\u0356\7x\2\2\u0356"+
		"\u0357\7g\2\2\u0357z\3\2\2\2\u0358\u0359\7h\2\2\u0359\u035a\7n\2\2\u035a"+
		"\u035b\7c\2\2\u035b\u035c\7v\2\2\u035c|\3\2\2\2\u035d\u035e\7u\2\2\u035e"+
		"\u035f\7o\2\2\u035f\u0360\7q\2\2\u0360\u0361\7q\2\2\u0361\u0362\7v\2\2"+
		"\u0362\u0363\7j\2\2\u0363~\3\2\2\2\u0364\u0365\7n\2\2\u0365\u0366\7c\2"+
		"\2\u0366\u0367\7{\2\2\u0367\u0368\7q\2\2\u0368\u0369\7w\2\2\u0369\u036a"+
		"\7v\2\2\u036a\u0080\3\2\2\2\u036b\u036c\7c\2\2\u036c\u036d\7v\2\2\u036d"+
		"\u036e\7q\2\2\u036e\u036f\7o\2\2\u036f\u0370\7k\2\2\u0370\u0371\7e\2\2"+
		"\u0371\u0372\7a\2\2\u0372\u0373\7w\2\2\u0373\u0374\7k\2\2\u0374\u0375"+
		"\7p\2\2\u0375\u0376\7v\2\2\u0376\u0082\3\2\2\2\u0377\u0378\7u\2\2\u0378"+
		"\u0379\7c\2\2\u0379\u037a\7o\2\2\u037a\u037b\7r\2\2\u037b\u037c\7n\2\2"+
		"\u037c\u037d\7g\2\2\u037d\u037e\7t\2\2\u037e\u037f\7\64\2\2\u037f\u0380"+
		"\7F\2\2\u0380\u0084\3\2\2\2\u0381\u0382\7u\2\2\u0382\u0383\7c\2\2\u0383"+
		"\u0384\7o\2\2\u0384\u0385\7r\2\2\u0385\u0386\7n\2\2\u0386\u0387\7g\2\2"+
		"\u0387\u0388\7t\2\2\u0388\u0389\7\65\2\2\u0389\u038a\7F\2\2\u038a\u0086"+
		"\3\2\2\2\u038b\u038c\7u\2\2\u038c\u038d\7c\2\2\u038d\u038e\7o\2\2\u038e"+
		"\u038f\7r\2\2\u038f\u0390\7n\2\2\u0390\u0391\7g\2\2\u0391\u0392\7t\2\2"+
		"\u0392\u0393\7E\2\2\u0393\u0394\7w\2\2\u0394\u0395\7d\2\2\u0395\u0396"+
		"\7g\2\2\u0396\u0088\3\2\2\2\u0397\u0398\7u\2\2\u0398\u0399\7c\2\2\u0399"+
		"\u039a\7o\2\2\u039a\u039b\7r\2\2\u039b\u039c\7n\2\2\u039c\u039d\7g\2\2"+
		"\u039d\u039e\7t\2\2\u039e\u039f\7\64\2\2\u039f\u03a0\7F\2\2\u03a0\u03a1"+
		"\7U\2\2\u03a1\u03a2\7j\2\2\u03a2\u03a3\7c\2\2\u03a3\u03a4\7f\2\2\u03a4"+
		"\u03a5\7q\2\2\u03a5\u03a6\7y\2\2\u03a6\u008a\3\2\2\2\u03a7\u03a8\7u\2"+
		"\2\u03a8\u03a9\7c\2\2\u03a9\u03aa\7o\2\2\u03aa\u03ab\7r\2\2\u03ab\u03ac"+
		"\7n\2\2\u03ac\u03ad\7g\2\2\u03ad\u03ae\7t\2\2\u03ae\u03af\7E\2\2\u03af"+
		"\u03b0\7w\2\2\u03b0\u03b1\7d\2\2\u03b1\u03b2\7g\2\2\u03b2\u03b3\7U\2\2"+
		"\u03b3\u03b4\7j\2\2\u03b4\u03b5\7c\2\2\u03b5\u03b6\7f\2\2\u03b6\u03b7"+
		"\7q\2\2\u03b7\u03b8\7y\2\2\u03b8\u008c\3\2\2\2\u03b9\u03ba\7u\2\2\u03ba"+
		"\u03bb\7c\2\2\u03bb\u03bc\7o\2\2\u03bc\u03bd\7r\2\2\u03bd\u03be\7n\2\2"+
		"\u03be\u03bf\7g\2\2\u03bf\u03c0\7t\2\2\u03c0\u03c1\7\64\2\2\u03c1\u03c2"+
		"\7F\2\2\u03c2\u03c3\7C\2\2\u03c3\u03c4\7t\2\2\u03c4\u03c5\7t\2\2\u03c5"+
		"\u03c6\7c\2\2\u03c6\u03c7\7{\2\2\u03c7\u008e\3\2\2\2\u03c8\u03c9\7u\2"+
		"\2\u03c9\u03ca\7c\2\2\u03ca\u03cb\7o\2\2\u03cb\u03cc\7r\2\2\u03cc\u03cd"+
		"\7n\2\2\u03cd\u03ce\7g\2\2\u03ce\u03cf\7t\2\2\u03cf\u03d0\7\64\2\2\u03d0"+
		"\u03d1\7F\2\2\u03d1\u03d2\7C\2\2\u03d2\u03d3\7t\2\2\u03d3\u03d4\7t\2\2"+
		"\u03d4\u03d5\7c\2\2\u03d5\u03d6\7{\2\2\u03d6\u03d7\7U\2\2\u03d7\u03d8"+
		"\7j\2\2\u03d8\u03d9\7c\2\2\u03d9\u03da\7f\2\2\u03da\u03db\7q\2\2\u03db"+
		"\u03dc\7y\2\2\u03dc\u0090\3\2\2\2\u03dd\u03de\7k\2\2\u03de\u03df\7u\2"+
		"\2\u03df\u03e0\7c\2\2\u03e0\u03e1\7o\2\2\u03e1\u03e2\7r\2\2\u03e2\u03e3"+
		"\7n\2\2\u03e3\u03e4\7g\2\2\u03e4\u03e5\7t\2\2\u03e5\u03e6\7\64\2\2\u03e6"+
		"\u03e7\7F\2\2\u03e7\u0092\3\2\2\2\u03e8\u03e9\7k\2\2\u03e9\u03ea\7u\2"+
		"\2\u03ea\u03eb\7c\2\2\u03eb\u03ec\7o\2\2\u03ec\u03ed\7r\2\2\u03ed\u03ee"+
		"\7n\2\2\u03ee\u03ef\7g\2\2\u03ef\u03f0\7t\2\2\u03f0\u03f1\7\65\2\2\u03f1"+
		"\u03f2\7F\2\2\u03f2\u0094\3\2\2\2\u03f3\u03f4\7k\2\2\u03f4\u03f5\7u\2"+
		"\2\u03f5\u03f6\7c\2\2\u03f6\u03f7\7o\2\2\u03f7\u03f8\7r\2\2\u03f8\u03f9"+
		"\7n\2\2\u03f9\u03fa\7g\2\2\u03fa\u03fb\7t\2\2\u03fb\u03fc\7E\2\2\u03fc"+
		"\u03fd\7w\2\2\u03fd\u03fe\7d\2\2\u03fe\u03ff\7g\2\2\u03ff\u0096\3\2\2"+
		"\2\u0400\u0401\7k\2\2\u0401\u0402\7u\2\2\u0402\u0403\7c\2\2\u0403\u0404"+
		"\7o\2\2\u0404\u0405\7r\2\2\u0405\u0406\7n\2\2\u0406\u0407\7g\2\2\u0407"+
		"\u0408\7t\2\2\u0408\u0409\7\64\2\2\u0409\u040a\7F\2\2\u040a\u040b\7C\2"+
		"\2\u040b\u040c\7t\2\2\u040c\u040d\7t\2\2\u040d\u040e\7c\2\2\u040e\u040f"+
		"\7{\2\2\u040f\u0098\3\2\2\2\u0410\u0411\7w\2\2\u0411\u0412\7u\2\2\u0412"+
		"\u0413\7c\2\2\u0413\u0414\7o\2\2\u0414\u0415\7r\2\2\u0415\u0416\7n\2\2"+
		"\u0416\u0417\7g\2\2\u0417\u0418\7t\2\2\u0418\u0419\7\64\2\2\u0419\u041a"+
		"\7F\2\2\u041a\u009a\3\2\2\2\u041b\u041c\7w\2\2\u041c\u041d\7u\2\2\u041d"+
		"\u041e\7c\2\2\u041e\u041f\7o\2\2\u041f\u0420\7r\2\2\u0420\u0421\7n\2\2"+
		"\u0421\u0422\7g\2\2\u0422\u0423\7t\2\2\u0423\u0424\7\65\2\2\u0424\u0425"+
		"\7F\2\2\u0425\u009c\3\2\2\2\u0426\u0427\7w\2\2\u0427\u0428\7u\2\2\u0428"+
		"\u0429\7c\2\2\u0429\u042a\7o\2\2\u042a\u042b\7r\2\2\u042b\u042c\7n\2\2"+
		"\u042c\u042d\7g\2\2\u042d\u042e\7t\2\2\u042e\u042f\7E\2\2\u042f\u0430"+
		"\7w\2\2\u0430\u0431\7d\2\2\u0431\u0432\7g\2\2\u0432\u009e\3\2\2\2\u0433"+
		"\u0434\7w\2\2\u0434\u0435\7u\2\2\u0435\u0436\7c\2\2\u0436\u0437\7o\2\2"+
		"\u0437\u0438\7r\2\2\u0438\u0439\7n\2\2\u0439\u043a\7g\2\2\u043a\u043b"+
		"\7t\2\2\u043b\u043c\7\64\2\2\u043c\u043d\7F\2\2\u043d\u043e\7C\2\2\u043e"+
		"\u043f\7t\2\2\u043f\u0440\7t\2\2\u0440\u0441\7c\2\2\u0441\u0442\7{\2\2"+
		"\u0442\u00a0\3\2\2\2\u0443\u0444\7u\2\2\u0444\u0445\7c\2\2\u0445\u0446"+
		"\7o\2\2\u0446\u0447\7r\2\2\u0447\u0448\7n\2\2\u0448\u0449\7g\2\2\u0449"+
		"\u044a\7t\2\2\u044a\u044b\7\63\2\2\u044b\u044c\7F\2\2\u044c\u00a2\3\2"+
		"\2\2\u044d\u044e\7u\2\2\u044e\u044f\7c\2\2\u044f\u0450\7o\2\2\u0450\u0451"+
		"\7r\2\2\u0451\u0452\7n\2\2\u0452\u0453\7g\2\2\u0453\u0454\7t\2\2\u0454"+
		"\u0455\7\63\2\2\u0455\u0456\7F\2\2\u0456\u0457\7U\2\2\u0457\u0458\7j\2"+
		"\2\u0458\u0459\7c\2\2\u0459\u045a\7f\2\2\u045a\u045b\7q\2\2\u045b\u045c"+
		"\7y\2\2\u045c\u00a4\3\2\2\2\u045d\u045e\7u\2\2\u045e\u045f\7c\2\2\u045f"+
		"\u0460\7o\2\2\u0460\u0461\7r\2\2\u0461\u0462\7n\2\2\u0462\u0463\7g\2\2"+
		"\u0463\u0464\7t\2\2\u0464\u0465\7\63\2\2\u0465\u0466\7F\2\2\u0466\u0467"+
		"\7C\2\2\u0467\u0468\7t\2\2\u0468\u0469\7t\2\2\u0469\u046a\7c\2\2\u046a"+
		"\u046b\7{\2\2\u046b\u00a6\3\2\2\2\u046c\u046d\7u\2\2\u046d\u046e\7c\2"+
		"\2\u046e\u046f\7o\2\2\u046f\u0470\7r\2\2\u0470\u0471\7n\2\2\u0471\u0472"+
		"\7g\2\2\u0472\u0473\7t\2\2\u0473\u0474\7\63\2\2\u0474\u0475\7F\2\2\u0475"+
		"\u0476\7C\2\2\u0476\u0477\7t\2\2\u0477\u0478\7t\2\2\u0478\u0479\7c\2\2"+
		"\u0479\u047a\7{\2\2\u047a\u047b\7U\2\2\u047b\u047c\7j\2\2\u047c\u047d"+
		"\7c\2\2\u047d\u047e\7f\2\2\u047e\u047f\7q\2\2\u047f\u0480\7y\2\2\u0480"+
		"\u00a8\3\2\2\2\u0481\u0482\7k\2\2\u0482\u0483\7u\2\2\u0483\u0484\7c\2"+
		"\2\u0484\u0485\7o\2\2\u0485\u0486\7r\2\2\u0486\u0487\7n\2\2\u0487\u0488"+
		"\7g\2\2\u0488\u0489\7t\2\2\u0489\u048a\7\63\2\2\u048a\u048b\7F\2\2\u048b"+
		"\u00aa\3\2\2\2\u048c\u048d\7k\2\2\u048d\u048e\7u\2\2\u048e\u048f\7c\2"+
		"\2\u048f\u0490\7o\2\2\u0490\u0491\7r\2\2\u0491\u0492\7n\2\2\u0492\u0493"+
		"\7g\2\2\u0493\u0494\7t\2\2\u0494\u0495\7\63\2\2\u0495\u0496\7F\2\2\u0496"+
		"\u0497\7C\2\2\u0497\u0498\7t\2\2\u0498\u0499\7t\2\2\u0499\u049a\7c\2\2"+
		"\u049a\u049b\7{\2\2\u049b\u00ac\3\2\2\2\u049c\u049d\7w\2\2\u049d\u049e"+
		"\7u\2\2\u049e\u049f\7c\2\2\u049f\u04a0\7o\2\2\u04a0\u04a1\7r\2\2\u04a1"+
		"\u04a2\7n\2\2\u04a2\u04a3\7g\2\2\u04a3\u04a4\7t\2\2\u04a4\u04a5\7\63\2"+
		"\2\u04a5\u04a6\7F\2\2\u04a6\u00ae\3\2\2\2\u04a7\u04a8\7w\2\2\u04a8\u04a9"+
		"\7u\2\2\u04a9\u04aa\7c\2\2\u04aa\u04ab\7o\2\2\u04ab\u04ac\7r\2\2\u04ac"+
		"\u04ad\7n\2\2\u04ad\u04ae\7g\2\2\u04ae\u04af\7t\2\2\u04af\u04b0\7\63\2"+
		"\2\u04b0\u04b1\7F\2\2\u04b1\u04b2\7C\2\2\u04b2\u04b3\7t\2\2\u04b3\u04b4"+
		"\7t\2\2\u04b4\u04b5\7c\2\2\u04b5\u04b6\7{\2\2\u04b6\u00b0\3\2\2\2\u04b7"+
		"\u04b8\7u\2\2\u04b8\u04b9\7c\2\2\u04b9\u04ba\7o\2\2\u04ba\u04bb\7r\2\2"+
		"\u04bb\u04bc\7n\2\2\u04bc\u04bd\7g\2\2\u04bd\u04be\7t\2\2\u04be\u04bf"+
		"\7\64\2\2\u04bf\u04c0\7F\2\2\u04c0\u04c1\7T\2\2\u04c1\u04c2\7g\2\2\u04c2"+
		"\u04c3\7e\2\2\u04c3\u04c4\7v\2\2\u04c4\u00b2\3\2\2\2\u04c5\u04c6\7u\2"+
		"\2\u04c6\u04c7\7c\2\2\u04c7\u04c8\7o\2\2\u04c8\u04c9\7r\2\2\u04c9\u04ca"+
		"\7n\2\2\u04ca\u04cb\7g\2\2\u04cb\u04cc\7t\2\2\u04cc\u04cd\7\64\2\2\u04cd"+
		"\u04ce\7F\2\2\u04ce\u04cf\7T\2\2\u04cf\u04d0\7g\2\2\u04d0\u04d1\7e\2\2"+
		"\u04d1\u04d2\7v\2\2\u04d2\u04d3\7U\2\2\u04d3\u04d4\7j\2\2\u04d4\u04d5"+
		"\7c\2\2\u04d5\u04d6\7f\2\2\u04d6\u04d7\7q\2\2\u04d7\u04d8\7y\2\2\u04d8"+
		"\u00b4\3\2\2\2\u04d9\u04da\7k\2\2\u04da\u04db\7u\2\2\u04db\u04dc\7c\2"+
		"\2\u04dc\u04dd\7o\2\2\u04dd\u04de\7r\2\2\u04de\u04df\7n\2\2\u04df\u04e0"+
		"\7g\2\2\u04e0\u04e1\7t\2\2\u04e1\u04e2\7\64\2\2\u04e2\u04e3\7F\2\2\u04e3"+
		"\u04e4\7T\2\2\u04e4\u04e5\7g\2\2\u04e5\u04e6\7e\2\2\u04e6\u04e7\7v\2\2"+
		"\u04e7\u00b6\3\2\2\2\u04e8\u04e9\7w\2\2\u04e9\u04ea\7u\2\2\u04ea\u04eb"+
		"\7c\2\2\u04eb\u04ec\7o\2\2\u04ec\u04ed\7r\2\2\u04ed\u04ee\7n\2\2\u04ee"+
		"\u04ef\7g\2\2\u04ef\u04f0\7t\2\2\u04f0\u04f1\7\64\2\2\u04f1\u04f2\7F\2"+
		"\2\u04f2\u04f3\7T\2\2\u04f3\u04f4\7g\2\2\u04f4\u04f5\7e\2\2\u04f5\u04f6"+
		"\7v\2\2\u04f6\u00b8\3\2\2\2\u04f7\u04f8\7u\2\2\u04f8\u04f9\7c\2\2\u04f9"+
		"\u04fa\7o\2\2\u04fa\u04fb\7r\2\2\u04fb\u04fc\7n\2\2\u04fc\u04fd\7g\2\2"+
		"\u04fd\u04fe\7t\2\2\u04fe\u04ff\7D\2\2\u04ff\u0500\7w\2\2\u0500\u0501"+
		"\7h\2\2\u0501\u0502\7h\2\2\u0502\u0503\7g\2\2\u0503\u0504\7t\2\2\u0504"+
		"\u00ba\3\2\2\2\u0505\u0506\7k\2\2\u0506\u0507\7u\2\2\u0507\u0508\7c\2"+
		"\2\u0508\u0509\7o\2\2\u0509\u050a\7r\2\2\u050a\u050b\7n\2\2\u050b\u050c"+
		"\7g\2\2\u050c\u050d\7t\2\2\u050d\u050e\7D\2\2\u050e\u050f\7w\2\2\u050f"+
		"\u0510\7h\2\2\u0510\u0511\7h\2\2\u0511\u0512\7g\2\2\u0512\u0513\7t\2\2"+
		"\u0513\u00bc\3\2\2\2\u0514\u0515\7w\2\2\u0515\u0516\7u\2\2\u0516\u0517"+
		"\7c\2\2\u0517\u0518\7o\2\2\u0518\u0519\7r\2\2\u0519\u051a\7n\2\2\u051a"+
		"\u051b\7g\2\2\u051b\u051c\7t\2\2\u051c\u051d\7D\2\2\u051d\u051e\7w\2\2"+
		"\u051e\u051f\7h\2\2\u051f\u0520\7h\2\2\u0520\u0521\7g\2\2\u0521\u0522"+
		"\7t\2\2\u0522\u00be\3\2\2\2\u0523\u0524\7u\2\2\u0524\u0525\7c\2\2\u0525"+
		"\u0526\7o\2\2\u0526\u0527\7r\2\2\u0527\u0528\7n\2\2\u0528\u0529\7g\2\2"+
		"\u0529\u052a\7t\2\2\u052a\u052b\7E\2\2\u052b\u052c\7w\2\2\u052c\u052d"+
		"\7d\2\2\u052d\u052e\7g\2\2\u052e\u052f\7C\2\2\u052f\u0530\7t\2\2\u0530"+
		"\u0531\7t\2\2\u0531\u0532\7c\2\2\u0532\u0533\7{\2\2\u0533\u00c0\3\2\2"+
		"\2\u0534\u0535\7u\2\2\u0535\u0536\7c\2\2\u0536\u0537\7o\2\2\u0537\u0538"+
		"\7r\2\2\u0538\u0539\7n\2\2\u0539\u053a\7g\2\2\u053a\u053b\7t\2\2\u053b"+
		"\u053c\7E\2\2\u053c\u053d\7w\2\2\u053d\u053e\7d\2\2\u053e\u053f\7g\2\2"+
		"\u053f\u0540\7C\2\2\u0540\u0541\7t\2\2\u0541\u0542\7t\2\2\u0542\u0543"+
		"\7c\2\2\u0543\u0544\7{\2\2\u0544\u0545\7U\2\2\u0545\u0546\7j\2\2\u0546"+
		"\u0547\7c\2\2\u0547\u0548\7f\2\2\u0548\u0549\7q\2\2\u0549\u054a\7y\2\2"+
		"\u054a\u00c2\3\2\2\2\u054b\u054c\7k\2\2\u054c\u054d\7u\2\2\u054d\u054e"+
		"\7c\2\2\u054e\u054f\7o\2\2\u054f\u0550\7r\2\2\u0550\u0551\7n\2\2\u0551"+
		"\u0552\7g\2\2\u0552\u0553\7t\2\2\u0553\u0554\7E\2\2\u0554\u0555\7w\2\2"+
		"\u0555\u0556\7d\2\2\u0556\u0557\7g\2\2\u0557\u0558\7C\2\2\u0558\u0559"+
		"\7t\2\2\u0559\u055a\7t\2\2\u055a\u055b\7c\2\2\u055b\u055c\7{\2\2\u055c"+
		"\u00c4\3\2\2\2\u055d\u055e\7w\2\2\u055e\u055f\7u\2\2\u055f\u0560\7c\2"+
		"\2\u0560\u0561\7o\2\2\u0561\u0562\7r\2\2\u0562\u0563\7n\2\2\u0563\u0564"+
		"\7g\2\2\u0564\u0565\7t\2\2\u0565\u0566\7E\2\2\u0566\u0567\7w\2\2\u0567"+
		"\u0568\7d\2\2\u0568\u0569\7g\2\2\u0569\u056a\7C\2\2\u056a\u056b\7t\2\2"+
		"\u056b\u056c\7t\2\2\u056c\u056d\7c\2\2\u056d\u056e\7{\2\2\u056e\u00c6"+
		"\3\2\2\2\u056f\u0570\7u\2\2\u0570\u0571\7c\2\2\u0571\u0572\7o\2\2\u0572"+
		"\u0573\7r\2\2\u0573\u0574\7n\2\2\u0574\u0575\7g\2\2\u0575\u0576\7t\2\2"+
		"\u0576\u0577\7\64\2\2\u0577\u0578\7F\2\2\u0578\u0579\7O\2\2\u0579\u057a"+
		"\7U\2\2\u057a\u00c8\3\2\2\2\u057b\u057c\7k\2\2\u057c\u057d\7u\2\2\u057d"+
		"\u057e\7c\2\2\u057e\u057f\7o\2\2\u057f\u0580\7r\2\2\u0580\u0581\7n\2\2"+
		"\u0581\u0582\7g\2\2\u0582\u0583\7t\2\2\u0583\u0584\7\64\2\2\u0584\u0585"+
		"\7F\2\2\u0585\u0586\7O\2\2\u0586\u0587\7U\2\2\u0587\u00ca\3\2\2\2\u0588"+
		"\u0589\7w\2\2\u0589\u058a\7u\2\2\u058a\u058b\7c\2\2\u058b\u058c\7o\2\2"+
		"\u058c\u058d\7r\2\2\u058d\u058e\7n\2\2\u058e\u058f\7g\2\2\u058f\u0590"+
		"\7t\2\2\u0590\u0591\7\64\2\2\u0591\u0592\7F\2\2\u0592\u0593\7O\2\2\u0593"+
		"\u0594\7U\2\2\u0594\u00cc\3\2\2\2\u0595\u0596\7u\2\2\u0596\u0597\7c\2"+
		"\2\u0597\u0598\7o\2\2\u0598\u0599\7r\2\2\u0599\u059a\7n\2\2\u059a\u059b"+
		"\7g\2\2\u059b\u059c\7t\2\2\u059c\u059d\7\64\2\2\u059d\u059e\7F\2\2\u059e"+
		"\u059f\7O\2\2\u059f\u05a0\7U\2\2\u05a0\u05a1\7C\2\2\u05a1\u05a2\7t\2\2"+
		"\u05a2\u05a3\7t\2\2\u05a3\u05a4\7c\2\2\u05a4\u05a5\7{\2\2\u05a5\u00ce"+
		"\3\2\2\2\u05a6\u05a7\7k\2\2\u05a7\u05a8\7u\2\2\u05a8\u05a9\7c\2\2\u05a9"+
		"\u05aa\7o\2\2\u05aa\u05ab\7r\2\2\u05ab\u05ac\7n\2\2\u05ac\u05ad\7g\2\2"+
		"\u05ad\u05ae\7t\2\2\u05ae\u05af\7\64\2\2\u05af\u05b0\7F\2\2\u05b0\u05b1"+
		"\7O\2\2\u05b1\u05b2\7U\2\2\u05b2\u05b3\7C\2\2\u05b3\u05b4\7t\2\2\u05b4"+
		"\u05b5\7t\2\2\u05b5\u05b6\7c\2\2\u05b6\u05b7\7{\2\2\u05b7\u00d0\3\2\2"+
		"\2\u05b8\u05b9\7w\2\2\u05b9\u05ba\7u\2\2\u05ba\u05bb\7c\2\2\u05bb\u05bc"+
		"\7o\2\2\u05bc\u05bd\7r\2\2\u05bd\u05be\7n\2\2\u05be\u05bf\7g\2\2\u05bf"+
		"\u05c0\7t\2\2\u05c0\u05c1\7\64\2\2\u05c1\u05c2\7F\2\2\u05c2\u05c3\7O\2"+
		"\2\u05c3\u05c4\7U\2\2\u05c4\u05c5\7C\2\2\u05c5\u05c6\7t\2\2\u05c6\u05c7"+
		"\7t\2\2\u05c7\u05c8\7c\2\2\u05c8\u05c9\7{\2\2\u05c9\u00d2\3\2\2\2\u05ca"+
		"\u05cb\7k\2\2\u05cb\u05cc\7o\2\2\u05cc\u05cd\7c\2\2\u05cd\u05ce\7i\2\2"+
		"\u05ce\u05cf\7g\2\2\u05cf\u05d0\7\64\2\2\u05d0\u05d1\7F\2\2\u05d1\u00d4"+
		"\3\2\2\2\u05d2\u05d3\7k\2\2\u05d3\u05d4\7k\2\2\u05d4\u05d5\7o\2\2\u05d5"+
		"\u05d6\7c\2\2\u05d6\u05d7\7i\2\2\u05d7\u05d8\7g\2\2\u05d8\u05d9\7\64\2"+
		"\2\u05d9\u05da\7F\2\2\u05da\u00d6\3\2\2\2\u05db\u05dc\7w\2\2\u05dc\u05dd"+
		"\7k\2\2\u05dd\u05de\7o\2\2\u05de\u05df\7c\2\2\u05df\u05e0\7i\2\2\u05e0"+
		"\u05e1\7g\2\2\u05e1\u05e2\7\64\2\2\u05e2\u05e3\7F\2\2\u05e3\u00d8\3\2"+
		"\2\2\u05e4\u05e5\7k\2\2\u05e5\u05e6\7o\2\2\u05e6\u05e7\7c\2\2\u05e7\u05e8"+
		"\7i\2\2\u05e8\u05e9\7g\2\2\u05e9\u05ea\7\65\2\2\u05ea\u05eb\7F\2\2\u05eb"+
		"\u00da\3\2\2\2\u05ec\u05ed\7k\2\2\u05ed\u05ee\7k\2\2\u05ee\u05ef\7o\2"+
		"\2\u05ef\u05f0\7c\2\2\u05f0\u05f1\7i\2\2\u05f1\u05f2\7g\2\2\u05f2\u05f3"+
		"\7\65\2\2\u05f3\u05f4\7F\2\2\u05f4\u00dc\3\2\2\2\u05f5\u05f6\7w\2\2\u05f6"+
		"\u05f7\7k\2\2\u05f7\u05f8\7o\2\2\u05f8\u05f9\7c\2\2\u05f9\u05fa\7i\2\2"+
		"\u05fa\u05fb\7g\2\2\u05fb\u05fc\7\65\2\2\u05fc\u05fd\7F\2\2\u05fd\u00de"+
		"\3\2\2\2\u05fe\u05ff\7k\2\2\u05ff\u0600\7o\2\2\u0600\u0601\7c\2\2\u0601"+
		"\u0602\7i\2\2\u0602\u0603\7g\2\2\u0603\u0604\7E\2\2\u0604\u0605\7w\2\2"+
		"\u0605\u0606\7d\2\2\u0606\u0607\7g\2\2\u0607\u00e0\3\2\2\2\u0608\u0609"+
		"\7k\2\2\u0609\u060a\7k\2\2\u060a\u060b\7o\2\2\u060b\u060c\7c\2\2\u060c"+
		"\u060d\7i\2\2\u060d\u060e\7g\2\2\u060e\u060f\7E\2\2\u060f\u0610\7w\2\2"+
		"\u0610\u0611\7d\2\2\u0611\u0612\7g\2\2\u0612\u00e2\3\2\2\2\u0613\u0614"+
		"\7w\2\2\u0614\u0615\7k\2\2\u0615\u0616\7o\2\2\u0616\u0617\7c\2\2\u0617"+
		"\u0618\7i\2\2\u0618\u0619\7g\2\2\u0619\u061a\7E\2\2\u061a\u061b\7w\2\2"+
		"\u061b\u061c\7d\2\2\u061c\u061d\7g\2\2\u061d\u00e4\3\2\2\2\u061e\u061f"+
		"\7k\2\2\u061f\u0620\7o\2\2\u0620\u0621\7c\2\2\u0621\u0622\7i\2\2\u0622"+
		"\u0623\7g\2\2\u0623\u0624\7D\2\2\u0624\u0625\7w\2\2\u0625\u0626\7h\2\2"+
		"\u0626\u0627\7h\2\2\u0627\u0628\7g\2\2\u0628\u0629\7t\2\2\u0629\u00e6"+
		"\3\2\2\2\u062a\u062b\7k\2\2\u062b\u062c\7k\2\2\u062c\u062d\7o\2\2\u062d"+
		"\u062e\7c\2\2\u062e\u062f\7i\2\2\u062f\u0630\7g\2\2\u0630\u0631\7D\2\2"+
		"\u0631\u0632\7w\2\2\u0632\u0633\7h\2\2\u0633\u0634\7h\2\2\u0634\u0635"+
		"\7g\2\2\u0635\u0636\7t\2\2\u0636\u00e8\3\2\2\2\u0637\u0638\7w\2\2\u0638"+
		"\u0639\7k\2\2\u0639\u063a\7o\2\2\u063a\u063b\7c\2\2\u063b\u063c\7i\2\2"+
		"\u063c\u063d\7g\2\2\u063d\u063e\7D\2\2\u063e\u063f\7w\2\2\u063f\u0640"+
		"\7h\2\2\u0640\u0641\7h\2\2\u0641\u0642\7g\2\2\u0642\u0643\7t\2\2\u0643"+
		"\u00ea\3\2\2\2\u0644\u0645\7k\2\2\u0645\u0646\7o\2\2\u0646\u0647\7c\2"+
		"\2\u0647\u0648\7i\2\2\u0648\u0649\7g\2\2\u0649\u064a\7\64\2\2\u064a\u064b"+
		"\7F\2\2\u064b\u064c\7C\2\2\u064c\u064d\7t\2\2\u064d\u064e\7t\2\2\u064e"+
		"\u064f\7c\2\2\u064f\u0650\7{\2\2\u0650\u00ec\3\2\2\2\u0651\u0652\7k\2"+
		"\2\u0652\u0653\7k\2\2\u0653\u0654\7o\2\2\u0654\u0655\7c\2\2\u0655\u0656"+
		"\7i\2\2\u0656\u0657\7g\2\2\u0657\u0658\7\64\2\2\u0658\u0659\7F\2\2\u0659"+
		"\u065a\7C\2\2\u065a\u065b\7t\2\2\u065b\u065c\7t\2\2\u065c\u065d\7c\2\2"+
		"\u065d\u065e\7{\2\2\u065e\u00ee\3\2\2\2\u065f\u0660\7w\2\2\u0660\u0661"+
		"\7k\2\2\u0661\u0662\7o\2\2\u0662\u0663\7c\2\2\u0663\u0664\7i\2\2\u0664"+
		"\u0665\7g\2\2\u0665\u0666\7\64\2\2\u0666\u0667\7F\2\2\u0667\u0668\7C\2"+
		"\2\u0668\u0669\7t\2\2\u0669\u066a\7t\2\2\u066a\u066b\7c\2\2\u066b\u066c"+
		"\7{\2\2\u066c\u00f0\3\2\2\2\u066d\u066e\7k\2\2\u066e\u066f\7o\2\2\u066f"+
		"\u0670\7c\2\2\u0670\u0671\7i\2\2\u0671\u0672\7g\2\2\u0672\u0673\7E\2\2"+
		"\u0673\u0674\7w\2\2\u0674\u0675\7d\2\2\u0675\u0676\7g\2\2\u0676\u0677"+
		"\7C\2\2\u0677\u0678\7t\2\2\u0678\u0679\7t\2\2\u0679\u067a\7c\2\2\u067a"+
		"\u067b\7{\2\2\u067b\u00f2\3\2\2\2\u067c\u067d\7k\2\2\u067d\u067e\7k\2"+
		"\2\u067e\u067f\7o\2\2\u067f\u0680\7c\2\2\u0680\u0681\7i\2\2\u0681\u0682"+
		"\7g\2\2\u0682\u0683\7E\2\2\u0683\u0684\7w\2\2\u0684\u0685\7d\2\2\u0685"+
		"\u0686\7g\2\2\u0686\u0687\7C\2\2\u0687\u0688\7t\2\2\u0688\u0689\7t\2\2"+
		"\u0689\u068a\7c\2\2\u068a\u068b\7{\2\2\u068b\u00f4\3\2\2\2\u068c\u068d"+
		"\7w\2\2\u068d\u068e\7k\2\2\u068e\u068f\7o\2\2\u068f\u0690\7c\2\2\u0690"+
		"\u0691\7i\2\2\u0691\u0692\7g\2\2\u0692\u0693\7E\2\2\u0693\u0694\7w\2\2"+
		"\u0694\u0695\7d\2\2\u0695\u0696\7g\2\2\u0696\u0697\7C\2\2\u0697\u0698"+
		"\7t\2\2\u0698\u0699\7t\2\2\u0699\u069a\7c\2\2\u069a\u069b\7{\2\2\u069b"+
		"\u00f6\3\2\2\2\u069c\u069d\7k\2\2\u069d\u069e\7o\2\2\u069e\u069f\7c\2"+
		"\2\u069f\u06a0\7i\2\2\u06a0\u06a1\7g\2\2\u06a1\u06a2\7\63\2\2\u06a2\u06a3"+
		"\7F\2\2\u06a3\u00f8\3\2\2\2\u06a4\u06a5\7k\2\2\u06a5\u06a6\7k\2\2\u06a6"+
		"\u06a7\7o\2\2\u06a7\u06a8\7c\2\2\u06a8\u06a9\7i\2\2\u06a9\u06aa\7g\2\2"+
		"\u06aa\u06ab\7\63\2\2\u06ab\u06ac\7F\2\2\u06ac\u00fa\3\2\2\2\u06ad\u06ae"+
		"\7w\2\2\u06ae\u06af\7k\2\2\u06af\u06b0\7o\2\2\u06b0\u06b1\7c\2\2\u06b1"+
		"\u06b2\7i\2\2\u06b2\u06b3\7g\2\2\u06b3\u06b4\7\63\2\2\u06b4\u06b5\7F\2"+
		"\2\u06b5\u00fc\3\2\2\2\u06b6\u06b7\7k\2\2\u06b7\u06b8\7o\2\2\u06b8\u06b9"+
		"\7c\2\2\u06b9\u06ba\7i\2\2\u06ba\u06bb\7g\2\2\u06bb\u06bc\7\63\2\2\u06bc"+
		"\u06bd\7F\2\2\u06bd\u06be\7C\2\2\u06be\u06bf\7t\2\2\u06bf\u06c0\7t\2\2"+
		"\u06c0\u06c1\7c\2\2\u06c1\u06c2\7{\2\2\u06c2\u00fe\3\2\2\2\u06c3\u06c4"+
		"\7k\2\2\u06c4\u06c5\7k\2\2\u06c5\u06c6\7o\2\2\u06c6\u06c7\7c\2\2\u06c7"+
		"\u06c8\7i\2\2\u06c8\u06c9\7g\2\2\u06c9\u06ca\7\63\2\2\u06ca\u06cb\7F\2"+
		"\2\u06cb\u06cc\7C\2\2\u06cc\u06cd\7t\2\2\u06cd\u06ce\7t\2\2\u06ce\u06cf"+
		"\7c\2\2\u06cf\u06d0\7{\2\2\u06d0\u0100\3\2\2\2\u06d1\u06d2\7w\2\2\u06d2"+
		"\u06d3\7k\2\2\u06d3\u06d4\7o\2\2\u06d4\u06d5\7c\2\2\u06d5\u06d6\7i\2\2"+
		"\u06d6\u06d7\7g\2\2\u06d7\u06d8\7\63\2\2\u06d8\u06d9\7F\2\2\u06d9\u06da"+
		"\7C\2\2\u06da\u06db\7t\2\2\u06db\u06dc\7t\2\2\u06dc\u06dd\7c\2\2\u06dd"+
		"\u06de\7{\2\2\u06de\u0102\3\2\2\2\u06df\u06e0\7k\2\2\u06e0\u06e1\7o\2"+
		"\2\u06e1\u06e2\7c\2\2\u06e2\u06e3\7i\2\2\u06e3\u06e4\7g\2\2\u06e4\u06e5"+
		"\7\64\2\2\u06e5\u06e6\7F\2\2\u06e6\u06e7\7T\2\2\u06e7\u06e8\7g\2\2\u06e8"+
		"\u06e9\7e\2\2\u06e9\u06ea\7v\2\2\u06ea\u0104\3\2\2\2\u06eb\u06ec\7k\2"+
		"\2\u06ec\u06ed\7k\2\2\u06ed\u06ee\7o\2\2\u06ee\u06ef\7c\2\2\u06ef\u06f0"+
		"\7i\2\2\u06f0\u06f1\7g\2\2\u06f1\u06f2\7\64\2\2\u06f2\u06f3\7F\2\2\u06f3"+
		"\u06f4\7T\2\2\u06f4\u06f5\7g\2\2\u06f5\u06f6\7e\2\2\u06f6\u06f7\7v\2\2"+
		"\u06f7\u0106\3\2\2\2\u06f8\u06f9\7w\2\2\u06f9\u06fa\7k\2\2\u06fa\u06fb"+
		"\7o\2\2\u06fb\u06fc\7c\2\2\u06fc\u06fd\7i\2\2\u06fd\u06fe\7g\2\2\u06fe"+
		"\u06ff\7\64\2\2\u06ff\u0700\7F\2\2\u0700\u0701\7T\2\2\u0701\u0702\7g\2"+
		"\2\u0702\u0703\7e\2\2\u0703\u0704\7v\2\2\u0704\u0108\3\2\2\2\u0705\u0706"+
		"\7k\2\2\u0706\u0707\7o\2\2\u0707\u0708\7c\2\2\u0708\u0709\7i\2\2\u0709"+
		"\u070a\7g\2\2\u070a\u070b\7\64\2\2\u070b\u070c\7F\2\2\u070c\u070d\7O\2"+
		"\2\u070d\u070e\7U\2\2\u070e\u010a\3\2\2\2\u070f\u0710\7k\2\2\u0710\u0711"+
		"\7k\2\2\u0711\u0712\7o\2\2\u0712\u0713\7c\2\2\u0713\u0714\7i\2\2\u0714"+
		"\u0715\7g\2\2\u0715\u0716\7\64\2\2\u0716\u0717\7F\2\2\u0717\u0718\7O\2"+
		"\2\u0718\u0719\7U\2\2\u0719\u010c\3\2\2\2\u071a\u071b\7w\2\2\u071b\u071c"+
		"\7k\2\2\u071c\u071d\7o\2\2\u071d\u071e\7c\2\2\u071e\u071f\7i\2\2\u071f"+
		"\u0720\7g\2\2\u0720\u0721\7\64\2\2\u0721\u0722\7F\2\2\u0722\u0723\7O\2"+
		"\2\u0723\u0724\7U\2\2\u0724\u010e\3\2\2\2\u0725\u0726\7k\2\2\u0726\u0727"+
		"\7o\2\2\u0727\u0728\7c\2\2\u0728\u0729\7i\2\2\u0729\u072a\7g\2\2\u072a"+
		"\u072b\7\64\2\2\u072b\u072c\7F\2\2\u072c\u072d\7O\2\2\u072d\u072e\7U\2"+
		"\2\u072e\u072f\7C\2\2\u072f\u0730\7t\2\2\u0730\u0731\7t\2\2\u0731\u0732"+
		"\7c\2\2\u0732\u0733\7{\2\2\u0733\u0110\3\2\2\2\u0734\u0735\7k\2\2\u0735"+
		"\u0736\7k\2\2\u0736\u0737\7o\2\2\u0737\u0738\7c\2\2\u0738\u0739\7i\2\2"+
		"\u0739\u073a\7g\2\2\u073a\u073b\7\64\2\2\u073b\u073c\7F\2\2\u073c\u073d"+
		"\7O\2\2\u073d\u073e\7U\2\2\u073e\u073f\7C\2\2\u073f\u0740\7t\2\2\u0740"+
		"\u0741\7t\2\2\u0741\u0742\7c\2\2\u0742\u0743\7{\2\2\u0743\u0112\3\2\2"+
		"\2\u0744\u0745\7w\2\2\u0745\u0746\7k\2\2\u0746\u0747\7o\2\2\u0747\u0748"+
		"\7c\2\2\u0748\u0749\7i\2\2\u0749\u074a\7g\2\2\u074a\u074b\7\64\2\2\u074b"+
		"\u074c\7F\2\2\u074c\u074d\7O\2\2\u074d\u074e\7U\2\2\u074e\u074f\7C\2\2"+
		"\u074f\u0750\7t\2\2\u0750\u0751\7t\2\2\u0751\u0752\7c\2\2\u0752\u0753"+
		"\7{\2\2\u0753\u0114\3\2\2\2\u0754\u0755\7u\2\2\u0755\u0756\7v\2\2\u0756"+
		"\u0757\7t\2\2\u0757\u0758\7w\2\2\u0758\u0759\7e\2\2\u0759\u075a\7v\2\2"+
		"\u075a\u0116\3\2\2\2\u075b\u075c\7x\2\2\u075c\u075d\7q\2\2\u075d\u075e"+
		"\7k\2\2\u075e\u075f\7f\2\2\u075f\u0118\3\2\2\2\u0760\u0761\7y\2\2\u0761"+
		"\u0762\7j\2\2\u0762\u0763\7k\2\2\u0763\u0764\7n\2\2\u0764\u0765\7g\2\2"+
		"\u0765\u011a\3\2\2\2\u0766\u0767\7d\2\2\u0767\u0768\7t\2\2\u0768\u0769"+
		"\7g\2\2\u0769\u076a\7c\2\2\u076a\u076b\7m\2\2\u076b\u011c\3\2\2\2\u076c"+
		"\u076d\7e\2\2\u076d\u076e\7q\2\2\u076e\u076f\7p\2\2\u076f\u0770\7v\2\2"+
		"\u0770\u0771\7k\2\2\u0771\u0772\7p\2\2\u0772\u0773\7w\2\2\u0773\u0774"+
		"\7g\2\2\u0774\u011e\3\2\2\2\u0775\u0776\7f\2\2\u0776\u0777\7q\2\2\u0777"+
		"\u0120\3\2\2\2\u0778\u0779\7g\2\2\u0779\u077a\7n\2\2\u077a\u077b\7u\2"+
		"\2\u077b\u077c\7g\2\2\u077c\u0122\3\2\2\2\u077d\u077e\7h\2\2\u077e\u077f"+
		"\7q\2\2\u077f\u0780\7t\2\2\u0780\u0124\3\2\2\2\u0781\u0782\7k\2\2\u0782"+
		"\u0783\7h\2\2\u0783\u0126\3\2\2\2\u0784\u0785\7f\2\2\u0785\u0786\7k\2"+
		"\2\u0786\u0787\7u\2\2\u0787\u0788\7e\2\2\u0788\u0789\7c\2\2\u0789\u078a"+
		"\7t\2\2\u078a\u078b\7f\2\2\u078b\u0128\3\2\2\2\u078c\u078d\7t\2\2\u078d"+
		"\u078e\7g\2\2\u078e\u078f\7v\2\2\u078f\u0790\7w\2\2\u0790\u0791\7t\2\2"+
		"\u0791\u0792\7p\2\2\u0792\u012a\3\2\2\2\u0793\u0794\7u\2\2\u0794\u0795"+
		"\7y\2\2\u0795\u0796\7k\2\2\u0796\u0797\7v\2\2\u0797\u0798\7e\2\2\u0798"+
		"\u0799\7j\2\2\u0799\u012c\3\2\2\2\u079a\u079b\7e\2\2\u079b\u079c\7c\2"+
		"\2\u079c\u079d\7u\2\2\u079d\u079e\7g\2\2\u079e\u012e\3\2\2\2\u079f\u07a0"+
		"\7f\2\2\u07a0\u07a1\7g\2\2\u07a1\u07a2\7h\2\2\u07a2\u07a3\7c\2\2\u07a3"+
		"\u07a4\7w\2\2\u07a4\u07a5\7n\2\2\u07a5\u07a6\7v\2\2\u07a6\u0130\3\2\2"+
		"\2\u07a7\u07a8\7u\2\2\u07a8\u07a9\7w\2\2\u07a9\u07aa\7d\2\2\u07aa\u07ab"+
		"\7t\2\2\u07ab\u07ac\7q\2\2\u07ac\u07ad\7w\2\2\u07ad\u07ae\7v\2\2\u07ae"+
		"\u07af\7k\2\2\u07af\u07b0\7p\2\2\u07b0\u07b1\7g\2\2\u07b1\u0132\3\2\2"+
		"\2\u07b2\u07b3\5\u01ab\u00d6\2\u07b3\u0134\3\2\2\2\u07b4\u07b5\5\u01ab"+
		"\u00d6\2\u07b5\u0136\3\2\2\2\u07b6\u07b8\5\u01b3\u00da\2\u07b7\u07b9\t"+
		"\2\2\2\u07b8\u07b7\3\2\2\2\u07b8\u07b9\3\2\2\2\u07b9\u0138\3\2\2\2\u07ba"+
		"\u07be\5\u01bd\u00df\2\u07bb\u07be\5\u01bf\u00e0\2\u07bc\u07be\5\u01c1"+
		"\u00e1\2\u07bd\u07ba\3\2\2\2\u07bd\u07bb\3\2\2\2\u07bd\u07bc\3\2\2\2\u07be"+
		"\u013a\3\2\2\2\u07bf\u07c0\5\u0139\u009d\2\u07c0\u07c1\t\3\2\2\u07c1\u013c"+
		"\3\2\2\2\u07c2\u07c3\7v\2\2\u07c3\u07c4\7t\2\2\u07c4\u07c5\7w\2\2\u07c5"+
		"\u07cc\7g\2\2\u07c6\u07c7\7h\2\2\u07c7\u07c8\7c\2\2\u07c8\u07c9\7n\2\2"+
		"\u07c9\u07ca\7u\2\2\u07ca\u07cc\7g\2\2\u07cb\u07c2\3\2\2\2\u07cb\u07c6"+
		"\3\2\2\2\u07cc\u013e\3\2\2\2\u07cd\u07d2\5\u01b3\u00da\2\u07ce\u07cf\7"+
		"n\2\2\u07cf\u07d3\7h\2\2\u07d0\u07d1\7N\2\2\u07d1\u07d3\7H\2\2\u07d2\u07ce"+
		"\3\2\2\2\u07d2\u07d0\3\2\2\2\u07d3\u0140\3\2\2\2\u07d4\u07d5\5\u01ab\u00d6"+
		"\2\u07d5\u0142\3\2\2\2\u07d6\u07d7\7>\2\2\u07d7\u07d8\7>\2\2\u07d8\u0144"+
		"\3\2\2\2\u07d9\u07da\7@\2\2\u07da\u07db\7@\2\2\u07db\u0146\3\2\2\2\u07dc"+
		"\u07dd\7-\2\2\u07dd\u07de\7-\2\2\u07de\u0148\3\2\2\2\u07df\u07e0\7/\2"+
		"\2\u07e0\u07e1\7/\2\2\u07e1\u014a\3\2\2\2\u07e2\u07e3\7>\2\2\u07e3\u07e4"+
		"\7?\2\2\u07e4\u014c\3\2\2\2\u07e5\u07e6\7@\2\2\u07e6\u07e7\7?\2\2\u07e7"+
		"\u014e\3\2\2\2\u07e8\u07e9\7?\2\2\u07e9\u07ea\7?\2\2\u07ea\u0150\3\2\2"+
		"\2\u07eb\u07ec\7#\2\2\u07ec\u07ed\7?\2\2\u07ed\u0152\3\2\2\2\u07ee\u07ef"+
		"\7(\2\2\u07ef\u07f0\7(\2\2\u07f0\u0154\3\2\2\2\u07f1\u07f2\7~\2\2\u07f2"+
		"\u07f3\7~\2\2\u07f3\u0156\3\2\2\2\u07f4\u07f5\7`\2\2\u07f5\u07f6\7`\2"+
		"\2\u07f6\u0158\3\2\2\2\u07f7\u07f8\7,\2\2\u07f8\u07f9\7?\2\2\u07f9\u015a"+
		"\3\2\2\2\u07fa\u07fb\7\61\2\2\u07fb\u07fc\7?\2\2\u07fc\u015c\3\2\2\2\u07fd"+
		"\u07fe\7-\2\2\u07fe\u07ff\7?\2\2\u07ff\u015e\3\2\2\2\u0800\u0801\7\'\2"+
		"\2\u0801\u0802\7?\2\2\u0802\u0160\3\2\2\2\u0803\u0804\7>\2\2\u0804\u0805"+
		"\7>\2\2\u0805\u0806\7?\2\2\u0806\u0162\3\2\2\2\u0807\u0808\7@\2\2\u0808"+
		"\u0809\7@\2\2\u0809\u080a\7?\2\2\u080a\u0164\3\2\2\2\u080b\u080c\7(\2"+
		"\2\u080c\u080d\7?\2\2\u080d\u0166\3\2\2\2\u080e\u080f\7`\2\2\u080f\u0810"+
		"\7?\2\2\u0810\u0168\3\2\2\2\u0811\u0812\7~\2\2\u0812\u0813\7?\2\2\u0813"+
		"\u016a\3\2\2\2\u0814\u0815\7/\2\2\u0815\u0816\7?\2\2\u0816\u016c\3\2\2"+
		"\2\u0817\u0818\7*\2\2\u0818\u016e\3\2\2\2\u0819\u081a\7+\2\2\u081a\u0170"+
		"\3\2\2\2\u081b\u081c\7]\2\2\u081c\u0172\3\2\2\2\u081d\u081e\7_\2\2\u081e"+
		"\u0174\3\2\2\2\u081f\u0820\7}\2\2\u0820\u0176\3\2\2\2\u0821\u0822\7\177"+
		"\2\2\u0822\u0178\3\2\2\2\u0823\u0824\7\60\2\2\u0824\u017a\3\2\2\2\u0825"+
		"\u0826\7.\2\2\u0826\u017c\3\2\2\2\u0827\u0828\7<\2\2\u0828\u017e\3\2\2"+
		"\2\u0829\u082a\7?\2\2\u082a\u0180\3\2\2\2\u082b\u082c\7=\2\2\u082c\u0182"+
		"\3\2\2\2\u082d\u082e\7#\2\2\u082e\u0184\3\2\2\2\u082f\u0830\7/\2\2\u0830"+
		"\u0186\3\2\2\2\u0831\u0832\7\u0080\2\2\u0832\u0188\3\2\2\2\u0833\u0834"+
		"\7-\2\2\u0834\u018a\3\2\2\2\u0835\u0836\7,\2\2\u0836\u018c\3\2\2\2\u0837"+
		"\u0838\7\61\2\2\u0838\u018e\3\2\2\2\u0839\u083a\7\'\2\2\u083a\u0190\3"+
		"\2\2\2\u083b\u083c\7>\2\2\u083c\u0192\3\2\2\2\u083d\u083e\7@\2\2\u083e"+
		"\u0194\3\2\2\2\u083f\u0840\7~\2\2\u0840\u0196\3\2\2\2\u0841\u0842\7`\2"+
		"\2\u0842\u0198\3\2\2\2\u0843\u0844\7(\2\2\u0844\u019a\3\2\2\2\u0845\u0846"+
		"\7A\2\2\u0846\u019c\3\2\2\2\u0847\u0848\7k\2\2\u0848\u0849\7p\2\2\u0849"+
		"\u084a\7x\2\2\u084a\u084b\7c\2\2\u084b\u084c\7t\2\2\u084c\u084d\7k\2\2"+
		"\u084d\u084e\7c\2\2\u084e\u084f\7p\2\2\u084f\u0850\7v\2\2\u0850\u019e"+
		"\3\2\2\2\u0851\u0852\7r\2\2\u0852\u0853\7t\2\2\u0853\u0854\7g\2\2\u0854"+
		"\u0855\7e\2\2\u0855\u0856\7k\2\2\u0856\u0857\7u\2\2\u0857\u0858\7g\2\2"+
		"\u0858\u01a0\3\2\2\2\u0859\u085a\7j\2\2\u085a\u085b\7k\2\2\u085b\u085c"+
		"\7i\2\2\u085c\u085d\7j\2\2\u085d\u085e\7r\2\2\u085e\u01a2\3\2\2\2\u085f"+
		"\u0860\7o\2\2\u0860\u0861\7g\2\2\u0861\u0862\7f\2\2\u0862\u0863\7k\2\2"+
		"\u0863\u0864\7w\2\2\u0864\u0865\7o\2\2\u0865\u0866\7r\2\2\u0866\u01a4"+
		"\3\2\2\2\u0867\u0868\7n\2\2\u0868\u0869\7q\2\2\u0869\u086a\7y\2\2\u086a"+
		"\u086b\7r\2\2\u086b\u01a6\3\2\2\2\u086c\u086d\7r\2\2\u086d\u086e\7t\2"+
		"\2\u086e\u086f\7g\2\2\u086f\u0870\7e\2\2\u0870\u0871\7k\2\2\u0871\u0872"+
		"\7u\2\2\u0872\u0873\7k\2\2\u0873\u0874\7q\2\2\u0874\u0875\7p\2\2\u0875"+
		"\u01a8\3\2\2\2\u0876\u0877\t\4\2\2\u0877\u0878\3\2\2\2\u0878\u0879\b\u00d5"+
		"\2\2\u0879\u01aa\3\2\2\2\u087a\u087b\5\u01af\u00d8\2\u087b\u087c\5\u01ad"+
		"\u00d7\2\u087c\u01ac\3\2\2\2\u087d\u087e\5\u01af\u00d8\2\u087e\u087f\5"+
		"\u01ad\u00d7\2\u087f\u0885\3\2\2\2\u0880\u0881\5\u01b1\u00d9\2\u0881\u0882"+
		"\5\u01ad\u00d7\2\u0882\u0885\3\2\2\2\u0883\u0885\3\2\2\2\u0884\u087d\3"+
		"\2\2\2\u0884\u0880\3\2\2\2\u0884\u0883\3\2\2\2\u0885\u01ae\3\2\2\2\u0886"+
		"\u0887\t\5\2\2\u0887\u01b0\3\2\2\2\u0888\u0889\t\6\2\2\u0889\u01b2\3\2"+
		"\2\2\u088a\u088c\5\u01b5\u00db\2\u088b\u088d\5\u01b7\u00dc\2\u088c\u088b"+
		"\3\2\2\2\u088c\u088d\3\2\2\2\u088d\u0892\3\2\2\2\u088e\u088f\5\u01bb\u00de"+
		"\2\u088f\u0890\5\u01b7\u00dc\2\u0890\u0892\3\2\2\2\u0891\u088a\3\2\2\2"+
		"\u0891\u088e\3\2\2\2\u0892\u01b4\3\2\2\2\u0893\u0894\5\u01bb\u00de\2\u0894"+
		"\u0895\7\60\2\2\u0895\u0896\5\u01bb\u00de\2\u0896\u089d\3\2\2\2\u0897"+
		"\u0898\5\u01bb\u00de\2\u0898\u0899\7\60\2\2\u0899\u089d\3\2\2\2\u089a"+
		"\u089b\7\60\2\2\u089b\u089d\5\u01bb\u00de\2\u089c\u0893\3\2\2\2\u089c"+
		"\u0897\3\2\2\2\u089c\u089a\3\2\2\2\u089d\u01b6\3\2\2\2\u089e\u08a0\7g"+
		"\2\2\u089f\u08a1\5\u01b9\u00dd\2\u08a0\u089f\3\2\2\2\u08a0\u08a1\3\2\2"+
		"\2\u08a1\u08a2\3\2\2\2\u08a2\u08a9\5\u01bb\u00de\2\u08a3\u08a5\7G\2\2"+
		"\u08a4\u08a6\5\u01b9\u00dd\2\u08a5\u08a4\3\2\2\2\u08a5\u08a6\3\2\2\2\u08a6"+
		"\u08a7\3\2\2\2\u08a7\u08a9\5\u01bb\u00de\2\u08a8\u089e\3\2\2\2\u08a8\u08a3"+
		"\3\2\2\2\u08a9\u01b8\3\2\2\2\u08aa\u08ab\t\7\2\2\u08ab\u01ba\3\2\2\2\u08ac"+
		"\u08b1\5\u01b1\u00d9\2\u08ad\u08ae\5\u01b1\u00d9\2\u08ae\u08af\5\u01bb"+
		"\u00de\2\u08af\u08b1\3\2\2\2\u08b0\u08ac\3\2\2\2\u08b0\u08ad\3\2\2\2\u08b1"+
		"\u01bc\3\2\2\2\u08b2\u08b6\t\b\2\2\u08b3\u08b5\t\6\2\2\u08b4\u08b3\3\2"+
		"\2\2\u08b5\u08b8\3\2\2\2\u08b6\u08b4\3\2\2\2\u08b6\u08b7\3\2\2\2\u08b7"+
		"\u01be\3\2\2\2\u08b8\u08b6\3\2\2\2\u08b9\u08bd\7\62\2\2\u08ba\u08bc\t"+
		"\t\2\2\u08bb\u08ba\3\2\2\2\u08bc\u08bf\3\2\2\2\u08bd\u08bb\3\2\2\2\u08bd"+
		"\u08be\3\2\2\2\u08be\u01c0\3\2\2\2\u08bf\u08bd\3\2\2\2\u08c0\u08c1\7\62"+
		"\2\2\u08c1\u08c5\7z\2\2\u08c2\u08c3\7\62\2\2\u08c3\u08c5\7Z\2\2\u08c4"+
		"\u08c0\3\2\2\2\u08c4\u08c2\3\2\2\2\u08c5\u08c6\3\2\2\2\u08c6\u08c7\t\n"+
		"\2\2\u08c7\u01c2\3\2\2\2\22\2\u07b8\u07bd\u07cb\u07d2\u0884\u088c\u0891"+
		"\u089c\u08a0\u08a5\u08a8\u08b0\u08b6\u08bd\u08c4\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}