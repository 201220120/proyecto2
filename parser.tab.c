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
#define YYLAST   522

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  181
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  416

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
      63,    64,    55,    54,    60,    53,    65,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,    72,
      68,    70,    69,    67,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    71,     2,     2,     2,     2,     2,
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
       0,    37,    37,    38,    39,    45,    46,    48,    49,    50,
      51,    56,    61,    62,    63,    64,    68,    71,    72,    75,
      76,    79,    80,    81,    84,    85,    86,    87,    88,    89,
      90,    91,    93,    94,    95,    99,   101,   103,   104,   105,
     106,   107,   108,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   123,   124,   125,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   140,   142,   143,   144,   145,   148,
     151,   152,   155,   158,   159,   160,   161,   163,   173,   174,
     175,   184,   185,   186,   187,   188,   189,   190,   193,   194,
     195,   199,   202,   203,   204,   205,   206,   207,   210,   213,
     214,   215,   216,   217,   218,   222,   223,   226,   227,   229,
     230,   233,   234,   236,   237,   238,   240,   243,   245,   246,
     247,   249,   250,   251,   254,   255,   256,   259,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   275,   276,   277,
     278,   280,   281,   282,   283,   284,   285,   289,   290,   300,
     301,   303,   304,   306,   307,   310,   311,   313,   314,   316,
     317,   318,   327,   328,   329,   330,   331,   332,   334,   335,
     336,   345,   346,   347,   348,   349,   350,   353,   354,   355,
     356,   357
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
  "'('", "')'", "'.'", "'^'", "'?'", "'<'", "'>'", "'='", "'\\302'", "';'",
  "$accept", "lineas", "linea", "tipoclase", "a", "c", "nombre", "tipo",
  "tipop", "b", "nombrep", "ejecutable", "ejecucion", "esfuncion", "k",
  "m", "retentero", "retdecimal", "retcadena", "retlog", "le", "imprimir",
  "graficar", "contfuncion", "invocarfuncion", "funcioninterna",
  "parametrofuncion", "parametrovalor", "funcionexterna", "sentenciaejec",
  "siejec", "she", "shhe", "he", "ie", "ze", "wwe", "repetir", "para",
  "ly", "lz", "declararvariable2", "tipovariable2", "asigidentificador",
  "tipvariable", "asigvalor", "expresion2", "concatenar", "er",
  "comparacionejec", "comparadorejec", "esincuir", "parejecutable",
  "tipoparejec", "libreria", "funcion", "d", "cuerpo", "retornoentero",
  "retornodecimal", "contenidocuerpo", "sentencia", "mientras", "x", "y",
  "si", "sh", "shh", "h", "i", "z", "comparacion", "comparador",
  "declararvariable1", "tipovariable", "declaraciondecimal",
  "asigvalordec", "declaracionentero", "expresion", "expresionentera",
  "parametros", "tipoparametro", YY_NULLPTR
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
      44,    58,    34,    40,    41,    46,    94,    63,    60,    62,
      61,   194,    59
};
# endif

#define YYPACT_NINF -211

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-211)))

#define YYTABLE_NINF -73

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,   -33,    93,   -22,    42,   111,  -211,    -7,  -211,  -211,
    -211,   148,  -211,    63,    33,   120,   129,    56,  -211,   133,
    -211,  -211,   145,   142,   153,  -211,   181,   172,   171,  -211,
     179,   182,   201,   218,   220,   221,   242,    22,  -211,  -211,
      98,  -211,    19,  -211,   211,    87,   213,   222,   229,   202,
     255,   226,  -211,  -211,  -211,  -211,   272,   230,  -211,  -211,
    -211,   343,  -211,   233,  -211,   339,  -211,   107,   251,   253,
     259,   249,   -26,  -211,   269,   248,   257,   263,   261,    48,
     288,    33,   314,   275,    45,    45,    45,    45,    45,    45,
    -211,  -211,   276,   279,  -211,  -211,  -211,   198,   116,   294,
    -211,  -211,   308,   299,   198,   320,  -211,  -211,    41,   -28,
     314,   298,   323,   170,   262,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,     1,  -211,  -211,   365,
    -211,  -211,    45,    45,    45,    45,    45,    45,   317,  -211,
     159,    45,   326,   340,   344,  -211,   198,  -211,  -211,  -211,
    -211,  -211,   329,  -211,   198,  -211,  -211,   217,   198,  -211,
    -211,  -211,    41,  -211,   319,   373,   375,     7,   180,   367,
     377,    41,   350,   -34,   378,  -211,   394,  -211,   358,   381,
     366,   382,   371,   374,   379,   380,   383,   384,  -211,   400,
     401,  -211,   354,   386,   386,   385,   387,  -211,  -211,   198,
      54,   388,   217,   338,    41,    41,    41,    41,    41,  -211,
      41,   389,   390,   395,    41,   314,    41,   391,    41,  -211,
      67,  -211,   393,   357,    45,  -211,  -211,    68,  -211,   398,
    -211,  -211,  -211,  -211,   443,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,   396,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
     -20,  -211,   402,   403,   405,  -211,  -211,    45,  -211,   404,
    -211,   406,    82,  -211,   392,  -211,  -211,  -211,   362,   397,
    -211,   407,  -211,   131,   131,   408,   408,   408,   357,  -211,
    -211,  -211,   357,   260,  -211,   274,   386,  -211,  -211,   367,
    -211,  -211,   427,  -211,    57,  -211,   421,   400,   409,   401,
     423,   414,  -211,   415,  -211,  -211,  -211,  -211,   376,  -211,
    -211,    54,    54,    54,    54,    54,    54,  -211,  -211,    41,
     465,  -211,  -211,    41,   410,  -211,  -211,  -211,    76,  -211,
      82,  -211,  -211,  -211,  -211,  -211,  -211,  -211,    31,   198,
     198,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,   444,  -211,   313,   400,  -211,  -211,   411,
      83,    97,   412,   416,   417,   418,   419,   420,   314,   440,
     426,  -211,   460,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
     303,    41,   425,   428,  -211,   451,  -211,  -211,  -211,   203,
     198,   386,   314,   305,   110,   429,   316,   472,   305,  -211,
    -211,  -211,   436,  -211,  -211,  -211,   198,   152,   195,   437,
    -211,  -211,  -211,   198,   185,  -211
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     2,     4,    18,    19,
      20,     3,   106,     0,     0,     0,     0,     0,     1,     0,
      17,   105,     0,     0,     0,   107,     0,     0,     0,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     8,    22,
       0,   100,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,   101,   102,   104,   103,     0,     0,   140,   139,
     170,     0,     7,     0,   138,     0,    21,     0,     0,     0,
       0,     0,     0,   178,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       5,    99,     0,     0,   179,   180,   181,     0,     0,     0,
      13,    10,     0,     0,     0,     0,    98,     9,     0,     0,
      34,     0,     0,   157,     0,    41,    42,    33,    40,    43,
      44,    39,    52,    53,    54,    37,     0,    71,    38,     0,
     168,   169,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,   123,     0,   119,   114,   120,
     122,   121,     0,   177,     0,    14,    11,     0,     0,    78,
      79,    80,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       0,   147,     0,     0,     0,     0,   119,   113,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,    92,    93,     0,     0,    34,     0,     0,     0,    90,
       0,    89,     0,    77,     0,    49,    46,     0,    48,     0,
      24,    25,    26,    27,     0,    73,    74,    75,    76,    69,
      72,    70,     0,    15,   172,   171,   173,   174,   176,   175,
     157,   156,   149,   153,   150,   152,   116,     0,   128,     0,
     124,     0,     0,   110,   119,   159,   160,   161,     0,     0,
     112,     0,    87,    82,    81,    83,    84,    86,    85,    95,
      94,    97,    91,     0,    56,     0,     0,    64,    35,     0,
      36,   158,     0,    45,     0,    23,     0,     0,     0,     0,
       0,     0,   129,     0,   125,   159,   160,   161,     0,   148,
     109,     0,     0,     0,     0,     0,     0,   117,   111,     0,
       0,    57,    58,     0,     0,    88,    47,    51,     0,   155,
       0,   151,   141,   142,   143,   144,   145,   146,     0,   115,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,     0,    50,   154,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,   137,   131,   126,   163,   162,   164,   165,   167,   166,
       0,     0,     0,     0,   130,     0,    60,    59,    61,     0,
     115,     0,    34,     0,     0,     0,     0,     0,     0,    65,
      67,   127,     0,    62,    68,    66,   115,     0,   133,     0,
     134,   132,   135,   115,     0,   136
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -211,  -211,  -211,  -211,   459,   422,  -211,  -211,  -211,   160,
     368,  -211,   492,  -211,   461,  -211,  -211,  -211,  -211,  -211,
    -105,  -211,  -211,  -113,  -211,  -211,   206,   210,  -211,  -211,
    -211,  -211,  -211,   124,  -211,  -211,   109,  -211,   -82,  -211,
     108,  -211,  -211,   328,  -211,  -183,  -158,  -211,   219,  -210,
    -211,  -211,  -211,   445,  -211,   498,  -211,  -101,  -137,   309,
    -139,  -211,  -211,  -211,  -211,  -211,  -211,  -211,   104,  -211,
    -211,  -192,  -211,   346,  -211,  -211,   215,  -211,  -167,   -65,
     466,   424
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    37,    38,    25,    26,    47,    77,    63,
      27,     7,     8,     9,    39,   176,   230,   231,   232,   233,
     114,   115,   116,   117,   118,   119,   227,   228,   120,   121,
     122,   163,   284,   321,   387,   388,   322,   123,   145,   399,
     400,   125,   126,   127,   239,   128,   164,   220,   221,   165,
     214,    10,    40,    41,    11,    12,    29,   146,   147,   201,
     148,   149,   150,   260,   304,   151,   258,   302,   384,   411,
     412,   259,   338,   152,   191,   254,   255,   252,   347,    64,
      72,    73
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     124,   177,   261,   157,   203,   168,   251,   197,   287,   196,
     225,     1,   171,   223,     3,   140,   166,     2,   197,   132,
     133,   134,   135,   136,   137,    31,    13,    57,   124,   178,
     226,     3,   124,   269,    98,   167,    57,    19,    99,    23,
      16,   172,    32,    33,    34,    35,   273,   274,   275,   276,
     277,   144,   278,   199,     4,   177,   282,   202,   285,    31,
     197,   179,   264,   197,    58,    59,    60,   182,   183,   184,
     185,   186,   187,    58,    59,    60,   192,    24,    36,    32,
      33,    34,    35,   159,   160,   161,   124,   130,   131,    60,
      61,   140,   141,   142,   324,   309,   265,   266,   267,    61,
      17,   225,   143,   109,   162,   140,   141,   142,    98,   353,
     283,    18,   105,    61,   329,    36,   143,   109,   140,   141,
     142,   327,   268,    22,   305,   306,   307,   144,   292,   143,
     109,   288,   293,   124,   289,   192,   292,    68,    69,    70,
     357,   144,   372,    14,    15,   348,   349,   350,   351,   352,
     308,    71,    92,    93,   144,     2,   373,    36,    65,   291,
     140,   141,   142,   358,    28,   355,    68,    69,    70,   401,
     177,   143,   109,   370,    30,   348,   349,   350,   351,   352,
     362,   363,   364,   365,   366,   367,   206,   207,   208,    43,
     108,    42,   300,   140,   141,   142,   144,   210,   -72,   395,
     109,   124,   171,    44,   143,   109,   140,   141,   142,   189,
     190,   408,   409,   383,   110,   218,    45,   143,   109,   111,
     112,   197,   197,   389,   113,   140,   200,   142,    46,   144,
     -72,   172,    48,   173,    49,   174,   143,   109,   360,   361,
     393,    50,   144,    51,   415,    52,   132,   133,   134,   135,
     136,   137,    68,    69,    70,   197,   204,   205,   206,   207,
     208,   144,    53,   380,    54,    55,    78,   177,   197,   210,
     108,    56,   108,    67,    74,   197,    76,    80,   319,    82,
     109,    75,   109,   177,    81,   177,   124,   396,   398,   394,
     320,    83,    90,   175,   110,    94,   110,    95,   124,   111,
     112,   111,   112,    96,   113,   407,   113,    97,   101,   323,
     124,   124,   414,   108,   124,   108,   124,   100,   102,   104,
     385,   319,   103,   109,   108,   109,   108,   204,   205,   206,
     207,   208,   106,   129,   109,   397,   109,   110,   138,   110,
     210,   139,   111,   112,   111,   112,   320,   113,   110,   113,
     110,   369,   154,   111,   112,   111,   112,   155,   113,   156,
     113,   169,    32,    33,    34,    35,   204,   205,   206,   207,
     208,   180,   204,   205,   206,   207,   208,   188,   158,   210,
     209,   235,   236,   237,   238,   210,   170,   211,   212,   193,
     213,   204,   205,   206,   207,   208,    84,    85,    86,    87,
      88,   198,   272,   194,   210,   195,   215,   216,   219,    89,
     204,   205,   206,   207,   208,   311,   312,   313,   314,   315,
     224,   222,   229,   210,   234,   240,   256,   242,   316,   341,
     342,   343,   344,   345,   332,   333,   334,   335,   336,   337,
     244,   243,   346,   245,   250,   253,   263,   270,   246,   247,
     295,   310,   248,   249,   257,   262,   281,   290,   296,   279,
     280,   294,   297,   286,   298,   299,   318,    93,   301,   317,
     303,   225,   339,   340,   210,   354,   381,   368,   383,   330,
     371,   374,   356,   390,   392,   375,   376,   377,   378,   379,
     382,   391,   404,   402,   406,   413,    62,   181,   359,    20,
     328,    66,   326,   107,   386,   403,   405,   241,   325,    21,
      91,   271,   410,   217,   331,    79,     0,     0,     0,     0,
       0,     0,   153
};

static const yytype_int16 yycheck[] =
{
      82,   114,   194,   104,   162,   110,   189,   146,   218,   146,
      44,     1,    32,   171,    21,     8,    44,     7,   157,    84,
      85,    86,    87,    88,    89,     3,    59,     5,   110,    28,
      64,    21,   114,   200,    60,    63,     5,    44,    64,     6,
      62,    61,    23,    24,    25,    26,   204,   205,   206,   207,
     208,    44,   210,   154,    44,   168,   214,   158,   216,     3,
     199,    60,   199,   202,    42,    43,    44,   132,   133,   134,
     135,   136,   137,    42,    43,    44,   141,    44,    59,    23,
      24,    25,    26,    42,    43,    44,   168,    42,    43,    44,
      68,     8,     9,    10,   286,   262,    42,    43,    44,    68,
      58,    44,    19,    20,    63,     8,     9,    10,    60,   319,
     215,     0,    64,    68,   297,    59,    19,    20,     8,     9,
      10,    64,    68,    60,    42,    43,    44,    44,    60,    19,
      20,    64,    64,   215,    67,   200,    60,    50,    51,    52,
      64,    44,    59,    50,    51,   312,   313,   314,   315,   316,
      68,    64,    45,    46,    44,     7,    59,    59,    60,   224,
       8,     9,    10,   330,    44,   323,    50,    51,    52,    59,
     283,    19,    20,   356,    45,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,    55,    56,    57,    44,
      10,    58,   257,     8,     9,    10,    44,    66,    28,   391,
      20,   283,    32,    61,    19,    20,     8,     9,    10,    50,
      51,    59,    17,    18,    34,    35,    63,    19,    20,    39,
      40,   360,   361,   381,    44,     8,     9,    10,    47,    44,
      60,    61,    60,    63,    63,    65,    19,    20,   339,   340,
      37,    62,    44,    61,    59,    44,   311,   312,   313,   314,
     315,   316,    50,    51,    52,   394,    53,    54,    55,    56,
      57,    44,    44,   368,    44,    44,    64,   380,   407,    66,
      10,    29,    10,    62,    61,   414,    47,    22,    18,     7,
      20,    59,    20,   396,    58,   398,   368,   392,   393,   390,
      30,    61,    59,    31,    34,    44,    34,    44,   380,    39,
      40,    39,    40,    44,    44,   406,    44,    58,    60,    35,
     392,   393,   413,    10,   396,    10,   398,    48,    61,    58,
      17,    18,    59,    20,    10,    20,    10,    53,    54,    55,
      56,    57,    44,    58,    20,    30,    20,    34,    62,    34,
      66,    62,    39,    40,    39,    40,    30,    44,    34,    44,
      34,    38,    58,    39,    40,    39,    40,    49,    44,    60,
      44,    63,    23,    24,    25,    26,    53,    54,    55,    56,
      57,     6,    53,    54,    55,    56,    57,    60,    58,    66,
      61,    23,    24,    25,    26,    66,    63,    68,    69,    63,
      71,    53,    54,    55,    56,    57,    53,    54,    55,    56,
      57,    72,    64,    63,    66,    61,    33,    32,    41,    66,
      53,    54,    55,    56,    57,    53,    54,    55,    56,    57,
      70,    44,    44,    66,    30,    44,    72,    61,    66,    53,
      54,    55,    56,    57,    11,    12,    13,    14,    15,    16,
      69,    59,    66,    69,    44,    44,    59,    59,    69,    69,
       7,    59,    69,    69,    68,    70,    61,    64,    62,    70,
      70,    63,    60,    72,    61,    60,    59,    46,    64,    72,
      64,    44,    58,    58,    66,    10,    36,    33,    18,    70,
      69,    69,    72,    58,    33,    69,    69,    69,    69,    69,
      64,    63,    20,    64,    58,    58,    37,   129,   338,     7,
     294,    40,   292,    81,   380,   396,   398,   179,   289,    11,
      65,   202,   408,   167,   299,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     7,    21,    44,    74,    75,    84,    85,    86,
     124,   127,   128,    59,    50,    51,    62,    58,     0,    44,
      85,   128,    60,     6,    44,    78,    79,    83,    44,   129,
      45,     3,    23,    24,    25,    26,    59,    76,    77,    87,
     125,   126,    58,    44,    61,    63,    47,    80,    60,    63,
      62,    61,    44,    44,    44,    44,    29,     5,    42,    43,
      44,    68,    77,    82,   152,    60,    87,    62,    50,    51,
      52,    64,   153,   154,    61,    59,    47,    81,    64,   153,
      22,    58,     7,    61,    53,    54,    55,    56,    57,    66,
      59,   126,    45,    46,    44,    44,    44,    58,    60,    64,
      48,    60,    61,    59,    58,    64,    44,    78,    10,    20,
      34,    39,    40,    44,    93,    94,    95,    96,    97,    98,
     101,   102,   103,   110,   111,   114,   115,   116,   118,    58,
      42,    43,   152,   152,   152,   152,   152,   152,    62,    62,
       8,     9,    10,    19,    44,   111,   130,   131,   133,   134,
     135,   138,   146,   154,    58,    49,    60,   130,    58,    42,
      43,    44,    63,   104,   119,   122,    44,    63,    93,    63,
      63,    32,    61,    63,    65,    31,    88,    96,    28,    60,
       6,    83,   152,   152,   152,   152,   152,   152,    60,    50,
      51,   147,   152,    63,    63,    61,   131,   133,    72,   130,
       9,   132,   130,   119,    53,    54,    55,    56,    57,    61,
      66,    68,    69,    71,   123,    33,    32,   146,    35,    41,
     120,   121,    44,   119,    70,    44,    64,    99,   100,    44,
      89,    90,    91,    92,    30,    23,    24,    25,    26,   117,
      44,   116,    61,    59,    69,    69,    69,    69,    69,    69,
      44,   118,   150,    44,   148,   149,    72,    68,   139,   144,
     136,   144,    70,    59,   131,    42,    43,    44,    68,   151,
      59,   132,    64,   119,   119,   119,   119,   119,   119,    70,
      70,    61,   119,    93,   105,   119,    72,   122,    64,    67,
      64,   152,    60,    64,    63,     7,    62,    60,    61,    60,
     152,    64,   140,    64,   137,    42,    43,    44,    68,   151,
      59,    53,    54,    55,    56,    57,    66,    72,    59,    18,
      30,   106,   109,    35,   144,   121,   100,    64,    99,   118,
      70,   149,    11,    12,    13,    14,    15,    16,   145,    58,
      58,    53,    54,    55,    56,    57,    66,   151,   151,   151,
     151,   151,   151,   122,    10,   119,    72,    64,   151,    82,
     130,   130,   151,   151,   151,   151,   151,   151,    33,    38,
     118,    69,    59,    59,    69,    69,    69,    69,    69,    69,
      93,    36,    64,    18,   141,    17,   106,   107,   108,   119,
      58,    63,    33,    37,   130,   144,    93,    30,    93,   112,
     113,    59,    64,   109,    20,   113,    58,   130,    59,    17,
     141,   142,   143,    58,   130,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    74,    75,    75,    76,    76,    77,
      78,    78,    79,    80,    81,    82,    83,    84,    84,    85,
      85,    86,    86,    87,    88,    88,    88,    88,    89,    90,
      91,    92,    93,    93,    93,    94,    95,    96,    96,    96,
      96,    96,    96,    97,    97,    98,    98,    99,    99,   100,
     101,   101,   102,   102,   102,   103,   104,   105,   105,   106,
     107,   107,   108,   109,   110,   111,   112,   112,   113,   114,
     115,   115,   116,   117,   117,   117,   117,   118,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   120,   120,
     121,   122,   123,   123,   123,   123,   123,   123,   124,   125,
     125,   126,   126,   126,   126,   127,   127,   128,   128,    78,
      78,   129,   129,   130,   130,   130,   131,   132,   133,   133,
     133,   134,   134,   134,   135,   136,   137,   111,   138,   139,
     140,   140,   141,   141,   142,   142,   143,   144,    82,    82,
      82,   145,   145,   145,   145,   145,   145,   146,   146,   147,
     147,   148,   148,   149,   149,   150,   150,   118,   118,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   153,   153,   154,
     154,   154
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     5,     4,     2,     1,     4,
       4,     5,     6,     3,     3,     5,     5,     2,     1,     1,
       1,     4,     3,     7,     2,     2,     2,     2,     0,     0,
       0,     0,     2,     1,     0,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     3,     1,     1,
       6,     5,     1,     1,     1,     2,     3,     2,     2,     5,
       1,     1,     4,     2,     4,    11,     2,     1,     2,     3,
       3,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     3,     1,     1,     2,     2,     1,     2,     6,     3,
       1,     2,     2,     2,     2,     2,     1,     3,     3,     8,
       7,     8,     7,     2,     1,     0,     3,     3,     2,     1,
       1,     1,     1,     1,     3,     2,     4,    11,     3,     2,
       5,     4,     8,     0,     1,     1,     4,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     2,
       2,     3,     1,     1,     4,     3,     1,     1,     4,     1,
       1,     1,     5,     5,     5,     5,     5,     5,     1,     1,
       1,     5,     5,     5,     5,     5,     5,     3,     1,     2,
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
#line 1590 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 46 "parser.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 51 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", (yyvsp[-3].texto),(yyvsp[-2].texto));
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = (yyvsp[-3].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
#line 1606 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 56 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", (yyvsp[-4].texto),(yyvsp[-2].texto));
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = (yyvsp[-4].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
#line 1616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 61 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[-2].texto);}
#line 1622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 62 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 1628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 63 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 1634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 64 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre del Principal: %s\n", (yyvsp[-1].texto));
			FILE* archivo= NULL;archivo = fopen("archivo2.txt","a+"); 
			char* nom = (yyvsp[-1].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);}
#line 1643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 68 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[-1].texto); }
#line 1649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 116 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro ENVIADO: %s  \n", (yyvsp[0].texto)); }
#line 1655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 155 "parser.y" /* yacc.c:1646  */
    {printf ("Variable %s \n", (yyvsp[0].texto)); insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);}
#line 1661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf("Variable %s = %d \n",(yyvsp[-2].texto), (yyvsp[0].valor_entero)); ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-2].texto));
                              if (entrada != NULL) { /* encontrada */
                                 insertar_diccionario(&diccionario, (yyvsp[-2].texto), (yyvsp[0].valor_entero));
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[-2].texto));

                              }
                            }
#line 1675 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 173 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int) (yyvsp[0].valor_real); }
#line 1681 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 174 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) =  (yyvsp[0].valor_entero); }
#line 1687 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 175 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) {
                                 (yyval.valor_entero) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_entero) = 0;
                              }
                            }
#line 1701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 184 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) + (yyvsp[0].valor_entero); }
#line 1707 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 185 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) - (yyvsp[0].valor_entero); }
#line 1713 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) * (yyvsp[0].valor_entero); }
#line 1719 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 187 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) / (yyvsp[0].valor_entero); }
#line 1725 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 188 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = pow((yyvsp[-2].valor_entero),(yyvsp[0].valor_entero)); }
#line 1731 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 189 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[-2].valor_entero) % (int)(yyvsp[0].valor_entero); }
#line 1737 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 190 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int) (yyvsp[-1].valor_entero); }
#line 1743 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 195 "parser.y" /* yacc.c:1646  */
    {printf ("Texto a imprimir: %s  \n", (yyvsp[0].texto)); }
#line 1749 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 215 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo entero: %s  \n", (yyvsp[0].texto)); }
#line 1755 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 216 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo decimal: %s  \n", (yyvsp[0].texto)); }
#line 1761 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 217 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo cadena: %s  \n", (yyvsp[0].texto)); }
#line 1767 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 218 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo booleano: %s  \n", (yyvsp[0].texto)); }
#line 1773 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 226 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre de la funcion: %s  \n", (yyvsp[0].texto)); }
#line 1779 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 227 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre de la funcion: %s  \n", (yyvsp[0].texto)); }
#line 1785 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 229 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)= (yyvsp[-7].texto); }
#line 1791 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 233 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)= (yyvsp[-7].texto); }
#line 1797 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 240 "parser.y" /* yacc.c:1646  */
    {printf ("Retorno Entero: %d  \n", (yyvsp[-1].valor_entero)); }
#line 1803 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 243 "parser.y" /* yacc.c:1646  */
    {printf ("Retorno Decimal: %f  \n", (yyvsp[-1].valor_real)); }
#line 1809 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 290 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-3].texto));
                              if (entrada != NULL) { /* encontrada */
                                 insertar_diccionario(&diccionario, (yyvsp[-3].texto), (yyvsp[0].valor_real));
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[-3].texto));

                              }
                            }
#line 1823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 306 "parser.y" /* yacc.c:1646  */
    {printf ("Variable %s \n", (yyvsp[0].texto)); insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);}
#line 1829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 307 "parser.y" /* yacc.c:1646  */
    {printf("Variable %s = %f \n",(yyvsp[-3].texto), (yyvsp[0].valor_real));insertar_diccionario(&diccionario, (yyvsp[-3].texto), (yyvsp[0].valor_real));}
#line 1835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 313 "parser.y" /* yacc.c:1646  */
    {printf ("Variable %s \n", (yyvsp[0].texto)); insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);}
#line 1841 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 314 "parser.y" /* yacc.c:1646  */
    {printf("Variable %s = %d \n",(yyvsp[-3].texto), (yyvsp[0].valor_entero));insertar_diccionario(&diccionario, (yyvsp[-3].texto), (yyvsp[0].valor_entero));}
#line 1847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 316 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[0].valor_real); }
#line 1853 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 317 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (double) (yyvsp[0].valor_entero); }
#line 1859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 318 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) { /* encontrada */
                                 (yyval.valor_real) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_real) = 0;
                              }
                            }
#line 1873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 327 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) + (yyvsp[-1].valor_real); }
#line 1879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 328 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) - (yyvsp[-1].valor_real); }
#line 1885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 329 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) * (yyvsp[-1].valor_real); }
#line 1891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 330 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) / (yyvsp[-1].valor_real); }
#line 1897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 331 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = pow((yyvsp[-2].valor_real),(yyvsp[-1].valor_real)); }
#line 1903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 332 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (int)(yyvsp[-2].valor_real) % (int)(yyvsp[-1].valor_real); }
#line 1909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 334 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[0].valor_real); }
#line 1915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 335 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) =  (yyvsp[0].valor_entero); }
#line 1921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 336 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) { /* encontrada */
                                 (yyval.valor_entero) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_entero) = 0;
                              }
                            }
#line 1935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 345 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) + (yyvsp[-1].valor_entero); }
#line 1941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 346 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) - (yyvsp[-1].valor_entero); }
#line 1947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 347 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) * (yyvsp[-1].valor_entero); }
#line 1953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 348 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) / (yyvsp[-1].valor_entero); }
#line 1959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 349 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = pow((yyvsp[-2].valor_entero),(yyvsp[-1].valor_entero)); }
#line 1965 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 350 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[-2].valor_entero) % (int)(yyvsp[-1].valor_entero); }
#line 1971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 355 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo entero: %s  \n", (yyvsp[0].texto)); }
#line 1977 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 356 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo decimal: %s  \n", (yyvsp[0].texto)); }
#line 1983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 357 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo booleano: %s  \n", (yyvsp[0].texto)); }
#line 1989 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1993 "parser.tab.c" /* yacc.c:1646  */
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
#line 362 "parser.y" /* yacc.c:1906  */

int main(int argc, char** argv) {
FILE *pf;
pf = fopen("archivo1.txt","w"); 
fclose(pf);
FILE *pf2;
pf2 = fopen("archivo2.txt","w"); 
fclose(pf2);
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
