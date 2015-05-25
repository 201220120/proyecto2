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
BIBLIOTECA biblioteca; /* variable global para el diccionario */
  extern FILE *yyin;
FILE *grafica;
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

void imprimirWhile( char* contenido, int condicion,int aumento)
{
int condi = 0;
while(condi<condicion)
    {
    
    printf ("%s\n", contenido);
	condi= condi+aumento;
    }
}

#line 166 "parserp.tab.c" /* yacc.c:339  */

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
    RESERV_BOOLEANO = 307,
    imprimirimprimir = 308
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 106 "parserp.y" /* yacc.c:355  */

    int    valor_entero;
    double valor_real;
    char * texto;

#line 266 "parserp.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSERP_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 281 "parserp.tab.c" /* yacc.c:358  */

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
#define YYLAST   562

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  425

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    63,     2,     2,    58,     2,     2,
      65,    66,    56,    55,    61,    54,    71,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    62,    64,
      68,    67,    69,    72,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    70,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,    60,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    73,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   128,   128,   129,   130,   136,   137,   138,   139,   140,
     141,   146,   151,   152,   153,   154,   158,   162,   163,   164,
     165,   166,   167,   168,   171,   172,   173,   174,   175,   176,
     177,   180,   181,   182,   183,   184,   185,   188,   191,   194,
     195,   206,   207,   208,   209,   210,   220,   221,   222,   223,
     233,   237,   238,   239,   248,   249,   250,   251,   252,   253,
     255,   256,   257,   266,   267,   268,   269,   270,   271,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   305,   306,   308,   309,   310,   311,
     314,   316,   327,   338,   339,   340,   341,   342,   343,   344,
     348,   349,   350,   351,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   364,   365,   366,   367,   381,   382,   383,
     384,   385,   387,   400,   401,   402,   411,   412,   413,   414,
     415,   416,   417,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   430,   433,   434,   436,   437,   438,   442,   476,
     477,   478,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   492,   494,   495,   496,   497,   498,   499,   500,   502,
     504,   506,   507,   508,   509,   512,   513,   514,   515,   516,
     517,   518,   519
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
  "imprimirimprimir", "'-'", "'+'", "'*'", "'/'", "'%'", "'{'", "'}'",
  "','", "':'", "'\"'", "';'", "'('", "')'", "'='", "'<'", "'>'", "'^'",
  "'.'", "'?'", "'\\302'", "$accept", "lineas", "linea", "tipoclase", "a",
  "c", "nombre", "tipo", "tipop", "b", "nombrep", "libreria", "funcion",
  "d", "cuerpo", "contenidocuerpo", "parametros", "tipoparametro",
  "retornoentero", "retornodecimal", "declararvariable1", "tipovariable",
  "declaracionentero", "asigvalor", "declaraciondecimal", "asigvalordec",
  "expresion", "expresionentera", "sentencia", "mientras", "x", "y",
  "para", "si", "sh", "shh", "h", "i", "z", "comparacion", "comparador",
  "ejecutable", "ejecucion", "esincuir", "esprincipal", "esfuncion",
  "parejecutable", "tipoparejec", "k", "m", "rrr", "le", "contfuncion",
  "declararvariable2", "tipovariable2", "asigidentificador", "tipvariable",
  "expresion2", "invocarfuncion", "funcioninterna", "parametrofuncion",
  "parametrovalor", "funcionexterna", "imprimir", "conca", "concatenar",
  "er", "graficar", "sentenciaejec", "siejec", "she", "shhe", "he", "ie",
  "ze", "wwe", "ww", "re", "e", "repetir", "ly", "lz", "comparacionejec",
  "comparadorejec", YY_NULLPTR
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
     305,   306,   307,   308,    45,    43,    42,    47,    37,   123,
     125,    44,    58,    34,    59,    40,    41,    61,    60,    62,
      94,    46,    63,   194
};
# endif

#define YYPACT_NINF -265

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-265)))

#define YYTABLE_NINF -127

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     121,   -34,   -43,   178,   -39,   -32,    42,  -265,    51,  -265,
      33,  -265,  -265,  -265,  -265,    10,  -265,    21,    50,    29,
      38,    26,  -265,  -265,    45,  -265,    74,    80,  -265,    78,
      89,  -265,   119,   114,   134,  -265,   141,   153,   173,   176,
     189,   194,    17,  -265,   111,  -265,  -265,   110,  -265,   448,
     180,   294,   193,   199,   202,   294,   239,   208,  -265,  -265,
    -265,  -265,   207,  -265,  -265,  -265,   367,  -265,   212,  -265,
    -265,   163,  -265,  -265,  -265,  -265,  -265,  -265,   244,   138,
     241,   252,   262,    63,  -265,   256,   246,   247,   261,    64,
     283,    50,   274,    59,    59,    59,    59,    59,    59,  -265,
    -265,   334,   285,   286,  -265,  -265,  -265,   294,   296,  -265,
    -265,   305,   290,   304,  -265,  -265,   359,   240,   331,   240,
     331,   240,   331,   240,   331,   240,   331,   240,   331,   303,
     319,  -265,  -265,   159,  -265,  -265,   159,   320,   337,  -265,
    -265,  -265,   384,   326,  -265,  -265,  -265,   389,   327,   332,
     333,   343,   344,   357,   358,   360,   361,   364,   365,   345,
      40,   237,   338,   346,     4,  -265,  -265,   187,  -265,  -265,
      39,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,   195,    59,   349,   366,   373,   172,  -265,  -265,  -265,
     372,  -265,  -265,  -265,  -265,   186,   390,  -265,   240,   240,
     240,   240,   240,   240,  -265,   331,   331,   331,   331,   331,
     331,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,   345,   336,  -265,   422,   424,
      13,  -265,  -265,  -265,  -265,  -265,   423,   318,  -265,   335,
     413,   345,   393,   245,   417,   345,   432,  -265,   448,   419,
     433,   434,  -265,   412,   415,   414,   414,   416,   331,  -265,
     420,  -265,   240,   421,   438,   362,   345,   345,   345,   345,
     345,  -265,   418,   425,   345,   426,   345,   303,   345,   427,
     345,   345,  -265,  -265,   394,   428,   429,  -265,   430,   394,
     331,  -265,   394,    83,  -265,   435,  -265,   394,   479,  -265,
    -265,  -265,    -9,   436,  -265,   431,   437,  -265,  -265,  -265,
     331,  -265,   439,  -265,   440,   331,  -265,  -265,  -265,   260,
     260,   441,   441,   441,  -265,  -265,   394,  -265,   394,   214,
    -265,   155,   414,  -265,  -265,  -265,   335,  -265,  -265,   345,
    -265,   342,  -265,   433,   442,   434,   454,   443,  -265,   444,
    -265,  -265,   345,   477,  -265,  -265,   345,   446,  -265,  -265,
    -265,    85,  -265,   240,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,    20,   159,   159,   456,  -265,   302,   433,  -265,  -265,
     445,    79,    87,   303,   459,   447,  -265,   472,  -265,   280,
     345,   449,   450,  -265,   466,  -265,  -265,  -265,   313,   159,
     414,   303,   292,   101,   451,   295,   484,   292,  -265,  -265,
    -265,   453,  -265,  -265,  -265,   159,   133,   234,   457,  -265,
    -265,  -265,   159,   154,  -265
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
       0,   174,     0,     0,    45,   118,   161,   112,   115,   117,
       0,   125,   120,   143,   144,   121,   122,   119,   159,   160,
      12,     0,     0,     0,     0,     0,     0,    25,    26,    27,
       0,    30,    70,    71,    69,     0,     0,    15,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,    64,    54,    63,    56,    65,    57,    66,    59,    68,
      58,    67,   133,   134,   135,     0,   186,   162,     0,     0,
       0,   176,   175,   178,   171,   177,     0,     0,   173,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,     0,    39,     0,     0,     0,     0,     0,     0,    24,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   191,   187,   188,     0,     0,     0,   116,     0,     0,
       0,     0,   172,   156,   157,     0,   153,   155,     0,   132,
       0,   146,   149,     0,   148,     0,   111,   113,     0,   123,
     126,   124,    45,    41,    44,    49,    42,    48,    38,    37,
       0,    76,     0,    72,     0,     0,    22,    23,   142,   137,
     136,   138,   139,   141,   190,   189,   140,   192,   185,     0,
     163,     0,     0,   179,   180,   152,     0,   158,    46,     0,
     145,     0,   110,     0,     0,     0,     0,     0,    77,     0,
      73,    40,     0,     0,   164,   165,     0,     0,   154,   147,
     151,     0,    43,     0,    47,    88,    89,    90,    91,    92,
      93,     0,    28,    28,     0,   170,     0,     0,   150,    50,
       0,     0,     0,   116,     0,     0,    85,    79,    74,     0,
       0,     0,     0,    78,     0,   167,   166,   168,     0,    28,
       0,   116,     0,     0,     0,     0,     0,     0,   181,   183,
      75,     0,   169,   184,   182,    28,     0,    81,     0,    82,
      80,    83,    28,     0,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -265,  -265,  -265,  -265,   465,   452,  -265,  -265,  -265,   147,
     403,  -265,   512,  -265,  -136,  -181,   467,   455,   339,   328,
     291,  -265,  -265,  -158,  -265,   179,   -86,   -50,  -265,  -265,
    -265,  -265,  -127,  -265,  -265,  -265,   109,  -265,  -265,  -252,
    -265,  -265,   517,  -265,  -265,  -265,  -265,   458,    11,  -265,
    -265,  -264,  -166,  -155,  -265,   279,   282,    25,  -146,  -265,
     190,   196,  -265,   371,  -265,  -265,   197,  -265,  -144,  -265,
    -265,  -265,   145,  -265,  -265,   131,  -265,  -265,   300,  -265,
    -265,   132,  -262,  -265
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    42,    43,    31,    32,    53,    88,    68,
      33,     8,     9,    35,   186,   187,    83,    84,   188,   189,
     190,   252,   303,   165,   306,   307,    69,    70,   191,   192,
     313,   350,   193,   194,   311,   348,   393,   420,   421,   312,
     371,    10,    11,    12,    13,    14,    44,    45,    46,   246,
     296,   167,   168,   169,   170,   171,    78,   226,   172,   173,
     293,   294,   174,   175,   285,   286,   287,   176,   177,   178,
     227,   330,   354,   396,   397,   355,   236,   237,   238,   179,
     408,   409,   228,   276
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     195,   247,   166,   231,   314,   259,   232,   117,   119,   121,
     123,   125,   127,   329,   259,   233,    17,   235,   333,   334,
      37,   181,    62,   241,    20,    62,    15,    21,    28,    37,
      16,   143,  -126,   149,   166,   151,   241,   153,     2,   155,
     166,   157,    22,   118,   120,   122,   124,   126,   128,    38,
      39,    40,    41,   242,     4,    72,    29,   185,     3,    63,
      64,    65,    63,    64,    65,  -126,   242,   248,   148,   243,
     150,    26,   152,    34,   154,   244,   156,    24,   158,   231,
     357,    27,   232,    36,   229,    66,    27,   181,    66,   183,
     374,   233,   304,   235,    30,   181,   253,   183,   184,   160,
     249,    63,    64,    65,    47,   230,   184,   160,    49,   181,
     166,   183,   117,   119,   121,   123,   125,   127,    48,   389,
     184,   160,     1,   185,   107,   107,     2,    66,     3,   108,
     113,   185,   254,    38,    39,    40,    41,   405,   407,   387,
      50,   181,     4,   183,   339,   185,   339,   388,   404,   340,
     166,   378,   184,   160,    51,   118,   120,   122,   124,   126,
     128,   410,   181,   247,   183,     5,    52,   181,   182,   183,
      27,    27,    71,   184,   160,    54,   253,   185,   184,   160,
     181,   258,   183,   102,   103,   362,    38,    39,    40,    41,
     356,   184,   160,   417,   181,   262,   183,   159,   185,    55,
     259,   259,   166,   185,    56,   184,   160,   160,   254,   266,
     267,   268,   269,   270,   424,    57,   185,    58,   245,   385,
      59,   161,   259,   247,   159,   274,   162,   163,    18,    19,
     185,   164,   352,    60,   160,   259,   381,   382,    61,   247,
     338,   247,   259,    79,   353,   250,   251,   159,   161,    87,
     265,   418,   392,   162,   163,    85,   166,   160,   164,    86,
     346,    90,   166,   403,   284,   351,   289,    91,   292,    92,
     297,   161,    99,   101,   166,   166,   162,   379,   166,   416,
     166,   164,   139,   140,   141,   104,   423,   222,   223,   224,
     159,   319,   320,   321,   322,   323,   105,   394,   352,   326,
     160,   328,   159,   331,   109,   159,   106,   110,   142,   111,
     225,   291,   160,   159,   161,   160,   268,   269,   270,   162,
     163,   112,   406,   160,   164,   353,   161,   114,   159,   161,
     274,   162,   163,   116,   162,   163,   164,   161,   160,   164,
     384,   129,   162,   163,    80,    81,    82,   164,   130,   131,
     402,   135,   161,   281,   134,   133,   266,   267,   268,   269,
     270,   284,   164,   136,   292,   137,   292,   266,   267,   268,
     269,   270,   274,   144,   145,   146,   283,   222,   223,   224,
     180,   376,   196,   274,   222,   223,   224,   222,   223,   224,
     266,   267,   268,   269,   270,   204,   211,   197,   271,   147,
     225,   212,   213,   239,   272,   273,   274,   225,   360,   275,
     225,   240,   214,   215,   255,   398,   266,   267,   268,   269,
     270,    93,    94,    95,    96,    97,   216,   217,   318,   218,
     219,   256,   274,   220,   221,   257,   261,    98,   198,   199,
     200,   201,   202,   205,   206,   207,   208,   209,   266,   267,
     268,   269,   270,   264,   203,   277,   278,   288,   280,   210,
     290,   295,   298,   300,   274,   365,   366,   367,   368,   369,
     370,    73,    74,    75,    76,    77,   308,   302,   305,   309,
     316,   317,   310,   315,   103,   324,   342,   375,   327,   383,
     392,   332,   325,   344,   335,   390,   337,   343,   345,   401,
     341,   336,   372,   373,   413,   347,   349,    67,   399,   363,
     377,   274,   415,   391,   386,   400,   422,   411,   380,   138,
      23,   279,    89,   263,   364,   260,   419,    25,   301,   100,
     299,   361,   234,   358,   395,   359,   412,   282,     0,   414,
       0,     0,     0,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132
};

static const yytype_int16 yycheck[] =
{
     136,   167,   129,   161,   256,   186,   161,    93,    94,    95,
      96,    97,    98,   277,   195,   161,    59,   161,   280,   281,
       3,     8,     5,    32,    63,     5,    60,    59,    17,     3,
      64,   117,    28,   119,   161,   121,    32,   123,     5,   125,
     167,   127,     0,    93,    94,    95,    96,    97,    98,    23,
      24,    25,    26,    62,    21,    44,     6,    44,     7,    42,
      43,    44,    42,    43,    44,    61,    62,    28,   118,    65,
     120,    61,   122,    44,   124,    71,   126,    44,   128,   237,
     332,    60,   237,    45,    44,    68,    60,     8,    68,    10,
     352,   237,   250,   237,    44,     8,   182,    10,    19,    20,
      61,    42,    43,    44,    59,    65,    19,    20,    28,     8,
     237,    10,   198,   199,   200,   201,   202,   203,    44,   383,
      19,    20,     1,    44,    61,    61,     5,    68,     7,    66,
      66,    44,   182,    23,    24,    25,    26,   401,   402,    60,
      62,     8,    21,    10,    61,    44,    61,    60,   400,    66,
     277,    66,    19,    20,    65,   205,   206,   207,   208,   209,
     210,    60,     8,   329,    10,    44,    47,     8,     9,    10,
      60,    60,    61,    19,    20,    61,   262,    44,    19,    20,
       8,     9,    10,    45,    46,   343,    23,    24,    25,    26,
      35,    19,    20,    60,     8,     9,    10,    10,    44,    65,
     381,   382,   329,    44,    63,    19,    20,    20,   258,    54,
      55,    56,    57,    58,    60,    62,    44,    44,    31,   377,
      44,    34,   403,   389,    10,    70,    39,    40,    50,    51,
      44,    44,    18,    44,    20,   416,   372,   373,    44,   405,
     290,   407,   423,    63,    30,    50,    51,    10,    34,    47,
     225,    17,    18,    39,    40,    62,   383,    20,    44,    60,
     310,    22,   389,   399,   239,   315,   241,    59,   243,    62,
     245,    34,    60,    29,   401,   402,    39,   363,   405,   415,
     407,    44,    42,    43,    44,    44,   422,    42,    43,    44,
      10,   266,   267,   268,   269,   270,    44,    17,    18,   274,
      20,   276,    10,   278,    48,    10,    44,    61,    68,    62,
      65,    66,    20,    10,    34,    20,    56,    57,    58,    39,
      40,    60,    30,    20,    44,    30,    34,    44,    10,    34,
      70,    39,    40,    59,    39,    40,    44,    34,    20,    44,
      38,     7,    39,    40,    50,    51,    52,    44,    63,    63,
      37,    61,    34,    35,    49,    59,    54,    55,    56,    57,
      58,   336,    44,    59,   339,     6,   341,    54,    55,    56,
      57,    58,    70,    42,    43,    44,    41,    42,    43,    44,
      61,   356,    62,    70,    42,    43,    44,    42,    43,    44,
      54,    55,    56,    57,    58,    69,    69,    60,    62,    68,
      65,    69,    69,    65,    68,    69,    70,    65,    66,    73,
      65,    65,    69,    69,    65,   390,    54,    55,    56,    57,
      58,    54,    55,    56,    57,    58,    69,    69,    66,    69,
      69,    65,    70,    69,    69,    62,    64,    70,    54,    55,
      56,    57,    58,    54,    55,    56,    57,    58,    54,    55,
      56,    57,    58,    63,    70,    33,    32,    44,    35,    70,
      67,    44,    30,    44,    70,    11,    12,    13,    14,    15,
      16,    23,    24,    25,    26,    27,    64,    44,    44,    64,
      60,    60,    68,    67,    46,    67,     7,    10,    62,    33,
      18,    64,    67,    62,    66,    36,    66,    61,    61,    33,
      65,    72,    59,    59,    20,    66,    66,    42,    59,    67,
      64,    70,    59,    66,    69,    65,    59,    66,   371,   116,
       8,   230,    55,   195,   345,   186,   417,    10,   249,    71,
     248,   341,   161,   336,   389,   339,   405,   237,    -1,   407,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,     7,    21,    44,    75,    76,    85,    86,
     115,   116,   117,   118,   119,    60,    64,    59,    50,    51,
      63,    59,     0,    86,    44,   116,    61,    60,   122,     6,
      44,    79,    80,    84,    44,    87,    45,     3,    23,    24,
      25,    26,    77,    78,   120,   121,   122,    59,    44,    28,
      62,    65,    47,    81,    61,    65,    63,    62,    44,    44,
      44,    44,     5,    42,    43,    44,    68,    78,    83,   100,
     101,    61,   122,    23,    24,    25,    26,    27,   130,    63,
      50,    51,    52,    90,    91,    62,    60,    47,    82,    90,
      22,    59,    62,    54,    55,    56,    57,    58,    70,    60,
     121,    29,    45,    46,    44,    44,    44,    61,    66,    48,
      61,    62,    60,    66,    44,    79,    59,   100,   101,   100,
     101,   100,   101,   100,   101,   100,   101,   100,   101,     7,
      63,    63,    91,    59,    49,    61,    59,     6,    84,    42,
      43,    44,    68,   100,    42,    43,    44,    68,   101,   100,
     101,   100,   101,   100,   101,   100,   101,   100,   101,    10,
      20,    34,    39,    40,    44,    97,   106,   125,   126,   127,
     128,   129,   132,   133,   136,   137,   141,   142,   143,   153,
      61,     8,     9,    10,    19,    44,    88,    89,    92,    93,
      94,   102,   103,   106,   107,    88,    62,    60,    54,    55,
      56,    57,    58,    70,    69,    54,    55,    56,    57,    58,
      70,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    42,    43,    44,    65,   131,   144,   156,    44,
      65,    97,   127,   132,   137,   142,   150,   151,   152,    65,
      65,    32,    62,    65,    71,    31,   123,   126,    28,    61,
      50,    51,    95,   100,   101,    65,    65,    62,     9,    89,
      92,    64,     9,    93,    63,   131,    54,    55,    56,    57,
      58,    62,    68,    69,    70,    73,   157,    33,    32,    94,
      35,    35,   152,    41,   131,   138,   139,   140,    44,   131,
      67,    66,   131,   134,   135,    44,   124,   131,    30,   130,
      44,   129,    44,    96,    97,    44,    98,    99,    64,    64,
      68,   108,   113,   104,   113,    67,    60,    60,    66,   131,
     131,   131,   131,   131,    67,    67,   131,    62,   131,   125,
     145,   131,    64,   156,   156,    66,    72,    66,   101,    61,
      66,    65,     7,    61,    62,    61,   101,    66,   109,    66,
     105,   101,    18,    30,   146,   149,    35,   113,   140,   135,
      66,   134,    97,    67,    99,    11,    12,    13,    14,    15,
      16,   114,    59,    59,   156,    10,   131,    64,    66,   100,
      83,    88,    88,    33,    38,    97,    69,    60,    60,   125,
      36,    66,    18,   110,    17,   146,   147,   148,   131,    59,
      65,    33,    37,    88,   113,   125,    30,   125,   154,   155,
      60,    66,   149,    20,   155,    59,    88,    60,    17,   110,
     111,   112,    59,    88,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    75,    75,    76,    76,    77,    77,    78,
      79,    79,    80,    81,    82,    83,    84,    85,    85,    85,
      86,    86,    79,    87,    88,    88,    88,    88,    88,    89,
      89,    90,    90,    90,    91,    91,    91,    92,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   102,
     102,   102,   103,   104,   105,   106,   107,   108,   109,   109,
     110,   110,   111,   111,   112,   113,    83,    83,   114,   114,
     114,   114,   114,   114,   115,   115,   116,   116,   116,   117,
     118,   119,   119,   120,   120,   120,   121,   121,   121,   121,
     122,   123,   123,   124,   125,   125,   125,   126,   126,   126,
     126,   126,   126,   127,   128,   128,   129,   130,   130,   130,
     130,   130,    97,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     136,   136,   137,   138,   139,   139,   140,   140,   141,   142,
     142,   142,   143,   144,   145,   145,   146,   147,   147,   148,
     149,   150,   151,   151,   151,   152,   152,   152,   152,   153,
     153,   106,   154,   154,   155,   156,   156,   157,   157,   157,
     157,   157,   157
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
       2,     1,     2,     1,     0,     1,     1,     1,     1,     4,
       4,    11,     2,     1,     2,     3,     1,     1,     1,     2,
       2,     1,     2
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
#line 136 "parserp.y" /* yacc.c:1646  */
    {printf ("Nombre de la clase: %s  \n\n", (yyvsp[-4].texto)); }
#line 1697 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 137 "parserp.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1703 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 141 "parserp.y" /* yacc.c:1646  */
    {printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", (yyvsp[-3].texto),(yyvsp[-2].texto));
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = (yyvsp[-3].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
#line 1713 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 146 "parserp.y" /* yacc.c:1646  */
    {printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", (yyvsp[-4].texto),(yyvsp[-2].texto));
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = (yyvsp[-4].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
#line 1723 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 151 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[-2].texto);}
#line 1729 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 152 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 1735 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 153 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 1741 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 154 "parserp.y" /* yacc.c:1646  */
    {printf ("Nombre del Principal: %s\n", (yyvsp[-1].texto));
			FILE* archivo= NULL;archivo = fopen("archivo2.txt","a+"); 
			char* nom = (yyvsp[-1].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);}
#line 1750 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 158 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[-1].texto); }
#line 1756 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 164 "parserp.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1762 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 167 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)= (yyvsp[-7].texto); }
#line 1768 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 168 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)= (yyvsp[-7].texto); }
#line 1774 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 183 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Entero","Externas","Parametro de funcion", 0);agregarSimbolo ((yyvsp[0].texto), "Parametro", "Entero", "Local", "Parametro de función", 0); }
#line 1780 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 184 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Decimal","Externas","Parametro de funcion", 0);agregarSimboloDecimal ((yyvsp[0].texto), "Parametro", "Decimal", "Local", "Parametro de función", (double)0.0000); }
#line 1786 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 185 "parserp.y" /* yacc.c:1646  */
    { insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Entero","Externas","Parametro de funcion", 0);agregarSimboloCadena ((yyvsp[0].texto), "Parametro", "Booleano", "Local","Parametro de función", "true");}
#line 1792 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 195 "parserp.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-3].texto));
                              if (entrada != NULL) { /* encontrada */
				 
                                 insertar_diccionario(&diccionario, (yyvsp[-3].texto),"Variable","Entero","Local","Variable de funcion", (yyvsp[0].valor_entero));

                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[-3].texto));

                              }
                            }
#line 1808 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 210 "parserp.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada == NULL) { /* encontrada */
				 agregarSimbolo ((yyvsp[0].texto), "Variable", "Entero", "Local", "Variable de función", 0);
                                 insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Entero","Local","Variable de funcion", 0);
                              }
                              else {
                                 printf("ERROR: variable %s ya definida\n", (yyvsp[0].texto));

                              }
                            }
#line 1823 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 220 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[-3].texto),"Variable","Entero","Local","Variable de funcion", (yyvsp[0].valor_entero));agregarSimbolo ((yyvsp[-3].texto), "Variable", "Entero", "Local", "Variable de función", (yyvsp[0].valor_entero));}
#line 1829 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 223 "parserp.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada == NULL) { /* encontrada */
				agregarSimboloDecimal ((yyvsp[0].texto), "Variable", "Entero", "Local", "Variable de función", 0.0000);
                                 insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Decimal","Local","Variable de funcion", 0);
                              }
                              else {
                                 printf("ERROR: variable %s ya definida\n", (yyvsp[0].texto));

                              }
                            }
#line 1844 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 233 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[-3].texto),"Variable","Decimal","Local","Variable de funcion", (yyvsp[0].valor_real));agregarSimbolo ((yyvsp[-3].texto), "Variable", "Decimal", "Local", "Variable de función", (double)(yyvsp[0].valor_real));}
#line 1850 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 237 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[0].valor_real); }
#line 1856 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 238 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (double) (yyvsp[0].valor_entero); }
#line 1862 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 239 "parserp.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) { /* encontrada */
                                 (yyval.valor_real) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_real) = 0;
                              }
                            }
#line 1876 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 248 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) + (yyvsp[-1].valor_real); }
#line 1882 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 249 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) - (yyvsp[-1].valor_real); }
#line 1888 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 250 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) * (yyvsp[-1].valor_real); }
#line 1894 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 251 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) / (yyvsp[-1].valor_real); }
#line 1900 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 252 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = pow((yyvsp[-2].valor_real),(yyvsp[-1].valor_real)); }
#line 1906 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 253 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (int)(yyvsp[-2].valor_real) % (int)(yyvsp[-1].valor_real); }
#line 1912 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 255 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[0].valor_real); }
#line 1918 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 256 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) =  (yyvsp[0].valor_entero); }
#line 1924 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 257 "parserp.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) { /* encontrada */
                                 (yyval.valor_entero) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_entero) = 0;
                              }
                            }
#line 1938 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 266 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) + (yyvsp[-1].valor_entero); }
#line 1944 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 267 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) - (yyvsp[-1].valor_entero); }
#line 1950 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 268 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) * (yyvsp[-1].valor_entero); }
#line 1956 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 269 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) / (yyvsp[-1].valor_entero); }
#line 1962 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 270 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = pow((yyvsp[-2].valor_entero),(yyvsp[-1].valor_entero)); }
#line 1968 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 271 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[-2].valor_entero) % (int)(yyvsp[-1].valor_entero); }
#line 1974 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 311 "parserp.y" /* yacc.c:1646  */
    {/*agregar*/}
#line 1980 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 316 "parserp.y" /* yacc.c:1646  */
    {printf("Funciónes: %s\n", (yyvsp[-3].texto));	grafica = fopen("grafica.txt","r"); 
					char lins[2000];
					while (fscanf(grafica, "%s", lins) == 1) {
						/*no está vacio*/					        
					}		
					insertar_biblioteca(&biblioteca,(yyvsp[-3].texto),lins);	
					printf("Función: %s\n", (yyvsp[-3].texto));	
					fclose(grafica);
					grafica = fopen("grafica.txt","w");
					fclose(grafica);
					}
#line 1996 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 327 "parserp.y" /* yacc.c:1646  */
    {printf("Funciónes: %s\n", (yyvsp[-2].texto));	grafica = fopen("grafica.txt","r"); 
					char lins[2000];
					while (fscanf(grafica, "%s", lins) == 1) {
						/*no está vacio*/					        
					}		
					insertar_biblioteca(&biblioteca,(yyvsp[-2].texto),lins);	
					printf("Función: %s\n", (yyvsp[-2].texto));			
 					fclose(grafica);
					grafica = fopen("grafica.txt","w");
					fclose(grafica);
					}
#line 2012 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 341 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Entero","Externas","Parametro de funciión", 0);}
#line 2018 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 342 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Decimal","Externas","Parametro de funciión", 0); }
#line 2024 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 343 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Cadena","Externas","Parametro de funciión", 0);}
#line 2030 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 344 "parserp.y" /* yacc.c:1646  */
    {insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Booleana","Externas","Parametro de funciión", 0); }
#line 2036 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 367 "parserp.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada == NULL) { /* encontrada */
				
                                insertar_diccionario(&diccionario, (yyvsp[0].texto),"Variable","Entero","Local","Variable de funcion",0);
				grafica = fopen("grafica.txt","a+");
				char* nom = (yyvsp[0].texto);fputs("Creacion_variable_",grafica);fputs(nom,grafica);fputs(",",grafica);
				fclose(grafica);
                              }
                              else {
                                 printf("ERROR: variable %s ya definida\n", (yyvsp[0].texto));

                              }
                            }
#line 2054 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 387 "parserp.y" /* yacc.c:1646  */
    {ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-2].texto));
                              if (entrada != NULL) { /* encontrada */
                                 insertar_diccionario(&diccionario, (yyvsp[-2].texto),"Variable","Entero","Local","Variable de funcion", (yyvsp[0].valor_entero));
				grafica = fopen("grafica.txt","a+");
				char* nom = (yyvsp[-2].texto);fputs("Asignación_de_valor_para_",grafica);fputs(nom,grafica);fputs(",",grafica);
				fclose(grafica);
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[-2].texto));

                              }
                            }
#line 2071 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 400 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int) (yyvsp[0].valor_real); }
#line 2077 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 401 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) =  (yyvsp[0].valor_entero); }
#line 2083 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 402 "parserp.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) {
                                 (yyval.valor_entero) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_entero) = 0;
                              }
                            }
#line 2097 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 411 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) + (yyvsp[0].valor_entero); }
#line 2103 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 412 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) - (yyvsp[0].valor_entero); }
#line 2109 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 413 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) * (yyvsp[0].valor_entero); }
#line 2115 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 414 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) / (yyvsp[0].valor_entero); }
#line 2121 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 415 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = pow((yyvsp[-2].valor_entero),(yyvsp[0].valor_entero)); }
#line 2127 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 416 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[-2].valor_entero) % (int)(yyvsp[0].valor_entero); }
#line 2133 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 417 "parserp.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int) (yyvsp[-1].valor_entero); }
#line 2139 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 426 "parserp.y" /* yacc.c:1646  */
    { }
#line 2145 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 430 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[-1].texto);grafica = fopen("grafica.txt","a+");
				char* nom = (yyvsp[-1].texto);fputs("funcion_imprimir",grafica);fputs(",",grafica);
				fclose(grafica);}
#line 2153 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 433 "parserp.y" /* yacc.c:1646  */
    {printf ("Texto a imprimir: %s  \n", (yyvsp[0].texto));(yyval.texto)=(yyvsp[0].texto);}
#line 2159 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 434 "parserp.y" /* yacc.c:1646  */
    {strcpy((yyval.texto),(yyvsp[-2].texto));strcat((yyval.texto),(yyvsp[0].texto)); }
#line 2165 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 436 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 2171 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 437 "parserp.y" /* yacc.c:1646  */
    {char *name = malloc(20);sprintf(name, "%s", (yyvsp[0].texto));name = replace_char(name, '\'', "");(yyval.texto)=name;}
#line 2177 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 438 "parserp.y" /* yacc.c:1646  */
    {char *name = malloc(20);sprintf(name, "% d", (yyvsp[0].valor_entero));(yyval.texto)=name;}
#line 2183 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 442 "parserp.y" /* yacc.c:1646  */
    {printf("\n\t\tArchivo recivido: %s\n",(yyvsp[-1].texto));
				GRAFICA * entrada = buscar_biblioteca(&biblioteca,(yyvsp[-1].texto));
                        	if (entrada != NULL) 
				{ /* encontrada */
				    char lineas[20000];
				    char *ptrToken;
				    //printf("\n\t\tArchivo recivido: %s\n", entrada->contenido);
				    grafica = fopen("grafica.dot","w");fputs("digraph grafica {",grafica);fputs("Inicio_",grafica);fputs((yyvsp[-1].texto),grafica);fputs(" -> ",grafica);
				    	ptrToken = strtok(entrada->contenido, ",");

					while (ptrToken != NULL)
					{
					    //printf("\n\t\t%s\n", ptrToken);
					    fputs(ptrToken,grafica);
					    
					    fputs("\n ",grafica);
					    fputs(ptrToken,grafica);
					    fputs(" -> ",grafica);
					    ptrToken = strtok(NULL, ",");
					}
				    fputs("Fin }",grafica);
                                    fclose(grafica);
				    system("dot -Tpng grafica.dot -o grafica.png");
				    system("xdg-open grafica.png");
				}
                              	else 
				{
                                	 printf("\tFunción no encontrada.\n", (yyvsp[-1].texto));
				}
				
			}
#line 2219 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 481 "parserp.y" /* yacc.c:1646  */
    {grafica = fopen("grafica.txt","a+");fputs("Sentencia_Si",grafica);fputs(",",grafica);fclose(grafica);}
#line 2225 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 492 "parserp.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 2231 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 502 "parserp.y" /* yacc.c:1646  */
    {imprimirWhile( (yyvsp[-2].texto), (yyvsp[0].valor_entero),1);grafica = fopen("grafica.txt","a+");fputs("Sentencia_WHILE",grafica);fputs(",",grafica);
fclose(grafica);}
#line 2238 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 504 "parserp.y" /* yacc.c:1646  */
    {}
#line 2244 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 506 "parserp.y" /* yacc.c:1646  */
    {grafica = fopen("grafica.txt","a+");fputs("Sentencia_PARA",grafica);fputs(",",grafica);fclose(grafica);}
#line 2250 "parserp.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 513 "parserp.y" /* yacc.c:1646  */
    {(yyval.valor_entero)=(yyvsp[0].valor_entero);}
#line 2256 "parserp.tab.c" /* yacc.c:1646  */
    break;


#line 2260 "parserp.tab.c" /* yacc.c:1646  */
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
#line 523 "parserp.y" /* yacc.c:1906  */

int main(int argc, char** argv) {

FILE *pf3;
pf3 = fopen("errSintactico.txt","w"); 
fclose(pf3);
     if (argc>1)
	yyin=fopen(argv[1],"rt");
    else
	yyin=stdin;
    inicializar_diccionario(&diccionario);
    inicializar_biblioteca(&biblioteca);
    yyparse();
imprimir_biblioteca(&biblioteca);
	//volcar_diccionario(&diccionario);
    
}

yyerror (char *s) { printf ("Error de tipo: %s\n", s);  char* nom = "ErrorSintactico"; FILE* archivo= NULL;archivo = fopen("errSintactico.txt","a+");char linea[3];sprintf(linea, "%d", 0);fputs(linea,archivo);fputs(",",archivo);char columna[3];sprintf(columna, "%d", 0);fputs(columna,archivo);fputs(",",archivo);fputs(nom,archivo);fputs(",",archivo);fclose(archivo);   }

int yywrap()  { return 1; }
