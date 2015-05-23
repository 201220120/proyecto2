/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 5 "parser.y" /* yacc.c:339  */
  /* Codigo C */
#include <stdio.h>
#include<math.h>
#include "diccionario.h"
DICCIONARIO diccionario; /* variable global para el diccionario */
  extern FILE *yyin;

#line 74 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    RESERV_ARCHIVO = 258,
    PRENTERO = 259,
    RESERV_PRINCIPAL = 260,
    RESERV_NOMBRE = 261,
    RESERV_FUNCION = 262,
    RESERV_VARIABLE = 263,
    RESERV_RETORNAR = 264,
    RESERV_SI = 265,
    RESERV_MENOR = 266,
    RESERV_MAYOR = 267,
    RESERV_MAYORIGUAL = 268,
    RESERV_MENORIGUAL = 269,
    RESERV_IGUAL = 270,
    RESERV_DIFERENTE = 271,
    RESERV_SINO = 272,
    RESERV_SINOSI = 273,
    RESERV_MIENTRAS = 274,
    RESERV_PARA = 275,
    RESERV_INCLUIR = 276,
    RESERV_ALIAS = 277,
    RESERV_ENT = 278,
    RESERV_DEC = 279,
    RESERV_LOG = 280,
    RESERV_STR = 281,
    RESERV_VAC = 282,
    RESERV_COMO = 283,
    RESERV_INICIO = 284,
    RESERV_FIN = 285,
    RESERV_RET = 286,
    RESERV_CON = 287,
    RESERV_ENTONCES = 288,
    RESERV_REPETIR = 289,
    RESERV_HASTA = 290,
    RESERV_PASO = 291,
    RESERV_HACER = 292,
    RESERV_Y = 293,
    RESERV_IMPRIMIR = 294,
    RESERV_GRAFICAR = 295,
    RESERV_CADENA = 296,
    CONSTANTE_REAL = 297,
    CONSTANTE_ENTERA = 298,
    IDENTIFICADOR = 299,
    TIPO_ARCHIVO = 300,
    TIPO_PRINCIPAL = 301,
    RESERV_TIPO = 302,
    RESERV_FNM = 303,
    RESERV_PAL = 304,
    RESERV_ENTERO = 305,
    RESERV_DECIMAL = 306,
    RESERV_BOOLEANO = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 14 "parser.y" /* yacc.c:355  */

    int    valor_entero;
    double valor_real;
    char * texto;

#line 173 "parser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 188 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   513

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  181
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  411

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    62,     2,     2,    57,     2,     2,
      63,    64,    55,    54,    60,    53,    70,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,    65,
      67,    66,    68,    71,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    69,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    72,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    38,    39,    45,    46,    47,    48,    49,
      50,    55,    60,    61,    62,    63,    67,    72,    73,    74,
      75,    76,    78,    79,    80,    81,    90,    99,   109,   110,
     111,   112,   113,   114,   116,   117,   126,   127,   128,   129,
     130,   131,   133,   134,   135,   144,   145,   146,   147,   148,
     149,   152,   153,   154,   163,   164,   165,   166,   167,   168,
     173,   174,   176,   177,   182,   183,   186,   189,   192,   193,
     194,   197,   198,   199,   202,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   218,   219,   220,   221,   223,   224,
     225,   226,   227,   228,   237,   238,   241,   242,   245,   246,
     247,   250,   251,   252,   253,   254,   255,   256,   257,   259,
     260,   261,   265,   267,   269,   270,   271,   272,   273,   274,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   289,
     290,   291,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   306,   308,   309,   310,   311,   314,   317,   318,   321,
     324,   325,   326,   327,   329,   339,   340,   341,   350,   351,
     352,   353,   354,   355,   356,   359,   360,   361,   365,   368,
     369,   370,   371,   372,   373,   376,   379,   380,   381,   382,
     383,   384
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RESERV_ARCHIVO", "PRENTERO",
  "RESERV_PRINCIPAL", "RESERV_NOMBRE", "RESERV_FUNCION", "RESERV_VARIABLE",
  "RESERV_RETORNAR", "RESERV_SI", "RESERV_MENOR", "RESERV_MAYOR",
  "RESERV_MAYORIGUAL", "RESERV_MENORIGUAL", "RESERV_IGUAL",
  "RESERV_DIFERENTE", "RESERV_SINO", "RESERV_SINOSI", "RESERV_MIENTRAS",
  "RESERV_PARA", "RESERV_INCLUIR", "RESERV_ALIAS", "RESERV_ENT",
  "RESERV_DEC", "RESERV_LOG", "RESERV_STR", "RESERV_VAC", "RESERV_COMO",
  "RESERV_INICIO", "RESERV_FIN", "RESERV_RET", "RESERV_CON",
  "RESERV_ENTONCES", "RESERV_REPETIR", "RESERV_HASTA", "RESERV_PASO",
  "RESERV_HACER", "RESERV_Y", "RESERV_IMPRIMIR", "RESERV_GRAFICAR",
  "RESERV_CADENA", "CONSTANTE_REAL", "CONSTANTE_ENTERA", "IDENTIFICADOR",
  "TIPO_ARCHIVO", "TIPO_PRINCIPAL", "RESERV_TIPO", "RESERV_FNM",
  "RESERV_PAL", "RESERV_ENTERO", "RESERV_DECIMAL", "RESERV_BOOLEANO",
  "'-'", "'+'", "'*'", "'/'", "'%'", "'{'", "'}'", "','", "':'", "'\"'",
  "'('", "')'", "';'", "'='", "'<'", "'>'", "'^'", "'.'", "'?'", "'\\302'",
  "$accept", "lineas", "linea", "tipoclase", "a", "c", "nombre", "tipo",
  "tipop", "b", "nombrep", "libreria", "funcion", "parametros",
  "tipoparametro", "cuerpo", "contenidocuerpo", "declararvariable1",
  "tipovariable", "declaracionentero", "asigvalor", "expresionentera",
  "expresion", "declaraciondecimal", "asigvalordec", "d", "retornoentero",
  "retornodecimal", "sentencia", "mientras", "x", "y", "para", "si", "sh",
  "shh", "h", "i", "z", "comparacion", "comparador", "ejecutable",
  "ejecucion", "esfuncion", "k", "m", "retentero", "retdecimal",
  "retcadena", "retlog", "le", "imprimir", "graficar", "contfuncion",
  "invocarfuncion", "funcioninterna", "parametrofuncion", "parametrovalor",
  "funcionexterna", "sentenciaejec", "siejec", "she", "shhe", "he", "ie",
  "ze", "wwe", "repetir", "ly", "lz", "declararvariable2", "tipovariable2",
  "asigidentificador", "tipvariable", "expresion2", "concatenar", "er",
  "comparacionejec", "comparadorejec", "esincuir", "parejecutable",
  "tipoparejec", YY_NULLPTR
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
     305,   306,   307,    45,    43,    42,    47,    37,   123,   125,
      44,    58,    34,    40,    41,    59,    61,    60,    62,    94,
      46,    63,   194
};
# endif

#define YYPACT_NINF -210

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-210)))

#define YYTABLE_NINF -150

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      44,    18,   -29,   -23,    22,   120,  -210,    82,  -210,   -12,
    -210,  -210,  -210,    72,    29,    90,   107,     5,  -210,  -210,
      79,  -210,   125,   106,   122,  -210,   133,   128,   132,  -210,
     140,   179,   204,   218,   224,   225,   246,    39,  -210,  -210,
      87,  -210,   119,  -210,   216,   175,   223,   220,   241,   168,
     267,   244,  -210,  -210,  -210,  -210,   292,   257,  -210,  -210,
    -210,   335,  -210,   250,  -210,    68,  -210,   145,   270,   280,
     285,    43,  -210,   282,   271,   273,   277,   283,    71,   294,
      29,   306,   286,   129,   129,   129,   129,   129,   129,  -210,
    -210,   287,   295,  -210,  -210,  -210,   175,   290,  -210,  -210,
     310,   279,    89,   300,  -210,  -210,   170,   -20,   306,   297,
     305,    58,  -210,  -210,   288,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,   -10,  -210,   355,  -210,  -210,
     129,   129,   129,   129,   129,   129,   319,  -210,  -210,    89,
    -210,  -210,   158,   129,   317,   331,   308,   197,  -210,   330,
    -210,  -210,  -210,  -210,  -210,    89,  -210,  -210,  -210,   170,
    -210,   309,   363,   365,    41,   211,   375,   373,   170,   353,
     -24,   374,  -210,   390,  -210,   235,   378,   362,   366,   356,
     367,   368,   369,   370,   371,  -210,    89,   389,   396,  -210,
     376,   377,   377,   379,   180,  -210,   383,  -210,   197,   329,
     170,   170,   170,   170,   170,  -210,   380,   381,   170,   382,
     170,   306,   170,   384,   170,  -210,   115,  -210,   386,   346,
     129,  -210,  -210,   117,  -210,   385,  -210,  -210,  -210,  -210,
     427,  -210,  -210,  -210,  -210,  -210,  -210,  -210,   391,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,   392,    -9,   394,  -210,
     395,   397,  -210,  -210,   129,  -210,   388,  -210,   398,   210,
    -210,  -210,  -210,   352,   393,  -210,   400,  -210,   248,   248,
     399,   399,   399,  -210,  -210,   346,  -210,   346,   256,  -210,
      60,   377,  -210,  -210,   375,  -210,  -210,   411,  -210,   -18,
    -210,   414,  -210,   389,   401,   396,   416,   403,  -210,   405,
    -210,  -210,  -210,  -210,   357,  -210,   180,   180,   180,   180,
     180,   180,  -210,  -210,   170,   454,  -210,  -210,   170,   404,
    -210,  -210,  -210,   123,  -210,   210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,    12,    89,    89,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   432,  -210,
     318,   389,  -210,  -210,   402,    28,    92,   406,   407,   408,
     409,   410,   412,   306,   430,   415,  -210,   453,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,   253,   170,   423,   419,  -210,
     439,  -210,  -210,  -210,   298,    89,   377,   306,   281,   130,
     420,   303,   463,   281,  -210,  -210,  -210,   428,  -210,  -210,
    -210,    89,   156,   212,   429,  -210,  -210,  -210,    89,   184,
    -210
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     2,     3,    18,     4,
      95,    96,    97,     0,     0,     0,     0,     0,     1,    17,
       0,    94,     0,     0,     0,    19,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     8,    99,
       0,   177,     0,     6,     0,    24,     0,     0,     0,    24,
       0,     0,   178,   179,   181,   180,     0,     0,    42,    43,
      44,     0,     7,     0,    85,     0,    98,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,     0,     0,     0,     0,     0,     0,     5,
     176,     0,     0,    25,    26,    27,     0,     0,    13,    10,
       0,     0,     0,     0,   175,     9,     0,     0,   111,     0,
       0,    40,   115,   131,     0,   118,   119,   110,   117,   120,
     121,   116,   129,   130,   114,     0,   148,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,    16,    22,     0,
      14,    11,     0,     0,     0,     0,     0,     0,    29,     0,
      32,    33,    69,    70,    68,     0,   155,   156,   157,     0,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,     0,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,     0,     0,    34,
       0,     0,     0,     0,     0,    28,     0,    31,     0,     0,
       0,     0,     0,     0,     0,   173,   169,   170,     0,     0,
       0,   111,     0,     0,     0,   167,     0,   166,     0,   154,
       0,   126,   123,     0,   125,     0,   101,   102,   103,   104,
       0,   150,   151,   152,   153,   146,   149,   147,     0,    15,
      46,    45,    47,    48,    50,    49,    32,    40,    36,    39,
      62,    37,    61,    66,     0,    75,     0,    71,     0,     0,
      42,    43,    44,     0,     0,    65,     0,   164,   159,   158,
     160,   161,   163,   172,   171,   162,   174,   168,     0,   133,
       0,     0,   141,   112,     0,   113,    41,     0,   122,     0,
     100,     0,    21,     0,     0,     0,     0,     0,    76,     0,
      72,    51,    52,    53,     0,    35,     0,     0,     0,     0,
       0,     0,    67,    64,     0,     0,   134,   135,     0,     0,
     165,   124,   128,     0,    38,     0,    60,    88,    89,    90,
      91,    92,    93,     0,    30,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   140,
       0,     0,   127,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,    84,    78,    73,    55,
      54,    56,    57,    59,    58,     0,     0,     0,     0,    77,
       0,   137,   136,   138,     0,    30,     0,   111,     0,     0,
       0,     0,     0,     0,   142,   144,    74,     0,   139,   145,
     143,    30,     0,    80,     0,    81,    79,    82,    30,     0,
      83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -210,  -210,  -210,  -210,   436,   413,  -210,  -210,  -210,   152,
     361,  -210,   482,   441,   417,  -136,  -145,   327,  -210,  -210,
    -183,   -72,  -184,  -210,   199,  -210,   311,   301,  -210,  -210,
    -210,  -210,   -81,  -210,  -210,  -210,    93,  -210,  -210,  -185,
    -210,  -210,   483,  -210,   455,  -210,  -210,  -210,  -210,  -210,
    -107,  -210,  -210,  -108,  -210,  -210,   209,   213,  -210,  -210,
    -210,  -210,  -210,   126,  -210,  -210,   111,  -210,  -210,   110,
    -210,  -210,   328,  -210,  -134,  -210,   221,  -209,  -210,  -210,
    -210,   442
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    37,    38,    25,    26,    47,    76,    63,
      27,     7,     8,    71,    72,   147,   148,   149,   189,   248,
     112,    64,   342,   251,   252,    29,   150,   196,   151,   152,
     257,   300,   153,   154,   255,   298,   379,   406,   407,   256,
     333,     9,    10,    11,    39,   173,   226,   227,   228,   229,
     114,   115,   116,   117,   118,   119,   223,   224,   120,   121,
     122,   160,   279,   316,   382,   383,   317,   123,   394,   395,
     124,   125,   126,   235,   161,   216,   217,   162,   210,    12,
      40,    41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     113,   165,   195,   186,   249,   282,   174,   258,    31,     3,
     264,   130,   131,   132,   133,   134,   135,    57,   175,   198,
     221,    14,    15,   168,   163,   199,   221,   113,    32,    33,
      34,    35,    20,   113,   219,    23,   142,   143,   144,    16,
     222,   195,    31,   164,    57,     1,   322,   145,   107,   142,
     176,     2,   169,   195,    58,    59,    60,   174,   179,   180,
     181,   182,   183,   184,    36,     3,   268,   269,   270,   271,
     272,   190,   146,    24,   275,   305,   277,    13,   280,    61,
      17,    58,    59,    60,   113,   146,  -149,   367,     4,     2,
     168,    32,    33,    34,    35,   318,   319,   142,   143,   144,
     142,   143,   144,    96,   278,   348,    61,    97,   145,   107,
     324,   145,   107,   200,   201,   202,   203,   204,  -149,   169,
      18,   170,   190,   343,   344,   345,   346,   347,   171,   208,
     113,    96,    22,   146,    28,   103,   146,    42,   142,   143,
     144,   353,    32,    33,    34,    35,    36,    65,   286,   145,
     107,   368,    30,   343,   344,   345,   346,   347,   357,   358,
     359,   360,   361,   362,   142,   143,   144,    44,   365,    43,
     174,   128,   129,    60,   146,   145,   107,   287,    36,   283,
      46,   288,   296,   287,   350,    45,   284,   352,    48,   396,
      91,    92,   142,   143,   144,    49,    61,   113,   355,   356,
     146,   390,    50,   145,   107,   142,   194,   144,   187,   188,
     195,   195,   156,   157,   158,   403,   145,   107,    68,    69,
      70,   106,   260,   261,   262,    68,    69,    70,   146,   404,
     378,   107,    77,   159,   130,   131,   132,   133,   134,   135,
      51,   146,   384,   410,   195,   108,   214,   263,    52,   389,
     109,   110,   301,   302,   303,   111,   375,   195,   231,   232,
     233,   234,    53,   106,   195,   402,   106,   174,    54,    55,
     380,   314,   409,   107,   314,    56,   107,   304,    67,    74,
     391,   393,   113,   174,    73,   174,   315,   108,    75,    79,
     108,   106,   109,   110,   113,   109,   110,   111,   106,    81,
     111,   107,    80,   202,   203,   204,   113,   113,   107,    89,
     113,   392,   113,   106,    93,   108,   106,   208,    82,   172,
     109,   110,   108,   107,    94,   111,   107,   109,   110,    95,
      98,    99,   111,   315,   100,   388,   101,   108,   104,   141,
     108,   102,   109,   110,   127,   109,   110,   111,   139,   136,
     111,   200,   201,   202,   203,   204,   364,   137,   155,   140,
     166,   177,   200,   201,   202,   203,   204,   208,   167,   193,
     205,   200,   201,   202,   203,   204,   206,   207,   208,   185,
     191,   209,   200,   201,   202,   203,   204,   208,    83,    84,
      85,    86,    87,   267,   192,   197,   211,   212,   208,   200,
     201,   202,   203,   204,    88,   306,   307,   308,   309,   310,
     336,   337,   338,   339,   340,   208,   215,   218,   225,   220,
     230,   311,   236,   238,   240,   239,   341,   327,   328,   329,
     330,   331,   332,   247,   290,   241,   242,   243,   244,   245,
     250,   253,   265,   276,   254,   259,   273,   274,   289,   281,
     285,   292,   297,   291,   293,   221,   294,   295,   312,   313,
      92,   334,   299,   335,   349,   363,   376,   325,   208,   351,
     366,   378,   387,    62,   369,   370,   371,   372,   373,   377,
     374,   385,   386,   399,   397,   354,   401,   408,   178,    19,
      78,   213,    21,   105,   326,    66,   405,   246,   323,   266,
     321,   381,   398,   400,   237,   320,     0,    90,     0,     0,
       0,     0,     0,   138
};

static const yytype_int16 yycheck[] =
{
      81,   108,   147,   139,   187,   214,   114,   192,     3,    21,
     194,    83,    84,    85,    86,    87,    88,     5,    28,   155,
      44,    50,    51,    32,    44,   159,    44,   108,    23,    24,
      25,    26,    44,   114,   168,     6,     8,     9,    10,    62,
      64,   186,     3,    63,     5,     1,    64,    19,    20,     8,
      60,     7,    61,   198,    42,    43,    44,   165,   130,   131,
     132,   133,   134,   135,    59,    21,   200,   201,   202,   203,
     204,   143,    44,    44,   208,   259,   210,    59,   212,    67,
      58,    42,    43,    44,   165,    44,    28,    59,    44,     7,
      32,    23,    24,    25,    26,    35,   281,     8,     9,    10,
       8,     9,    10,    60,   211,   314,    67,    64,    19,    20,
     293,    19,    20,    53,    54,    55,    56,    57,    60,    61,
       0,    63,   194,   307,   308,   309,   310,   311,    70,    69,
     211,    60,    60,    44,    44,    64,    44,    58,     8,     9,
      10,   325,    23,    24,    25,    26,    59,    60,   220,    19,
      20,    59,    45,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,     8,     9,    10,    61,   351,    44,
     278,    42,    43,    44,    44,    19,    20,    60,    59,    64,
      47,    64,   254,    60,   318,    63,    71,    64,    60,    59,
      45,    46,     8,     9,    10,    63,    67,   278,   334,   335,
      44,   386,    62,    19,    20,     8,     9,    10,    50,    51,
     355,   356,    42,    43,    44,    59,    19,    20,    50,    51,
      52,    10,    42,    43,    44,    50,    51,    52,    44,    17,
      18,    20,    64,    63,   306,   307,   308,   309,   310,   311,
      61,    44,   376,    59,   389,    34,    35,    67,    44,   385,
      39,    40,    42,    43,    44,    44,   363,   402,    23,    24,
      25,    26,    44,    10,   409,   401,    10,   375,    44,    44,
      17,    18,   408,    20,    18,    29,    20,    67,    62,    59,
     387,   388,   363,   391,    61,   393,    30,    34,    47,    22,
      34,    10,    39,    40,   375,    39,    40,    44,    10,     7,
      44,    20,    58,    55,    56,    57,   387,   388,    20,    59,
     391,    30,   393,    10,    44,    34,    10,    69,    61,    31,
      39,    40,    34,    20,    44,    44,    20,    39,    40,    44,
      48,    60,    44,    30,    61,    37,    59,    34,    44,    60,
      34,    58,    39,    40,    58,    39,    40,    44,    58,    62,
      44,    53,    54,    55,    56,    57,    38,    62,    58,    49,
      63,     6,    53,    54,    55,    56,    57,    69,    63,    61,
      61,    53,    54,    55,    56,    57,    67,    68,    69,    60,
      63,    72,    53,    54,    55,    56,    57,    69,    53,    54,
      55,    56,    57,    64,    63,    65,    33,    32,    69,    53,
      54,    55,    56,    57,    69,    53,    54,    55,    56,    57,
      53,    54,    55,    56,    57,    69,    41,    44,    44,    66,
      30,    69,    44,    61,    68,    59,    69,    11,    12,    13,
      14,    15,    16,    44,     7,    68,    68,    68,    68,    68,
      44,    65,    59,    61,    67,    66,    66,    66,    63,    65,
      64,    59,    64,    62,    60,    44,    61,    60,    65,    59,
      46,    58,    64,    58,    10,    33,    36,    66,    69,    65,
      68,    18,    33,    37,    68,    68,    68,    68,    68,    64,
      68,    58,    63,    20,    64,   333,    58,    58,   127,     7,
      49,   164,     9,    80,   295,    40,   403,   186,   289,   198,
     287,   375,   391,   393,   176,   284,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    96
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     7,    21,    44,    74,    75,    84,    85,   114,
     115,   116,   152,    59,    50,    51,    62,    58,     0,    85,
      44,   115,    60,     6,    44,    78,    79,    83,    44,    98,
      45,     3,    23,    24,    25,    26,    59,    76,    77,   117,
     153,   154,    58,    44,    61,    63,    47,    80,    60,    63,
      62,    61,    44,    44,    44,    44,    29,     5,    42,    43,
      44,    67,    77,    82,    94,    60,   117,    62,    50,    51,
      52,    86,    87,    61,    59,    47,    81,    64,    86,    22,
      58,     7,    61,    53,    54,    55,    56,    57,    69,    59,
     154,    45,    46,    44,    44,    44,    60,    64,    48,    60,
      61,    59,    58,    64,    44,    78,    10,    20,    34,    39,
      40,    44,    93,   105,   123,   124,   125,   126,   127,   128,
     131,   132,   133,   140,   143,   144,   145,    58,    42,    43,
      94,    94,    94,    94,    94,    94,    62,    62,    87,    58,
      49,    60,     8,     9,    10,    19,    44,    88,    89,    90,
      99,   101,   102,   105,   106,    58,    42,    43,    44,    63,
     134,   147,   150,    44,    63,   123,    63,    63,    32,    61,
      63,    70,    31,   118,   126,    28,    60,     6,    83,    94,
      94,    94,    94,    94,    94,    60,    88,    50,    51,    91,
      94,    63,    63,    61,     9,    89,   100,    65,    88,   147,
      53,    54,    55,    56,    57,    61,    67,    68,    69,    72,
     151,    33,    32,    90,    35,    41,   148,   149,    44,   147,
      66,    44,    64,   129,   130,    44,   119,   120,   121,   122,
      30,    23,    24,    25,    26,   146,    44,   145,    61,    59,
      68,    68,    68,    68,    68,    68,    99,    44,    92,    93,
      44,    96,    97,    65,    67,   107,   112,   103,   112,    66,
      42,    43,    44,    67,    95,    59,   100,    64,   147,   147,
     147,   147,   147,    66,    66,   147,    61,   147,   123,   135,
     147,    65,   150,    64,    71,    64,    94,    60,    64,    63,
       7,    62,    59,    60,    61,    60,    94,    64,   108,    64,
     104,    42,    43,    44,    67,    95,    53,    54,    55,    56,
      57,    69,    65,    59,    18,    30,   136,   139,    35,   112,
     149,   130,    64,   129,    93,    66,    97,    11,    12,    13,
      14,    15,    16,   113,    58,    58,    53,    54,    55,    56,
      57,    69,    95,    95,    95,    95,    95,    95,   150,    10,
     147,    65,    64,    95,    82,    88,    88,    95,    95,    95,
      95,    95,    95,    33,    38,    93,    68,    59,    59,    68,
      68,    68,    68,    68,    68,   123,    36,    64,    18,   109,
      17,   136,   137,   138,   147,    58,    63,    33,    37,    88,
     112,   123,    30,   123,   141,   142,    59,    64,   139,    20,
     142,    58,    88,    59,    17,   109,   110,   111,    58,    88,
      59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    74,    75,    75,    76,    76,    77,
      78,    78,    79,    80,    81,    82,    83,    84,    84,    85,
      85,    78,    86,    86,    86,    87,    87,    87,    88,    88,
      88,    89,    89,    89,    90,    90,    91,    91,    92,    92,
      93,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    96,    97,    97,    98,    98,    99,   100,   101,   101,
     101,   102,   103,   104,   105,   106,   107,   108,   108,   109,
     109,   110,   110,   111,   112,    82,    82,    82,   113,   113,
     113,   113,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   118,   118,   118,   118,   119,   120,   121,   122,   123,
     123,   123,   124,   125,   126,   126,   126,   126,   126,   126,
     127,   127,   128,   128,   129,   129,   130,   131,   131,   132,
     132,   132,   133,   134,   135,   135,   136,   137,   137,   138,
     139,   140,   105,   141,   141,   142,   143,   144,   144,   145,
     146,   146,   146,   146,    93,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   148,   148,   149,   150,   151,
     151,   151,   151,   151,   151,   152,   153,   153,   154,   154,
     154,   154
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     5,     4,     2,     1,     4,
       4,     5,     6,     3,     3,     5,     5,     2,     1,     3,
       3,     8,     3,     1,     0,     2,     2,     2,     2,     1,
       0,     2,     1,     1,     2,     4,     2,     2,     3,     1,
       1,     4,     1,     1,     1,     5,     5,     5,     5,     5,
       5,     1,     1,     1,     5,     5,     5,     5,     5,     5,
       3,     1,     1,     4,     8,     7,     3,     3,     1,     1,
       1,     3,     2,     4,    11,     3,     2,     5,     4,     8,
       0,     1,     1,     4,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     4,     3,
       7,     2,     2,     2,     2,     0,     0,     0,     0,     2,
       1,     0,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     3,     1,     1,     6,     5,     1,
       1,     1,     2,     3,     2,     2,     5,     1,     1,     4,
       2,     4,    11,     2,     1,     2,     3,     3,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     3,     1,
       1,     2,     2,     1,     2,     6,     3,     1,     2,     2,
       2,     2
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
        case 5:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre de la clase: %s  \n\n", (yyvsp[-4].texto)); }
#line 1588 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 46 "parser.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1594 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 50 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", (yyvsp[-3].texto),(yyvsp[-2].texto));
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = (yyvsp[-3].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
#line 1604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 55 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", (yyvsp[-4].texto),(yyvsp[-2].texto));
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = (yyvsp[-4].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
#line 1614 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[-2].texto);}
#line 1620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 61 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 1626 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 62 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 1632 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 63 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre del Principal: %s\n", (yyvsp[-1].texto));
			FILE* archivo= NULL;archivo = fopen("archivo2.txt","a+"); 
			char* nom = (yyvsp[-1].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);}
#line 1641 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 67 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[-1].texto); }
#line 1647 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 74 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre de la funcion: %s\n", (yyvsp[0].texto)); }
#line 1653 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 75 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre de la funcion: %s  \n", (yyvsp[0].texto)); }
#line 1659 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 76 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)= (yyvsp[-7].texto); }
#line 1665 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 81 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-1].texto));
                              if (entrada != NULL) { /* encontrada */
                                 
                              }
                              else {
                                 insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);

                              }
                            printf ("Parametro de tipo entero: %s  \n", (yyvsp[0].texto)); }
#line 1679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 90 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-1].texto));
                              if (entrada != NULL) { /* encontrada */
                                 
                              }
                              else {
                                 insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);

                              }
                            printf ("Parametro de tipo decimal: %s  \n", (yyvsp[0].texto)); }
#line 1693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 99 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-1].texto));
                              if (entrada != NULL) { /* encontrada */
                                 
                              }
                              else {
                                 insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);

                              }
                            printf ("Parametro de tipo booleano: %s  \n", (yyvsp[0].texto)); }
#line 1707 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 117 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-3].texto));
                              if (entrada != NULL) { /* encontrada */
                                 insertar_diccionario(&diccionario, (yyvsp[-3].texto), (yyvsp[0].valor_real));
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[-3].texto));

                              }
                            }
#line 1721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 130 "parser.y" /* yacc.c:1646  */
    {printf ("Creación de variable: %s \n", (yyvsp[0].texto)); insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);}
#line 1727 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 131 "parser.y" /* yacc.c:1646  */
    {printf("Asignación de valor: %d a la variable %s\n", (yyvsp[0].valor_entero),(yyvsp[-3].texto));insertar_diccionario(&diccionario, (yyvsp[-3].texto), (yyvsp[0].valor_entero));}
#line 1733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 133 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[0].valor_real); }
#line 1739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 134 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) =  (yyvsp[0].valor_entero); }
#line 1745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 135 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) { /* encontrada */
                                 (yyval.valor_entero) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_entero) = 0;
                              }
                            }
#line 1759 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 144 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) + (yyvsp[-1].valor_entero); }
#line 1765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 145 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) - (yyvsp[-1].valor_entero); }
#line 1771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 146 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) * (yyvsp[-1].valor_entero); }
#line 1777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 147 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) / (yyvsp[-1].valor_entero); }
#line 1783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 148 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = pow((yyvsp[-2].valor_entero),(yyvsp[-1].valor_entero)); }
#line 1789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 149 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[-2].valor_entero) % (int)(yyvsp[-1].valor_entero); }
#line 1795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 152 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[0].valor_real); }
#line 1801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 153 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (double) (yyvsp[0].valor_entero); }
#line 1807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 154 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) { /* encontrada */
                                 (yyval.valor_real) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_real) = 0;
                              }
                            }
#line 1821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 163 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) + (yyvsp[-1].valor_real); }
#line 1827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 164 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) - (yyvsp[-1].valor_real); }
#line 1833 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 165 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) * (yyvsp[-1].valor_real); }
#line 1839 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 166 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) / (yyvsp[-1].valor_real); }
#line 1845 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 167 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = pow((yyvsp[-2].valor_real),(yyvsp[-1].valor_real)); }
#line 1851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 168 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (int)(yyvsp[-2].valor_real) % (int)(yyvsp[-1].valor_real); }
#line 1857 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 176 "parser.y" /* yacc.c:1646  */
    {printf ("Variable %s \n", (yyvsp[0].texto)); insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);}
#line 1863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 177 "parser.y" /* yacc.c:1646  */
    {printf("Variable %s = %f \n",(yyvsp[-3].texto), (yyvsp[0].valor_real));insertar_diccionario(&diccionario, (yyvsp[-3].texto), (yyvsp[0].valor_real));}
#line 1869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)= (yyvsp[-7].texto); }
#line 1875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf ("Retorno Entero: %d  \n", (yyvsp[-1].valor_entero)); }
#line 1881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 189 "parser.y" /* yacc.c:1646  */
    {printf ("Retorno Decimal: %f  \n", (yyvsp[-1].valor_real)); }
#line 1887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 282 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro ENVIADO: %s  \n", (yyvsp[0].texto)); }
#line 1893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 321 "parser.y" /* yacc.c:1646  */
    {printf ("Variable %s \n", (yyvsp[0].texto)); insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);}
#line 1899 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 329 "parser.y" /* yacc.c:1646  */
    {printf("Variable %s = %d \n",(yyvsp[-2].texto), (yyvsp[0].valor_entero)); ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-2].texto));
                              if (entrada != NULL) { /* encontrada */
                                 insertar_diccionario(&diccionario, (yyvsp[-2].texto), (yyvsp[0].valor_entero));
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[-2].texto));

                              }
                            }
#line 1913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 339 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int) (yyvsp[0].valor_real); }
#line 1919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 340 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) =  (yyvsp[0].valor_entero); }
#line 1925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 341 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) {
                                 (yyval.valor_entero) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_entero) = 0;
                              }
                            }
#line 1939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 350 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) + (yyvsp[0].valor_entero); }
#line 1945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 351 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) - (yyvsp[0].valor_entero); }
#line 1951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 352 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) * (yyvsp[0].valor_entero); }
#line 1957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 353 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) / (yyvsp[0].valor_entero); }
#line 1963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 354 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = pow((yyvsp[-2].valor_entero),(yyvsp[0].valor_entero)); }
#line 1969 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 355 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[-2].valor_entero) % (int)(yyvsp[0].valor_entero); }
#line 1975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 356 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int) (yyvsp[-1].valor_entero); }
#line 1981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 361 "parser.y" /* yacc.c:1646  */
    {printf ("Texto a imprimir: %s  \n", (yyvsp[0].texto)); }
#line 1987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 381 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo entero: %s  \n", (yyvsp[0].texto)); }
#line 1993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 382 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo decimal: %s  \n", (yyvsp[0].texto)); }
#line 1999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 383 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo cadena: %s  \n", (yyvsp[0].texto)); }
#line 2005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 384 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo booleano: %s  \n", (yyvsp[0].texto)); }
#line 2011 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2015 "parser.tab.c" /* yacc.c:1646  */
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
#line 390 "parser.y" /* yacc.c:1906  */

int main(int argc, char** argv) {

FILE *pf3;
pf3 = fopen("errSintactico.txt","w"); 
fclose(pf3);
     if (argc>1)
	yyin=fopen(argv[1],"rt");
    else
	yyin=stdin;
    inicializar_diccionario(&diccionario);
    yyparse();
    
}

yyerror (char *s) { printf ("Error de tipo: %s\n", s);  char* nom = "ErrorSintactico"; FILE* archivo= NULL;archivo = fopen("errSintactico.txt","a+");char linea[3];sprintf(linea, "%d", 0);fputs(linea,archivo);fputs(",",archivo);char columna[3];sprintf(columna, "%d", 0);fputs(columna,archivo);fputs(",",archivo);fputs(nom,archivo);fputs(",",archivo);fclose(archivo);   }

int yywrap()  { return 1; }
