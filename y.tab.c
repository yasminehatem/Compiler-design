/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacccode.y" /* yacc.c:339  */

  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>
  #include "math.h"
  #define YYERROR_VERBOSE
  #include "functions.h"

  extern void yyerror();
  extern int yylex();
  extern char* yytext;

#line 79 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTTYPE = 258,
    FLOATTYPE = 259,
    STRINGTYPE = 260,
    SEMICOLON = 261,
    FLOAT = 262,
    INTEGER = 263,
    IDENTIFIER = 264,
    CHARACTER = 265,
    EQUALS = 266,
    PLUS = 267,
    MINUS = 268,
    MULTIPLY = 269,
    DIVIDE = 270,
    BRACKET_CLOSE = 271,
    BRACKET_OPEN = 272,
    COMPARE_EQUAL = 273,
    COMPARE_NOT_EQUAL = 274,
    COMPARE_GREATER = 275,
    COMPARE_LESS = 276,
    COMPARE_GREATER_EQUAL = 277,
    COMPARE_LESS_EQUAL = 278,
    CURLY_BRACE_OPEN = 279,
    CURLY_BRACE_CLOSE = 280,
    IF = 281,
    ELSE = 282,
    WHILE = 283,
    DO = 284,
    REPEAT = 285,
    UNTIL = 286,
    FOR = 287,
    CONST = 288,
    SWITCH = 289,
    CASE = 290,
    BREAK = 291,
    DEFAULT = 292,
    COLON = 293,
    LOGICAL_AND = 294,
    LOGICAL_OR = 295,
    LOGICAL_NOT = 296,
    REMAINDER = 297,
    POWER = 298,
    IFX = 299,
    IDX = 300,
    UMINUS = 301
  };
#endif
/* Tokens.  */
#define INTTYPE 258
#define FLOATTYPE 259
#define STRINGTYPE 260
#define SEMICOLON 261
#define FLOAT 262
#define INTEGER 263
#define IDENTIFIER 264
#define CHARACTER 265
#define EQUALS 266
#define PLUS 267
#define MINUS 268
#define MULTIPLY 269
#define DIVIDE 270
#define BRACKET_CLOSE 271
#define BRACKET_OPEN 272
#define COMPARE_EQUAL 273
#define COMPARE_NOT_EQUAL 274
#define COMPARE_GREATER 275
#define COMPARE_LESS 276
#define COMPARE_GREATER_EQUAL 277
#define COMPARE_LESS_EQUAL 278
#define CURLY_BRACE_OPEN 279
#define CURLY_BRACE_CLOSE 280
#define IF 281
#define ELSE 282
#define WHILE 283
#define DO 284
#define REPEAT 285
#define UNTIL 286
#define FOR 287
#define CONST 288
#define SWITCH 289
#define CASE 290
#define BREAK 291
#define DEFAULT 292
#define COLON 293
#define LOGICAL_AND 294
#define LOGICAL_OR 295
#define LOGICAL_NOT 296
#define REMAINDER 297
#define POWER 298
#define IFX 299
#define IDX 300
#define UMINUS 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "yacccode.y" /* yacc.c:355  */

  struct symtab *symb;
  float f;
  int i;
  char * c;
  
;
;

#line 221 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 238 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
# define YYCOPY_NEEDED 1
#endif


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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   507

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    55,    58,    63,    79,    94,   123,   151,
     164,   166,   168,   170,   172,   174,   174,   181,   184,   185,
     186,   187,   194,   201,   213,   213,   255,   254,   269,   279,
     292,   269,   314,   323,   314,   360,   369,   360,   409,   409,
     450,   464,   465,   485,   499,   517,   518,   533,   553,   573,
     593,   611,   631,   651,   671,   691,   711,   731,   745,   760,
     779,   780,   783,   810,   812,   782,   825,   875,   825,   890,
     893
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTTYPE", "FLOATTYPE", "STRINGTYPE",
  "SEMICOLON", "FLOAT", "INTEGER", "IDENTIFIER", "CHARACTER", "EQUALS",
  "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "BRACKET_CLOSE", "BRACKET_OPEN",
  "COMPARE_EQUAL", "COMPARE_NOT_EQUAL", "COMPARE_GREATER", "COMPARE_LESS",
  "COMPARE_GREATER_EQUAL", "COMPARE_LESS_EQUAL", "CURLY_BRACE_OPEN",
  "CURLY_BRACE_CLOSE", "IF", "ELSE", "WHILE", "DO", "REPEAT", "UNTIL",
  "FOR", "CONST", "SWITCH", "CASE", "BREAK", "DEFAULT", "COLON",
  "LOGICAL_AND", "LOGICAL_OR", "LOGICAL_NOT", "REMAINDER", "POWER", "IFX",
  "IDX", "UMINUS", "$accept", "PROGRAM", "STATEMENT", "DECLARATION", "EXP",
  "IF_STAT", "$@1", "IF_ELSE_STAT", "$@2", "FOR_LOOP_STAT", "$@3", "$@4",
  "$@5", "WHILE_STAT", "$@6", "$@7", "$@8", "$@9", "REPEAT_STAT", "$@10",
  "MATH_OR_LOGICAL_EXPRESSION", "NUMBER", "SWITCH_CASE", "$@11", "$@12",
  "$@13", "CASES", "$@14", "$@15", "JUMP_STAT", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -33

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-33)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,    23,   -33,     3,     4,    11,   -10,     5,   -33,   -33,
     -33,   -33,     0,     7,    19,   -33,   -33,    24,     2,   -33,
     -33,   -33,   -33,   -33,   -33,    20,    26,    32,    76,   142,
      27,    22,   -33,    30,    39,    41,    49,    51,   -33,   -33,
      52,   142,   142,    67,   -33,   -33,   -33,    72,   142,   142,
     142,    -4,   332,   142,   -33,   181,   307,    80,    81,    83,
     -33,   -33,    90,   125,    89,   -33,   -33,   344,   -33,   -33,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,    75,   376,   -33,   142,   142,   142,
     142,    87,    84,   -33,   -33,   -33,   -33,   -33,    73,    73,
      58,    58,   452,   452,   452,   452,   452,   452,   464,   464,
      58,   -33,   -33,    82,   199,   157,   432,   432,   432,   -33,
      94,   217,   -33,   -33,    79,   -33,   108,   -33,   -33,   235,
     -33,   102,   111,    88,   -33,   253,   142,   113,    -1,    98,
     -33,   388,   142,   -33,   -33,   -33,   103,   119,   420,   104,
     -33,   -33,   112,   -33,   -33,   -33,   307,   271,   -33,    88,
     -33,   289,   -33,   -33
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,     0,     0,     0,     0,    32,    35,
      38,    28,     0,     0,     0,     2,     4,     0,    16,    10,
      12,    11,    13,    14,    15,    18,    19,    20,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     0,    70,    17,
       0,     0,     0,     0,    58,    57,    59,     0,     0,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
      62,    26,     0,     0,     0,     8,    41,     0,    50,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     3,     5,     6,     7,    45,    40,    42,
      43,    44,    51,    52,    53,    54,    55,    56,    48,    49,
      46,    47,    24,     0,     0,     0,    29,    21,    22,    23,
       0,     0,     3,    33,     0,    39,     0,    63,    27,     0,
       3,     0,     0,    69,    25,     0,     0,     0,     0,     0,
      34,     0,     0,    61,    60,    66,     0,     0,     0,     0,
      64,    37,     0,     3,     3,    30,    67,     0,     3,    69,
      65,     0,    68,    31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -33,   -32,    71,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
      -8,   -33,   -33,   -33,   -33,   -33,    -7,   -33,   -33,   -33
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    15,    16,    17,    18,   122,    19,    93,    20,
      33,   126,   158,    21,    30,   130,    31,    86,    22,    32,
      51,   145,    23,    92,   133,   154,   139,   149,   159,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      55,    28,    69,    34,    35,    36,   143,   144,    70,    71,
      72,    73,    25,    26,    74,    75,    76,    77,    78,    79,
      27,    52,    29,     2,    37,    38,     3,     4,     5,    40,
      39,    41,     6,    62,    63,    80,    81,    42,    82,    83,
      66,    67,    68,    43,    53,    85,    54,    56,    57,     7,
      58,     8,     9,    10,   114,    11,    12,    13,    59,    14,
      60,   121,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    61,    64,    65,   115,
     116,   117,   118,    44,    45,    46,    47,    72,    73,    48,
     129,    89,    90,    49,    91,    96,    94,   119,   135,   112,
     120,    83,    70,    71,    72,    73,   123,   131,    74,    75,
      76,    77,    78,    79,   132,    82,    83,    50,   127,   136,
     137,   156,   157,   138,   142,   151,   161,    88,   141,    80,
      81,    95,    82,    83,   148,   146,   155,    70,    71,    72,
      73,   150,   153,    74,    75,    76,    77,    78,    79,    44,
      45,    46,   162,     0,     0,    48,     0,     0,     0,    49,
       0,     0,     0,   125,    80,    81,     0,    82,    83,    70,
      71,    72,    73,     0,     0,    74,    75,    76,    77,    78,
      79,     0,     0,    50,     3,     4,     5,     0,     0,     0,
       6,     0,     0,     0,     0,     0,    80,    81,     0,    82,
      83,     0,     3,     4,     5,     0,     0,     7,     6,     8,
       9,    10,    87,    11,    12,    13,     0,    14,     0,     0,
       3,     4,     5,     0,   124,     7,     6,     8,     9,    10,
       0,    11,    12,    13,     0,    14,     0,     0,     3,     4,
       5,     0,   128,     7,     6,     8,     9,    10,     0,    11,
      12,    13,     0,    14,     0,     0,     3,     4,     5,     0,
     134,     7,     6,     8,     9,    10,     0,    11,    12,    13,
       0,    14,     0,     0,     3,     4,     5,     0,   140,     7,
       6,     8,     9,    10,     0,    11,    12,    13,     0,    14,
       0,     0,     3,     4,     5,     0,   160,     7,     6,     8,
       9,    10,     0,    11,    12,    13,     0,    14,     0,     0,
       3,     4,     5,     0,   163,     7,     6,     8,     9,    10,
       0,    11,    12,    13,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     8,     9,    10,     0,    11,
      12,    13,     0,    14,    70,    71,    72,    73,    84,     0,
      74,    75,    76,    77,    78,    79,    70,    71,    72,    73,
      97,     0,    74,    75,    76,    77,    78,    79,     0,     0,
       0,    80,    81,     0,    82,    83,     0,     0,     0,     0,
       0,     0,     0,    80,    81,     0,    82,    83,    70,    71,
      72,    73,   113,     0,    74,    75,    76,    77,    78,    79,
      70,    71,    72,    73,   147,     0,    74,    75,    76,    77,
      78,    79,     0,     0,     0,    80,    81,     0,    82,    83,
       0,     0,     0,     0,     0,     0,     0,    80,    81,     0,
      82,    83,    70,    71,    72,    73,   152,     0,    74,    75,
      76,    77,    78,    79,    70,    71,    72,    73,     0,     0,
      74,    75,    76,    77,    78,    79,     0,     0,     0,    80,
      81,     0,    82,    83,    70,    71,    72,    73,     0,     0,
       0,    80,    81,     0,    82,    83,    70,    71,    72,    73,
       0,     0,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,     0,    82,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,    83
};

static const yytype_int16 yycheck[] =
{
      32,    11,     6,     3,     4,     5,     7,     8,    12,    13,
      14,    15,     9,     9,    18,    19,    20,    21,    22,    23,
       9,    29,    17,     0,    17,     6,     3,     4,     5,    27,
       6,    11,     9,    41,    42,    39,    40,    11,    42,    43,
      48,    49,    50,    11,    17,    53,    24,    17,     9,    26,
       9,    28,    29,    30,    86,    32,    33,    34,     9,    36,
       9,    93,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    24,    10,     6,    87,
      88,    89,    90,     7,     8,     9,    10,    14,    15,    13,
     122,    11,    11,    17,    11,     6,     6,    10,   130,    24,
      16,    43,    12,    13,    14,    15,    24,    28,    18,    19,
      20,    21,    22,    23,     6,    42,    43,    41,    24,    17,
       9,   153,   154,    35,    11,     6,   158,    56,   136,    39,
      40,     6,    42,    43,   142,    37,    24,    12,    13,    14,
      15,    38,    38,    18,    19,    20,    21,    22,    23,     7,
       8,     9,   159,    -1,    -1,    13,    -1,    -1,    -1,    17,
      -1,    -1,    -1,     6,    39,    40,    -1,    42,    43,    12,
      13,    14,    15,    -1,    -1,    18,    19,    20,    21,    22,
      23,    -1,    -1,    41,     3,     4,     5,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    42,
      43,    -1,     3,     4,     5,    -1,    -1,    26,     9,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
       3,     4,     5,    -1,    25,    26,     9,    28,    29,    30,
      -1,    32,    33,    34,    -1,    36,    -1,    -1,     3,     4,
       5,    -1,    25,    26,     9,    28,    29,    30,    -1,    32,
      33,    34,    -1,    36,    -1,    -1,     3,     4,     5,    -1,
      25,    26,     9,    28,    29,    30,    -1,    32,    33,    34,
      -1,    36,    -1,    -1,     3,     4,     5,    -1,    25,    26,
       9,    28,    29,    30,    -1,    32,    33,    34,    -1,    36,
      -1,    -1,     3,     4,     5,    -1,    25,    26,     9,    28,
      29,    30,    -1,    32,    33,    34,    -1,    36,    -1,    -1,
       3,     4,     5,    -1,    25,    26,     9,    28,    29,    30,
      -1,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    29,    30,    -1,    32,
      33,    34,    -1,    36,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    39,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    42,    43,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    39,    40,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      42,    43,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    12,    13,    14,    15,    -1,    -1,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    39,
      40,    -1,    42,    43,    12,    13,    14,    15,    -1,    -1,
      -1,    39,    40,    -1,    42,    43,    12,    13,    14,    15,
      -1,    -1,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,     0,     3,     4,     5,     9,    26,    28,    29,
      30,    32,    33,    34,    36,    49,    50,    51,    52,    54,
      56,    60,    65,    69,    76,     9,     9,     9,    11,    17,
      61,    63,    66,    57,     3,     4,     5,    17,     6,     6,
      27,    11,    11,    11,     7,     8,     9,    10,    13,    17,
      41,    67,    67,    17,    24,    48,    17,     9,     9,     9,
       9,    24,    67,    67,    10,     6,    67,    67,    67,     6,
      12,    13,    14,    15,    18,    19,    20,    21,    22,    23,
      39,    40,    42,    43,    16,    67,    64,    31,    49,    11,
      11,    11,    70,    55,     6,     6,     6,    16,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    24,    16,    48,    67,    67,    67,    67,    10,
      16,    48,    53,    24,    25,     6,    58,    24,    25,    48,
      62,    28,     6,    71,    25,    48,    17,     9,    35,    73,
      25,    67,    11,     7,     8,    68,    37,    16,    67,    74,
      38,     6,    16,    38,    72,    24,    48,    48,    59,    75,
      25,    48,    73,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    50,    51,    51,
      51,    51,    51,    51,    53,    52,    55,    54,    57,    58,
      59,    56,    61,    62,    60,    63,    64,    60,    66,    65,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      68,    68,    70,    71,    72,    69,    74,    75,    73,    73,
      76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     5,     5,     5,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     5,     5,     5,     0,     8,     0,     6,     0,     0,
       0,    15,     0,     0,     9,     0,     0,    11,     0,     6,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     0,     0,     0,    13,     0,     0,     7,     0,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      YY_LAC_DISCARD ("YYBACKUP");                              \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYSIZE_T *yycapacity, YYSIZE_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yytype_int16 **yybottom,
                      yytype_int16 *yybottom_no_free,
                      yytype_int16 **yytop, yytype_int16 *yytop_empty)
{
  YYSIZE_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYSIZE_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYSIZE_T yyalloc = 2 * yysize_new;
      yytype_int16 *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        (yytype_int16*) YYSTACK_ALLOC (yyalloc * sizeof *yybottom_new);
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yytype_int16 *yyesa, yytype_int16 **yyes,
        YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  yytype_int16 *yyes_prev = yyssp;
  yytype_int16 *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYSIZE_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYSIZE_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        int yystate;
        {
          int yylhs = yyr1[yyrule] - YYNTOKENS;
          yystate = yypgoto[yylhs] + *yyesp;
          if (yystate < 0 || YYLAST < yystate
              || yycheck[yystate] != *yyesp)
            yystate = yydefgoto[yylhs];
          else
            yystate = yytable[yystate];
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            *yyesp = yystate;
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            *++yyesp = yystate;
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyesa, yytype_int16 **yyes,
                YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    yytype_int16 yyesa[20];
    yytype_int16 *yyes;
    YYSIZE_T yyes_capacity;

  int yy_lac_established = 0;
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

  yyes = yyesa;
  yyes_capacity = sizeof yyesa / sizeof *yyes;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

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
      yychar = yylex ();
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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
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
  YY_LAC_DISCARD ("shift");

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
          case 4:
#line 58 "yacccode.y" /* yacc.c:1646  */
    { printf(currentInst);
                          f=fopen("output.txt","w");
                          fprintf(f,currentInst); fclose(f);
                          resetQuad();}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 64 "yacccode.y" /* yacc.c:1646  */
    {
   
 char  tempBuff[4]="";                                                                        //Quad
 strcat(currentInst,"MOV ");strcat(tempBuff,(yyvsp[-3].symb)->name); strcat(tempBuff,", ");strcat(tempBuff,"R");
 strcat(tempBuff,itoa_customized(currentReg-1));
 strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
 strcat(currentInst,"\n");
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
//currentReg++;//end Quad
 declare_and_intialize((yyvsp[-4].c),(yyvsp[-3].symb)->name ,(yyvsp[-1].f));

 f=fopen("output.txt","a");
 printf(currentInst);
 fprintf(f,currentInst);fclose(f);resetQuad(); }
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 79 "yacccode.y" /* yacc.c:1646  */
    {     //Quad

char  tempBuff[4]="";                                                                       
strcat(currentInst,"MOV ");strcat(tempBuff,(yyvsp[-3].symb)->name); strcat(tempBuff,", ");strcat(tempBuff,"R");
strcat(tempBuff,itoa_customized(currentReg-1));
strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
strcat(currentInst,"\n");
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
//currentReg++;
declare_and_intialize((yyvsp[-4].c),(yyvsp[-3].symb)->name ,(yyvsp[-1].f));

  f=fopen("output.txt","a");
  printf(currentInst);
  fprintf(f,currentInst);fclose(f);resetQuad();}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 95 "yacccode.y" /* yacc.c:1646  */
    {

char  tempBuff[4]="";  
strcat(currentInst,"MOV R");
													//char tempBuff[4];
													strcat(tempBuff,itoa_customized(currentReg));
													strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
													strcat(currentInst,", ");strcat(tempBuff,(yyvsp[-1].c));
													//itoa((int)$1,tempBuff,10);
													strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
													strcat(currentInst,"\n");
													currentReg++;                                                                      //Quad
strcat(currentInst,"MOV ");strcat(tempBuff,(yyvsp[-3].symb)->name); strcat(tempBuff,", ");strcat(tempBuff,"R");
strcat(tempBuff,itoa_customized(currentReg-1));
   strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
strcat(currentInst,"\n");
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
//currentReg++;
declare_and_intialize_string((yyvsp[-4].c),(yyvsp[-3].symb)->name ,(yyvsp[-1].c));



 fopen("output.txt","a");
 printf(currentInst);
 fprintf(f,currentInst);fclose(f);resetQuad();}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 123 "yacccode.y" /* yacc.c:1646  */
    {char  tempBuff[4]="";  
strcat(currentInst,"MOV R");
													//char tempBuff[4];
													strcat(tempBuff,itoa_customized(currentReg));
													strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
													strcat(currentInst,", ");strcat(tempBuff,(yyvsp[0].c));
													//itoa((int)$1,tempBuff,10);
													strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
													strcat(currentInst,"\n");
													currentReg++;                                                                      //Quad
strcat(currentInst,"MOV ");strcat(tempBuff,(yyvsp[-3].symb)->name); strcat(tempBuff,", ");strcat(tempBuff,"R");
strcat(tempBuff,itoa_customized(currentReg-1));
   strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
strcat(currentInst,"\n");
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
//currentReg++;
assignStr((yyvsp[-3].symb)->name,(yyvsp[-1].c));



 fopen("output.txt","a");
 printf(currentInst);
 fprintf(f,currentInst);fclose(f);resetQuad();}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 152 "yacccode.y" /* yacc.c:1646  */
    {
char  tempBuff[4]="";                                                                        //Quad
strcat(currentInst,"MOV ");strcat(tempBuff,(yyvsp[-3].symb)->name); strcat(tempBuff,", ");strcat(tempBuff,"R");
strcat(tempBuff,itoa_customized(currentReg-1));
 strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
strcat(currentInst,"\n");
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
								//currentReg++;
assignValue((yyvsp[-3].symb)->name ,(yyvsp[-1].f)); f=fopen("output.txt","a");printf(currentInst);
                           fprintf(f,currentInst);fclose(f);resetQuad();}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 164 "yacccode.y" /* yacc.c:1646  */
    {f=fopen("output.txt","a");printf(currentInst);
                                                     fprintf(f,currentInst);fclose(f);resetQuad();}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 166 "yacccode.y" /* yacc.c:1646  */
    {printf(currentInst);
                                                fprintf(f,currentInst);fclose(f);resetQuad();}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 168 "yacccode.y" /* yacc.c:1646  */
    {printf(currentInst);
                                                fprintf(f,currentInst);fclose(f);resetQuad();}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 170 "yacccode.y" /* yacc.c:1646  */
    {printf(currentInst);
                                                fprintf(f,currentInst);fclose(f);resetQuad();}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 172 "yacccode.y" /* yacc.c:1646  */
    {printf(currentInst);
                                                fprintf(f,currentInst);fclose(f);resetQuad();}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 174 "yacccode.y" /* yacc.c:1646  */
    {

fopen("output.txt","a");
printf(currentInst);
fprintf(f,currentInst);fclose(f);resetQuad();}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 184 "yacccode.y" /* yacc.c:1646  */
    {declare_variable((yyvsp[-1].c),(yyvsp[0].symb)->name);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 185 "yacccode.y" /* yacc.c:1646  */
    {declare_variable((yyvsp[-1].c),(yyvsp[0].symb)->name);}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 186 "yacccode.y" /* yacc.c:1646  */
    {declare_variable((yyvsp[-1].c),(yyvsp[0].symb)->name);}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 187 "yacccode.y" /* yacc.c:1646  */
    {                                                                           //Quad
																				char quadID[50]="MOV ";
																				strcat(quadID,(yyvsp[-2].symb)->name);
																				strcat(quadID,", R0\n");
																				strcat(currentInst,quadID);
																				//end Quad
                                                                                                                                                                declare_constant((yyvsp[-3].c),(yyvsp[-2].symb)->name,(yyvsp[0].f)); }
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 194 "yacccode.y" /* yacc.c:1646  */
    {                                                                                           //Quad
																				char quadID[50]="MOV ";
																				strcat(quadID,(yyvsp[-2].symb)->name);
																				strcat(quadID,", R0\n");
																				strcat(currentInst,quadID);
																				//end Quad
                                                                                                                                                                declare_constant((yyvsp[-3].c),(yyvsp[-2].symb)->name,(yyvsp[0].f)); }
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 201 "yacccode.y" /* yacc.c:1646  */
    {                                                                           //Quad
																				char quadID[50]="MOV ";
																				strcat(quadID,(yyvsp[-2].symb)->name);
																				strcat(quadID,", R0\n");
																				strcat(currentInst,quadID);
																				//end Quad
                                                                                                                                                              declare_constant_string((yyvsp[-3].c),(yyvsp[-2].symb)->name,(yyvsp[0].c)); }
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 213 "yacccode.y" /* yacc.c:1646  */
    {
																			//Quad
																			strcat(currentInst,"JNZ LABEL_");
																			char tempBuff[4]="";
																			strcat(tempBuff,itoa_customized(currentLabel));
																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';f=fopen("output.txt","a"); printf("%c",tempBuff[0]); fprintf(f,"%c",tempBuff[0]);fclose(f);
																			strcat(currentInst,"\n");
																			push(labelStack, currentLabel);
																			currentLabel++;
																			//EndQuad
																			curlyBraceIsOpened();
																			currentReg=0;
																		}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 228 "yacccode.y" /* yacc.c:1646  */
    { 
																			//Quad
																			strcat(currentInst,"JMP LABEL_");
																			char tempBuff[4]="";
																			strcat(tempBuff,itoa_customized(currentLabel));

																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
																			strcat(currentInst,"\n");
																			//Quad
																			
																			strcat(currentInst,"LABEL_");
																			int tempLabel=pop(labelStack);

																			strcat(tempBuff,itoa_customized(tempLabel));
																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; f=fopen("output.txt","a"); printf("%c",tempBuff[0]); fprintf(f,"%c",tempBuff[0]);fclose(f);
																			strcat(currentInst,":\n");
																			//EndQuad
																			curlyBraceIsClosed();

push(labelStack, currentLabel);//next code position(true case)
																			currentLabel++;
																			
																		}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 255 "yacccode.y" /* yacc.c:1646  */
    {curlyBraceIsOpened();}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 255 "yacccode.y" /* yacc.c:1646  */
    {  
																			strcat(currentInst, "LABEL_");
																			char tempBuff[4]="";
																			int tempLabel=pop(labelStack);
																			strcat(tempBuff,itoa_customized(tempLabel));

																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
																			strcat(currentInst,":\n");
																			curlyBraceIsClosed();
																		}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 269 "yacccode.y" /* yacc.c:1646  */
    {
																																																											strcat(currentInst,"LABEL_");
																								char tempBuff[4]="";
																								strcat(tempBuff,itoa_customized(currentLabel));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 																								strcat(currentInst,":\n");
																								push(labelStack, currentLabel);
																								currentLabel++;	
																							}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 279 "yacccode.y" /* yacc.c:1646  */
    {
																																																											//Quad
																								strcat(currentInst,"JNZ LABEL_");
																								char tempBuff[4]="";
																								strcat(tempBuff,itoa_customized(currentLabel));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																								strcat(currentInst,"\n");
																								push(labelStack, currentLabel);
																								currentLabel++;
																								//EndQuad
																								currentReg=0;
																								//EndQuad
																							}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 292 "yacccode.y" /* yacc.c:1646  */
    {curlyBraceIsOpened();}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 293 "yacccode.y" /* yacc.c:1646  */
    { printf("here");
																																																																																														int tempLabel2=pop(labelStack);
																								int tempLabel=pop(labelStack);
																								
																								char tempBuff[4]="";
																								strcat(currentInst,"JMP LABEL_");//To begininng of while
strcat(tempBuff,itoa_customized(tempLabel));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																								strcat(currentInst,"\n");
																								
																								strcat(currentInst, "LABEL_");
																								strcat(tempBuff,itoa_customized(tempLabel2));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																								strcat(currentInst,"\n");
																								
																								curlyBraceIsClosed();
																							}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 314 "yacccode.y" /* yacc.c:1646  */
    {
																			strcat(currentInst,"LABEL_");
																			char tempBuff[4]="";
																			strcat(tempBuff,itoa_customized(currentLabel));
																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
																			strcat(currentInst,":\n");
																			push(labelStack, currentLabel);
																			currentLabel++;
																		}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 323 "yacccode.y" /* yacc.c:1646  */
    {
																			//Quad
																			strcat(currentInst,"JNZ LABEL_");
																			char tempBuff[4]="";
																			strcat(tempBuff,itoa_customized(currentLabel));
																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
																			strcat(currentInst,"\n");
																			push(labelStack, currentLabel);
																			currentLabel++;
																			//EndQuad
																			curlyBraceIsOpened();
																			currentReg=0;
																			//EndQuad
																			
																		}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 339 "yacccode.y" /* yacc.c:1646  */
    {

																			int tempLabel2=pop(labelStack);
																			int tempLabel=pop(labelStack);
																			
																			
																			strcat(currentInst,"JMP LABEL_");//To begininng of while
																			char tempBuff[4]="";
																			strcat(tempBuff,itoa_customized(tempLabel));

																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
																			strcat(currentInst,"\n");
																			
																			strcat(currentInst, "LABEL_");
																			strcat(tempBuff,itoa_customized(tempLabel2));
																			strcat(currentInst,tempBuff);
																			strcat(currentInst,":\n");
																			
																			curlyBraceIsClosed();
																		}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 360 "yacccode.y" /* yacc.c:1646  */
    {
																			strcat(currentInst,"LABEL_");
																			char tempBuff[4]="";
																			strcat(tempBuff,itoa_customized(currentLabel));
																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
																			strcat(currentInst,":\n");
																			push(labelStack, currentLabel);
																			currentLabel++;	
																		}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 369 "yacccode.y" /* yacc.c:1646  */
    {curlyBraceIsOpened();}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 370 "yacccode.y" /* yacc.c:1646  */
    {
																								
																																
																								//Quad
																								strcat(currentInst,"JNZ LABEL_");
																								       char tempBuff[4]="";
																								strcat(tempBuff,itoa_customized(currentLabel));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																								strcat(currentInst,"\n");
																								push(labelStack, currentLabel);
																								currentLabel++;
																								//EndQuad
																								currentReg=0;
																								//EndQuad
																			
																								
																																																											int tempLabel2=pop(labelStack);
																								int tempLabel=pop(labelStack);
																								
																								
																								strcat(currentInst,"JMP LABEL_");//To begininng of while
																								strcat(tempBuff,itoa_customized(tempLabel));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
																								strcat(currentInst,"\n");
																								
																								strcat(currentInst, "LABEL_");
																								strcat(tempBuff,itoa_customized(tempLabel2));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
																								strcat(currentInst,":\n");
																								
																								
																								curlyBraceIsClosed();
																							}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 409 "yacccode.y" /* yacc.c:1646  */
    {
																								strcat(currentInst,"LABEL_");
																								char tempBuff[4]="";
strcat(tempBuff,itoa_customized(currentLabel));																								
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																								strcat(currentInst,":\n");
																								push(labelStack, currentLabel);
																								currentLabel++;	}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 417 "yacccode.y" /* yacc.c:1646  */
    {
																																																								
																								//Quad
																								strcat(currentInst,"JZ LABEL_");
																								char tempBuff[4]="";
																								strcat(tempBuff,itoa_customized(currentLabel));	
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																									strcat(currentInst,"\n");
																								push(labelStack, currentLabel);
																								currentLabel++;
																								//EndQuad
																								currentReg=0;
																								//EndQuad
																			
																								
																																																											int tempLabel2=pop(labelStack);
																								        int tempLabel=pop(labelStack);
																								
																								
																								strcat(currentInst,"JMP LABEL_");//To begininng of while
																								strcat(tempBuff,itoa_customized(tempLabel));	
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																									strcat(currentInst,"\n");
																								
																								strcat(currentInst, "LABEL_");
																								strcat(tempBuff,itoa_customized(tempLabel2));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																									strcat(currentInst,":\n");
}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 450 "yacccode.y" /* yacc.c:1646  */
    {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"ADD R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");  (yyval.f) = (yyvsp[-2].f) + (yyvsp[0].f);   }
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 464 "yacccode.y" /* yacc.c:1646  */
    {printf("negative\n ");(yyval.f)=-(yyvsp[0].f); }
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 465 "yacccode.y" /* yacc.c:1646  */
    {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"SUB R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                              (yyval.f) = (yyvsp[-2].f) - (yyvsp[0].f);
                                                                                            }
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 485 "yacccode.y" /* yacc.c:1646  */
    {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"MUL R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");(yyval.f) = (yyvsp[-2].f) * (yyvsp[0].f);}
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 500 "yacccode.y" /* yacc.c:1646  */
    {   if((yyvsp[0].f)==0) {f=fopen("output.txt","w");yyerror("Divide by Zero"); fprintf(f,"Divide by Zero");fclose(f);} 
                                   else
                                     {
                                                                                              //Quad
                                      currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"DIV R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");(yyval.f) = (yyvsp[-2].f) / (yyvsp[0].f);}
                                                                                            }
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 517 "yacccode.y" /* yacc.c:1646  */
    {(yyval.f)=(yyvsp[-1].f); }
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 518 "yacccode.y" /* yacc.c:1646  */
    {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"REM R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");// $$ = fmod($1,$3)
; }
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 533 "yacccode.y" /* yacc.c:1646  */
    {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"POW R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                          //  $$ = pow($1,$3);
                                                                                            }
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 553 "yacccode.y" /* yacc.c:1646  */
    {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"AND R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                              (yyval.f) = (yyvsp[-2].f) && (yyvsp[0].f);
                                                                                            }
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 573 "yacccode.y" /* yacc.c:1646  */
    {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"OR R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                              (yyval.f) = (yyvsp[-2].f) || (yyvsp[0].f); 
                                                                                            }
#line 2444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 593 "yacccode.y" /* yacc.c:1646  */
    {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"NOT R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                              (yyval.f) = ! (yyvsp[0].f);
                                                                                            }
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 611 "yacccode.y" /* yacc.c:1646  */
    {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"CMPE R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                             (yyval.f) = (yyvsp[-2].f) == (yyvsp[0].f);
                                                                                            }
#line 2492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 631 "yacccode.y" /* yacc.c:1646  */
    {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"CMPNE R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                             (yyval.f) = (yyvsp[-2].f) != (yyvsp[0].f);
                                                                                            }
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 651 "yacccode.y" /* yacc.c:1646  */
    {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"CMPNC R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                             (yyval.f) = (yyvsp[-2].f) > (yyvsp[0].f);
                                                                                            }
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 671 "yacccode.y" /* yacc.c:1646  */
    {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"CMPL R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                             (yyval.f) = (yyvsp[-2].f) < (yyvsp[0].f);
                                                                                            }
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 691 "yacccode.y" /* yacc.c:1646  */
    {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"CMPGE R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                             (yyval.f) = (yyvsp[-2].f) >= (yyvsp[0].f);
                                                                                            }
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 711 "yacccode.y" /* yacc.c:1646  */
    {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"CMPLE R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                             (yyval.f) = (yyvsp[-2].f) <= (yyvsp[0].f);
                                                                                            }
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 731 "yacccode.y" /* yacc.c:1646  */
    {  //Quad
								strcat(currentInst,"MOV R");
								char tempBuff[4]="";
                                                                 
								strcat(tempBuff,itoa_customized(currentReg));
                                                               strcat(currentInst,tempBuff);
								strcat(currentInst,", ");tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
                                                               strcat(tempBuff,itoa_customized((int)(yyvsp[0].i)));
								
								strcat(currentInst,tempBuff);
								strcat(currentInst,"\n");
								currentReg++;
								//end Quad
								(yyval.f) = (yyvsp[0].i); }
#line 2636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 745 "yacccode.y" /* yacc.c:1646  */
    {  //Quad
								strcat(currentInst,"MOV R");
								char tempBuff[4]="";
                                                                 
								strcat(tempBuff,itoa_customized(currentReg));
                                                               strcat(currentInst,tempBuff);
								strcat(currentInst,", "); tempBuff[0]='\0';
                                                               strcat(tempBuff,ftoa((yyvsp[0].f)));
								
								strcat(currentInst,tempBuff);
								strcat(currentInst,"\n");
								currentReg++;
								//end Quad
								(yyval.f) = (yyvsp[0].f); }
#line 2655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 760 "yacccode.y" /* yacc.c:1646  */
    { 
                                  //Quad
                                  char quadID[50]="MOV R";
                                  char tempBuff[4]=""; 
                                  strcat(tempBuff,itoa_customized(currentReg));
                                  strcat(quadID,tempBuff);
                                  strcat(quadID,", ");
                                  strcat(quadID,(yyvsp[0].symb)->name);
                                  strcat(quadID,"\n");
                                  strcat(currentInst, quadID);
                                  currentReg++;
                                  //end Quad
                                  (yyval.f) = getValue((yyvsp[0].symb)->name);
                                }
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 779 "yacccode.y" /* yacc.c:1646  */
    {(yyval.f) =(yyvsp[0].i);}
#line 2680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 780 "yacccode.y" /* yacc.c:1646  */
    {(yyval.f) =(yyvsp[0].f);}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 783 "yacccode.y" /* yacc.c:1646  */
    {
 
                                  //Quad
                                  char quadID[50]="MOV RS1";
                                  char tempBuff[4]=""; 
                                 // strcat(tempBuff,itoa_customized(currentReg));

                                  //strcat(quadID,tempBuff);

                                  strcat(quadID,", ");
                                  strcat(quadID,(yyvsp[0].symb)->name);
                                  strcat(quadID,"\n");
                                  strcat(currentInst, quadID);
                                 // currentReg++;
                                  //end Quad
                                  
strcat(currentInst,"CASE_");
//char tempBuff[4]="";
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
strcat(tempBuff,itoa_customized(currentLabel));
strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
strcat(currentInst,":\n");
push(labelStack, currentLabel);
currentLabel++;	

}
#line 2718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 810 "yacccode.y" /* yacc.c:1646  */
    {curlyBraceIsOpened();}
#line 2724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 812 "yacccode.y" /* yacc.c:1646  */
    { strcat(currentInst,"CASE_");
char tempBuff[4]="";
 
strcat(tempBuff,"DEFAULT");
strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
strcat(currentInst,":\n");
push(labelStack, currentLabel);
currentLabel++; }
#line 2738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 821 "yacccode.y" /* yacc.c:1646  */
    {curlyBraceIsClosed();}
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 825 "yacccode.y" /* yacc.c:1646  */
    {  //Quad  

								strcat(currentInst,"MOV RS2");
								char tempBuff[4]="";
                                                                 
								//strcat(tempBuff,itoa_customized(currentReg));
                                                               //strcat(currentInst,tempBuff);
								strcat(currentInst,", "); tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
                                                               strcat(tempBuff,ftoa((yyvsp[0].f)));
								
								strcat(currentInst,tempBuff);
								strcat(currentInst,"\n");
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
								//currentReg++;
								//end Quad
								//$$ = $1; 
  //Quad
        
																							  
 																							
																					                         strcat(currentInst,"CMPE RS1");
																		
//char tempBuff[4]="";
																							//strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", RS2");tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
//strcat(tempBuff,itoa_customized(currentReg));	
																							//strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");
//tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';

	
 //end Quad
  // $$ = $2 == $3;


																			//Quad
																			strcat(currentInst,"JNZ CASE_");
																			
																			strcat(tempBuff,itoa_customized(currentLabel));
																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
																			strcat(currentInst,"\n");
																			push(labelStack, currentLabel);
																			currentLabel++;
																			//EndQuad
																			
																		
}
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 875 "yacccode.y" /* yacc.c:1646  */
    {int tempLabel2=pop(labelStack);
																								        int tempLabel=pop(labelStack);
																								
char tempBuff[4]="";																								
																								strcat(currentInst,"JMP CASE_");//To begininng of while
																								strcat(tempBuff,"DEFAULT");	
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																									strcat(currentInst,"\n");
																								
																								strcat(currentInst, "CASE_");
																								strcat(tempBuff,itoa_customized(tempLabel2));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																									strcat(currentInst,":\n");}
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2820 "y.tab.c" /* yacc.c:1646  */
        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

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

#if 1
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 896 "yacccode.y" /* yacc.c:1906  */
 
struct symtab * symlook(s)
char*s;
{
 char *p;
struct symtab *sp;
for (sp = symtab; sp < &symtab[nsyms] ; sp++) {
/* is it already here ? */
if (sp->name && !strcmp(sp->name, s) )
{
return sp;
}
/*the name is free? */
if(!sp->name) {
sp->name = strdup(s);
return sp;
}
}
f=fopen("output.txt","a");
yyerror ( "Too many symbols " );
fprintf(f,"Too many symbols");
}
int main(){
labelStack = createStack(100);
 currentLabel=0;

 
  yyparse();
  resetQuad();
  printSymbolTable();
  printSemanticErrors();
  
 
  return 0;
}
