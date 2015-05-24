/***************** 
  Definiciones
	Se colocan las cabeceras, variables y expresiones regulares
********************/
%{  /* Codigo C */
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
%}

/* Declaraciones de BISON */
%union {
    int    valor_entero;
    double valor_real;
    char * texto;
}
%token RESERV_ARCHIVO PRENTERO RESERV_PRINCIPAL RESERV_NOMBRE  RESERV_FUNCION RESERV_VARIABLE RESERV_RETORNAR   RESERV_SI RESERV_MENOR
RESERV_MAYOR RESERV_MAYORIGUAL RESERV_MENORIGUAL RESERV_IGUAL RESERV_DIFERENTE RESERV_SINO RESERV_SINOSI RESERV_MIENTRAS RESERV_PARA
RESERV_INCLUIR RESERV_ALIAS RESERV_ENT RESERV_DEC RESERV_LOG RESERV_STR RESERV_VAC RESERV_COMO RESERV_INICIO  RESERV_FIN RESERV_RET RESERV_CON
RESERV_ENTONCES RESERV_REPETIR RESERV_HASTA RESERV_PASO RESERV_HACER RESERV_Y RESERV_IMPRIMIR RESERV_GRAFICAR  RESERV_CADENA
%token <valor_real> CONSTANTE_REAL
%token <valor_entero> CONSTANTE_ENTERA
%token <texto> IDENTIFICADOR TIPO_ARCHIVO TIPO_PRINCIPAL RESERV_TIPO RESERV_FNM RESERV_PAL  RESERV_ENTERO RESERV_DECIMAL RESERV_BOOLEANO

%left '-' '+'
%left '*' '/' '%'

%type <valor_real> expresion 
%type <valor_entero> expresionentera expresion2
%type <texto> nombre tipo nombrep tipop c  d RESERV_CADENA concatenar er conca
%%    /* Gramatica */ 


lineas:   linea
	| libreria
	| ejecutable
	

;

/*ARCHIVO DE TIPO .OLC*/
linea:  	IDENTIFICADOR '{' tipoclase b '}'{printf ("Nombre de la clase: %s  \n\n", $1); }
		| error '}' ','  IDENTIFICADOR      {yyerrok;}
tipoclase:	tipoclase a
		|a
a:		RESERV_ARCHIVO ':' '{' c 
c:		nombre tipo '}' ','{printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", $1,$2);
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = $1;fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
		| nombrep ',' tipop '}' ','{printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", $1,$3);
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = $1;fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
nombre:		RESERV_NOMBRE ':' '"' TIPO_ARCHIVO '"' ','{$$=$4;}
tipo:		RESERV_TIPO ':' RESERV_FNM{$$=$3;}
tipop:		RESERV_TIPO ':' RESERV_PAL{$$=$3;}
b:		RESERV_PRINCIPAL ':' '{' nombrep '}'{printf ("Nombre del Principal: %s\n", $4);
			FILE* archivo= NULL;archivo = fopen("archivo2.txt","a+"); 
			char* nom = $4;fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);}
nombrep:	RESERV_NOMBRE ':' '"' TIPO_PRINCIPAL '"'{$$=$4; }
;

/*ARCHIVO DE TIPO LIBRERIA .FNM*/
libreria: libreria funcion
	| funcion
	| error ';'{yyerrok;}
funcion: 	RESERV_FUNCION RESERV_ENTERO c
		| RESERV_FUNCION RESERV_DECIMAL d
c:		IDENTIFICADOR '(' parametros ')' '{' cuerpo  retornoentero '}'{$$= $1; }
d:		IDENTIFICADOR '(' parametros ')' '{' cuerpo  retornodecimal '}'{$$= $1; }
;

cuerpo:		cuerpo  contenidocuerpo
		| contenidocuerpo
		| retornoentero
		| retornodecimal
		| /* cadena vacia*/
contenidocuerpo: declararvariable1 ';'
		| sentencia
;

parametros:	parametros ',' tipoparametro
		| tipoparametro
		| /* cadena vacia*/
tipoparametro:	RESERV_ENTERO IDENTIFICADOR {insertar_diccionario(&diccionario, $2,"Variable","Entero","Externas","Parametro de funcion", 0);agregarSimbolo ($2, "Parametro", "Entero", "Local", "Parametro de función", 0); }
		|  RESERV_DECIMAL IDENTIFICADOR {insertar_diccionario(&diccionario, $2,"Variable","Decimal","Externas","Parametro de funcion", 0);agregarSimboloDecimal ($2, "Parametro", "Decimal", "Local", "Parametro de función", (double)0.0000); }
		|  RESERV_BOOLEANO IDENTIFICADOR { insertar_diccionario(&diccionario, $2,"Variable","Entero","Externas","Parametro de funcion", 0);agregarSimboloCadena ($2, "Parametro", "Booleano", "Local","Parametro de función", "true");}
;

retornoentero:	RESERV_RETORNAR expresionentera ';'
;

retornodecimal:	RESERV_RETORNAR expresion ';'
;

declararvariable1: RESERV_VARIABLE tipovariable
		| IDENTIFICADOR ':' '=' expresionentera { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada != NULL) { /* encontrada */
				 
                                 insertar_diccionario(&diccionario, $1,"Variable","Entero","Local","Variable de funcion", $4);

                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", $1);

                              }
                            }
tipovariable:	RESERV_ENTERO declaracionentero
		| RESERV_DECIMAL declaraciondecimal
declaracionentero:	declaracionentero ',' asigvalor
		|	asigvalor
asigvalor:	IDENTIFICADOR { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada == NULL) { /* encontrada */
				 agregarSimbolo ($1, "Variable", "Entero", "Local", "Variable de función", 0);
                                 insertar_diccionario(&diccionario, $1,"Variable","Entero","Local","Variable de funcion", 0);
                              }
                              else {
                                 printf("ERROR: variable %s ya definida\n", $1);

                              }
                            }
		| IDENTIFICADOR ':' '=' expresionentera {insertar_diccionario(&diccionario, $1,"Variable","Entero","Local","Variable de funcion", $4);agregarSimbolo ($1, "Variable", "Entero", "Local", "Variable de función", $4);}
declaraciondecimal:	declaraciondecimal ',' asigvalordec
		|	asigvalordec
asigvalordec:	IDENTIFICADOR { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada == NULL) { /* encontrada */
				agregarSimboloDecimal ($1, "Variable", "Entero", "Local", "Variable de función", 0.0000);
                                 insertar_diccionario(&diccionario, $1,"Variable","Decimal","Local","Variable de funcion", 0);
                              }
                              else {
                                 printf("ERROR: variable %s ya definida\n", $1);

                              }
                            }
		| IDENTIFICADOR ':' '=' expresion {insertar_diccionario(&diccionario, $1,"Variable","Decimal","Local","Variable de funcion", $4);agregarSimbolo ($1, "Variable", "Decimal", "Local", "Variable de función", (double)$4);}
;


expresion: CONSTANTE_REAL   { $$ = $1; }
         | CONSTANTE_ENTERA { $$ = (double) $1; }
         | IDENTIFICADOR    { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada != NULL) { /* encontrada */
                                 $$ = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", $1);
                                 $$ = 0;
                              }
                            }
         | '<' '+'  expresion expresion '>'  { $$ = $3 + $4; }
         | '<' '-' expresion expresion  '>' { $$ = $3 - $4; }
         | '<' '*' expresion  expresion '>'  { $$ = $3 * $4; }
         | '<' '/' expresion  expresion '>'  { $$ = $3 / $4; }
         | '<' '^' expresion  expresion '>'  { $$ = pow($3,$4); }
         | '<' '%' expresion  expresion '>'  { $$ = (int)$3 % (int)$4; }
;
expresionentera: CONSTANTE_REAL   { $$ = (int)$1; }
         | CONSTANTE_ENTERA { $$ =  $1; }
         | IDENTIFICADOR    { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada != NULL) { /* encontrada */
                                 $$ = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", $1);
                                 $$ = 0;
                              }
                            }
         | '<' '+'  expresionentera expresionentera '>'  { $$ = $3 + $4; }
         | '<' '-' expresionentera expresionentera  '>' { $$ = $3 - $4; }
         | '<' '*' expresionentera  expresionentera '>'  { $$ = $3 * $4; }
         | '<' '/' expresionentera  expresionentera '>'  { $$ = $3 / $4; }
         | '<' '^' expresionentera  expresionentera '>'  { $$ = pow($3,$4); }
         | '<' '%' expresionentera  expresionentera '>'  { $$ = (int)$3 % (int)$4; }
;

sentencia: 	si
		| mientras
		| para
mientras:	RESERV_MIENTRAS '(' x
x:		comparacion y
y:		')' '{' cuerpo '}'
para:		RESERV_PARA '(' declararvariable1 ';' comparacion ';' asigvalor  ')' '{' cuerpo '}'
si:		RESERV_SI '(' sh 
sh:		comparacion shh 
shh:		')' '{' cuerpo '}' h
		| ')' '{' cuerpo '}' 
h:		RESERV_SINOSI '('comparacion ')' '{' cuerpo'}' i
		|/* variable vacia*/
i:		h
		|z
z:		 RESERV_SINO '{' cuerpo '}'
comparacion : '<' expresionentera comparador b '>'
b  : expresionentera
  | expresion
comparador:	RESERV_MENOR
	|	RESERV_MAYOR 
	|	RESERV_MAYORIGUAL
	|	RESERV_MENORIGUAL 
	|	RESERV_IGUAL 
	|	RESERV_DIFERENTE
;


/*ARCHIVO DE TIPO PAL*/


ejecutable:	ejecutable ejecucion
		| ejecucion
;
ejecucion:	esfuncion
		| esincuir
		| esprincipal
esincuir:	RESERV_INCLUIR '"' TIPO_ARCHIVO '"' RESERV_ALIAS IDENTIFICADOR {/*agregar*/}
;

esprincipal:	RESERV_PRINCIPAL '{' k
;
esfuncion:	IDENTIFICADOR '{' parejecutable k
		| IDENTIFICADOR '{' k
parejecutable:	parejecutable ',' tipoparejec
		| tipoparejec
		| /* cadena vacia*/
tipoparejec:	RESERV_ENT IDENTIFICADOR {insertar_diccionario(&diccionario, $2,"Variable","Entero","Externas","Parametro de funciión", 0);}
		|  RESERV_DEC IDENTIFICADOR {insertar_diccionario(&diccionario, $2,"Variable","Decimal","Externas","Parametro de funciión", 0); }
		|  RESERV_STR IDENTIFICADOR {insertar_diccionario(&diccionario, $2,"Variable","Cadena","Externas","Parametro de funciión", 0);}
		|  RESERV_LOG IDENTIFICADOR {insertar_diccionario(&diccionario, $2,"Variable","Booleana","Externas","Parametro de funciión", 0); }
		

;
k:		'}' RESERV_COMO  tipvariable RESERV_INICIO RESERV_FUNCION le m RESERV_FIN RESERV_FUNCION
m:		RESERV_RET rrr
		| /* cadeana vacia*/
rrr:		expresion2
;
le:		le contfuncion 
		| contfuncion
		|/* variable vacia*/
contfuncion:	declararvariable2
		| asigvalor
		| sentenciaejec
		| invocarfuncion
		| imprimir
		| graficar
;

declararvariable2: tipovariable2 RESERV_COMO tipvariable
tipovariable2:	tipovariable2 ',' asigidentificador 
		|	asigidentificador  
asigidentificador: IDENTIFICADOR  { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada == NULL) { /* encontrada */
				
                                 insertar_diccionario(&diccionario, $1,"Variable","Entero","Local","Variable de funcion",0);
                              }
                              else {
                                 printf("ERROR: variable %s ya definida\n", $1);

                              }
                            }

;
tipvariable:	RESERV_ENT
		| RESERV_DEC
		| RESERV_LOG
		| RESERV_STR
		| RESERV_VAC
;
asigvalor:		IDENTIFICADOR RESERV_CON expresion2{ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada != NULL) { /* encontrada */
                                 insertar_diccionario(&diccionario, $1,"Variable","Entero","Local","Variable de funcion", $3);
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", $1);

                              }
                            }
;
expresion2:	CONSTANTE_REAL   { $$ = (int) $1; }
         | 	CONSTANTE_ENTERA { $$ =  $1; }
	 |	IDENTIFICADOR   { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada != NULL) {
                                 $$ = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", $1);
                                 $$ = 0;
                              }
                            }
	 | expresion2 '+' expresion2   { $$ = $1 + $3; }
         | expresion2 '-' expresion2   { $$ = $1 - $3; }
         | expresion2 '*' expresion2   { $$ = $1 * $3; }
         | expresion2 '/' expresion2   { $$ = $1 / $3; }
         | expresion2 '^'  expresion2  { $$ = pow($1,$3); }
         | expresion2 '%'  expresion2  { $$ = (int)$1 % (int)$3; }
	 | '(' expresion2 ')'   { $$ = (int) $2; }
;

invocarfuncion: 	funcioninterna
		|	funcionexterna
funcioninterna:		IDENTIFICADOR '(' parametrofuncion ')'	
		|	IDENTIFICADOR '(' ')'
parametrofuncion:	parametrofuncion ',' parametrovalor
		|	parametrovalor
parametrovalor:		expresion2{ }
funcionexterna:		IDENTIFICADOR '.' IDENTIFICADOR '(' parametrofuncion ')'
		|	IDENTIFICADOR '.' IDENTIFICADOR '(' ')'
;	
imprimir:	RESERV_IMPRIMIR '('  conca  ')'
conca:		concatenar {printf ("Texto a imprimir: %s  \n", $1);}
concatenar: concatenar '?' er {strcpy($$,$1);strcat($$,$3); } 

	|	er {$$=$1;}
er:	RESERV_CADENA {char *name = malloc(20);sprintf(name, "%s", $1);name = replace_char(name, '\'', "");$$=name;}
	| expresion2{char *name = malloc(20);sprintf(name, "% d", $1);$$=name;}
;


graficar:	RESERV_GRAFICAR '(' IDENTIFICADOR ')'
;


sentenciaejec: 	siejec
		| repetir
		| para
;

siejec:		RESERV_SI she 
she:		comparacionejec RESERV_ENTONCES shhe 
shhe:		 le  he
		| le wwe
he:		RESERV_SINOSI comparacionejec RESERV_ENTONCES le ie
ie:		he
		|ze
ze:		 RESERV_SINO   RESERV_ENTONCES le wwe
wwe:		 RESERV_FIN RESERV_SI
		
;

repetir:	RESERV_REPETIR le  RESERV_HASTA comparacionejec 
;
para:		RESERV_PARA IDENTIFICADOR RESERV_CON expresion2 RESERV_HASTA expresion2 RESERV_Y RESERV_PASO expresion2 RESERV_HACER ly
ly:		le lz
		| lz
lz:		RESERV_FIN RESERV_PARA
;

comparacionejec : expresion2 comparadorejec expresion2 
		| expresion2
comparadorejec:	'<'
	|	'>'
	|	'>' '='
	|	'<' '='
	|	':'
	|	'¬' ':'
;


%%
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
