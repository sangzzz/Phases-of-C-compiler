%{
	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void ins();
	void insV();
	int flag=0;


	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];
	extern int nestedno;
	extern int errno;
%}

%nonassoc IF
%token INT CHAR FLOAT DOUBLE LONG SHORT SIGNED UNSIGNED STRUCT
%token RETURN MAIN
%token VOID
%token WHILE FOR DO
%token BREAK
%token ENDIF
%expect 2

%token identifier
%token integer_constant string_constant float_constant character_constant

%nonassoc ELSE

%right leftshift_assignment_operator rightshift_assignment_operator
%right XOR_assignment_operator OR_assignment_operator
%right AND_assignment_operator modulo_assignment_operator
%right multiplication_assignment_operator division_assignment_operator
%right addition_assignment_operator subtraction_assignment_operator
%right assignment_operator

%left OR_operator
%left AND_operator
%left pipe_operator
%left caret_operator
%left amp_operator
%left equality_operator inequality_operator
%left lessthan_assignment_operator lessthan_operator greaterthan_assignment_operator greaterthan_operator
%left leftshift_operator rightshift_operator
%left add_operator subtract_operator
%left multiplication_operator division_operator modulo_operator

%right SIZEOF
%right tilde_operator exclamation_operator
%left increment_operator decrement_operator


%start PROGRAM

%%
PROGRAM
			: DECLARATION_LIST;

DECLARATION_LIST
			: DECLARATION D

D
			: DECLARATION_LIST
			| ;

DECLARATION
			: VARIABLE_DECLARATION
			| FUNCTION_DECLARATION
			| STRUCTURE_DEFINITION;

VARIABLE_DECLARATION
			: TYPE_SPECIFIER VARIABLE_DECLARATION_LIST ';'
			| STRUCTURE_DECLARATION;

VARIABLE_DECLARATION_LIST
			: VARIABLE_DECLARATION_IDENTIFIER V;

V
			: ',' VARIABLE_DECLARATION_LIST
			| ;

VARIABLE_DECLARATION_IDENTIFIER
			: identifier { ins(); } VDI;

VDI : IDENTIFIER_ARRAY_TYPE | assignment_operator EXPRESSION ;

IDENTIFIER_ARRAY_TYPE
			: '[' INITIALIZATION_PARAMS
			| ;

INITIALIZATION_PARAMS
			: integer_constant ']' INITIALIZATION
			| ']' STRING_INITIALIZATION;

INITIALIZATION
			: STRING_INITIALIZATION
			| ARRAY_INITIALIZATION
			| ;

TYPE_SPECIFIER
			: INT | CHAR | FLOAT | DOUBLE
			| LONG LONG_GRAMMAR
			| SHORT SHORT_GRAMMAR
			| UNSIGNED UNSIGNED_GRAMMAR
			| SIGNED SIGNED_GRAMMAR
			| VOID ;

UNSIGNED_GRAMMAR
			: INT | LONG LONG_GRAMMAR | SHORT SHORT_GRAMMAR | ;

SIGNED_GRAMMAR
			: INT | LONG LONG_GRAMMAR | SHORT SHORT_GRAMMAR | ;

LONG_GRAMMAR
			: INT | ;

SHORT_GRAMMAR
			: INT | ;

STRUCTURE_DEFINITION
			: STRUCT identifier { ins(); } '{' V1  '}' ';';

V1 : VARIABLE_DECLARATION V1 | ;

STRUCTURE_DECLARATION
			: STRUCT identifier VARIABLE_DECLARATION_LIST;


FUNCTION_DECLARATION
			: FUNCTION_DECLARATION_TYPE FUNCTION_DECLARATION_PARAM_STATEMENT;

FUNCTION_DECLARATION_TYPE
			: TYPE_SPECIFIER identifier '('  { ins();};

FUNCTION_DECLARATION_PARAM_STATEMENT
			: PARAMS ')' STATEMENT;

PARAMS
			: PARAMETERS_LIST | ;

PARAMETERS_LIST
			: TYPE_SPECIFIER PARAMETERS_IDENTIFIER_LIST;

PARAMETERS_IDENTIFIER_LIST
			: PARAM_IDENTIFIER PARAMETERS_IDENTIFIER_LIST_BREAKUP;

PARAMETERS_IDENTIFIER_LIST_BREAKUP
			: ',' PARAMETERS_LIST
			| ;

PARAM_IDENTIFIER
			: identifier { ins(); } PARAM_IDENTIFIER_BREAKUP;

PARAM_IDENTIFIER_BREAKUP
			: '[' ']'
			| ;

STATEMENT
			: EXPRESSION_STATEMENT | COMPOUND_STATEMENT
			| CONDITIONAL_STATEMENTS | ITERATIVE_STATEMENTS
			| RETURN_STATEMENT | BREAK_STATEMENT
			| VARIABLE_DECLARATION;

COMPOUND_STATEMENT
			: '{' STATEMENT_LIST '}' ;

STATEMENT_LIST
			: STATEMENT STATEMENT_LIST
			| ;

EXPRESSION_STATEMENT
			: EXPRESSION ';'
			| ';' ;

CONDITIONAL_STATEMENTS
			: IF '(' SIMPLE_EXPRESSION ')' STATEMENT CONDITIONAL_STATEMENTS_BREAKUP;

CONDITIONAL_STATEMENTS_BREAKUP
			: ELSE STATEMENT
			| ;

ITERATIVE_STATEMENTS
			: WHILE '(' SIMPLE_EXPRESSION ')' STATEMENT
			| FOR '(' EXPRESSION2 ';' SIMPLE_EXPRESSION ';' EXPRESSION ')'
			| DO STATEMENT WHILE '(' SIMPLE_EXPRESSION ')' ';';

RETURN_STATEMENT
			: RETURN RETURN_STATEMENT_BREAKUP;

RETURN_STATEMENT_BREAKUP
			: ';'
			| EXPRESSION ';' ;

BREAK_STATEMENT
			: BREAK ';' ;

STRING_INITIALIZATION
			: assignment_operator string_constant { insV(); };

ARRAY_INITIALIZATION
			: assignment_operator '{' ARRAY_INT_DECLARATIONS '}';

ARRAY_INT_DECLARATIONS
			: integer_constant ARRAY_INT_DECLARATIONS_BREAKUP;

ARRAY_INT_DECLARATIONS_BREAKUP
			: ',' ARRAY_INT_DECLARATIONS
			| ;
EXPRESSION2 : TYPE_SPECIFIER EXPRESSION | EXPRESSION;

EXPRESSION
			: MUTABLE EXPRESSION_BREAKUP
			| SIMPLE_EXPRESSION ;

EXPRESSION_BREAKUP
			: assignment_operator EXPRESSION
			| addition_assignment_operator EXPRESSION
			| subtraction_assignment_operator EXPRESSION
			| multiplication_assignment_operator EXPRESSION
			| division_assignment_operator EXPRESSION
			| modulo_assignment_operator EXPRESSION
			| increment_operator
			| decrement_operator ;

SIMPLE_EXPRESSION
			: AND_EXPRESSION SIMPLE_EXPRESSION_breakup;

SIMPLE_EXPRESSION_breakup
			: OR_operator AND_EXPRESSION SIMPLE_EXPRESSION_breakup | ;

AND_EXPRESSION
			: UNARY_RELATION_EXPRESSION AND_EXPRESSION_breakup;

AND_EXPRESSION_breakup
			: AND_operator UNARY_RELATION_EXPRESSION AND_EXPRESSION_breakup
			| ;

UNARY_RELATION_EXPRESSION
			: exclamation_operator UNARY_RELATION_EXPRESSION
			| REGULAR_EXPRESSION ;

REGULAR_EXPRESSION
			: SUM_EXPRESSION REGULAR_EXPRESSION_breakup;

REGULAR_EXPRESSION_breakup
			: RELATIONAL_OPERATORS SUM_EXPRESSION
			| ;

RELATIONAL_OPERATORS
			: greaterthan_assignment_operator | lessthan_assignment_operator | greaterthan_operator
			| lessthan_operator | equality_operator | inequality_operator ;

SUM_EXPRESSION
			: SUM_EXPRESSION SUM_OPERATORS TERM
			| TERM ;

SUM_OPERATORS
			: add_operator
			| subtract_operator ;

TERM
			: TERM MULOP FACTOR
			| FACTOR ;

MULOP
			: multiplication_operator | division_operator | modulo_operator ;

FACTOR
			: IMMUTABLE | MUTABLE ;

MUTABLE
			: identifier
			| MUTABLE MUTABLE_BREAKUP;

MUTABLE_BREAKUP
			: '[' EXPRESSION ']' '.' identifier
			| '.' identifier;

IMMUTABLE
			: '(' EXPRESSION ')'
			| CALL | CONSTANT;

CALL
			: identifier '(' ARGUMENTS ')';

ARGUMENTS
			: ARGUMENTS_LIST | ;

ARGUMENTS_LIST
			: EXPRESSION A;

A
			: ',' EXPRESSION A
			| ;

CONSTANT
			: integer_constant 	{ insV(); }
			| string_constant	{ insV(); }
			| float_constant	{ insV(); }
			| character_constant{ insV(); };

%%

extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void insertSTnested(char*, int);
void incertCT(char *, char *);
void printST();
void printCT();

int main(int argc , char **argv)
{
	if(argc!=2){
    	printf("Invalid filename\n");
		exit(0);
    }
    else printf("Opening %s \n\n\n", argv[1]);
	yyin = fopen(argv[1], "r");
	yyparse();
	if(flag == 0)
	{
		printf("Status: Parsing Complete - Valid" "\n");
		printf("%60s"  "SYMBOL TABLE"  "\n", " ");
		printf("%60s%s\n", " ", "------------");
		printST();

		printf("\n\n%60s"  "CONSTANT TABLE"  "\n", " ");
		printf("%60s%s\n", " ", "--------------");
		printCT();
	}
}

void yyerror(char *s)
{
	printf("LINE NUMBER : %d %s\n", errno, s);
	flag=1;
	printf( "Status: Parsing Failed - Invalid\n" );
}

void ins()
{
	insertSTtype(curid,curtype);
	insertSTnested(curid, nestedno);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}