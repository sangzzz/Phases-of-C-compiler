/* Definition Section */

%{
    #include<stdio.h>
    #include<string.h>

    int line = 1;
    char bstack[100];
    int btop = 0;

    struct hashtable{
        char name[100];
        char type[100];
        int len;
    }ST[1000],CT[1000];

    int Hash(char *s){
        int mod = 1001;
        int l = strlen(s), val = 0, i;
        for(i = 0; i < l; i++){
            val = val * 10 + (s[i]-'A');
            val = val % mod;
            while(val < 0){
                val += mod;
            }
        }
        return val;
    }

    void insert_into_symbol_table(char *lexeme, char *token_name){
        int l1 = strlen(lexeme);
        int l2 = strlen(token_name);
        int v = Hash(lexeme);
        if(ST[v].len == 0){
            strcpy(ST[v].name, lexeme);
            strcpy(ST[v].type, token_name);

            ST[v].len = strlen(lexeme);
            return;
        }

        if(strcmp(ST[v].name,lexeme) == 0)
        return;

        int i, pos = 0;

        for (i = 0; i < 1001; i++){
            if(ST[i].len == 0){
                pos = i;
                break;
            }
        }

        strcpy(ST[pos].name, lexeme);
        strcpy(ST[pos].type, token_name);
        ST[pos].len = strlen(lexeme);

    }

    void insert_into_constant_table(char *lexeme, char *token_name){
        int l1 = strlen(lexeme);
        int l2 = strlen(token_name);
        int v = Hash(lexeme);
        if(CT[v].len == 0){
            strcpy(CT[v].name, lexeme);
            strcpy(CT[v].type, token_name);

            CT[v].len = strlen(lexeme);
            return;
        }

        if(strcmp(CT[v].name,lexeme) == 0)
        return;

        int i, pos = 0;

        for (i = 0; i < 1001; i++){
            if(CT[i].len == 0){
                pos = i;
                break;
            }
        }

        strcpy(CT[pos].name, lexeme);
        strcpy(CT[pos].type, token_name);
        CT[pos].len = strlen(lexeme);

    }
   void print_symbol_table() {
        printf("============================================================================================================================================================\n");
        printf("+++ SYMBOL TABLE +++\n\n");
        printf("TYPE OF TOKEN \t\t TOKEN\n");
        printf("============= \t\t =====\n");
        int i;
        for(i=0; i<1000; i++) {
            if(ST[i].len!=0) printf("%s \t\t %s\n", ST[i].type, ST[i].name);
        }
    }
    // The above function prints the contents of our symbol table line by line.

    void print_constant_table() {
        printf("============================================================================================================================================================\n");
        printf("+++ CONSTANT TABLE +++\n\n");
        printf("TYPE OF CONSTANT \t\t VALUE OF CONSTANT\n");
        printf("================ \t\t =================\n");
        int i;
        for(i=0; i<1000; i++) {
            if(CT[i].len!=0) printf("%s \t\t %s\n", CT[i].type, CT[i].name);
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
[\n\r]       {
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
                    printf("%d\t\t\n\nUNMATCHED CURLY BRACE OPEN --> ERROR\n\n", line);
                    return 0;
                }
            }
[\)]          {
                printf("%d\t\tPARANTHESIS CLOSE\t%s\n", line, yytext);
                if (bstack[--btop] != '(') {
                    printf("%d\t\t\n\nUNMATCHED PARANTHESIS OPEN --> ERROR\n\n", line);
                    return 0;
                }
            }
[\]]       {
                printf("%d\t\tSQUARE BRACKET CLOSE\t%s\n", line, yytext);
                if (bstack[--btop] != '[') {
                    printf("%d\t\t\n\nUNMATCHED SQUARE BRACKET OPEN --> ERROR\n\n", line);
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
                printf("%d\t\tIDENTIFIER\t\t%s\n", line, yytext);
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
                    printf("\n\nLINE - %d\t\tERROR ### UNDEFINED!!!\nh%dh\n\n",line, yytext[yyleng-1]);
                }
                return 0;
            }



%%

/* Driver Function */

int main(int argc, char *argv[]){
    if(argc!=2){
    	printf("Invalid filename\n");
    }
    else printf("Opening %s \n", argv[1]);
    int i;
    int l = 1;
    char* s;
    printf("============================================================================================================================================================\n\n");
    printf("LINE NUMBER\tTYPE OF TOKEN\t\tVALUE\n");
    printf("===========\t=============\t\t=====\n\n");
    yyin = fopen(argv[1], "r");
    yylex();
    if (btop != 0) {
                printf("\t\t\n\nUNMATCHED BRACKET--> ERROR\n\n");

    }
    print_symbol_table();
    print_constant_table();
}

int yywrap(){
    return 1;
}
