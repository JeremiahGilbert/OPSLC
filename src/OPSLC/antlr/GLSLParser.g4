parser grammar GLSLParser;

options { tokenVocab=GLSLLexer; }

variableIdentifier : IDENTIFIER;

primaryExpression : variableIdentifier
				  | INTCONSTANT
				  | UINTCONSTANT
				  | FLOATCONSTANT
				  | BOOLCONSTANT
				  | DOUBLECONSTANT
				  | LEFT_PAREN expression RIGHT_PAREN;


postfixExpression : primaryExpression
				  | postfixExpression LEFT_BRACKET integerExpression RIGHT_BRACKET
				  //| functionCall
				  | postfixExpression DOT IDENTIFIER //FIELD_SELECTION
				  | postfixExpression INC_OP
				  | postfixExpression DEC_OP
				   
				  | typeSpecifier LEFT_PAREN assignmentExpression functionCallHeaderWithParameters_ RIGHT_PAREN
				  | postfixExpression LEFT_PAREN assignmentExpression functionCallHeaderWithParameters_ RIGHT_PAREN
				  | typeSpecifier LEFT_PAREN VOID_? RIGHT_PAREN
				  | postfixExpression LEFT_PAREN VOID_? RIGHT_PAREN;

integerExpression : expression;

//functionCall : functionCallOrMethod;

//functionCallOrMethod : functionCallGeneric;

//functionCallGeneric : functionCallHeaderWithParameters RIGHT_PAREN
//					  | functionCallHeaderNoParameters RIGHT_PAREN;

//functionCallHeaderNoParameters : functionCallHeader VOID
//							| functionCallHeader;

//functionCallHeaderWithParameters : functionCallHeader assignmentExpression
//									 | functionCallHeaderWithParameters COMMA assignmentExpression;

//functionCallHeaderWithParameters : functionCallHeader assignmentExpression functionCallHeaderWithParameters_;

functionCallHeaderWithParameters_ : COMMA assignmentExpression functionCallHeaderWithParameters_
								  | ;

//functionCallHeader : functionIdentifier LEFT_PAREN;

//functionIdentifier : typeSpecifier
//					| postfixExpression;

unaryExpression : postfixExpression
				| <assoc=right> INC_OP unaryExpression
				| <assoc=right> DEC_OP unaryExpression
				| <assoc=right> unaryOperator unaryExpression;

unaryOperator : PLUS
			  | DASH
			  | BANG
			  | TILDE;

multiplicativeExpression : unaryExpression
						 | multiplicativeExpression STAR unaryExpression
						 | multiplicativeExpression SLASH unaryExpression
						 | multiplicativeExpression PERCENT unaryExpression;

additiveExpression : multiplicativeExpression
				   | additiveExpression PLUS multiplicativeExpression
				   | additiveExpression DASH multiplicativeExpression;

shiftExpression : additiveExpression
				| shiftExpression LEFT_OP additiveExpression
				| shiftExpression RIGHT_OP additiveExpression;

relationalExpression : shiftExpression
					 | relationalExpression LEFT_ANGLE shiftExpression
					 | relationalExpression RIGHT_ANGLE shiftExpression
					 | relationalExpression LE_OP shiftExpression
					 | relationalExpression GE_OP shiftExpression;

equalityExpression : relationalExpression
				   | equalityExpression EQ_OP relationalExpression
				   | equalityExpression NE_OP relationalExpression;

andExpression : equalityExpression
			  | andExpression AMPERSAND equalityExpression;

exclusiveOrExpression : andExpression
					  | exclusiveOrExpression CARET andExpression;

inclusiveOrExpression : exclusiveOrExpression
					  | inclusiveOrExpression VERTICAL_BAR exclusiveOrExpression;

logicalAndExpression : inclusiveOrExpression
					 | logicalAndExpression AND_OP inclusiveOrExpression;

logicalXorExpression : logicalAndExpression
					 | logicalXorExpression XOR_OP logicalAndExpression;

logicalOrExpression : logicalXorExpression
					| logicalOrExpression OR_OP logicalXorExpression;

conditionalExpression : logicalOrExpression
					  | <assoc=right> logicalOrExpression QUESTION expression COLON assignmentExpression;

assignmentExpression : conditionalExpression
					 | <assoc=right> unaryExpression assignmentOperator assignmentExpression;

assignmentOperator : EQUAL
				   | MUL_ASSIGN
				   | DIV_ASSIGN
				   | MOD_ASSIGN
				   | ADD_ASSIGN
				   | SUB_ASSIGN
				   | LEFT_ASSIGN
				   | RIGHT_ASSIGN
				   | AND_ASSIGN
				   | XOR_ASSIGN
				   | OR_ASSIGN;

expression : assignmentExpression
		   | expression COMMA assignmentExpression;

constantExpression : conditionalExpression;

declaration : functionPrototype SEMICOLON
			| initDeclaratorList SEMICOLON
			| PRECISION precisionQualifier typeSpecifier SEMICOLON
			| typeQualifier IDENTIFIER LEFT_BRACE structDeclarationList RIGHT_BRACE SEMICOLON
			| typeQualifier IDENTIFIER LEFT_BRACE structDeclarationList RIGHT_BRACE IDENTIFIER SEMICOLON
			| typeQualifier IDENTIFIER LEFT_BRACE structDeclarationList RIGHT_BRACE IDENTIFIER arraySpecifier SEMICOLON
			| typeQualifier SEMICOLON
			| typeQualifier IDENTIFIER SEMICOLON
			| typeQualifier IDENTIFIER identifierList SEMICOLON;

identifierList : COMMA IDENTIFIER
			   | identifierList COMMA IDENTIFIER;

functionPrototype : functionDeclarator RIGHT_PAREN;

functionDeclarator : functionHeader
				   | functionHeaderWithParameters;

functionHeaderWithParameters : functionHeader parameterDeclaration
							 | functionHeaderWithParameters COMMA parameterDeclaration;

functionHeader : fullySpecifiedType IDENTIFIER LEFT_PAREN;

parameterDeclarator : typeSpecifier IDENTIFIER
					| typeSpecifier IDENTIFIER arraySpecifier;

parameterDeclaration : typeQualifier parameterDeclarator
					 | parameterDeclarator
					 | typeQualifier parameterTypeSpecifier
					 | parameterTypeSpecifier;

parameterTypeSpecifier : typeSpecifier;

initDeclaratorList : singleDeclaration
				   | initDeclaratorList COMMA IDENTIFIER
				   | initDeclaratorList COMMA IDENTIFIER arraySpecifier
				   | initDeclaratorList COMMA IDENTIFIER arraySpecifier EQUAL initializer
				   | initDeclaratorList COMMA IDENTIFIER EQUAL initializer;

singleDeclaration : fullySpecifiedType
				  | fullySpecifiedType IDENTIFIER
				  | fullySpecifiedType IDENTIFIER arraySpecifier
				  | fullySpecifiedType IDENTIFIER arraySpecifier EQUAL initializer
				  | fullySpecifiedType IDENTIFIER EQUAL initializer;

fullySpecifiedType : typeSpecifier
				   | typeQualifier typeSpecifier;

invariantQualifier : INVARIANT;

interpolationQualifier : SMOOTH
					   | FLAT
					   | NOPERSPECTIVE;

layoutQualifier : LAYOUT LEFT_PAREN layoutQualifierIdList RIGHT_PAREN;

layoutQualifierIdList : layoutQualifierId
					  | layoutQualifierIdList COMMA layoutQualifierId;

layoutQualifierId : IDENTIFIER
				  | IDENTIFIER EQUAL constantExpression
				  | SHARED;

preciseQualifier : PRECISE;

typeQualifier : singleTypeQualifier
			  | typeQualifier singleTypeQualifier;

singleTypeQualifier : storageQualifier
					| layoutQualifier
					| precisionQualifier
					| interpolationQualifier
					| invariantQualifier
					| preciseQualifier;

storageQualifier : CONST_
				 | IN_
				 | OUT_
				 | INOUT
				 | CENTROID
				 | PATCH
				 | SAMPLE
				 | UNIFORM
				 | BUFFER
				 | SHARED
				 | COHERENT
				 | VOLATILE
				 | RESTRICT
				 | READONLY
				 | WRITEONLY
				 | SUBROUTINE
				 | SUBROUTINE LEFT_PAREN typeNameList RIGHT_PAREN;

typeNameList : IDENTIFIER //TYPE_NAME
			 | typeNameList COMMA IDENTIFIER/*TYPE_NAME*/;

typeSpecifier : typeSpecifierNonarray
			  | typeSpecifierNonarray arraySpecifier;

arraySpecifier : LEFT_BRACKET RIGHT_BRACKET
			   | LEFT_BRACKET conditionalExpression RIGHT_BRACKET
			   | arraySpecifier LEFT_BRACKET RIGHT_BRACKET
			   | arraySpecifier LEFT_BRACKET conditionalExpression RIGHT_BRACKET;

typeSpecifierNonarray : VOID_
					  | FLOAT
					  | DOUBLE
					  | INT
					  | UINT
					  | BOOL
					  | VEC2
					  | VEC3
					  | VEC4
					  | DVEC2
					  | DVEC3
					  | DVEC4
					  | BVEC2
					  | BVEC3
					  | BVEC4
					  | IVEC2
					  | IVEC3
					  | IVEC4
					  | UVEC2
					  | UVEC3
					  | UVEC4
					  | MAT2
					  | MAT3
					  | MAT4
					  | MAT2X2
					  | MAT2X3
					  | MAT2X4
					  | MAT3X2
					  | MAT3X3
					  | MAT3X4
					  | MAT4X2
					  | MAT4X3
					  | MAT4X4
					  | DMAT2
					  | DMAT3
					  | DMAT4
					  | DMAT2X2
					  | DMAT2X3
					  | DMAT2X4
					  | DMAT3X2
					  | DMAT3X3
					  | DMAT3X4
					  | DMAT4X2
					  | DMAT4X3
					  | DMAT4X4
					  | ATOMIC_UINT
					  | SAMPLER2D
					  | SAMPLER3D
					  | SAMPLERCUBE
					  | SAMPLER2DSHADOW
					  | SAMPLERCUBESHADOW
					  | SAMPLER2DARRAY
					  | SAMPLER2DARRAYSHADOW
					  | SAMPLERCUBEARRAY
					  | SAMPLERCUBEARRAYSHADOW
					  | ISAMPLER2D
					  | ISAMPLER3D
					  | ISAMPLERCUBE
					  | ISAMPLER2DARRAY
					  | ISAMPLERCUBEARRAY
					  | USAMPLER2D
					  | USAMPLER3D
					  | USAMPLERCUBE
					  | USAMPLER2DARRAY
					  | USAMPLERCUBEARRAY
					  | SAMPLER1D
					  | SAMPLER1DSHADOW
					  | SAMPLER1DARRAY
					  | SAMPLER1DARRAYSHADOW
					  | ISAMPLER1D
					  | ISAMPLER1DARRAY
					  | USAMPLER1D
					  | USAMPLER1DARRAY
					  | SAMPLER2DRECT
					  | SAMPLER2DRECTSHADOW
					  | ISAMPLER2DRECT
					  | USAMPLER2DRECT
					  | SAMPLERBUFFER
					  | ISAMPLERBUFFER
					  | USAMPLERBUFFER
					  | SAMPLER2DMS
					  | ISAMPLER2DMS
					  | USAMPLER2DMS
					  | SAMPLER2DMSARRAY
					  | ISAMPLER2DMSARRAY
					  | USAMPLER2DMSARRAY
					  | IMAGE2D
					  | IIMAGE2D
					  | UIMAGE2D
					  | IMAGE3D
					  | IIMAGE3D
					  | UIMAGE3D
					  | IMAGECUBE
					  | IIMAGECUBE
					  | UIMAGECUBE
					  | IMAGEBUFFER
					  | IIMAGEBUFFER
					  | UIMAGEBUFFER
					  | IMAGE1D
					  | IIMAGE1D
					  | UIMAGE1D
					  | IMAGE1DARRAY
					  | IIMAGE1DARRAY
					  | UIMAGE1DARRAY
					  | IMAGE2DRECT
					  | IIMAGE2DRECT
					  | UIMAGE2DRECT
					  | IMAGE2DARRAY
					  | IIMAGE2DARRAY
					  | UIMAGE2DARRAY
					  | IMAGECUBEARRAY
					  | IIMAGECUBEARRAY
					  | UIMAGECUBEARRAY
					  | IMAGE2DMS
					  | IIMAGE2DMS
					  | UIMAGE2DMS
					  | IMAGE2DMSARRAY
					  | IIMAGE2DMSARRAY
					  | UIMAGE2DMSARRAY
					  | structSpecifier
					  | IDENTIFIER /*TYPE_NAME*/;

precisionQualifier : HIGH_PRECISION
				   | MEDIUM_PRECISION
				   | LOW_PRECISION;

structSpecifier : STRUCT IDENTIFIER LEFT_BRACE structDeclarationList RIGHT_BRACE
				| STRUCT LEFT_BRACE structDeclarationList RIGHT_BRACE;

structDeclarationList : structDeclaration
					  | structDeclarationList structDeclaration;

structDeclaration : typeSpecifier structDeclaratorList SEMICOLON
				  | typeQualifier typeSpecifier structDeclaratorList SEMICOLON;

structDeclaratorList : structDeclarator
					 | structDeclaratorList COMMA structDeclarator;

structDeclarator : IDENTIFIER
				 | IDENTIFIER arraySpecifier;

initializer : assignmentExpression
			| LEFT_BRACE initializerList RIGHT_BRACE
			| LEFT_BRACE initializerList COMMA RIGHT_BRACE;

initializerList : initializer
				| initializerList COMMA initializer;

declarationStatement : declaration;

statement : compundStatement
		  | simpleStatement;

simpleStatement : declarationStatement
				| expressionStatement
				| selectionStatement
				| switchStatement
				| caseLabel
				| iterationStatement
				| jumpStatement;

compundStatement : LEFT_BRACE RIGHT_BRACE
				 | LEFT_BRACE statementList RIGHT_BRACE;

statementNoNewScope : compoundStatementNoNewScope
					| simpleStatement;

compoundStatementNoNewScope : LEFT_BRACE RIGHT_BRACE
							| LEFT_BRACE statementList RIGHT_BRACE;

statementList : statement
			  | statementList statement;

expressionStatement : SEMICOLON
					| expression SEMICOLON;

selectionStatement : IF LEFT_PAREN expression RIGHT_PAREN selectionRestStatement;

selectionRestStatement : statement ELSE statement
					   | statement;

condition : expression
		  | fullySpecifiedType IDENTIFIER EQUAL initializer;

switchStatement : SWITCH LEFT_PAREN expression RIGHT_PAREN LEFT_BRACE switchStatementList RIGHT_BRACE;

switchStatementList : statementList
					| ;

caseLabel : CASE expression COLON
		  | DEFAULT COLON;

iterationStatement : WHILE LEFT_PAREN condition RIGHT_PAREN statementNoNewScope
				   | DO statement WHILE LEFT_PAREN expression RIGHT_PAREN SEMICOLON
				   | FOR LEFT_PAREN forInitStatement forRestStatement RIGHT_PAREN statementNoNewScope;

forInitStatement : expressionStatement
				 | declarationStatement;

conditionopt : condition
			 | ;

forRestStatement : conditionopt SEMICOLON
				 | conditionopt SEMICOLON expression;

jumpStatement : CONTINUE SEMICOLON
			  | BREAK SEMICOLON
			  | RETURN SEMICOLON
			  | RETURN expression SEMICOLON
			  | DISCARD SEMICOLON;

translationUnit : externalDeclaration
				| translationUnit externalDeclaration;

externalDeclaration : functionDefinition
					| declaration
					| SEMICOLON;

functionDefinition : functionPrototype compoundStatementNoNewScope;
