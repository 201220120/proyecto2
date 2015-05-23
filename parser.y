/***************** 
  Definiciones
	Se colocan las cabeceras, variables y expresiones regulares
********************/
%{  /* Codigo C */
#include <stdio.h>
#include<math.h>
#include "diccionario.h"
DICCIONARIO diccionario; /* variable global para el diccionario */
  extern FILE *yyin;
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
%type <texto> nombre tipo nombrep tipop c  d RESERV_CADENA
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

libreria: 	libreria funcion
		| funcion
funcion:	RESERV_FUNCION RESERV_ENTERO c{printf ("Nombre de la funcion: %s\n", $3); }		
		| RESERV_FUNCION RESERV_DECIMAL d{printf ("Nombre de la funcion: %s  \n", $3); }
c:		IDENTIFICADOR '(' parametros ')' '{' cuerpo  retornoentero '}'{$$= $1; }
;
parametros:	parametros ',' tipoparametro
		| tipoparametro
		| /* cadena vacia*/
tipoparametro:	RESERV_ENTERO IDENTIFICADOR { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada != NULL) { /* encontrada */
                                 
                              }
                              else {
                                 insertar_diccionario(&diccionario, $2, 0);

                              }
                            printf ("Parametro de tipo entero: %s  \n", $2); }
		|  RESERV_DECIMAL IDENTIFICADOR { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada != NULL) { /* encontrada */
                                 
                              }
                              else {
                                 insertar_diccionario(&diccionario, $2, 0);

                              }
                            printf ("Parametro de tipo decimal: %s  \n", $2); }
		|  RESERV_BOOLEANO IDENTIFICADOR { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada != NULL) { /* encontrada */
                                 
                              }
                              else {
                                 insertar_diccionario(&diccionario, $2, 0);

                              }
                            printf ("Parametro de tipo booleano: %s  \n", $2); }
;
cuerpo:		cuerpo  contenidocuerpo
		| contenidocuerpo
		| /* cadena vacia*/
contenidocuerpo: declararvariable1 ';'
		| retornoentero
		| sentencia
;
declararvariable1: RESERV_VARIABLE tipovariable
		| IDENTIFICADOR ':' '=' expresion { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada != NULL) { /* encontrada */
                                 insertar_diccionario(&diccionario, $1, $4);
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", $1);

                              }
                            }
tipovariable:	RESERV_ENTERO declaracionentero
		| RESERV_DECIMAL declaraciondecimal
declaracionentero:	declaracionentero ',' asigvalor
		|	asigvalor
asigvalor:	IDENTIFICADOR {printf ("Creación de variable: %s \n", $1); insertar_diccionario(&diccionario, $1, 0);} 
		| IDENTIFICADOR ':' '=' expresionentera {printf("Asignación de valor: %d a la variable %s\n", $4,$1);insertar_diccionario(&diccionario, $1, $4);}
;
expresionentera: CONSTANTE_REAL   { $$ = (int)$1; }
         	| CONSTANTE_ENTERA { $$ =  $1; }
         	| IDENTIFICADOR    { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada != NULL) { /* encontrada */
                                 $$ = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida, no se tomará en cuenta.\n", $1);
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
declaraciondecimal:	declaraciondecimal ',' asigvalordec
		|	asigvalordec
asigvalordec:	IDENTIFICADOR {printf ("Creación de variable %s \n", $1); insertar_diccionario(&diccionario, $1, 0);} 
		| IDENTIFICADOR ':' '=' expresion {printf("Asignación de valor: %d a la variable %s\n", $4,$1);insertar_diccionario(&diccionario, $1, $4);}
;
expresion: 	CONSTANTE_REAL   { $$ = $1; }
		 | CONSTANTE_ENTERA { $$ = (double) $1; }
		 | IDENTIFICADOR    { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
		                      if (entrada != NULL) { /* encontrada */
		                         $$ = entrada->valor;
		                      }
		                      else {
		                         printf("ERROR: variable %s no definida, no se tomará en cuenta.\n", $1);
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





/**/

d:		IDENTIFICADOR '(' parametros ')' '{' cuerpo  retornodecimal '}'{$$= $1; }
		| IDENTIFICADOR '(' ')' '{' cuerpo retornodecimal '}'
;

retornoentero:	RESERV_RETORNAR expresionentera ';'{printf ("Retorno Entero: %d  \n", $2); }
;

retornodecimal:	RESERV_RETORNAR expresion ';'{printf ("Retorno Decimal: %f  \n", $2); }
;

sentencia: 	si
		| mientras
		| para
	
;
mientras:	RESERV_MIENTRAS '(' x
x:		comparacion y
y:		')' '{' cuerpo '}'
;

para:		RESERV_PARA '(' declararvariable1 ';' comparacion ';' asigvalor  ')' '{' cuerpo '}'
;


si:		RESERV_SI '(' sh 
sh:		comparacion shh 
shh:		')' '{' cuerpo '}' h
		| ')' '{' cuerpo '}' 
h:		RESERV_SINOSI '('comparacion ')' '{' cuerpo'}' i
		|/* variable vacia*/
i:		h
		|z
z:		 RESERV_SINO '{' cuerpo '}'
		
;

b  : expresionentera
  | CONSTANTE_ENTERA
  | CONSTANTE_REAL
  ;
comparador:	RESERV_MENOR
	|	RESERV_MAYOR 
	|	RESERV_MAYORIGUAL
	|	RESERV_MENORIGUAL 
	|	RESERV_IGUAL 
	|	RESERV_DIFERENTE
;







ejecutable:	ejecutable ejecucion
		| ejecucion
;

ejecucion:	esfuncion
		| esincuir
;

esfuncion:	IDENTIFICADOR '{' parejecutable k
		| IDENTIFICADOR '{' k
k:		'}' RESERV_INICIO RESERV_FUNCION le m RESERV_FIN RESERV_FUNCION
 
;
m:		RESERV_RET retentero
		| RESERV_RET retdecimal
		| RESERV_RET retcadena
		| RESERV_RET retlog
retentero:	
retdecimal:
retcadena:
retlog:
;
le:		le contfuncion 
		| contfuncion
		|/* variable vacia*/
;


imprimir:	RESERV_IMPRIMIR '('  concatenar  ')'
;
graficar:	RESERV_GRAFICAR '(' IDENTIFICADOR ')'
;
contfuncion:	declararvariable2
		| asigvalor
		| sentenciaejec
		| invocarfuncion
		| imprimir
		| graficar
;
invocarfuncion: 	funcioninterna
		|	funcionexterna
funcioninterna:		IDENTIFICADOR '(' parametrofuncion ')'	
		|	IDENTIFICADOR '(' ')'
parametrofuncion:	parametrofuncion ',' parametrovalor
		|	parametrovalor
parametrovalor:		IDENTIFICADOR{printf ("Parametro ENVIADO: %s  \n", $1); }
funcionexterna:		IDENTIFICADOR '.' IDENTIFICADOR '(' parametrofuncion ')'
		|	IDENTIFICADOR '.' IDENTIFICADOR '(' ')'
;		


/*nombre_alias.nombre_función(parámetro_1, ..., parámetro_N)*/
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

declararvariable2: tipovariable2 RESERV_COMO tipvariable
		
; 
tipovariable2:	tipovariable2 ',' asigidentificador 
		|	asigidentificador  

;
asigidentificador: IDENTIFICADOR  {printf ("Variable %s \n", $1); insertar_diccionario(&diccionario, $1, 0);} 
;

tipvariable:	RESERV_ENT
		| RESERV_DEC
		| RESERV_LOG
		| RESERV_STR
;
asigvalor:		IDENTIFICADOR RESERV_CON expresion2{printf("Variable %s = %d \n",$1, $3); ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada != NULL) { /* encontrada */
                                 insertar_diccionario(&diccionario, $1, $3);
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

concatenar: concatenar '?' er
	|	er 
er:	RESERV_CADENA {printf ("Texto a imprimir: %s  \n", $1); }
;


comparacionejec : expresion2 comparadorejec expresion2 
;

comparadorejec:	'<'
	|	'>'
	|	'>' '='
	|	'<' '='
	|	':'
	|	'¬' ':'
;

esincuir:	RESERV_INCLUIR '"' TIPO_ARCHIVO '"' RESERV_ALIAS IDENTIFICADOR
;

parejecutable:	parejecutable ',' tipoparejec
		| tipoparejec;
tipoparejec:	RESERV_ENT IDENTIFICADOR {printf ("Parametro de tipo entero: %s  \n", $2); }
		|  RESERV_DEC IDENTIFICADOR {printf ("Parametro de tipo decimal: %s  \n", $2); }
		|  RESERV_STR IDENTIFICADOR {printf ("Parametro de tipo cadena: %s  \n", $2); }
		|  RESERV_LOG IDENTIFICADOR {printf ("Parametro de tipo booleano: %s  \n", $2); }

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
    
}

yyerror (char *s) { printf ("Error de tipo: %s\n", s);  char* nom = "ErrorSintactico"; FILE* archivo= NULL;archivo = fopen("errSintactico.txt","a+");char linea[3];sprintf(linea, "%d", 0);fputs(linea,archivo);fputs(",",archivo);char columna[3];sprintf(columna, "%d", 0);fputs(columna,archivo);fputs(",",archivo);fputs(nom,archivo);fputs(",",archivo);fclose(archivo);   }

int yywrap()  { return 1; }
