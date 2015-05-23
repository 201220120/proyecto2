/***************** 
  Definiciones
	Se colocan las cabeceras, variables y expresiones regulares
********************/

%{ /* Codigo C */
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "parser.tab.h"
int yycolumno=1;
  int linea=0;
%}

%option yylineno

DIGITO [0-9]
LETRA  [A-Za-z]

TEXTO 	{LETRA}([-]|[_]|{LETRA}|{DIGITO})*
ARCHIVO	{TEXTO}+(".fnm")
PRINCIPAL	{TEXTO}+(".pal")
CADENA		 "\'"({LETRA}|{DIGITO}|(" "))*"\'"

%%

"principal"                     {int largo = strlen(yytext);yycolumno+=largo; return RESERV_PRINCIPAL;}
"entonces"                     {int largo = strlen(yytext);yycolumno+=largo; return RESERV_ENTONCES;}
"si"                        {int largo = strlen(yytext);yycolumno+=largo; return RESERV_SI;}
"sino"                        {int largo = strlen(yytext);yycolumno+=largo; return RESERV_SINO;}
"sino si"                        {int largo = strlen(yytext);yycolumno+=largo; return RESERV_SINOSI;}
"menor"                     {int largo = strlen(yytext);yycolumno+=largo; return RESERV_MENOR;}
"mayor"			{int largo = strlen(yytext);yycolumno+=largo; return RESERV_MAYOR;}
"mayorigual"		{int largo = strlen(yytext);yycolumno+=largo; return RESERV_MAYORIGUAL;}
"menorigual"		{int largo = strlen(yytext);yycolumno+=largo; return RESERV_MENORIGUAL;}
"igual"			{int largo = strlen(yytext);yycolumno+=largo; return RESERV_IGUAL;}
"diferente"		{int largo = strlen(yytext);yycolumno+=largo; return RESERV_DIFERENTE;}
"mientras"		{int largo = strlen(yytext);yycolumno+=largo; return RESERV_MIENTRAS;}
"para"		{int largo = strlen(yytext);yycolumno+=largo; return RESERV_PARA;}
"incluir"		{int largo = strlen(yytext);yycolumno+=largo; return RESERV_INCLUIR;}
"alias"		{int largo = strlen(yytext);yycolumno+=largo; return RESERV_ALIAS;}
"como"		{int largo = strlen(yytext);yycolumno+=largo; return RESERV_COMO;}
"archivo"		{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_ARCHIVO; }
"nombre"		{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_NOMBRE; }
"tipo"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_TIPO; }
"funcion"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_FUNCION; }
"con"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_CON; }
"ret"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_RET; }
"paso"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_PASO; }
"hacer"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_HACER; } 
"y"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_Y; } 
"entero"			{ int largo = strlen(yytext);yycolumno+=largo;  yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);return RESERV_ENTERO; }
"decimal"			{ int largo = strlen(yytext);yycolumno+=largo;  yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);return RESERV_DECIMAL; }
"booleano"			{ int largo = strlen(yytext);yycolumno+=largo; yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext); return RESERV_BOOLEANO; }
"variable"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_VARIABLE; }
"retornar"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_RETORNAR; }
"ent"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_ENT; }
"dec"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_DEC; }
"log"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_LOG; }
"str"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_STR; }
"vac"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_VAC; }
"inicio"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_INICIO; }
"fin"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_FIN; }
"repetir"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_REPETIR; }
"hasta"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_HASTA; }
"imprimir"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_IMPRIMIR; }
"graficar"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_GRAFICAR; }


"fnm"		{ int largo = strlen(yytext);yycolumno+=largo; yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext); return RESERV_FNM; }
"pal"		{ int largo = strlen(yytext);yycolumno+=largo; yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext); return RESERV_PAL; }

{DIGITO}+             { yylval.valor_entero = atoi(yytext); int largo = strlen(yytext);yycolumno+=largo;
                        return (CONSTANTE_ENTERA);
                      }
                      
{DIGITO}+\.{DIGITO}+  { int largo = strlen(yytext);yycolumno+=largo;
			yylval.valor_real = atof(yytext);
                        return (CONSTANTE_REAL);
                      }
                      
"+"|"-"|"*"|"/"|"="|"{"|"}"|":"|"\""|","|"("|")"|"<"|">"|";"|"%"|"^"|"¬"|"."|"\'"   { return (yytext[0]); yycolumno++;}
"\n"                   {  yycolumno=1;}
" "                     {}
[\t\r\f] {}

{LETRA}({LETRA}|_|{DIGITO})*   { int largo = strlen(yytext);yycolumno+=largo;
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (IDENTIFICADOR); 
                      }
{ARCHIVO}	   { int largo = strlen(yytext);yycolumno+=largo;yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);return TIPO_ARCHIVO; 
                      }
{PRINCIPAL}	   { int largo = strlen(yytext);yycolumno+=largo;yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);return TIPO_PRINCIPAL; 
                      }

{CADENA}             {  int largo = strlen(yytext);yycolumno+=largo;yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (RESERV_CADENA);}
                      



.                    {printf ("Error lexico: %s \n\n", yytext);}

%%
