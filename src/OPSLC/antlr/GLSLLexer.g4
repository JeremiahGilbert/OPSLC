lexer grammar GLSLLexer;

// Basic types.
CONST_	: 'const';
BOOL	: 'bool';
FLOAT	: 'float';
INT		: 'int';
UINT	: 'uint';
DOUBLE	: 'double';

// Vector types.
BVEC2	: 'bvec2';
BVEC3	: 'bvec3';
BVEC4	: 'bvec4';

IVEC2	: 'ivec2';
IVEC3	: 'ivec3';
IVEC4	: 'ivec4';

UVEC2	: 'uvec2';
UVEC3	: 'uvec3';
UVEC4	: 'uvec4';

VEC2	: 'vec2';
VEC3	: 'vec3';
VEC4	: 'vec4';


// Matrix types.
MAT2	: 'mat2';
MAT3	: 'mat3';
MAT4	: 'mat4';

MAT2X2	: 'mat2x2';
MAT2X3	: 'mat2x3';
MAT2X4	: 'mat2x4';

MAT3X2	: 'mat3x2';
MAT3X3	: 'mat3x3';
MAT3X4	: 'mat3x4';

MAT4X2	: 'mat4x2';
MAT4X3	: 'mat4x3';
MAT4X4	: 'mat4x4';


// Double types.
DVEC2	: 'dvec2';
DVEC3	: 'dvec3';
DVEC4	: 'dvec4';

DMAT2	: 'dmat2';
DMAT3	: 'dmat3';
DMAT4	: 'dmat4';

DMAT2X2	: 'dmat2x2';
DMAT2X3	: 'dmat2x3';
DMAT2X4	: 'dmat2x4';

DMAT3X2	: 'dmat3x2';
DMAT3X3	: 'dmat3x3';
DMAT3X4	: 'dmat3x4';

DMAT4X2	: 'dmat4x2';
DMAT4X3	: 'dmat4x3';
DMAT4X4	: 'dmat4x4';

// Type qualifiers.
CENTROID		: 'centroid';
IN_				: 'in';
OUT_			: 'out';
INOUT			: 'inout';
UNIFORM			: 'uniform';
PATCH			: 'patch';
SAMPLE			: 'sample';
BUFFER			: 'buffer';
SHARED			: 'shared';
COHERENT		: 'coherent';
VOLATILE		: 'volatile';
RESTRICT		: 'restrict';
READONLY		: 'readonly';
WRITEONLY		: 'writeonly';
NOPERSPECTIVE	: 'noperspective';
FLAT			: 'flat';
SMOOTH			: 'smooth';
LAYOUT			: 'layout';

// Atomics.
ATOMIC_UINT	: 'atomic_uint';

// Samplers and images.
SAMPLER2D				: 'sampler2D';
SAMPLER3D				: 'sampler3D';
SAMPLERCUBE				: 'samplerCube';
SAMPLER2DSHADOW			: 'sampler2DShadow';
SAMPLERCUBESHADOW		: 'samplerCubeShadow';
SAMPLER2DARRAY			: 'sampler2DArray';
SAMPLER2DARRAYSHADOW	: 'sampler2DArrayShadow';
ISAMPLER2D				: 'isampler2D';
ISAMPLER3D				: 'isampler3D';
ISAMPLERCUBE			: 'isamplerCube';
ISAMPLER2DARRAY			: 'isampler2DArray';
USAMPLER2D				: 'usampler2D';
USAMPLER3D				: 'usampler3D';
USAMPLERCUBE			: 'usamplerCube';
USAMPLER2DARRAY			: 'usampler2DArray';

SAMPLER1D				: 'sampler1D';
SAMPLER1DSHADOW			: 'sampler1DShadow';
SAMPLER1DARRAY			: 'sampler1DArray';
SAMPLER1DARRAYSHADOW	: 'sampler1DArrayShadow';
ISAMPLER1D				: 'isampler1D';
ISAMPLER1DARRAY			: 'isampler1DArray';
USAMPLER1D				: 'usampler1D';
USAMPLER1DARRAY			: 'usampler1DArray';
SAMPLER2DRECT			: 'sampler2DRect';
SAMPLER2DRECTSHADOW		: 'sampler2DRectShadow'; 
ISAMPLER2DRECT			: 'isampler2DRect';
USAMPLER2DRECT			: 'usampler2DRect';

SAMPLERBUFFER			: 'samplerBuffer';
ISAMPLERBUFFER			: 'isamplerBuffer';
USAMPLERBUFFER			: 'usamplerBuffer';
SAMPLERCUBEARRAY		: 'samplerCubeArray';
SAMPLERCUBEARRAYSHADOW	: 'samplerCubeArrayShadow';
ISAMPLERCUBEARRAY		: 'isamplerCubeArray';
USAMPLERCUBEARRAY		: 'usamplerCubeArray';
SAMPLER2DMS				: 'sampler2DMS';
ISAMPLER2DMS			: 'isampler2DMS';
USAMPLER2DMS			: 'usampler2DMS';
SAMPLER2DMSARRAY		: 'sampler2DMSArray';
ISAMPLER2DMSARRAY		: 'isampler2DMSArray';
USAMPLER2DMSARRAY		: 'usampler2DMSArray';
IMAGE2D					: 'image2D';
IIMAGE2D				: 'iimage2D';
UIMAGE2D				: 'uimage2D';
IMAGE3D					: 'image3D';
IIMAGE3D				: 'iimage3D';
UIMAGE3D				: 'uimage3D';
IMAGECUBE				: 'imageCube';
IIMAGECUBE				: 'iimageCube';
UIMAGECUBE				: 'uimageCube';
IMAGEBUFFER				: 'imageBuffer';
IIMAGEBUFFER			: 'iimageBuffer';
UIMAGEBUFFER			: 'uimageBuffer';
IMAGE2DARRAY			: 'image2DArray';
IIMAGE2DARRAY			: 'iimage2DArray';
UIMAGE2DARRAY			: 'uimage2DArray';
IMAGECUBEARRAY			: 'imageCubeArray';
IIMAGECUBEARRAY			: 'iimageCubeArray';
UIMAGECUBEARRAY			: 'uimageCubeArray';

IMAGE1D			: 'image1D';
IIMAGE1D		: 'iimage1D';
UIMAGE1D		: 'uimage1D';
IMAGE1DARRAY	: 'image1DArray';
IIMAGE1DARRAY	: 'iimage1DArray';
UIMAGE1DARRAY	: 'uimage1DArray';
IMAGE2DRECT		: 'image2DRect';
IIMAGE2DRECT	: 'iimage2DRect';
UIMAGE2DRECT	: 'uimage2DRect';
IMAGE2DMS		: 'image2DMS';
IIMAGE2DMS		: 'iimage2DMS';
UIMAGE2DMS		: 'uimage2DMS';
IMAGE2DMSARRAY	: 'image2DMSArray';
IIMAGE2DMSARRAY	: 'iimage2DMSArray';
UIMAGE2DMSARRAY	: 'uimage2DMSArray';

// Special Types
STRUCT	: 'struct';
VOID_	: 'void';

// Control flow.
WHILE		: 'while';
BREAK		: 'break';
CONTINUE	: 'continue';
DO			: 'do';
ELSE		: 'else';
FOR			: 'for';
IF			: 'if';
DISCARD		: 'discard';
RETURN		: 'return';
SWITCH		: 'switch';
CASE		: 'case';
DEFAULT		: 'default';
SUBROUTINE	: 'subroutine';

// Identifiers and constants.
IDENTIFIER : Identifier;

TYPE_NAME		: Identifier;
FLOATCONSTANT	: FloatingConstant [fF]?;
INTCONSTANT		: DecimalConstant
				| OctalConstant
				| HexadecimalConstant;
UINTCONSTANT	: INTCONSTANT [uU];
BOOLCONSTANT	: 'true' | 'false';
DOUBLECONSTANT	: FloatingConstant ('lf'|'LF');
FIELD_SELECTION	: Identifier;

// Operators.
LEFT_OP			: '<<';
RIGHT_OP		: '>>';
INC_OP			: '++';
DEC_OP			: '--';
LE_OP			: '<=';
GE_OP			: '>=';
EQ_OP			: '==';
NE_OP			: '!=';
AND_OP			: '&&';
OR_OP			: '||';
XOR_OP			: '^^';
MUL_ASSIGN		: '*=';
DIV_ASSIGN		: '/=';
ADD_ASSIGN		: '+=';
MOD_ASSIGN		: '%=';
LEFT_ASSIGN		: '<<=';
RIGHT_ASSIGN	: '>>=';
AND_ASSIGN		: '&=';
XOR_ASSIGN		: '^=';
OR_ASSIGN		: '|=';
SUB_ASSIGN		: '-=';
LEFT_PAREN		: '(';
RIGHT_PAREN		: ')';
LEFT_BRACKET	: '[';
RIGHT_BRACKET	: ']';
LEFT_BRACE		: '{';
RIGHT_BRACE		: '}';
DOT				: '.';
COMMA			: ',';
COLON			: ':';
EQUAL			: '=';
SEMICOLON		: ';';
BANG			: '!';
DASH			: '-';
TILDE			: '~';
PLUS			: '+';
STAR			: '*';
SLASH			: '/';
PERCENT			: '%';
LEFT_ANGLE		: '<';
RIGHT_ANGLE		: '>';
VERTICAL_BAR	: '|';
CARET			: '^';
AMPERSAND		: '&';
QUESTION		: '?';

// Precision qualifiers.
INVARIANT			: 'invariant';
PRECISE				: 'precise';
HIGH_PRECISION		: 'highp';
MEDIUM_PRECISION	: 'mediump';
LOW_PRECISION		: 'lowp';
PRECISION			: 'precision';

WS : [ \n\t\r] -> skip;

fragment Identifier : Nondigit Identifier_;

fragment Identifier_ : Nondigit Identifier_
					 | Digit Identifier_
					 | ;

fragment Nondigit : [_a-zA-Z];

fragment Digit : [0-9];

fragment FloatingConstant : FractionalConstant ExponentPart?
						  | DigitSequence ExponentPart;

fragment FractionalConstant : DigitSequence '.' DigitSequence
							| DigitSequence '.'
							| '.' DigitSequence;

fragment ExponentPart : 'e' Sign? DigitSequence
					  | 'E' Sign? DigitSequence;

fragment Sign : [+-];

fragment DigitSequence : Digit
					   | Digit DigitSequence;

fragment DecimalConstant : [1-9][0-9]*;

fragment OctalConstant : '0'[0-7]*;

fragment HexadecimalConstant : ('0x'|'0X')[0-9A-f];
