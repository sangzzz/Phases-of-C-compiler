/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "parser.y"

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

/* Line 371 of yacc.c  */
#line 87 "parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     INT = 259,
     CHAR = 260,
     FLOAT = 261,
     DOUBLE = 262,
     LONG = 263,
     SHORT = 264,
     SIGNED = 265,
     UNSIGNED = 266,
     STRUCT = 267,
     RETURN = 268,
     MAIN = 269,
     VOID = 270,
     WHILE = 271,
     FOR = 272,
     DO = 273,
     BREAK = 274,
     ENDIF = 275,
     identifier = 276,
     integer_constant = 277,
     string_constant = 278,
     float_constant = 279,
     character_constant = 280,
     ELSE = 281,
     rightshift_assignment_operator = 282,
     leftshift_assignment_operator = 283,
     OR_assignment_operator = 284,
     XOR_assignment_operator = 285,
     modulo_assignment_operator = 286,
     AND_assignment_operator = 287,
     division_assignment_operator = 288,
     multiplication_assignment_operator = 289,
     subtraction_assignment_operator = 290,
     addition_assignment_operator = 291,
     assignment_operator = 292,
     OR_operator = 293,
     AND_operator = 294,
     pipe_operator = 295,
     caret_operator = 296,
     amp_operator = 297,
     inequality_operator = 298,
     equality_operator = 299,
     greaterthan_operator = 300,
     greaterthan_assignment_operator = 301,
     lessthan_operator = 302,
     lessthan_assignment_operator = 303,
     rightshift_operator = 304,
     leftshift_operator = 305,
     subtract_operator = 306,
     add_operator = 307,
     modulo_operator = 308,
     division_operator = 309,
     multiplication_operator = 310,
     SIZEOF = 311,
     exclamation_operator = 312,
     tilde_operator = 313,
     decrement_operator = 314,
     increment_operator = 315
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 213 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   247

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNRULES -- Number of states.  */
#define YYNSTATES  233

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      67,    68,     2,     2,    62,     2,    69,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    61,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,     2,    66,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    11,    13,    15,    17,
      21,    23,    26,    29,    30,    31,    35,    37,    40,    43,
      44,    48,    51,    53,    55,    56,    58,    60,    62,    64,
      67,    70,    73,    76,    78,    80,    83,    86,    87,    89,
      92,    95,    96,    98,    99,   101,   102,   103,   111,   114,
     115,   119,   122,   126,   130,   132,   133,   136,   139,   142,
     143,   144,   148,   151,   152,   154,   156,   158,   160,   162,
     164,   166,   170,   173,   174,   177,   179,   186,   189,   190,
     196,   205,   213,   216,   218,   221,   224,   227,   232,   235,
     238,   239,   242,   244,   247,   249,   252,   255,   258,   261,
     264,   267,   269,   271,   274,   278,   279,   282,   286,   287,
     290,   292,   295,   298,   299,   301,   303,   305,   307,   309,
     311,   315,   317,   319,   321,   325,   327,   329,   331,   333,
     335,   337,   339,   342,   348,   351,   355,   357,   359,   364,
     366,   367,   370,   374,   375,   377,   379,   381
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      71,     0,    -1,    72,    -1,    74,    73,    -1,    72,    -1,
      -1,    75,    -1,    93,    -1,    89,    -1,    84,    76,    61,
      -1,    92,    -1,    78,    77,    -1,    62,    76,    -1,    -1,
      -1,    21,    79,    80,    -1,    81,    -1,    37,   118,    -1,
      63,    82,    -1,    -1,    22,    64,    83,    -1,    64,   113,
      -1,   113,    -1,   114,    -1,    -1,     4,    -1,     5,    -1,
       6,    -1,     7,    -1,     8,    87,    -1,     9,    88,    -1,
      11,    85,    -1,    10,    86,    -1,    15,    -1,     4,    -1,
       8,    87,    -1,     9,    88,    -1,    -1,     4,    -1,     8,
      87,    -1,     9,    88,    -1,    -1,     4,    -1,    -1,     4,
      -1,    -1,    -1,    12,    21,    90,    65,    91,    66,    61,
      -1,    75,    91,    -1,    -1,    12,    21,    76,    -1,    94,
      95,    -1,    84,    21,    67,    -1,    96,    68,   103,    -1,
      97,    -1,    -1,    84,    98,    -1,   100,    99,    -1,    62,
      97,    -1,    -1,    -1,    21,   101,   102,    -1,    63,    64,
      -1,    -1,   106,    -1,   104,    -1,   107,    -1,   109,    -1,
     110,    -1,   112,    -1,    75,    -1,    65,   105,    66,    -1,
     103,   105,    -1,    -1,   118,    61,    -1,    61,    -1,     3,
      67,   120,    68,   103,   108,    -1,    26,   103,    -1,    -1,
      16,    67,   120,    68,   103,    -1,    17,    67,   117,    61,
     120,    61,   118,    68,    -1,    18,   103,    16,    67,   120,
      68,    61,    -1,    13,   111,    -1,    61,    -1,   118,    61,
      -1,    19,    61,    -1,    37,    23,    -1,    37,    65,   115,
      66,    -1,    22,   116,    -1,    62,   115,    -1,    -1,    84,
     118,    -1,   118,    -1,   133,   119,    -1,   120,    -1,    37,
     118,    -1,    36,   118,    -1,    35,   118,    -1,    34,   118,
      -1,    33,   118,    -1,    31,   118,    -1,    60,    -1,    59,
      -1,   122,   121,    -1,    38,   122,   121,    -1,    -1,   124,
     123,    -1,    39,   124,   123,    -1,    -1,    57,   124,    -1,
     125,    -1,   128,   126,    -1,   127,   128,    -1,    -1,    46,
      -1,    48,    -1,    45,    -1,    47,    -1,    44,    -1,    43,
      -1,   128,   129,   130,    -1,   130,    -1,    52,    -1,    51,
      -1,   130,   131,   132,    -1,   132,    -1,    55,    -1,    54,
      -1,    53,    -1,   135,    -1,   133,    -1,    21,    -1,   133,
     134,    -1,    63,   118,    64,    69,    21,    -1,    69,    21,
      -1,    67,   118,    68,    -1,   136,    -1,   140,    -1,    21,
      67,   137,    68,    -1,   138,    -1,    -1,   118,   139,    -1,
      62,   118,   139,    -1,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    64,    67,    68,    71,    72,    73,    76,
      77,    80,    83,    84,    87,    87,    89,    89,    92,    93,
      96,    97,   100,   101,   102,   105,   105,   105,   105,   106,
     107,   108,   109,   110,   113,   113,   113,   113,   116,   116,
     116,   116,   119,   119,   122,   122,   125,   125,   127,   127,
     130,   134,   137,   140,   143,   143,   146,   149,   152,   153,
     156,   156,   159,   160,   163,   163,   164,   164,   165,   165,
     166,   169,   172,   173,   176,   177,   180,   183,   184,   187,
     188,   189,   192,   195,   196,   199,   202,   205,   208,   211,
     212,   213,   213,   216,   217,   220,   221,   222,   223,   224,
     225,   226,   227,   230,   233,   233,   236,   239,   240,   243,
     244,   247,   250,   251,   254,   254,   254,   255,   255,   255,
     258,   259,   262,   263,   266,   267,   270,   270,   270,   273,
     273,   276,   277,   280,   281,   284,   285,   285,   288,   291,
     291,   294,   297,   298,   301,   302,   303,   304
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "RETURN", "MAIN",
  "VOID", "WHILE", "FOR", "DO", "BREAK", "ENDIF", "identifier",
  "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "rightshift_assignment_operator",
  "leftshift_assignment_operator", "OR_assignment_operator",
  "XOR_assignment_operator", "modulo_assignment_operator",
  "AND_assignment_operator", "division_assignment_operator",
  "multiplication_assignment_operator", "subtraction_assignment_operator",
  "addition_assignment_operator", "assignment_operator", "OR_operator",
  "AND_operator", "pipe_operator", "caret_operator", "amp_operator",
  "inequality_operator", "equality_operator", "greaterthan_operator",
  "greaterthan_assignment_operator", "lessthan_operator",
  "lessthan_assignment_operator", "rightshift_operator",
  "leftshift_operator", "subtract_operator", "add_operator",
  "modulo_operator", "division_operator", "multiplication_operator",
  "SIZEOF", "exclamation_operator", "tilde_operator", "decrement_operator",
  "increment_operator", "';'", "','", "'['", "']'", "'{'", "'}'", "'('",
  "')'", "'.'", "$accept", "PROGRAM", "DECLARATION_LIST", "D",
  "DECLARATION", "VARIABLE_DECLARATION", "VARIABLE_DECLARATION_LIST", "V",
  "VARIABLE_DECLARATION_IDENTIFIER", "$@1", "VDI", "IDENTIFIER_ARRAY_TYPE",
  "INITIALIZATION_PARAMS", "INITIALIZATION", "TYPE_SPECIFIER",
  "UNSIGNED_GRAMMAR", "SIGNED_GRAMMAR", "LONG_GRAMMAR", "SHORT_GRAMMAR",
  "STRUCTURE_DEFINITION", "$@2", "V1", "STRUCTURE_DECLARATION",
  "FUNCTION_DECLARATION", "FUNCTION_DECLARATION_TYPE",
  "FUNCTION_DECLARATION_PARAM_STATEMENT", "PARAMS", "PARAMETERS_LIST",
  "PARAMETERS_IDENTIFIER_LIST", "PARAMETERS_IDENTIFIER_LIST_BREAKUP",
  "PARAM_IDENTIFIER", "$@3", "PARAM_IDENTIFIER_BREAKUP", "STATEMENT",
  "COMPOUND_STATEMENT", "STATEMENT_LIST", "EXPRESSION_STATEMENT",
  "CONDITIONAL_STATEMENTS", "CONDITIONAL_STATEMENTS_BREAKUP",
  "ITERATIVE_STATEMENTS", "RETURN_STATEMENT", "RETURN_STATEMENT_BREAKUP",
  "BREAK_STATEMENT", "STRING_INITIALIZATION", "ARRAY_INITIALIZATION",
  "ARRAY_INT_DECLARATIONS", "ARRAY_INT_DECLARATIONS_BREAKUP",
  "EXPRESSION2", "EXPRESSION", "EXPRESSION_BREAKUP", "SIMPLE_EXPRESSION",
  "SIMPLE_EXPRESSION_breakup", "AND_EXPRESSION", "AND_EXPRESSION_breakup",
  "UNARY_RELATION_EXPRESSION", "REGULAR_EXPRESSION",
  "REGULAR_EXPRESSION_breakup", "RELATIONAL_OPERATORS", "SUM_EXPRESSION",
  "SUM_OPERATORS", "TERM", "MULOP", "FACTOR", "MUTABLE", "MUTABLE_BREAKUP",
  "IMMUTABLE", "CALL", "ARGUMENTS", "ARGUMENTS_LIST", "A", "CONSTANT", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    59,    44,    91,    93,   123,   125,    40,    41,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    73,    73,    74,    74,    74,    75,
      75,    76,    77,    77,    79,    78,    80,    80,    81,    81,
      82,    82,    83,    83,    83,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    85,    85,    86,    86,
      86,    86,    87,    87,    88,    88,    90,    89,    91,    91,
      92,    93,    94,    95,    96,    96,    97,    98,    99,    99,
     101,   100,   102,   102,   103,   103,   103,   103,   103,   103,
     103,   104,   105,   105,   106,   106,   107,   108,   108,   109,
     109,   109,   110,   111,   111,   112,   113,   114,   115,   116,
     116,   117,   117,   118,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   120,   121,   121,   122,   123,   123,   124,
     124,   125,   126,   126,   127,   127,   127,   127,   127,   127,
     128,   128,   129,   129,   130,   130,   131,   131,   131,   132,
     132,   133,   133,   134,   134,   135,   135,   135,   136,   137,
     137,   138,   139,   139,   140,   140,   140,   140
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     3,
       1,     2,     2,     0,     0,     3,     1,     2,     2,     0,
       3,     2,     1,     1,     0,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     2,     2,     0,     1,     2,
       2,     0,     1,     0,     1,     0,     0,     7,     2,     0,
       3,     2,     3,     3,     1,     0,     2,     2,     2,     0,
       0,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     0,     2,     1,     6,     2,     0,     5,
       8,     7,     2,     1,     2,     2,     2,     4,     2,     2,
       0,     2,     1,     2,     1,     2,     2,     2,     2,     2,
       2,     1,     1,     2,     3,     0,     2,     3,     0,     2,
       1,     2,     2,     0,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     5,     2,     3,     1,     1,     4,     1,
       0,     2,     3,     0,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    25,    26,    27,    28,    43,    45,    41,    37,     0,
      33,     0,     2,     5,     6,     0,     8,    10,     7,    55,
      42,    29,    44,    30,    38,    43,    45,    32,    34,    43,
      45,    31,    46,     1,     4,     3,    14,     0,    13,     0,
      51,     0,    54,    39,    40,    35,    36,    14,    50,     0,
      52,    19,     9,     0,    11,    60,    56,    59,     0,    49,
       0,     0,    15,    16,    12,    63,     0,    57,     0,     0,
       0,     0,     0,     0,     0,   131,   144,   145,   146,   147,
       0,    75,    73,     0,    70,     0,    53,    65,    64,    66,
      67,    68,    69,     0,    94,   105,   108,   110,   113,   121,
     125,   130,   129,   136,   137,    49,     0,    17,     0,     0,
      18,     0,    61,    58,     0,     0,    83,    82,     0,     0,
       0,     0,    85,   140,   109,   130,    73,     0,     0,    74,
       0,   103,     0,   106,   119,   118,   116,   114,   117,   115,
     123,   122,   111,     0,     0,   128,   127,   126,     0,     0,
       0,     0,     0,     0,     0,   102,   101,     0,     0,    93,
     132,    48,     0,    24,     0,    21,    62,     0,    84,     0,
       0,     0,    92,     0,   143,     0,   139,    72,    71,   135,
     105,   108,   112,   120,   124,   100,    99,    98,    97,    96,
      95,     0,   134,    47,     0,    20,    22,    23,    86,     0,
       0,    91,     0,     0,     0,   141,   138,   104,   107,     0,
       0,    78,    79,     0,     0,   143,     0,    90,     0,     0,
      76,     0,     0,   142,   133,     0,    88,    87,    77,     0,
      81,    89,    80
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    35,    13,    84,    37,    54,    38,    51,
      62,    63,   110,   195,    85,    31,    27,    21,    23,    16,
      49,   106,    17,    18,    19,    40,    41,    42,    56,    67,
      57,    65,   112,   126,    87,   127,    88,    89,   220,    90,
      91,   117,    92,   165,   197,   218,   226,   171,    93,   159,
      94,   131,    95,   133,    96,    97,   142,   143,    98,   144,
      99,   148,   100,   101,   160,   102,   103,   175,   176,   205,
     104
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -108
static const yytype_int16 yypact[] =
{
      94,  -108,  -108,  -108,  -108,    11,    34,     9,    18,    19,
    -108,    48,  -108,    94,  -108,    29,  -108,  -108,  -108,   224,
    -108,  -108,  -108,  -108,  -108,    11,    34,  -108,  -108,    11,
      34,  -108,    40,  -108,  -108,  -108,   -12,     1,    13,    50,
    -108,     5,  -108,  -108,  -108,  -108,  -108,  -108,  -108,    12,
    -108,   -26,  -108,    40,  -108,  -108,  -108,    14,   160,   194,
      21,   -17,  -108,  -108,  -108,    16,   224,  -108,     2,    59,
       7,    20,    41,   160,    46,    44,  -108,  -108,  -108,  -108,
      21,  -108,   160,    21,  -108,    40,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,    51,  -108,    82,    89,  -108,    71,     4,
    -108,   155,  -108,  -108,  -108,   194,    55,  -108,    65,    93,
    -108,    67,  -108,  -108,    21,    40,  -108,  -108,    72,    21,
     130,   116,  -108,    21,  -108,   -49,   160,    80,    79,  -108,
      21,  -108,    21,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,    60,    60,  -108,  -108,  -108,    60,    21,
      21,    21,    21,    21,    21,  -108,  -108,    21,   127,  -108,
    -108,  -108,    88,   113,   133,  -108,  -108,    90,  -108,    91,
      21,    96,  -108,   107,    98,   112,  -108,  -108,  -108,  -108,
      82,    89,   -18,     4,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,   129,  -108,  -108,   -14,  -108,  -108,  -108,  -108,   160,
     160,  -108,    21,    21,    21,  -108,  -108,  -108,  -108,   125,
     173,   170,  -108,   146,   140,    98,   189,   149,   147,   160,
    -108,    21,   151,  -108,  -108,   173,  -108,  -108,  -108,   148,
    -108,  -108,  -108
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,   206,  -108,  -108,     8,   -29,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,     6,  -108,  -108,    10,    23,  -108,
    -108,   115,  -108,  -108,  -108,  -108,  -108,   156,  -108,  -108,
    -108,  -108,  -108,   -57,  -108,    97,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,    63,  -108,    15,  -108,  -108,   -60,  -108,
    -107,    56,   108,    61,   -76,  -108,  -108,  -108,   100,  -108,
     101,  -108,    99,   -78,  -108,  -108,  -108,  -108,  -108,    22,
    -108
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     107,    86,   125,    48,   124,   108,    15,   167,    14,   198,
     118,    60,   169,    24,   157,    20,   121,    25,    26,    15,
     158,    14,    28,   128,    64,    39,    29,    30,    75,    76,
      77,    78,    79,   140,   141,    43,   125,    61,    22,    45,
      32,   125,    75,    76,    77,    78,    79,   109,    33,    44,
      36,   210,   125,    46,   125,    50,   181,   145,   146,   147,
     172,    47,    52,   174,    80,   125,   125,   105,   116,   114,
     125,    55,    39,    58,    83,    53,    66,    59,    80,   111,
     115,    75,    76,    77,    78,    79,    48,   119,    83,   185,
     186,   187,   188,   189,   190,   213,   214,   191,     1,     2,
       3,     4,     5,     6,     7,     8,     9,   122,   120,    10,
     201,   123,   129,   105,   134,   135,   136,   137,   138,   139,
     130,   162,   140,   141,   125,   125,   170,    83,   132,   163,
     164,   166,   173,   168,     1,     2,     3,     4,     5,     6,
       7,     8,   211,   212,   215,    10,   178,   179,   192,   193,
     194,    75,    76,    77,    78,    79,   198,   202,   199,   200,
     204,   229,   228,    68,     1,     2,     3,     4,     5,     6,
       7,     8,    69,    70,   203,    10,    71,    72,    73,    74,
     206,    75,    76,    77,    78,    79,   149,    80,   150,   151,
     152,   153,   154,   209,   216,   217,   219,    83,     1,     2,
       3,     4,     5,     6,     7,     8,    69,   221,   222,    10,
     224,   225,   230,   227,   155,   156,   232,    80,   157,    34,
     161,    81,   113,   177,   158,    82,   196,    83,     1,     2,
       3,     4,     5,     6,     7,     8,   207,   223,   180,    10,
     231,     0,   208,   182,     0,   183,     0,   184
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-108)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      60,    58,    80,    32,    80,    22,     0,   114,     0,    23,
      70,    37,   119,     4,    63,     4,    73,     8,     9,    13,
      69,    13,     4,    83,    53,    19,     8,     9,    21,    22,
      23,    24,    25,    51,    52,    25,   114,    63,     4,    29,
      21,   119,    21,    22,    23,    24,    25,    64,     0,    26,
      21,    65,   130,    30,   132,    67,   132,    53,    54,    55,
     120,    21,    61,   123,    57,   143,   144,    59,    61,    67,
     148,    21,    66,    68,    67,    62,    62,    65,    57,    63,
      21,    21,    22,    23,    24,    25,   115,    67,    67,   149,
     150,   151,   152,   153,   154,   202,   203,   157,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    61,    67,    15,
     170,    67,    61,   105,    43,    44,    45,    46,    47,    48,
      38,    66,    51,    52,   202,   203,   120,    67,    39,    64,
      37,    64,    16,    61,     4,     5,     6,     7,     8,     9,
      10,    11,   199,   200,   204,    15,    66,    68,    21,    61,
      37,    21,    22,    23,    24,    25,    23,    61,    68,    68,
      62,   221,   219,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    67,    15,    16,    17,    18,    19,
      68,    21,    22,    23,    24,    25,    31,    57,    33,    34,
      35,    36,    37,    64,    69,    22,    26,    67,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    61,    68,    15,
      21,    62,    61,    66,    59,    60,    68,    57,    63,    13,
     105,    61,    66,   126,    69,    65,   163,    67,     4,     5,
       6,     7,     8,     9,    10,    11,   180,   215,   130,    15,
     225,    -1,   181,   143,    -1,   144,    -1,   148
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      15,    71,    72,    74,    75,    84,    89,    92,    93,    94,
       4,    87,     4,    88,     4,     8,     9,    86,     4,     8,
       9,    85,    21,     0,    72,    73,    21,    76,    78,    84,
      95,    96,    97,    87,    88,    87,    88,    21,    76,    90,
      67,    79,    61,    62,    77,    21,    98,   100,    68,    65,
      37,    63,    80,    81,    76,   101,    62,    99,     3,    12,
      13,    16,    17,    18,    19,    21,    22,    23,    24,    25,
      57,    61,    65,    67,    75,    84,   103,   104,   106,   107,
     109,   110,   112,   118,   120,   122,   124,   125,   128,   130,
     132,   133,   135,   136,   140,    75,    91,   118,    22,    64,
      82,    63,   102,    97,    67,    21,    61,   111,   118,    67,
      67,   103,    61,    67,   124,   133,   103,   105,   118,    61,
      38,   121,    39,   123,    43,    44,    45,    46,    47,    48,
      51,    52,   126,   127,   129,    53,    54,    55,   131,    31,
      33,    34,    35,    36,    37,    59,    60,    63,    69,   119,
     134,    91,    66,    64,    37,   113,    64,   120,    61,   120,
      84,   117,   118,    16,   118,   137,   138,   105,    66,    68,
     122,   124,   128,   130,   132,   118,   118,   118,   118,   118,
     118,   118,    21,    61,    37,    83,   113,   114,    23,    68,
      68,   118,    61,    67,    62,   139,    68,   121,   123,    64,
      65,   103,   103,   120,   120,   118,    69,    22,   115,    26,
     108,    61,    68,   139,    21,    62,   116,    66,   103,   118,
      61,   115,    68
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 14:
/* Line 1792 of yacc.c  */
#line 87 "parser.y"
    { ins(); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 125 "parser.y"
    { ins(); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 137 "parser.y"
    { ins();}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 156 "parser.y"
    { ins(); }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 202 "parser.y"
    { insV(); }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 301 "parser.y"
    { insV(); }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 302 "parser.y"
    { insV(); }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 303 "parser.y"
    { insV(); }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 304 "parser.y"
    { insV(); }
    break;


/* Line 1792 of yacc.c  */
#line 1716 "parser.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 306 "parser.y"


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