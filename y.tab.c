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
#line 1 "yac_and_run.y" /* yacc.c:339  */

	#include<stdio.h>
	extern FILE *yyin;

#line 71 "y.tab.c" /* yacc.c:339  */

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
    INCLUDE = 258,
    LIBR = 259,
    DEFINE = 260,
    UNS = 261,
    CLASS = 262,
    SCOPE = 263,
    DTYPE = 264,
    DTYPE_QUAL = 265,
    BIN_ARITH_OPERATOR = 266,
    INCDEC = 267,
    ASSIGNOP = 268,
    BIN_BOOL = 269,
    ADDRESS = 270,
    UN_BOOL = 271,
    GENERIC = 272,
    SQ = 273,
    LPAREN = 274,
    RPAREN = 275,
    SQ_LEFT = 276,
    SQ_RIGHT = 277,
    FL_LEFT = 278,
    FL_RIGHT = 279,
    ASSIGN = 280,
    SEMICOLON = 281,
    COLON = 282,
    COMMA = 283,
    OUTPUT = 284,
    INPUT = 285,
    CIN = 286,
    COUT = 287,
    COMPR = 288,
    IF = 289,
    ELSE = 290,
    ELSE_IF = 291,
    FOR = 292,
    WHILE = 293,
    DO = 294,
    SWITCH = 295,
    CASE = 296,
    DEFAULT = 297,
    MAIN = 298,
    BOOL_RES = 299,
    LOOP_EXIT = 300,
    RETURN = 301,
    LETTER = 302,
    NUM = 303,
    IDEN = 304,
    STRING = 305
  };
#endif
/* Tokens.  */
#define INCLUDE 258
#define LIBR 259
#define DEFINE 260
#define UNS 261
#define CLASS 262
#define SCOPE 263
#define DTYPE 264
#define DTYPE_QUAL 265
#define BIN_ARITH_OPERATOR 266
#define INCDEC 267
#define ASSIGNOP 268
#define BIN_BOOL 269
#define ADDRESS 270
#define UN_BOOL 271
#define GENERIC 272
#define SQ 273
#define LPAREN 274
#define RPAREN 275
#define SQ_LEFT 276
#define SQ_RIGHT 277
#define FL_LEFT 278
#define FL_RIGHT 279
#define ASSIGN 280
#define SEMICOLON 281
#define COLON 282
#define COMMA 283
#define OUTPUT 284
#define INPUT 285
#define CIN 286
#define COUT 287
#define COMPR 288
#define IF 289
#define ELSE 290
#define ELSE_IF 291
#define FOR 292
#define WHILE 293
#define DO 294
#define SWITCH 295
#define CASE 296
#define DEFAULT 297
#define MAIN 298
#define BOOL_RES 299
#define LOOP_EXIT 300
#define RETURN 301
#define LETTER 302
#define NUM 303
#define IDEN 304
#define STRING 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 222 "y.tab.c" /* yacc.c:358  */

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   395

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  157
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  329

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,     7,     7,     9,    12,    14,    15,    18,    19,    21,
      22,    26,    27,    28,    31,    34,    37,    38,    42,    45,
      46,    49,    50,    53,    56,    59,    60,    61,    64,    65,
      69,    70,    73,    74,    77,    80,    83,    84,    85,    88,
      91,    92,    95,    96,   101,   102,   106,   107,   110,   111,
     114,   117,   118,   121,   122,   125,   128,   129,   131,   132,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   150,   151,   154,   155,   157,   158,   160,   161,
     162,   165,   167,   168,   171,   172,   173,   175,   176,   177,
     179,   180,   181,   182,   183,   184,   185,   187,   188,   189,
     190,   191,   192,   193,   193,   194,   195,   197,   198,   201,
     202,   203,   204,   205,   209,   210,   214,   215,   216,   219,
     220,   221,   222,   223,   225,   226,   227,   229,   230,   234,
     236,   237,   239,   240,   242,   245,   246,   247,   249,   250,
     252,   253,   254,   258,   260,   262,   263,   265,   266,   268,
     269,   271,   273,   273,   273,   276,   278,   279
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INCLUDE", "LIBR", "DEFINE", "UNS",
  "CLASS", "SCOPE", "DTYPE", "DTYPE_QUAL", "BIN_ARITH_OPERATOR", "INCDEC",
  "ASSIGNOP", "BIN_BOOL", "ADDRESS", "UN_BOOL", "GENERIC", "SQ", "LPAREN",
  "RPAREN", "SQ_LEFT", "SQ_RIGHT", "FL_LEFT", "FL_RIGHT", "ASSIGN",
  "SEMICOLON", "COLON", "COMMA", "OUTPUT", "INPUT", "CIN", "COUT", "COMPR",
  "IF", "ELSE", "ELSE_IF", "FOR", "WHILE", "DO", "SWITCH", "CASE",
  "DEFAULT", "MAIN", "BOOL_RES", "LOOP_EXIT", "RETURN", "LETTER", "NUM",
  "IDEN", "STRING", "$accept", "Sdash", "S", "HEADERS", "HEADERSDASH",
  "NS", "MACROS", "CLASSES", "CDECLR", "IDLIST", "IDLISTDASH", "CDEFN",
  "CLASS_VARIABLE", "CLASS_BODY", "EXPR_BODY", "EXPR_DASH", "EXPR_DBLDASH",
  "E", "DECLARATIONS", "X", "FUNCTION_DEFN", "FUNCTION_PROTO", "PROTO_F",
  "TDASH", "PROTO_D", "PTRD", "FUN_SCOPE_DEF", "MAINS", "ARGLISTF", "T",
  "ARGLISTFD", "ID", "IDDASH", "M", "MD", "FUNCTION", "IO", "CINEXPR",
  "COUTEXPR", "COUTSUBA", "COUTSUBB", "DECLR_STMT", "DECLR2",
  "ASSIGN_STMT", "ASSIGN1", "ASSIGN2", "EXPRESSION", "ASSID", "ASSID_DASH",
  "PEXP", "PEXP3", "PEXP2", "PEXP4", "DECLR_ASSIGN", "DA2", "DASTMT",
  "INCRDECR", "FDW", "FOR1", "FOR1COMMAS", "FOR3", "FOR3COMMAS",
  "BRANCHES", "EXP_FURTHER", "EXP_F2", "ALF1", "CONDITION", "Q", "PART",
  "SWITCHER", "CSS", "CCC", "CASES", "DFF", "DEF", "CASEINDEX", "RET",
  "R2", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -254

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-254)))

#define YYTABLE_NINF -94

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,    35,    52,  -254,    62,     9,  -254,    39,   107,  -254,
    -254,   121,   122,   119,  -254,   147,   132,   175,   119,   119,
    -254,   105,   162,   148,   193,  -254,  -254,   196,   157,  -254,
    -254,   180,   165,  -254,   182,   187,   196,   184,  -254,   186,
     199,   206,    -2,  -254,   170,    14,     5,  -254,   206,  -254,
    -254,  -254,   171,   200,   197,  -254,   205,    -2,   217,   208,
    -254,    82,   202,  -254,  -254,   200,    60,  -254,  -254,  -254,
      14,   207,    -2,   210,    78,    -2,   211,  -254,   251,   251,
     200,  -254,  -254,   222,  -254,    59,  -254,   216,  -254,  -254,
     207,   243,    -1,  -254,   236,   226,  -254,   227,   202,   240,
      15,   166,  -254,    25,  -254,   251,  -254,   200,   228,  -254,
      13,   251,   220,   230,   238,   241,   242,   244,   245,   247,
     251,   127,   252,   258,   259,   260,   124,   264,   268,   270,
     243,   243,   243,   272,  -254,   250,    -1,   277,   246,  -254,
      -2,  -254,  -254,   276,   276,   285,    15,  -254,   243,    89,
     278,   279,    15,    -2,    16,  -254,   230,   115,     7,   115,
     243,    -2,   243,    15,  -254,  -254,  -254,    74,  -254,   243,
     243,   243,   137,   243,   243,   243,  -254,  -254,  -254,   243,
     299,  -254,  -254,   250,  -254,   243,    28,  -254,  -254,  -254,
    -254,   255,   251,    -2,  -254,    13,  -254,   280,  -254,  -254,
    -254,  -254,   253,   253,    72,   289,   297,    13,     7,    77,
     284,   284,   287,  -254,   294,   291,   296,  -254,  -254,  -254,
    -254,    15,  -254,  -254,  -254,  -254,  -254,  -254,  -254,   306,
    -254,   295,   276,   276,  -254,  -254,    15,   278,  -254,   279,
      -2,  -254,   297,   156,   298,   251,   300,   253,  -254,  -254,
    -254,  -254,   115,   301,   282,   302,  -254,  -254,  -254,  -254,
    -254,   280,  -254,  -254,    15,   243,   297,   303,   243,   307,
     281,  -254,   304,  -254,   126,   308,   115,   -16,   288,   288,
     281,   120,   126,   293,   293,   311,  -254,  -254,   313,  -254,
    -254,  -254,   309,   312,   314,  -254,   281,  -254,   317,   316,
    -254,  -254,   120,  -254,  -254,  -254,   318,   319,   243,   243,
    -254,  -254,   243,   115,  -254,   243,  -254,   281,  -254,   320,
     322,   323,  -254,  -254,   325,  -254,   243,   326,  -254
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,    10,     6,     1,     0,     8,     5,
       4,     0,     0,    13,     9,     0,     0,    45,    13,    13,
       7,    17,     0,     0,    47,    11,    12,    22,     0,    15,
      14,     0,     0,     3,     0,     0,    22,    17,    16,     0,
       0,    31,    20,    21,     0,    52,     0,    23,    29,    25,
      27,    26,     0,    57,     0,    19,     0,     0,     0,     0,
      49,    57,    33,    28,    24,    57,     0,    53,    55,    18,
      52,    52,     0,     0,    41,     0,     0,    54,     0,     0,
      57,    94,    95,    99,    56,     0,    96,     0,    48,    50,
      52,    71,    43,    38,     0,     0,    37,     0,    33,    31,
      92,     0,    59,   102,    97,     0,    93,    57,     0,    51,
       0,     0,     0,    77,     0,     0,     0,     0,     0,     0,
     157,    99,     0,     0,     0,     0,     0,    96,     0,     0,
      71,    71,    71,     0,    42,    41,    43,     0,     0,    32,
       0,    30,    91,   104,   104,     0,    90,    58,    71,    57,
      83,   111,   115,     0,     0,    73,    77,   137,   123,   137,
      71,     0,    71,   156,   155,    86,    85,     0,    46,    71,
      71,    71,   114,    71,    71,    71,    65,    67,    68,    71,
       0,    36,    39,    41,    35,    71,     0,   101,   103,   100,
      98,     0,     0,     0,    81,     0,   109,    75,    79,    80,
      78,    76,     0,     0,   142,     0,   139,     0,   123,     0,
     123,   123,     0,   121,     0,     0,     0,    66,    89,    87,
      84,    88,    60,    61,    62,    70,    63,    64,    69,    43,
      40,     0,   106,   106,   105,    44,   113,    83,   112,   111,
       0,    72,   139,     0,     0,     0,     0,     0,   135,   122,
     119,   120,   137,     0,     0,     0,    34,   108,   107,    82,
     110,    75,   136,   141,   140,    71,   139,     0,    71,     0,
     146,    74,     0,   138,   128,     0,   137,     0,   150,   150,
     146,   133,   128,   128,   128,     0,   126,   117,     0,   154,
     152,   153,     0,     0,     0,   149,   146,   145,     0,     0,
     129,   131,   133,   127,   125,   124,     0,     0,    71,    71,
     143,   144,    71,   137,   130,    71,   118,   148,   151,     0,
       0,     0,   147,   132,     0,   116,    71,     0,   134
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -254,  -254,  -254,   338,  -254,  -254,  -254,   161,  -254,   321,
    -254,  -254,  -254,   310,  -254,   305,  -254,  -254,   256,   229,
    -254,  -254,  -254,  -254,  -134,   262,  -254,  -254,    88,  -254,
     -46,   -42,   286,   -69,  -254,    69,  -254,    91,   201,  -254,
    -254,  -254,   123,  -153,  -254,  -254,   -20,   -60,  -254,  -254,
     212,   -39,  -254,  -151,   125,   163,  -253,  -254,   151,   -15,
      79,   -93,  -254,    61,  -254,  -254,  -156,  -225,  -194,  -254,
    -254,  -216,    45,    86,  -254,  -254,  -254,  -254
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    13,     8,    17,    18,    22,
      29,    19,    54,    35,    36,    47,    48,    64,    49,    76,
      50,    51,    95,   181,    96,   183,    24,    33,    59,    88,
      60,   121,    67,    68,    84,   122,   123,   241,   155,   156,
     200,   124,   194,   125,   167,   220,   126,   127,   104,   145,
     187,   188,   234,   128,   196,   151,   129,   130,   212,   213,
     285,   286,   131,   300,   301,   302,   205,   248,   206,   132,
     278,   279,   280,   294,   295,   292,   133,   164
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,   182,   289,   214,    62,   210,    86,   211,   242,   244,
     134,   102,     1,    52,    52,    71,   207,   262,    86,    86,
      52,   284,    52,    57,    83,    89,   105,   106,    52,   284,
      90,    52,   290,    98,   291,   208,    83,    83,   147,     5,
      52,   273,    58,    52,   109,    86,    85,    53,    53,   230,
      71,    86,     6,   266,    61,   210,    53,   211,   100,   101,
      86,   144,   149,    83,   297,    53,   198,     7,   150,    83,
     105,   106,    78,   143,    53,    52,   232,    53,    83,    79,
     311,   107,    80,   105,   106,   146,    78,    92,    11,    52,
     165,   152,   218,    79,    90,    93,   267,    86,    62,    86,
     163,    74,   166,    66,    81,   245,    94,    86,    82,    53,
      66,   197,   199,    12,   192,    83,   209,    83,    81,   216,
     288,   283,    82,    53,   219,    83,    16,    78,    27,   283,
      52,   202,    86,    28,   203,   105,   172,   204,   111,   204,
     165,    52,    86,    86,   233,    79,   103,   221,   -93,   -93,
      83,   237,   166,   238,   282,   298,   299,   320,    87,    81,
      83,    83,    97,    82,    53,   238,   209,   105,   106,    14,
      81,    15,   236,    20,    82,    53,   142,   105,   106,    25,
      26,    21,   204,   243,    23,    86,   142,    86,    30,   245,
     304,   305,    86,   257,   258,   250,   251,    31,   261,   176,
     177,   178,    32,    83,    34,    83,    37,    39,    40,    41,
      83,    42,    28,    44,    86,    46,    86,   191,    45,    56,
      65,    66,    86,    69,    70,   264,    72,   204,    73,   215,
      75,   217,   204,    91,    83,    58,   108,    99,   222,   223,
     224,   103,   225,   226,   227,   136,   137,   138,   228,   140,
     153,   148,   110,    86,   231,   111,   204,   157,    52,   154,
     158,   159,    79,    78,   161,    78,    52,   160,    52,   185,
      79,    83,   203,   162,   112,   113,   168,   114,   180,   235,
     115,   116,   117,   118,   169,   170,   171,    81,   119,   120,
     173,    82,    53,   204,   174,    81,   175,    81,   179,    82,
      53,    82,    53,   184,   186,   190,   193,   195,   229,   246,
     240,   247,   208,   252,   253,   254,   255,   134,   263,   256,
     269,   282,   277,   265,   268,   270,   276,   139,   281,   274,
     293,   306,   287,   307,   272,   313,   308,   275,   310,   309,
     312,   315,   324,     9,   323,   316,    43,   325,   326,    38,
     328,    77,   271,    63,   135,   141,   189,   201,   239,   249,
     259,   303,   322,   314,   260,   296,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   317,   318,     0,
       0,   319,     0,     0,   321,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   327
};

static const yytype_int16 yycheck[] =
{
      42,   135,    18,   159,    46,   158,    66,   158,   202,   203,
      11,    80,     3,    15,    15,    57,     9,   242,    78,    79,
      15,   274,    15,     9,    66,    71,    11,    12,    15,   282,
      72,    15,    48,    75,    50,    28,    78,    79,   107,     4,
      15,   266,    28,    15,    90,   105,    66,    49,    49,   183,
      92,   111,     0,   247,    49,   208,    49,   208,    78,    79,
     120,   103,    49,   105,   280,    49,    50,     5,   110,   111,
      11,    12,    12,    48,    49,    15,    48,    49,   120,    19,
     296,    22,    22,    11,    12,   105,    12,     9,    49,    15,
      13,   111,    18,    19,   136,    17,   252,   157,   140,   159,
     120,    19,    25,    21,    44,    33,    28,   167,    48,    49,
      21,   153,   154,     6,    25,   157,   158,   159,    44,   161,
     276,   274,    48,    49,    50,   167,     7,    12,    23,   282,
      15,    16,   192,    28,    19,    11,    12,   157,    12,   159,
      13,    15,   202,   203,   186,    19,    19,   167,    11,    12,
     192,   193,    25,   195,    28,    35,    36,   313,    70,    44,
     202,   203,    74,    48,    49,   207,   208,    11,    12,    48,
      44,    49,   192,    26,    48,    49,    20,    11,    12,    18,
      19,    49,   202,   203,     9,   245,    20,   247,    26,    33,
     283,   284,   252,   232,   233,   210,   211,    49,   240,   130,
     131,   132,     9,   245,     8,   247,    49,    27,    43,    27,
     252,    24,    28,    27,   274,     9,   276,   148,    19,    49,
      49,    21,   282,    26,    19,   245,     9,   247,    20,   160,
      28,   162,   252,    23,   276,    28,    20,    26,   169,   170,
     171,    19,   173,   174,   175,     9,    20,    20,   179,     9,
      30,    23,     9,   313,   185,    12,   276,    19,    15,    29,
      19,    19,    19,    12,    19,    12,    15,    23,    15,    23,
      19,   313,    19,    26,    31,    32,    24,    34,    28,    24,
      37,    38,    39,    40,    26,    26,    26,    44,    45,    46,
      26,    48,    49,   313,    26,    44,    26,    44,    26,    48,
      49,    48,    49,    26,    28,    20,    28,    28,     9,    20,
      30,    14,    28,    26,    20,    24,    20,    11,    20,    24,
      38,    28,    41,    23,    23,    23,    19,    98,    24,    26,
      42,    20,    24,    20,   265,    19,    27,   268,    24,    27,
      23,    23,    20,     5,    24,    26,    36,    24,    23,    28,
      24,    65,   261,    48,    92,    99,   144,   156,   195,   208,
     237,   282,   317,   302,   239,   279,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,   309,    -1,
      -1,   312,    -1,    -1,   315,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   326
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    52,    53,    54,     4,     0,     5,    57,    54,
      55,    49,     6,    56,    48,    49,     7,    58,    59,    62,
      26,    49,    60,     9,    77,    58,    58,    23,    28,    61,
      26,    49,     9,    78,     8,    64,    65,    49,    60,    27,
      43,    27,    24,    64,    27,    19,     9,    66,    67,    69,
      71,    72,    15,    49,    63,    82,    49,     9,    28,    79,
      81,    49,    82,    66,    68,    49,    21,    83,    84,    26,
      19,    82,     9,    20,    19,    28,    70,    83,    12,    19,
      22,    44,    48,    82,    85,    97,    98,    79,    80,    81,
      82,    23,     9,    17,    28,    73,    75,    79,    82,    26,
      97,    97,    84,    19,    99,    11,    12,    22,    20,    81,
       9,    12,    31,    32,    34,    37,    38,    39,    40,    45,
      46,    82,    86,    87,    92,    94,    97,    98,   104,   107,
     108,   113,   120,   127,    11,    76,     9,    20,    20,    70,
       9,    69,    20,    48,    82,   100,    97,    84,    23,    49,
      82,   106,    97,    30,    29,    89,    90,    19,    19,    19,
      23,    19,    26,    97,   128,    13,    25,    95,    24,    26,
      26,    26,    12,    26,    26,    26,    86,    86,    86,    26,
      28,    74,    75,    76,    26,    23,    28,   101,   102,   101,
      20,    86,    25,    28,    93,    28,   105,    82,    50,    82,
      91,    89,    16,    19,    97,   117,   119,     9,    28,    82,
      94,   104,   109,   110,   117,    86,    82,    86,    18,    50,
      96,    97,    86,    86,    86,    86,    86,    86,    86,     9,
      75,    86,    48,    82,   103,    24,    97,    82,    82,   106,
      30,    88,   119,    97,   119,    33,    20,    14,   118,   109,
     110,   110,    26,    20,    24,    20,    24,   102,   102,    93,
     105,    82,   118,    20,    97,    23,   119,   117,    23,    38,
      23,    88,    86,   118,    26,    86,    19,    41,   121,   122,
     123,    24,    28,    94,   107,   111,   112,    24,   117,    18,
      48,    50,   126,    42,   124,   125,   124,   122,    35,    36,
     114,   115,   116,   111,   112,   112,    20,    20,    27,    27,
      24,   122,    23,    19,   114,    23,    26,    86,    86,    86,
     117,    86,   123,    24,    20,    24,    23,    86,    24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    54,    55,    55,    56,    56,    57,
      57,    58,    58,    58,    59,    60,    61,    61,    62,    63,
      63,    64,    64,    65,    66,    67,    67,    67,    68,    68,
      69,    69,    70,    70,    71,    72,    73,    73,    73,    74,
      75,    75,    76,    76,    77,    77,    78,    78,    79,    79,
      80,    81,    81,    82,    82,    83,    84,    84,    85,    85,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    87,    87,    88,    88,    89,    89,    90,    91,
      91,    92,    93,    93,    94,    95,    95,    96,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    98,    99,    99,
     100,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     105,   105,   106,   106,   107,   107,   108,   108,   108,   109,
     109,   109,   110,   110,   111,   111,   111,   112,   112,   113,
     114,   114,   115,   115,   116,   117,   117,   117,   118,   118,
     119,   119,   119,   120,   121,   122,   122,   123,   123,   124,
     124,   125,   126,   126,   126,   127,   128,   128
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     6,     3,     1,     0,     3,     0,     3,
       0,     2,     2,     0,     3,     2,     2,     0,     7,     1,
       0,     2,     0,     3,     2,     1,     1,     1,     1,     0,
       5,     0,     3,     0,     8,     6,     3,     1,     1,     1,
       4,     0,     1,     0,    11,     0,     8,     0,     3,     1,
       1,     4,     0,     2,     3,     1,     2,     0,     3,     2,
       3,     3,     3,     3,     3,     2,     3,     2,     2,     3,
       3,     0,     4,     2,     3,     0,     2,     0,     2,     1,
       1,     3,     3,     0,     3,     1,     1,     1,     1,     1,
       3,     3,     2,     2,     1,     1,     1,     2,     3,     0,
       2,     2,     0,     1,     0,     2,     0,     2,     2,     3,
       3,     0,     1,     3,     2,     2,    11,     7,     9,     2,
       2,     1,     2,     0,     2,     2,     1,     2,     0,     8,
       2,     1,     4,     0,     7,     2,     3,     0,     3,     0,
       3,     3,     1,     8,     3,     2,     0,     5,     0,     1,
       0,     3,     1,     1,     1,     2,     1,     0
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
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 7 "yac_and_run.y" /* yacc.c:1646  */
    { printf("No errors!\n");	return 0;	}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1552 "y.tab.c" /* yacc.c:1646  */
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
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 281 "yac_and_run.y" /* yacc.c:1906  */

int main(){
	yyin = fopen("sam.cpp","r");
	yyparse();
	return 0;
}
int yyerror(){
	printf("Error\n");
	return 0;
}
int yywrap(){
	return 1;
}
