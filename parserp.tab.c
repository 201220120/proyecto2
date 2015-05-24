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
#line 5 "parserp.y" /* yacc.c:339  */
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

void imprimirWhile(char*tipo, char* contenido, int condicion,int aumento)
{
int condi = 0;
while(condi<condicion)
    {
    
    printf ("%s\n", contenido);
condi= condi+aumento;
    }
}

#line 163 "parserp.tab.c" /* yacc.c:339  */

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
   by #include "parserp.tab.h".  */
#ifndef YY_YY_PARSERP_TAB_H_INCLUDED
# define YY_YY_PARSERP_TAB_H_INCLUDED
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
#line 103 "parserp.y" /* yacc.c:355  */

    int    valor_entero;
    double valor_real;
    char * texto;

#line 262 "parserp.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSERP_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 277 "parserp.tab.c" /* yacc.c:358  */

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   529

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  183
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  415

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
       0,   125,   125,   126,   127,   133,   134,   135,   136,   137,
     138,   143,   148,   149,   150,   151,   155,   159,   160,   161,
     162,   163,   164,   165,   168,   169,   170,   171,   172,   173,
     174,   177,   178,   179,   180,   181,   182,   185,   188,   191,
     192,   203,   204,   205,   206,   207,   217,   218,   219,   220,
     230,   234,   235,   236,   245,   246,   247,   248,   249,   250,
     252,   253,   254,   263,   264,   265,   266,   267,   268,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   302,   303,   305,   306,   307,   308,
     311,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     325,   326,   327,   328,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   341,   342,   343,   344,   356,   357,   358,
     359,   360,   362,   372,   373,   374,   383,   384,   385,   386,
     387,   388,   389,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   402,   403,   404,   406,   407,   408,   412,   416,
     417,   418,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   433,   435,   436,   437,   438,   441,   442,   443,   444,
     445,   446,   447,   448
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
  "ejecutable", "ejecucion", "esincuir", "esprincipal", "esfuncion",
  "parejecutable", "tipoparejec", "k", "m", "rrr", "le", "contfuncion",
  "declararvariable2", "tipovariable2", "asigidentificador", "tipvariable",
  "expresion2", "invocarfuncion", "funcioninterna", "parametrofuncion",
  "parametrovalor", "funcionexterna", "imprimir", "conca", "concatenar",
  "er", "graficar", "sentenciaejec", "siejec", "she", "shhe", "he", "ie",
  "ze", "wwe", "repetir", "ly", "lz", "comparacionejec", "comparadorejec", YY_NULLPTR
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

#define YYPACT_NINF -260

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-260)))

#define YYTABLE_NINF -127

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     167,   -42,   -34,    94,   -32,   -30,    42,  -260,    47,  -260,
      77,  -260,  -260,  -260,  -260,     4,  -260,    27,     9,    28,
      44,    91,  -260,  -260,    35,  -260,    58,   106,  -260,    61,
      41,  -260,    78,   104,    76,  -260,   130,   133,   158,   168,
     172,   184,    13,  -260,   117,  -260,  -260,   218,  -260,   446,
     170,    97,   174,   177,   191,    97,   223,   190,  -260,  -260,
    -260,  -260,   186,  -260,  -260,  -260,   372,  -260,   203,  -260,
    -260,   364,  -260,  -260,  -260,  -260,  -260,  -260,   237,   169,
     228,   230,   231,   -40,  -260,   219,   222,   225,   233,    36,
     240,     9,   235,    84,    84,    84,    84,    84,    84,  -260,
    -260,   282,   236,   246,  -260,  -260,  -260,    97,   253,  -260,
    -260,   250,   252,   260,  -260,  -260,   321,   113,   273,   113,
     273,   113,   273,   113,   273,   113,   273,   113,   273,   318,
     277,  -260,  -260,   181,  -260,  -260,   181,   281,   291,  -260,
    -260,  -260,   377,   283,  -260,  -260,  -260,   382,   287,   293,
     295,   296,   300,   301,   303,   312,   313,   324,   325,   142,
      -6,   318,   290,   332,    59,  -260,  -260,   263,  -260,  -260,
     -16,  -260,  -260,  -260,  -260,  -260,  -260,  -260,  -260,  -260,
    -260,   173,    84,   333,   340,   344,   189,  -260,  -260,  -260,
     343,  -260,  -260,  -260,  -260,   241,   279,  -260,   113,   113,
     113,   113,   113,   113,  -260,   273,   273,   273,   273,   273,
     273,  -260,  -260,  -260,  -260,  -260,  -260,  -260,  -260,  -260,
    -260,  -260,  -260,  -260,  -260,   142,   346,  -260,   383,   385,
      18,   286,   214,   375,   142,   356,   280,   379,   142,   391,
    -260,   446,   396,   398,   403,  -260,   386,   387,   381,   381,
     400,   273,  -260,   405,  -260,   113,   406,   421,   355,   142,
     142,   142,   142,   142,  -260,   408,   409,   142,   415,   142,
     318,   142,   414,   142,  -260,   399,   413,   410,  -260,   417,
     399,   273,  -260,   399,   110,  -260,   416,  -260,   399,   472,
    -260,  -260,  -260,    -9,   423,  -260,   424,   426,  -260,  -260,
    -260,   273,  -260,   419,  -260,   422,   273,  -260,  -260,  -260,
     388,   388,   420,   420,   420,  -260,  -260,   399,  -260,   399,
     261,  -260,   278,   381,  -260,  -260,   214,  -260,  -260,   142,
    -260,   330,  -260,   398,   425,   403,   447,   430,  -260,   432,
    -260,  -260,   142,   482,  -260,  -260,   142,   431,  -260,  -260,
    -260,   145,  -260,   113,  -260,  -260,  -260,  -260,  -260,  -260,
    -260,    17,   181,   181,   460,  -260,   329,   398,  -260,  -260,
     427,    80,    87,   318,   461,   433,  -260,   478,  -260,   270,
     142,   441,   436,  -260,   468,  -260,  -260,  -260,   322,   181,
     381,   318,   309,   122,   437,   326,   483,   309,  -260,  -260,
    -260,   448,  -260,  -260,  -260,   181,   159,   202,   449,  -260,
    -260,  -260,   181,   163,  -260
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     2,     3,    18,
       4,    95,    97,    98,    96,     0,    19,     0,     0,     0,
       0,   105,     1,    17,     0,    94,     0,     0,   100,     0,
       0,    20,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     8,     0,   104,   102,   105,     6,     0,
       0,    33,     0,     0,     0,    33,     0,     0,   106,   107,
     109,   108,     0,    51,    52,    53,     0,     7,     0,    87,
      86,     0,   101,   127,   128,   129,   130,   131,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
     103,     0,     0,     0,    34,    35,    36,     0,     0,    13,
      10,     0,     0,     0,    99,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,    16,    31,     0,    14,    11,     0,     0,     0,    51,
      52,    53,     0,     0,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     0,     0,    45,   118,   161,   112,   115,   117,
       0,   125,   120,   143,   144,   121,   122,   119,   159,   160,
      12,     0,     0,     0,     0,     0,     0,    25,    26,    27,
       0,    30,    70,    71,    69,     0,     0,    15,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,    64,    54,    63,    56,    65,    57,    66,    59,    68,
      58,    67,   133,   134,   135,     0,   177,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,     0,     0,     0,     0,    39,     0,     0,     0,     0,
       0,     0,    24,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   182,   178,   179,     0,     0,     0,
     116,     0,     0,     0,   156,   157,     0,   153,   155,     0,
     132,     0,   146,   149,     0,   148,     0,   111,   113,     0,
     123,   126,   124,    45,    41,    44,    49,    42,    48,    38,
      37,     0,    76,     0,    72,     0,     0,    22,    23,   142,
     137,   136,   138,   139,   141,   181,   180,   140,   183,   176,
       0,   163,     0,     0,   171,   152,     0,   158,    46,     0,
     145,     0,   110,     0,     0,     0,     0,     0,    77,     0,
      73,    40,     0,     0,   164,   165,     0,     0,   154,   147,
     151,     0,    43,     0,    47,    88,    89,    90,    91,    92,
      93,     0,    28,    28,     0,   170,     0,     0,   150,    50,
       0,     0,     0,   116,     0,     0,    85,    79,    74,     0,
       0,     0,     0,    78,     0,   167,   166,   168,     0,    28,
       0,   116,     0,     0,     0,     0,     0,     0,   172,   174,
      75,     0,   169,   175,   173,    28,     0,    81,     0,    82,
      80,    83,    28,     0,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -260,  -260,  -260,  -260,   462,   418,  -260,  -260,  -260,   144,
     392,  -260,   502,  -260,  -136,  -176,   456,   407,   327,   317,
     285,  -260,  -260,  -230,  -260,   182,   -90,   -47,  -260,  -260,
    -260,  -260,  -127,  -260,  -260,  -260,   109,  -260,  -260,  -238,
    -260,  -260,   508,  -260,  -260,  -260,  -260,   450,    19,  -260,
    -260,  -152,  -166,  -260,  -260,   284,   288,  -193,  -260,  -260,
     188,   193,  -260,  -260,  -260,  -260,   194,  -260,  -260,  -260,
    -260,  -260,   146,  -260,  -260,   128,  -260,  -260,   127,  -259,
    -260
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    42,    43,    31,    32,    53,    88,    68,
      33,     8,     9,    35,   186,   187,    83,    84,   188,   189,
     190,   245,   294,   165,   297,   298,    69,    70,   191,   192,
     304,   340,   193,   194,   302,   338,   383,   410,   411,   303,
     361,    10,    11,    12,    13,    14,    44,    45,    46,   239,
     287,   167,   168,   169,   170,   171,    78,   226,   172,   173,
     284,   285,   174,   175,   276,   277,   278,   176,   177,   178,
     227,   321,   344,   386,   387,   345,   179,   398,   399,   228,
     269
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     195,   240,   166,   117,   119,   121,   123,   125,   127,   231,
     252,   305,   241,   295,   324,    29,    37,    15,    62,   252,
     107,    16,    62,   234,    17,   108,   181,   143,    21,   149,
      20,   151,   258,   153,   166,   155,    28,   157,   229,   275,
     166,   280,    22,   283,   242,   288,   118,   120,   122,   124,
     126,   128,   235,    30,     3,    63,    64,    65,   230,    63,
      64,    65,   185,    72,    26,   240,   310,   311,   312,   313,
     314,   148,    34,   150,   317,   152,   319,   154,   322,   156,
      66,   158,     2,   364,    66,   347,    27,  -126,   181,    36,
     183,   234,   246,    47,    37,   181,   107,   183,     4,   184,
     160,   113,    48,   352,   166,    51,   184,   160,   117,   119,
     121,   123,   125,   127,    38,    39,    40,    41,   320,  -126,
     235,    24,    50,   236,   185,    52,    63,    64,    65,   237,
     181,   185,   183,   275,    49,   247,   283,   375,   283,   377,
      55,   184,   160,   166,    18,    19,   378,    80,    81,    82,
      27,    66,   394,   366,   240,   139,   140,   141,   118,   120,
     122,   124,   126,   128,    54,   246,   185,   181,     1,   183,
     329,   181,     2,   183,     3,   330,    27,    71,   184,   160,
     142,   400,   184,   160,   222,   223,   224,   388,     4,   181,
     182,   183,    56,   166,    57,   252,   252,   181,   251,   183,
     184,   160,    58,   185,   247,   329,   225,   185,   184,   160,
     368,     5,    59,   240,   102,   103,    60,   252,   407,   408,
     382,   379,   414,   243,   244,   185,   371,   372,    61,   240,
     252,   240,    79,   185,   328,    85,    86,   252,    87,   395,
     397,    38,    39,    40,    41,    90,   166,    92,    91,   181,
     255,   183,   166,   393,   336,   274,   222,   223,   224,   341,
     184,   160,    99,   369,   166,   166,   101,   109,   166,   406,
     166,   159,   104,   159,   105,   106,   413,    27,   225,   342,
     159,   160,   110,   160,   114,   185,   111,   384,   342,   129,
     160,   343,   112,   116,   238,   161,   159,   161,   130,   134,
     162,   163,   162,   163,   161,   164,   160,   164,   131,   162,
     163,   133,   135,   346,   164,   144,   145,   146,   136,   159,
     161,   273,   222,   223,   224,   162,   163,   137,   159,   160,
     164,   259,   260,   261,   262,   263,   159,   180,   160,   396,
     147,   257,   196,   161,   225,   282,   160,   267,   162,   163,
     197,   204,   161,   164,   232,   211,   343,   162,   163,   392,
     161,   212,   164,   213,   214,   162,   163,   374,   215,   216,
     164,   217,   222,   223,   224,   259,   260,   261,   262,   263,
     218,   219,   259,   260,   261,   262,   263,    38,    39,    40,
      41,   267,   220,   221,   225,   350,   233,   248,   267,   259,
     260,   261,   262,   263,   249,   250,   254,   264,   259,   260,
     261,   262,   263,   265,   266,   267,   270,   271,   268,   279,
     309,   289,   281,   286,   267,    93,    94,    95,    96,    97,
     198,   199,   200,   201,   202,   205,   206,   207,   208,   209,
     291,    98,   293,   261,   262,   263,   203,   296,   301,   299,
     300,   210,   259,   260,   261,   262,   263,   267,   355,   356,
     357,   358,   359,   360,   307,   308,   306,   103,   267,    73,
      74,    75,    76,    77,   315,   316,   318,   323,   325,   332,
     331,   326,   327,   333,   337,   334,   335,   339,   362,   267,
     363,   353,   365,   373,   367,   376,   382,   380,   381,   389,
     390,   391,   401,   403,    67,   370,   405,   412,   138,   115,
      23,    89,   256,   253,   132,   272,   409,   354,    25,   351,
     348,   100,   349,   402,   404,   385,   292,     0,     0,   290
};

static const yytype_int16 yycheck[] =
{
     136,   167,   129,    93,    94,    95,    96,    97,    98,   161,
     186,   249,    28,   243,   273,     6,     3,    59,     5,   195,
      60,    63,     5,    32,    58,    65,     8,   117,    58,   119,
      62,   121,   225,   123,   161,   125,    17,   127,    44,   232,
     167,   234,     0,   236,    60,   238,    93,    94,    95,    96,
      97,    98,    61,    44,     7,    42,    43,    44,    64,    42,
      43,    44,    44,    44,    60,   231,   259,   260,   261,   262,
     263,   118,    44,   120,   267,   122,   269,   124,   271,   126,
      67,   128,     5,   342,    67,   323,    59,    28,     8,    45,
      10,    32,   182,    58,     3,     8,    60,    10,    21,    19,
      20,    65,    44,   333,   231,    64,    19,    20,   198,   199,
     200,   201,   202,   203,    23,    24,    25,    26,   270,    60,
      61,    44,    61,    64,    44,    47,    42,    43,    44,    70,
       8,    44,    10,   326,    28,   182,   329,   367,   331,    59,
      64,    19,    20,   270,    50,    51,    59,    50,    51,    52,
      59,    67,   390,   346,   320,    42,    43,    44,   205,   206,
     207,   208,   209,   210,    60,   255,    44,     8,     1,    10,
      60,     8,     5,    10,     7,    65,    59,    60,    19,    20,
      67,    59,    19,    20,    42,    43,    44,   380,    21,     8,
       9,    10,    62,   320,    61,   371,   372,     8,     9,    10,
      19,    20,    44,    44,   251,    60,    64,    44,    19,    20,
      65,    44,    44,   379,    45,    46,    44,   393,    59,    17,
      18,   373,    59,    50,    51,    44,   362,   363,    44,   395,
     406,   397,    62,    44,   281,    61,    59,   413,    47,   391,
     392,    23,    24,    25,    26,    22,   373,    61,    58,     8,
       9,    10,   379,   389,   301,    41,    42,    43,    44,   306,
      19,    20,    59,   353,   391,   392,    29,    48,   395,   405,
     397,    10,    44,    10,    44,    44,   412,    59,    64,    18,
      10,    20,    60,    20,    44,    44,    61,    17,    18,     7,
      20,    30,    59,    58,    31,    34,    10,    34,    62,    49,
      39,    40,    39,    40,    34,    44,    20,    44,    62,    39,
      40,    58,    60,    35,    44,    42,    43,    44,    58,    10,
      34,    35,    42,    43,    44,    39,    40,     6,    10,    20,
      44,    53,    54,    55,    56,    57,    10,    60,    20,    30,
      67,    62,    61,    34,    64,    65,    20,    69,    39,    40,
      59,    68,    34,    44,    64,    68,    30,    39,    40,    37,
      34,    68,    44,    68,    68,    39,    40,    38,    68,    68,
      44,    68,    42,    43,    44,    53,    54,    55,    56,    57,
      68,    68,    53,    54,    55,    56,    57,    23,    24,    25,
      26,    69,    68,    68,    64,    65,    64,    64,    69,    53,
      54,    55,    56,    57,    64,    61,    63,    61,    53,    54,
      55,    56,    57,    67,    68,    69,    33,    32,    72,    44,
      65,    30,    66,    44,    69,    53,    54,    55,    56,    57,
      53,    54,    55,    56,    57,    53,    54,    55,    56,    57,
      44,    69,    44,    55,    56,    57,    69,    44,    67,    63,
      63,    69,    53,    54,    55,    56,    57,    69,    11,    12,
      13,    14,    15,    16,    59,    59,    66,    46,    69,    23,
      24,    25,    26,    27,    66,    66,    61,    63,    65,     7,
      64,    71,    65,    60,    65,    61,    60,    65,    58,    69,
      58,    66,    10,    33,    63,    68,    18,    36,    65,    58,
      64,    33,    65,    20,    42,   361,    58,    58,   116,    91,
       8,    55,   195,   186,   107,   230,   407,   335,    10,   331,
     326,    71,   329,   395,   397,   379,   242,    -1,    -1,   241
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,     7,    21,    44,    74,    75,    84,    85,
     114,   115,   116,   117,   118,    59,    63,    58,    50,    51,
      62,    58,     0,    85,    44,   115,    60,    59,   121,     6,
      44,    78,    79,    83,    44,    86,    45,     3,    23,    24,
      25,    26,    76,    77,   119,   120,   121,    58,    44,    28,
      61,    64,    47,    80,    60,    64,    62,    61,    44,    44,
      44,    44,     5,    42,    43,    44,    67,    77,    82,    99,
     100,    60,   121,    23,    24,    25,    26,    27,   129,    62,
      50,    51,    52,    89,    90,    61,    59,    47,    81,    89,
      22,    58,    61,    53,    54,    55,    56,    57,    69,    59,
     120,    29,    45,    46,    44,    44,    44,    60,    65,    48,
      60,    61,    59,    65,    44,    78,    58,    99,   100,    99,
     100,    99,   100,    99,   100,    99,   100,    99,   100,     7,
      62,    62,    90,    58,    49,    60,    58,     6,    83,    42,
      43,    44,    67,    99,    42,    43,    44,    67,   100,    99,
     100,    99,   100,    99,   100,    99,   100,    99,   100,    10,
      20,    34,    39,    40,    44,    96,   105,   124,   125,   126,
     127,   128,   131,   132,   135,   136,   140,   141,   142,   149,
      60,     8,     9,    10,    19,    44,    87,    88,    91,    92,
      93,   101,   102,   105,   106,    87,    61,    59,    53,    54,
      55,    56,    57,    69,    68,    53,    54,    55,    56,    57,
      69,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    42,    43,    44,    64,   130,   143,   152,    44,
      64,   124,    64,    64,    32,    61,    64,    70,    31,   122,
     125,    28,    60,    50,    51,    94,    99,   100,    64,    64,
      61,     9,    88,    91,    63,     9,    92,    62,   130,    53,
      54,    55,    56,    57,    61,    67,    68,    69,    72,   153,
      33,    32,    93,    35,    41,   130,   137,   138,   139,    44,
     130,    66,    65,   130,   133,   134,    44,   123,   130,    30,
     129,    44,   128,    44,    95,    96,    44,    97,    98,    63,
      63,    67,   107,   112,   103,   112,    66,    59,    59,    65,
     130,   130,   130,   130,   130,    66,    66,   130,    61,   130,
     124,   144,   130,    63,   152,    65,    71,    65,   100,    60,
      65,    64,     7,    60,    61,    60,   100,    65,   108,    65,
     104,   100,    18,    30,   145,   148,    35,   112,   139,   134,
      65,   133,    96,    66,    98,    11,    12,    13,    14,    15,
      16,   113,    58,    58,   152,    10,   130,    63,    65,    99,
      82,    87,    87,    33,    38,    96,    68,    59,    59,   124,
      36,    65,    18,   109,    17,   145,   146,   147,   130,    58,
      64,    33,    37,    87,   112,   124,    30,   124,   150,   151,
      59,    65,   148,    20,   151,    58,    87,    59,    17,   109,
     110,   111,    58,    87,    59
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
     113,   113,   113,   113,   114,   114,   115,   115,   115,   116,
     117,   118,   118,   119,   119,   119,   120,   120,   120,   120,
     121,   122,   122,   123,   124,   124,   124,   125,   125,   125,
     125,   125,   125,   126,   127,   127,   128,   129,   129,   129,
     129,   129,    96,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     135,   135,   136,   137,   138,   138,   139,   139,   140,   141,
     141,   141,   142,   143,   144,   144,   145,   146,   146,   147,
     148,   149,   105,   150,   150,   151,   152,   152,   153,   153,
     153,   153,   153,   153
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
       1,     1,     1,     1,     2,     1,     1,     1,     1,     6,
       3,     4,     3,     3,     1,     0,     2,     2,     2,     2,
       9,     2,     0,     1,     2,     1,     0,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     4,     3,     3,     1,     1,
       6,     5,     4,     1,     3,     1,     1,     1,     4,     1,
       1,     1,     2,     3,     2,     2,     5,     1,     1,     4,
       2,     4,    11,     2,     1,     2,     3,     1,     1,     1,
       2,     2,     1,     2
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
#line 133 "parserp.y" /* yacc.c:1646  */
    {printf ("Nombre de la clase: %s  \n\n", (yyvsp[-4].texto)); }
#line 1678 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 134 "parserp.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1684 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 138 "parserp.y" /* yacc.c:1646  */
    {printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", (yyvsp[-3].texto),(yyvsp[-2].texto));
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = (yyvsp[-3].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
#line 1694 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 143 "parserp.y" /* yacc.c:1646  */
    {printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", (yyvsp[-4].texto),(yyvsp[-2].texto));
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = (yyvsp[-4].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
#line 1704 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 148 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[-2].texto);}
#line 1710 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 149 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 1716 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 150 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 1722 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 151 "parserp.y" /* yacc.c:1646  */
    {printf ("Nombre del Principal: %s\n", (yyvsp[-1].texto));
			FILE* archivo= NULL;archivo = fopen("archivo2.txt","a+"); 
			char* nom = (yyvsp[-1].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);}
#line 1731 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 155 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[-1].texto); }
#line 1737 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 161 "parserp.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1743 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 164 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)= (yyvsp[-7].texto); }
#line 1749 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 165 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)= (yyvsp[-7].texto); }
#line 1755 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 180 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Entero","Externas","Parametro de funcion", 0);agregarSimbolo ((yyvsp[0].texto), "Parametro", "Entero", "Local", "Parametro de función", 0); }
#line 1761 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 181 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Decimal","Externas","Parametro de funcion", 0);agregarSimboloDecimal ((yyvsp[0].texto), "Parametro", "Decimal", "Local", "Parametro de función", (double)0.0000); }
#line 1767 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 182 "parserp.y" /* yacc.c:1646  */
    { insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Entero","Externas","Parametro de funcion", 0);agregarSimboloCadena ((yyvsp[0].texto), "Parametro", "Booleano", "Local","Parametro de función", "true");}
#line 1773 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 192 "parserp.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-3].texto));
                              if (entrada != NULL) { /* encontrada */
				 
                                 insertar_diccionario(&diccionario, (yyvsp[-3].texto),"Variable","Entero","Local","Variable de funcion", (yyvsp[0].valor_entero));

                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[-3].texto));

                              }
                            }
#line 1789 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 207 "parserp.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada == NULL) { /* encontrada */
				 agregarSimbolo ((yyvsp[0].texto), "Variable", "Entero", "Local", "Variable de función", 0);
                                 insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Entero","Local","Variable de funcion", 0);
                              }
                              else {
                                 printf("ERROR: variable %s ya definida\n", (yyvsp[0].texto));

                              }
                            }
#line 1804 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 217 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[-3].texto),"Variable","Entero","Local","Variable de funcion", (yyvsp[0].valor_entero));agregarSimbolo ((yyvsp[-3].texto), "Variable", "Entero", "Local", "Variable de función", (yyvsp[0].valor_entero));}
#line 1810 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 220 "parserp.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada == NULL) { /* encontrada */
				agregarSimboloDecimal ((yyvsp[0].texto), "Variable", "Entero", "Local", "Variable de función", 0.0000);
                                 insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Decimal","Local","Variable de funcion", 0);
                              }
                              else {
                                 printf("ERROR: variable %s ya definida\n", (yyvsp[0].texto));

                              }
                            }
#line 1825 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 230 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[-3].texto),"Variable","Decimal","Local","Variable de funcion", (yyvsp[0].valor_real));agregarSimbolo ((yyvsp[-3].texto), "Variable", "Decimal", "Local", "Variable de función", (double)(yyvsp[0].valor_real));}
#line 1831 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 234 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[0].valor_real); }
#line 1837 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 235 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (double) (yyvsp[0].valor_entero); }
#line 1843 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 236 "parserp.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) { /* encontrada */
                                 (yyval.valor_real) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_real) = 0;
                              }
                            }
#line 1857 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 245 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) + (yyvsp[-1].valor_real); }
#line 1863 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 246 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) - (yyvsp[-1].valor_real); }
#line 1869 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 247 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) * (yyvsp[-1].valor_real); }
#line 1875 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 248 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) / (yyvsp[-1].valor_real); }
#line 1881 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 249 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = pow((yyvsp[-2].valor_real),(yyvsp[-1].valor_real)); }
#line 1887 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 250 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (int)(yyvsp[-2].valor_real) % (int)(yyvsp[-1].valor_real); }
#line 1893 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 252 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[0].valor_real); }
#line 1899 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 253 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) =  (yyvsp[0].valor_entero); }
#line 1905 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 254 "parserp.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) { /* encontrada */
                                 (yyval.valor_entero) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_entero) = 0;
                              }
                            }
#line 1919 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 263 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) + (yyvsp[-1].valor_entero); }
#line 1925 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 264 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) - (yyvsp[-1].valor_entero); }
#line 1931 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 265 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) * (yyvsp[-1].valor_entero); }
#line 1937 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 266 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) / (yyvsp[-1].valor_entero); }
#line 1943 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 267 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = pow((yyvsp[-2].valor_entero),(yyvsp[-1].valor_entero)); }
#line 1949 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 268 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[-2].valor_entero) % (int)(yyvsp[-1].valor_entero); }
#line 1955 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 308 "parserp.y" /* yacc.c:1646  */
    {/*agregar*/}
#line 1961 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 318 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Entero","Externas","Parametro de funciión", 0);}
#line 1967 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 319 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Decimal","Externas","Parametro de funciión", 0); }
#line 1973 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 320 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Cadena","Externas","Parametro de funciión", 0);}
#line 1979 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 321 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Booleana","Externas","Parametro de funciión", 0); }
#line 1985 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 344 "parserp.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada == NULL) { /* encontrada */
				
                                 insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Entero","Local","Variable de funcion",0);
                              }
                              else {
                                 printf("ERROR: variable %s ya definida\n", (yyvsp[0].texto));

                              }
                            }
#line 2000 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 362 "parserp.y" /* yacc.c:1646  */
    {ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-2].texto));
                              if (entrada != NULL) { /* encontrada */
                                 insertar_diccionario(&diccionario, (yyvsp[-2].texto),"Variable","Entero","Local","Variable de funcion", (yyvsp[0].valor_entero));
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[-2].texto));

                              }
                            }
#line 2014 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 372 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int) (yyvsp[0].valor_real); }
#line 2020 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 373 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) =  (yyvsp[0].valor_entero); }
#line 2026 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 374 "parserp.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) {
                                 (yyval.valor_entero) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_entero) = 0;
                              }
                            }
#line 2040 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 383 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) + (yyvsp[0].valor_entero); }
#line 2046 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 384 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) - (yyvsp[0].valor_entero); }
#line 2052 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 385 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) * (yyvsp[0].valor_entero); }
#line 2058 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 386 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) / (yyvsp[0].valor_entero); }
#line 2064 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 387 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = pow((yyvsp[-2].valor_entero),(yyvsp[0].valor_entero)); }
#line 2070 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 388 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[-2].valor_entero) % (int)(yyvsp[0].valor_entero); }
#line 2076 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 389 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int) (yyvsp[-1].valor_entero); }
#line 2082 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 398 "parserp.y" /* yacc.c:1646  */
    { }
#line 2088 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 403 "parserp.y" /* yacc.c:1646  */
    {printf ("Texto a imprimir: %s  \n", (yyvsp[0].texto));}
#line 2094 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 404 "parserp.y" /* yacc.c:1646  */
    {strcpy((yyval.texto),(yyvsp[-2].texto));strcat((yyval.texto),(yyvsp[0].texto)); }
#line 2100 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 406 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 2106 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 407 "parserp.y" /* yacc.c:1646  */
    {char *name = malloc(20);sprintf(name, "%s", (yyvsp[0].texto));name = replace_char(name, '\'', "");(yyval.texto)=name;}
#line 2112 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 408 "parserp.y" /* yacc.c:1646  */
    {char *name = malloc(20);sprintf(name, "% d", (yyvsp[0].valor_entero));(yyval.texto)=name;}
#line 2118 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 433 "parserp.y" /* yacc.c:1646  */
    {imprimirWhile(char* contenido, int condicion,int aumento)}
#line 2124 "parserp.tab.c" /* yacc.c:1646  */
    break;


#line 2128 "parserp.tab.c" /* yacc.c:1646  */
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
#line 452 "parserp.y" /* yacc.c:1906  */

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
	//volcar_diccionario(&diccionario);
    
}

yyerror (char *s) { printf ("Error de tipo: %s\n", s);  char* nom = "ErrorSintactico"; FILE* archivo= NULL;archivo = fopen("errSintactico.txt","a+");char linea[3];sprintf(linea, "%d", 0);fputs(linea,archivo);fputs(",",archivo);char columna[3];sprintf(columna, "%d", 0);fputs(columna,archivo);fputs(",",archivo);fputs(nom,archivo);fputs(",",archivo);fclose(archivo);   }

int yywrap()  { return 1; }
