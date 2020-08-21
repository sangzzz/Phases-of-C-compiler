/* Definition Section */

%{
    #include<stdio.h>
    #include<string.h>

    int symbol_table_length = 0;
    int constant_table_length = 0;
    int line = 1;
    char bstack[100];
    int btop = 0;
    struct symbolTable {
        char token[100];
        char type_of_token[100];
    }ST[100];
    // The above definition is a structure to implement the symbol table.
    // Each instance of the above structure will have two values, the token and the type of token it is.
    // i.e, whether it's a KEYWORD or an IDENTIFIER.

    struct constantTable {
        char value[100];
        char type_of_value[100];
    }CT[100];
    // The above definition defines a structure to implement our constant table.
    // Each instance of the structure will have two values, the constant and its type.
    // i.e, whether it is a NUMBER CONSTANT, CHARACTER CONSTANT, STRING CONSTANT

    int look_in_symbol_table(char* val){
        int i;
        for(i=0; i<symbol_table_length; i++) {
            if (strcmp(ST[i].token, val) == 0) {
                return 0;
            }
        }
        return 1;
    }
    // The above function scans the symbol table for a previous occurrence of the constant and 
    // returns 0 if it already exists and 1 if it doesn't.
    
    void insert_into_symbol_table(char* val, char* type_of_val){
        if (symbol_table_length == 100) {
            printf("Symbol Table Capacity Exceeded!!\n");
        } else {
            if (look_in_symbol_table(val) == 0) {
                return;
            } else {
                strcpy(ST[symbol_table_length].token, val);
                strcpy(ST[symbol_table_length].type_of_token, type_of_val);
                symbol_table_length++;
            }
        }
    }
    // The above function accepts two parameters, the token and the type of token it is.
    // It then checks if the token already exists in the symbol table.
    // If it does, then nothing is done, if it is not, then the token is appended to the end of our table.

    int look_in_constant_table(char* val) {
        int i;
        for(i=0; i<constant_table_length; i++) {
            if (strcmp(CT[i].value, val) == 0) {
                return 0;
            }
        }
        return 1;
    }
    // The above function scans the constant table for a previous occurrence of the constant and 
    // returns 0 if it already exists and 1 if it doesn't.

    void insert_into_constant_table(char* val, char* type_of_val){
        if (constant_table_length == 100) {
            printf("Constant Table Capacity Exceeded!!\n");
        } else {
            if (look_in_constant_table(val) == 0) {
                return;
            } else {
                strcpy(CT[constant_table_length].value, val);
                strcpy(CT[constant_table_length].type_of_value, type_of_val);
                constant_table_length++;
            }
        }
    }
    // The above function accepts two parameters, the token and the type of token it is.
    // It then checks if the token already exists in the symbol table.
    // If it does, then nothing is done, if it is not, then the token is appended to the end of our table.

    void print_symbol_table() {
        printf("============================================================================================================================================================\n");
        printf("+++ SYMBOL TABLE +++\n\n");
        printf("TYPE OF TOKEN \t\t TOKEN\n");
        printf("============= \t\t =====\n");
        int i;
        for(i=0; i<symbol_table_length; i++) {
            printf("%s \t\t %s\n", ST[i].type_of_token, ST[i].token);
        }
    }
    // The above function prints the contents of our symbol table line by line.
    
    void print_constant_table() {
        printf("============================================================================================================================================================\n");
        printf("+++ CONSTANT TABLE +++\n\n");
        printf("TYPE OF CONSTANT \t\t VALUE OF CONSTANT\n");
        printf("================ \t\t =================\n");
        int i;
        for(i=0; i<constant_table_length; i++) {
            printf("%s \t\t %s\n", CT[i].type_of_value, CT[i].value);
        }
    }
    // The above function prints the contents of our symbol table line by line.

%}

/* Rules Section */

/* OPERATIONS */
/* This defines the set of all operation symbols used in c programming. */
OP <=|>=|==|!=|>|<|\|\||&&|\!|=|\^|\+=|\-=|\*=|\/=|\%=|\+\+|\-\-|\+|\-|\*|\/|\%|&|\||~|<<|>>

/* KEYWORDS */
/* This defines a rule for keywords. All the keywords have been included in the rule given below by means of a pipe symbol. */
KEY auto|const|default|enum|extern|register|return|sizeof|static|struct|typedef|union|volatile|break|continue|goto|else|switch|if|case|default|for|do|while|char|double|float|int|long|short|signed|unsigned|void

/* IDENTIFIERS */
/* An identifier is a series of characters that cannot start with a number, cannot be a keyword and can only contain */
/* digits, letters and underscore. */
ID [a-zA-Z]([a-zA-Z0-9_])*

/* SINGLE LINE COMMENT */
/* A single line comment will start with two forward slashes followed by any number of characters. */
SLC \/\/(.*)

/* MULTI LINE COMMENT */
/* A multi-line comment will start with '/''*' and end with '*''/' */ 
/* It won't have * and / before it ends --> Assumption. */
MLC "/*"([^*]|\*+[^*/])*\*+"/"


/* INTEGER CONSTANT */
/* An integer constant will have be a number starting with 1-9 and containing only digits. */
IC 0|([1-9][0-9]*)

/* FLOATING CONSTANT */
/* It is the same as integer constant but will possibly have a decimal point. */
FC 0|([1-9][0-9]*)\.[0-9]*

/* STRING CONSTANT */
/* It is a string of characters that are enclosed by double quotes. " " */
SC \"[^\n]*\"

/* CHARACTER CONSTANT */
/* It is a single character enclosed in '' */
CC '[A-Z|a-z]'

/* PRE-PROCESSOR DIRECTIVE AND MACROS*/
/* It is a '#' followed by include / define statement */
PPD #(include[ ]*<.*>|(define.*|ifdef|endif|if|else))



%%
[\n]       {
                line++;
            }
[ \t]+        {;}
[;]           {
                printf("%d\t\tSEMICOLON SEPERATOR\t%s\n", line, yytext);
            }
[,]           {
                printf("%d\t\tCOMMA SEPERATOR\t\t%s\n", line, yytext);
            }
[\{]          {
                bstack[btop++] = '{';
                printf("%d\t\tCURLY BRACE OPEN\t%s\n", line, yytext);
            }
[\(]          {
                bstack[btop++] = '(';
                printf("%d\t\tPARANTHESIS OPEN\t%s\n", line, yytext);
            }
[\[]          {
                bstack[btop++] = '[';
                printf("%d\t\tSQUARE BRACKET OPEN\t%s\n", line, yytext);
            }
[\}]          {
                printf("%d\t\tCURLY BRACE CLOSE\t%s\n", line, yytext);
                if (bstack[--btop] != '{') {
                    printf("%d\t\t\n\nUNMATCHED CURLY BRACE OPEN --> ERROR\n\n");
                    return 0;
                }
            }
[\)]          {
                printf("%d\t\tPARANTHESIS CLOSE\t%s\n", line, yytext);
                if (bstack[--btop] != '(') {
                    printf("%d\t\t\n\nUNMATCHED PARANTHESIS OPEN --> ERROR\n\n");
                    return 0;
                }
            }
[\]]       {
                printf("%d\t\tSQUARE BRACKET CLOSE\t%s\n", line, yytext);
                if (bstack[--btop] != ']') {
                    printf("%d\t\t\n\nUNMATCHED SQUARE BRACKET OPEN --> ERROR\n\n");
                    return 0;
                }}
\.          {
                printf("%d\t\tDOT SEPERATOR\t%s\n", line, yytext);
            }
\:          {
                printf("%d\t\tCOLON SEPERATOR\t%s\n", line, yytext);
            }
\\          {
                printf("%d\t\tFORWARD SLASH\t%s\n", line, yytext);
            }
{PPD}       {
                printf("%d\t\tPRE-PROCESSOR\t\t%s\n", line, yytext);
            }
"main"      {
                printf("%d\t\tIDENTIFIER\t\t\t%s\n", line, yytext);
                insert_into_symbol_table(yytext, "IDENTIFIER");
            }

{SLC}       {
                printf("%d\t\tSINGLE LINE COMMENT\t%s\n", line, yytext);
            }

{MLC}       {
                printf("%d\t\tMULTI LINE COMMENT\t%s\n", line, yytext);
                int i;
                for(i = 0; i<sizeof(yytext); i++) {
                    if (yytext[i] == '\n') {
                        line++;
                    }
                }
            }
{KEY}       {
                printf("%d\t\tKEYWORD\t\t\t%s\n", line, yytext);
                insert_into_symbol_table(yytext, "KEYWORD");
            }
{IC}        {
                printf("%d\t\tINTEGER CONSTANT\t%s\n", line, yytext);
                insert_into_constant_table(yytext, "INTEGER CONSTANT");
            }
{FC}        {
                printf("%d\t\tFLOATING CONSTANT\t%s\n", line, yytext);
                insert_into_constant_table(yytext, "FLOATING CONSTANT");
            }
{SC}        {
                printf("%d\t\tSTRING CONSTANT\t\t%s\n", line, yytext);
                insert_into_constant_table(yytext, "STRING CONSTANT");
            }
{CC}        {
                printf("%d\t\tCHARACTER CONSTANT\t%s\n", line, yytext);
                insert_into_constant_table(yytext, "CHARACTER CONSTANT");
            }
{OP}        {
                printf("%d\t\tOPERATOR\t\t%s\n", line, yytext);
            }
{ID}        {
                printf("%d\t\tIDENTIFIER\t\t%s\n", line, yytext);
                insert_into_symbol_table(yytext, "IDENTIFIER");
            }

\/\*([^*]|\*+[^*/])*(\*\/)$   {
                                printf("\n\nLINE - %d\t\tERROR UNMATCHED COMMENT\n\n",line);
    return 0;
}   

(.?)        {
                printf("============================================================================================================================================================");
                if(yytext[0]=='#')
                {
                    printf("\n\nLINE - %d\t\tERROR IN PREPROCESSOR DIRECTIVE\n\n",line);
                }
                else if(yytext[0]=='/' && yytext[1]=='*')
                {
                    printf("\n\nLINE - %d\t\tERROR UNMATCHED COMMENT\n\n",line);
                }
                else if(yytext[0]=='"')
                {
                    printf("\n\nLINE - %d\t\tERROR UNMATCHED STRING\n\n",line);
                }
                else
                {
                    printf("\n\nLINE - %d\t\tERROR ### UNDEFINED!!!\n\n",line);
                }
                return 0;
            }



%%

/* Driver Function */

int main(){
    int i;
    int l = 1;
    char* s;
    for(i = 1; i<=l; i++) {
        printf("============================================================================================================================================================\n\n");
        printf("LINE NUMBER\tTYPE OF TOKEN\t\tVALUE\n");      
        printf("===========\t=============\t\t=====\n\n");
        yyin = fopen("TestCase2.c", "r");
        int err = yylex();
        if (btop != 0) {
                    printf("%d\t\t\n\nUNMATCHED BRACKET--> ERROR\n\n");
            
        }
        if (err == 0){
            print_symbol_table();
            print_constant_table();
        }
    }
}

int yywrap(){
    return 1;
}