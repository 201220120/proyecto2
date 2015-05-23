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
#include <string.h>
#include <stdlib.h>
#include "diccionario.h"
DICCIONARIO diccionario; /* variable global para el diccionario */
  extern FILE *yyin;
char *replace_char (char *str, char find, char *replace) {
    char *ret=str;
    char *wk, *s;

    wk = s = strdup(str);

    while (*s != 0) {
        if (*s == find){
            while(*replace)
                *str++ = *replace++;
            ++s;
        } else
            *str++ = *s++;
    }
    *str = '\0';
    free(wk);
    return ret;
}

void agregarSimbolo (char *nom, char* tipoSimbolo, char *tipoDato, char*ambito, char* descripcion, int valor) {
	FILE* archivo= NULL;
	archivo = fopen("archivo3.txt","a+");
	fputs(nom,archivo);
	fputs(",",archivo);
	fputs(tipoSimbolo,archivo);
	fputs(",",archivo);
	fputs(tipoDato,archivo);
	fputs(",",archivo);
	fputs(ambito,archivo);
	fputs(",",archivo);
	fputs(descripcion,archivo);
	fputs(",",archivo);

	char linea[4];
	sprintf(linea, "%d", valor);
	fputs(linea,archivo);
	fputs(",",archivo);
	fclose(archivo);  
}
void agregarSimboloDecimal (char *nom, char* tipoSimbolo, char *tipoDato, char*ambito, char* descripcion, double valor) {
	FILE* archivo= NULL;
	archivo = fopen("archivo3.txt","a+");
	fputs(nom,archivo);
	fputs(",",archivo);
	fputs(tipoSimbolo,archivo);
	fputs(",",archivo);
	fputs(tipoDato,archivo);
	fputs(",",archivo);
	fputs(ambito,archivo);
	fputs(",",archivo);
	fputs(descripcion,archivo);
	fputs(",",archivo);

	char linea[10];
	sprintf(linea, "%f", valor);
	fputs(linea,archivo);
	fputs(",",archivo);
	fclose(archivo);  
}
void agregarSimboloCadena (char *nom, char* tipoSimbolo, char *tipoDato, char*ambito, char* descripcion, char* valor) {
	FILE* archivo= NULL;
	archivo = fopen("archivo3.txt","a+");
	fputs(nom,archivo);
	fputs(",",archivo);
	fputs(tipoSimbolo,archivo);
	fputs(",",archivo);
	fputs(tipoDato,archivo);
	fputs(",",archivo);
	fputs(ambito,archivo);
	fputs(",",archivo);
	fputs(descripcion,archivo);
	fputs(",",archivo);
	fputs(valor,archivo);
	fputs(",",archivo);
	fclose(archivo);  
}

#line 152 "parser.tab.c" /* yacc.c:339  */

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
#line 92 "parser.y" /* yacc.c:355  */

    int    valor_entero;
    double valor_real;
    char * texto;

#line 251 "parser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 266 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   512

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  408

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
      64,    65,    55,    54,    60,    53,    70,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,    63,
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
       0,   114,   114,   115,   116,   122,   123,   124,   125,   126,
     127,   132,   137,   138,   139,   140,   144,   148,   149,   150,
     151,   152,   153,   154,   157,   158,   159,   160,   161,   162,
     163,   166,   167,   168,   169,   170,   171,   174,   177,   180,
     181,   191,   192,   193,   194,   195,   205,   206,   207,   208,
     218,   222,   223,   224,   233,   234,   235,   236,   237,   238,
     240,   241,   242,   251,   252,   253,   254,   255,   256,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   290,   291,   293,   294,   295,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   320,
     321,   322,   323,   333,   334,   335,   336,   338,   348,   349,
     350,   359,   360,   361,   362,   363,   364,   365,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   378,   379,   380,
     382,   383,   384,   388,   392,   393,   394,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   409,   411,   412,   413,
     414,   417,   418,   419,   420,   421,   422,   423
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
  "';'", "'('", "')'", "'='", "'<'", "'>'", "'^'", "'.'", "'?'", "'\\302'",
  "$accept", "lineas", "linea", "tipoclase", "a", "c", "nombre", "tipo",
  "tipop", "b", "nombrep", "libreria", "funcion", "d", "cuerpo",
  "contenidocuerpo", "parametros", "tipoparametro", "retornoentero",
  "retornodecimal", "declararvariable1", "tipovariable",
  "declaracionentero", "asigvalor", "declaraciondecimal", "asigvalordec",
  "expresion", "expresionentera", "sentencia", "mientras", "x", "y",
  "para", "si", "sh", "shh", "h", "i", "z", "comparacion", "comparador",
  "ejecutable", "ejecucion", "esincuir", "esfuncion", "parejecutable",
  "tipoparejec", "k", "m", "rrr", "le", "contfuncion", "declararvariable2",
  "tipovariable2", "asigidentificador", "tipvariable", "expresion2",
  "invocarfuncion", "funcioninterna", "parametrofuncion", "parametrovalor",
  "funcionexterna", "imprimir", "conca", "concatenar", "er", "graficar",
  "sentenciaejec", "siejec", "she", "shhe", "he", "ie", "ze", "wwe",
  "repetir", "ly", "lz", "comparacionejec", "comparadorejec", YY_NULLPTR
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
      44,    58,    34,    59,    40,    41,    61,    60,    62,    94,
      46,    63,   194
};
# endif

#define YYPACT_NINF -269

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-269)))

#define YYTABLE_NINF -123

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      45,    66,   -20,   -43,   -13,    38,  -269,    40,  -269,    20,
    -269,  -269,  -269,    -4,  -269,    -1,    28,    98,    94,  -269,
    -269,    32,  -269,    95,    86,    87,  -269,   111,   106,   118,
    -269,   115,   122,   134,   141,   143,   145,   167,    34,  -269,
       3,  -269,  -269,    -9,  -269,   135,   290,   138,   149,   153,
     290,   190,   158,  -269,  -269,  -269,  -269,   210,   162,  -269,
    -269,  -269,   371,  -269,   166,  -269,  -269,   413,  -269,    59,
     182,   184,   185,    48,  -269,   187,   179,   181,   194,    61,
     200,    -1,   318,   188,   113,   113,   113,   113,   113,   113,
    -269,  -269,   195,   196,  -269,  -269,  -269,   290,   202,  -269,
    -269,   203,   204,   214,  -269,  -269,   345,    35,   318,   198,
     221,   170,  -269,  -269,   193,  -269,  -269,     0,  -269,  -269,
    -269,  -269,  -269,  -269,  -269,  -269,  -269,   272,   206,   225,
     206,   225,   206,   225,   206,   225,   206,   225,   206,   225,
     226,  -269,  -269,   201,  -269,  -269,   201,  -269,  -269,  -269,
     345,   346,  -269,   258,   263,    10,   231,   330,   254,   345,
     237,     5,   267,   345,   282,  -269,   435,   270,   236,   256,
    -269,  -269,  -269,   388,   249,  -269,  -269,  -269,   393,   255,
     259,   269,   276,   277,   283,   287,   293,   295,   296,   300,
    -269,   117,   113,   257,   305,   289,   274,  -269,  -269,  -269,
     291,  -269,  -269,  -269,  -269,   280,   366,   345,   345,   345,
     345,   345,  -269,   314,   315,   345,   331,   345,   318,   345,
     327,   345,  -269,   398,   328,   324,  -269,   332,   398,   225,
    -269,  -269,    81,  -269,   340,  -269,   398,   389,  -269,  -269,
    -269,  -269,  -269,  -269,  -269,   343,  -269,   206,   206,   206,
     206,   206,   206,  -269,   225,   225,   225,   225,   225,   225,
    -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,
    -269,   362,   364,  -269,   347,   348,   349,   349,   351,   225,
    -269,   353,  -269,   206,   370,  -269,   253,   253,   361,   361,
     361,  -269,  -269,   398,  -269,   398,   286,  -269,   278,   349,
    -269,  -269,   330,  -269,  -269,   390,  -269,    51,  -269,   386,
      -3,   373,  -269,   395,   403,  -269,  -269,  -269,   225,  -269,
     399,  -269,   400,   225,  -269,  -269,   345,   456,  -269,  -269,
     345,   411,  -269,  -269,  -269,   116,   362,   409,   364,   457,
     418,  -269,   419,  -269,  -269,   445,  -269,   329,   362,  -269,
    -269,   206,  -269,  -269,  -269,  -269,  -269,  -269,  -269,    39,
     201,   201,   318,   443,   415,  -269,   414,    83,    90,   120,
     345,   423,  -269,   465,  -269,   451,  -269,  -269,  -269,   322,
     201,   421,  -269,   318,   309,   104,   349,   326,   466,   309,
    -269,  -269,  -269,   422,  -269,  -269,  -269,   430,   201,   125,
     114,   431,  -269,  -269,  -269,   201,   142,  -269
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     2,     3,    18,     4,
      95,    97,    96,     0,    19,     0,     0,     0,     0,     1,
      17,     0,    94,     0,     0,     0,    20,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,   102,   100,     0,     6,     0,    33,     0,     0,     0,
      33,     0,     0,   103,   104,   106,   105,     0,     0,    51,
      52,    53,     0,     7,     0,    87,    86,     0,    99,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       5,   101,     0,     0,    34,    35,    36,     0,     0,    13,
      10,     0,     0,     0,    98,     9,     0,     0,   112,     0,
       0,    45,   114,   156,     0,   111,   113,     0,   121,   116,
     138,   139,   117,   118,   115,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,    31,     0,    14,    11,     0,   128,   129,   130,
       0,     0,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,     0,     0,     0,     0,
      51,    52,    53,     0,     0,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,    25,    26,    27,
       0,    30,    70,    71,    69,     0,     0,     0,     0,     0,
       0,     0,   176,   172,   173,     0,     0,     0,   112,     0,
       0,     0,   151,   152,     0,   148,   150,     0,   127,     0,
     144,   141,     0,   143,     0,   108,   109,     0,   123,   124,
     125,   126,   119,   122,   120,     0,    15,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
      64,    54,    63,    56,    65,    57,    66,    59,    68,    58,
      67,     0,     0,    39,     0,     0,     0,     0,     0,     0,
      24,     0,    29,     0,     0,   137,   132,   131,   133,   134,
     136,   175,   174,   135,   177,   171,     0,   158,     0,     0,
     166,   147,     0,   153,    46,     0,   140,     0,   107,     0,
      45,    41,    44,    49,    42,    48,    38,    37,     0,    76,
       0,    72,     0,     0,    22,    23,     0,     0,   159,   160,
       0,     0,   149,   142,   146,     0,     0,     0,     0,     0,
       0,    77,     0,    73,    40,     0,   165,     0,     0,   145,
      43,     0,    47,    88,    89,    90,    91,    92,    93,     0,
      28,    28,   112,     0,     0,    50,     0,     0,     0,     0,
       0,     0,    85,    79,    74,     0,   162,   161,   163,     0,
      28,     0,    78,   112,     0,     0,     0,     0,     0,     0,
     167,   169,    75,     0,   164,   170,   168,     0,    28,     0,
      81,     0,    82,    80,    83,    28,     0,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -269,  -269,  -269,  -269,   452,   410,  -269,  -269,  -269,   133,
     367,  -269,   486,  -269,  -142,  -163,   446,   401,   299,   292,
     344,  -269,  -269,  -268,  -269,   163,   -77,   -64,  -269,  -269,
    -269,  -269,   -82,  -269,  -269,  -269,   100,  -269,  -269,  -264,
    -269,  -269,   493,  -269,  -269,  -269,   436,   464,  -269,  -269,
    -107,  -108,  -269,  -269,   338,  -269,  -123,  -269,  -269,   199,
     205,  -269,  -269,  -269,  -269,   207,  -269,  -269,  -269,  -269,
    -269,   139,  -269,  -269,   124,  -269,  -269,   123,  -219,  -269
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    38,    39,    26,    27,    48,    78,    64,
      28,     7,     8,    30,   196,   197,    73,    74,   198,   199,
     200,   273,   311,   112,   314,   315,    65,    66,   201,   202,
     321,   343,   203,   204,   319,   341,   382,   403,   404,   320,
     359,     9,    10,    11,    12,    40,    41,    42,   164,   235,
     114,   115,   116,   117,   118,   242,   151,   119,   120,   232,
     233,   121,   122,   224,   225,   226,   123,   124,   125,   152,
     297,   328,   377,   378,   329,   126,   390,   391,   153,   217
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     113,   156,   300,   312,   205,    24,   165,   128,   130,   132,
     134,   136,   138,   322,    33,    34,    35,    36,   191,    17,
     129,   131,   133,   135,   137,   139,   113,   206,   166,   159,
      15,    16,   113,   280,   223,   331,   228,    32,    19,    58,
     236,     3,   280,    25,    58,    18,     1,     2,   165,   230,
      37,   174,     2,   180,   195,   182,    23,   184,   160,   186,
     167,   188,    37,    67,    21,   179,     3,   181,   350,   183,
     231,   185,    29,   187,   113,   189,    59,    60,    61,   154,
     364,    59,    60,    61,   286,   287,   288,   289,   290,     4,
      43,   191,   293,   193,   295,   230,   298,    32,   191,   155,
     193,    62,   194,   107,    92,    93,    62,   345,    97,   194,
     107,   296,   191,    98,   193,   274,   334,    33,    34,    35,
      36,    97,   393,   194,   107,    13,   103,   195,   275,    14,
     106,   401,   381,   191,   195,   193,   113,   375,   326,    44,
     107,   305,   373,    31,   194,   107,   306,    45,   195,   374,
     191,    46,   193,    37,   108,    59,    60,    61,    47,   109,
     110,   194,   107,   392,   111,   304,    49,   271,   272,   195,
     128,   130,   132,   134,   136,   138,   305,    51,    53,   223,
      62,   349,    50,    52,   400,    54,   195,    55,   165,    56,
     129,   131,   133,   135,   137,   139,    57,    69,  -122,    75,
      77,   407,   159,   106,   280,   280,   274,   347,    76,   191,
     192,   193,    80,   107,   113,   275,    81,    82,   367,   368,
     194,   107,   280,    83,   163,    90,    94,   108,    95,    96,
    -122,   160,   109,   110,   161,    99,   280,   111,   385,   100,
     162,   106,   101,   280,   104,   195,   127,   379,   170,   171,
     172,   107,   144,   102,   339,   369,   399,   140,   141,   344,
     143,   165,   157,   406,   145,   108,   221,   175,   176,   177,
     109,   110,   146,   173,   365,   111,   387,   389,   168,   165,
     113,   165,   191,   279,   193,   158,   190,   113,   191,   283,
     193,   218,   178,   194,   107,   219,   106,   245,   227,   194,
     107,   113,   113,   229,   326,   113,   107,   113,   209,   210,
     211,   234,   237,   330,   243,   246,   327,   253,   195,   106,
     108,   276,   215,   260,   195,   109,   110,   261,   106,   107,
     111,   207,   208,   209,   210,   211,   106,   262,   107,   388,
      70,    71,    72,   108,   263,   264,   107,   215,   109,   110,
     278,   265,   108,   111,   282,   266,   327,   109,   110,   384,
     108,   267,   111,   268,   269,   109,   110,   363,   270,   277,
     111,   222,   147,   148,   149,   207,   208,   209,   210,   211,
     291,   292,   207,   208,   209,   210,   211,   147,   148,   149,
     299,   215,   294,   301,   150,   302,   308,   303,   215,   207,
     208,   209,   210,   211,   307,   309,   310,   212,   313,   150,
     316,   317,   324,   213,   214,   215,   318,   323,   216,   207,
     208,   209,   210,   211,    84,    85,    86,    87,    88,   325,
     215,   285,    93,   336,   230,   215,    33,    34,    35,    36,
      89,   247,   248,   249,   250,   251,   254,   255,   256,   257,
     258,   207,   208,   209,   210,   211,   337,   252,   238,   239,
     240,   241,   259,   338,   340,   342,   346,   215,   353,   354,
     355,   356,   357,   358,   348,   351,   360,   361,   362,   370,
     371,   380,   372,   381,   383,   386,   395,   397,   398,   405,
      63,   105,   366,    20,   169,   281,    79,   284,   142,   220,
     402,   352,    22,    91,    68,   244,   335,     0,   376,   332,
     333,   394,   396
};

static const yytype_int16 yycheck[] =
{
      82,   108,   221,   271,   146,     6,   114,    84,    85,    86,
      87,    88,    89,   277,    23,    24,    25,    26,     8,    62,
      84,    85,    86,    87,    88,    89,   108,   150,    28,    32,
      50,    51,   114,   196,   157,   299,   159,     3,     0,     5,
     163,    21,   205,    44,     5,    58,     1,     7,   156,    44,
      59,   128,     7,   130,    44,   132,    60,   134,    61,   136,
      60,   138,    59,    60,    44,   129,    21,   131,   336,   133,
      65,   135,    44,   137,   156,   139,    42,    43,    44,    44,
     348,    42,    43,    44,   207,   208,   209,   210,   211,    44,
      58,     8,   215,    10,   217,    44,   219,     3,     8,    64,
      10,    67,    19,    20,    45,    46,    67,   326,    60,    19,
      20,   218,     8,    65,    10,   192,    65,    23,    24,    25,
      26,    60,   386,    19,    20,    59,    65,    44,   192,    63,
      10,    17,    18,     8,    44,    10,   218,    17,    18,    44,
      20,    60,    59,    45,    19,    20,    65,    61,    44,    59,
       8,    64,    10,    59,    34,    42,    43,    44,    47,    39,
      40,    19,    20,    59,    44,   229,    60,    50,    51,    44,
     247,   248,   249,   250,   251,   252,    60,    62,    44,   302,
      67,    65,    64,    61,    59,    44,    44,    44,   296,    44,
     254,   255,   256,   257,   258,   259,    29,    62,    28,    61,
      47,    59,    32,    10,   367,   368,   283,   330,    59,     8,
       9,    10,    22,    20,   296,   279,    58,     7,   360,   361,
      19,    20,   385,    61,    31,    59,    44,    34,    44,    44,
      60,    61,    39,    40,    64,    48,   399,    44,   380,    60,
      70,    10,    61,   406,    44,    44,    58,   370,    42,    43,
      44,    20,    49,    59,   318,   362,   398,    62,    62,   323,
      58,   369,    64,   405,    60,    34,    35,    42,    43,    44,
      39,    40,    58,    67,   351,    44,   383,   384,     6,   387,
     362,   389,     8,     9,    10,    64,    60,   369,     8,     9,
      10,    33,    67,    19,    20,    32,    10,    61,    44,    19,
      20,   383,   384,    66,    18,   387,    20,   389,    55,    56,
      57,    44,    30,    35,    44,    59,    30,    68,    44,    10,
      34,    64,    69,    68,    44,    39,    40,    68,    10,    20,
      44,    53,    54,    55,    56,    57,    10,    68,    20,    30,
      50,    51,    52,    34,    68,    68,    20,    69,    39,    40,
      61,    68,    34,    44,    63,    68,    30,    39,    40,    37,
      34,    68,    44,    68,    68,    39,    40,    38,    68,    64,
      44,    41,    42,    43,    44,    53,    54,    55,    56,    57,
      66,    66,    53,    54,    55,    56,    57,    42,    43,    44,
      63,    69,    61,    65,    64,    71,     7,    65,    69,    53,
      54,    55,    56,    57,    64,    62,    44,    61,    44,    64,
      63,    63,    59,    67,    68,    69,    67,    66,    72,    53,
      54,    55,    56,    57,    53,    54,    55,    56,    57,    59,
      69,    65,    46,    60,    44,    69,    23,    24,    25,    26,
      69,    53,    54,    55,    56,    57,    53,    54,    55,    56,
      57,    53,    54,    55,    56,    57,    61,    69,    23,    24,
      25,    26,    69,    60,    65,    65,    10,    69,    11,    12,
      13,    14,    15,    16,    63,    66,    58,    58,    33,    36,
      65,    58,    68,    18,    33,    64,    20,    65,    58,    58,
      38,    81,   359,     7,   127,   196,    50,   205,    97,   155,
     400,   338,     9,    67,    40,   167,   307,    -1,   369,   302,
     305,   387,   389
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     7,    21,    44,    74,    75,    84,    85,   114,
     115,   116,   117,    59,    63,    50,    51,    62,    58,     0,
      85,    44,   115,    60,     6,    44,    78,    79,    83,    44,
      86,    45,     3,    23,    24,    25,    26,    59,    76,    77,
     118,   119,   120,    58,    44,    61,    64,    47,    80,    60,
      64,    62,    61,    44,    44,    44,    44,    29,     5,    42,
      43,    44,    67,    77,    82,    99,   100,    60,   120,    62,
      50,    51,    52,    89,    90,    61,    59,    47,    81,    89,
      22,    58,     7,    61,    53,    54,    55,    56,    57,    69,
      59,   119,    45,    46,    44,    44,    44,    60,    65,    48,
      60,    61,    59,    65,    44,    78,    10,    20,    34,    39,
      40,    44,    96,   105,   123,   124,   125,   126,   127,   130,
     131,   134,   135,   139,   140,   141,   148,    58,    99,   100,
      99,   100,    99,   100,    99,   100,    99,   100,    99,   100,
      62,    62,    90,    58,    49,    60,    58,    42,    43,    44,
      64,   129,   142,   151,    44,    64,   123,    64,    64,    32,
      61,    64,    70,    31,   121,   124,    28,    60,     6,    83,
      42,    43,    44,    67,    99,    42,    43,    44,    67,   100,
      99,   100,    99,   100,    99,   100,    99,   100,    99,   100,
      60,     8,     9,    10,    19,    44,    87,    88,    91,    92,
      93,   101,   102,   105,   106,    87,   129,    53,    54,    55,
      56,    57,    61,    67,    68,    69,    72,   152,    33,    32,
      93,    35,    41,   129,   136,   137,   138,    44,   129,    66,
      44,    65,   132,   133,    44,   122,   129,    30,    23,    24,
      25,    26,   128,    44,   127,    61,    59,    53,    54,    55,
      56,    57,    69,    68,    53,    54,    55,    56,    57,    69,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    50,    51,    94,    99,   100,    64,    64,    61,     9,
      88,    91,    63,     9,    92,    65,   129,   129,   129,   129,
     129,    66,    66,   129,    61,   129,   123,   143,   129,    63,
     151,    65,    71,    65,   100,    60,    65,    64,     7,    62,
      44,    95,    96,    44,    97,    98,    63,    63,    67,   107,
     112,   103,   112,    66,    59,    59,    18,    30,   144,   147,
      35,   112,   138,   133,    65,   132,    60,    61,    60,   100,
      65,   108,    65,   104,   100,   151,    10,   129,    63,    65,
      96,    66,    98,    11,    12,    13,    14,    15,    16,   113,
      58,    58,    33,    38,    96,    99,    82,    87,    87,   123,
      36,    65,    68,    59,    59,    17,   144,   145,   146,   129,
      58,    18,   109,    33,    37,    87,    64,   123,    30,   123,
     149,   150,    59,   112,   147,    20,   150,    65,    58,    87,
      59,    17,   109,   110,   111,    58,    87,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    74,    75,    75,    76,    76,    77,
      78,    78,    79,    80,    81,    82,    83,    84,    84,    84,
      85,    85,    78,    86,    87,    87,    87,    87,    87,    88,
      88,    89,    89,    89,    90,    90,    90,    91,    92,    93,
      93,    94,    94,    95,    95,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99,    99,    99,    99,    99,    99,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   101,
     101,   101,   102,   103,   104,   105,   106,   107,   108,   108,
     109,   109,   110,   110,   111,   112,    82,    82,   113,   113,
     113,   113,   113,   113,   114,   114,   115,   115,   116,   117,
     117,   118,   118,   119,   119,   119,   119,   120,   121,   122,
     123,   123,   123,   124,   124,   124,   124,   124,   124,   125,
     126,   126,   127,   128,   128,   128,   128,    96,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   130,   130,
     131,   131,   132,   132,   133,   134,   134,   135,   136,   137,
     137,   138,   138,   139,   140,   140,   140,   141,   142,   143,
     143,   144,   145,   145,   146,   147,   148,   105,   149,   149,
     150,   151,   152,   152,   152,   152,   152,   152
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     5,     4,     2,     1,     4,
       4,     5,     6,     3,     3,     5,     5,     2,     1,     2,
       3,     3,     8,     8,     2,     1,     1,     1,     0,     2,
       1,     3,     1,     0,     2,     2,     2,     3,     3,     2,
       4,     2,     2,     3,     1,     1,     4,     3,     1,     1,
       4,     1,     1,     1,     5,     5,     5,     5,     5,     5,
       1,     1,     1,     5,     5,     5,     5,     5,     5,     1,
       1,     1,     3,     2,     4,    11,     3,     2,     5,     4,
       8,     0,     1,     1,     4,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     6,     4,
       3,     3,     1,     2,     2,     2,     2,     7,     2,     1,
       2,     1,     0,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       4,     3,     3,     1,     1,     6,     5,     4,     1,     3,
       1,     1,     1,     4,     1,     1,     1,     2,     3,     2,
       2,     5,     1,     1,     4,     2,     4,    11,     2,     1,
       2,     3,     1,     1,     2,     2,     1,     2
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
#line 122 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre de la clase: %s  \n\n", (yyvsp[-4].texto)); }
#line 1657 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 123 "parser.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1663 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 127 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", (yyvsp[-3].texto),(yyvsp[-2].texto));
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = (yyvsp[-3].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
#line 1673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 132 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", (yyvsp[-4].texto),(yyvsp[-2].texto));
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = (yyvsp[-4].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
#line 1683 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 137 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[-2].texto);}
#line 1689 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 138 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 1695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 139 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 1701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 140 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre del Principal: %s\n", (yyvsp[-1].texto));
			FILE* archivo= NULL;archivo = fopen("archivo2.txt","a+"); 
			char* nom = (yyvsp[-1].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);}
#line 1710 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 144 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[-1].texto); }
#line 1716 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 150 "parser.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1722 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 153 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)= (yyvsp[-7].texto); }
#line 1728 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 154 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)= (yyvsp[-7].texto); }
#line 1734 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 169 "parser.y" /* yacc.c:1646  */
    {agregarSimbolo ((yyvsp[0].texto), "Parametro", "Entero", "Local", "Parametro de función", 0); }
#line 1740 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 170 "parser.y" /* yacc.c:1646  */
    {agregarSimboloDecimal ((yyvsp[0].texto), "Parametro", "Decimal", "Local", "Parametro de función", (double)0.0000); }
#line 1746 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 171 "parser.y" /* yacc.c:1646  */
    { agregarSimboloCadena ((yyvsp[0].texto), "Parametro", "Booleano", "Local","Parametro de función", "true");}
#line 1752 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 181 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-3].texto));
                              if (entrada != NULL) { /* encontrada */
				 
                                 insertar_diccionario(&diccionario, (yyvsp[-3].texto), (yyvsp[0].valor_entero));
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[-3].texto));

                              }
                            }
#line 1767 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 195 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada == NULL) { /* encontrada */
				 agregarSimbolo ((yyvsp[0].texto), "Variable", "Entero", "Local", "Variable de función", 0);
                                 insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);
                              }
                              else {
                                 printf("ERROR: variable %s ya definida\n", (yyvsp[0].texto));

                              }
                            }
#line 1782 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 205 "parser.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[-3].texto), (yyvsp[0].valor_entero));agregarSimbolo ((yyvsp[-3].texto), "Variable", "Entero", "Local", "Variable de función", (yyvsp[0].valor_entero));}
#line 1788 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 208 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada == NULL) { /* encontrada */
				agregarSimboloDecimal ((yyvsp[0].texto), "Variable", "Entero", "Local", "Variable de función", 0.0000);
                                 insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);
                              }
                              else {
                                 printf("ERROR: variable %s ya definida\n", (yyvsp[0].texto));

                              }
                            }
#line 1803 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 218 "parser.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[-3].texto), (yyvsp[0].valor_real));agregarSimbolo ((yyvsp[-3].texto), "Variable", "Decimal", "Local", "Variable de función", (double)(yyvsp[0].valor_real));}
#line 1809 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[0].valor_real); }
#line 1815 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 223 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (double) (yyvsp[0].valor_entero); }
#line 1821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 224 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) { /* encontrada */
                                 (yyval.valor_real) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_real) = 0;
                              }
                            }
#line 1835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 233 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) + (yyvsp[-1].valor_real); }
#line 1841 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 234 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) - (yyvsp[-1].valor_real); }
#line 1847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 235 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) * (yyvsp[-1].valor_real); }
#line 1853 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 236 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) / (yyvsp[-1].valor_real); }
#line 1859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 237 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = pow((yyvsp[-2].valor_real),(yyvsp[-1].valor_real)); }
#line 1865 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 238 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (int)(yyvsp[-2].valor_real) % (int)(yyvsp[-1].valor_real); }
#line 1871 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 240 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[0].valor_real); }
#line 1877 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 241 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) =  (yyvsp[0].valor_entero); }
#line 1883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 242 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) { /* encontrada */
                                 (yyval.valor_entero) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_entero) = 0;
                              }
                            }
#line 1897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) + (yyvsp[-1].valor_entero); }
#line 1903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) - (yyvsp[-1].valor_entero); }
#line 1909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) * (yyvsp[-1].valor_entero); }
#line 1915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) / (yyvsp[-1].valor_entero); }
#line 1921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = pow((yyvsp[-2].valor_entero),(yyvsp[-1].valor_entero)); }
#line 1927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 256 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[-2].valor_entero) % (int)(yyvsp[-1].valor_entero); }
#line 1933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 295 "parser.y" /* yacc.c:1646  */
    {/*agregar*/}
#line 1939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 301 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo entero: %s  \n", (yyvsp[0].texto));  }
#line 1945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 302 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo decimal: %s  \n", (yyvsp[0].texto)); }
#line 1951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 303 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo cadena: %s  \n", (yyvsp[0].texto));}
#line 1957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 304 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo booleano: %s  \n", (yyvsp[0].texto)); }
#line 1963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 323 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada == NULL) { /* encontrada */
				printf ("Creación de la variable: %s \n", (yyvsp[0].texto)); 
                                 insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);
                              }
                              else {
                                 printf("ERROR: variable %s ya definida\n", (yyvsp[0].texto));

                              }
                            }
#line 1978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 338 "parser.y" /* yacc.c:1646  */
    {printf("Variable %s = %d \n",(yyvsp[-2].texto), (yyvsp[0].valor_entero)); ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-2].texto));
                              if (entrada != NULL) { /* encontrada */
                                 insertar_diccionario(&diccionario, (yyvsp[-2].texto), (yyvsp[0].valor_entero));
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[-2].texto));

                              }
                            }
#line 1992 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 348 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int) (yyvsp[0].valor_real); }
#line 1998 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 349 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) =  (yyvsp[0].valor_entero); }
#line 2004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 350 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) {
                                 (yyval.valor_entero) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_entero) = 0;
                              }
                            }
#line 2018 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 359 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) + (yyvsp[0].valor_entero); }
#line 2024 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 360 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) - (yyvsp[0].valor_entero); }
#line 2030 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 361 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) * (yyvsp[0].valor_entero); }
#line 2036 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 362 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) / (yyvsp[0].valor_entero); }
#line 2042 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 363 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = pow((yyvsp[-2].valor_entero),(yyvsp[0].valor_entero)); }
#line 2048 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 364 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[-2].valor_entero) % (int)(yyvsp[0].valor_entero); }
#line 2054 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 365 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int) (yyvsp[-1].valor_entero); }
#line 2060 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 374 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro ENVIADO: %s  \n", (yyvsp[0].texto)); }
#line 2066 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 379 "parser.y" /* yacc.c:1646  */
    {printf ("Texto a imprimir: %s  \n", (yyvsp[0].texto));}
#line 2072 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 380 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.texto),(yyvsp[-2].texto));strcat((yyval.texto),(yyvsp[0].texto)); }
#line 2078 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 382 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 2084 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 383 "parser.y" /* yacc.c:1646  */
    {char *name = malloc(20);sprintf(name, "%s", (yyvsp[0].texto));name = replace_char(name, '\'', "");(yyval.texto)=name;}
#line 2090 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 384 "parser.y" /* yacc.c:1646  */
    {char *name = malloc(20);sprintf(name, "% d", (yyvsp[0].valor_entero));(yyval.texto)=name;}
#line 2096 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2100 "parser.tab.c" /* yacc.c:1646  */
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
#line 427 "parser.y" /* yacc.c:1906  */

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
