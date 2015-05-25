/* 
 * File:   main.c
 * Author: braian
 *
 * Created on 20 de mayo de 2015, 08:45 PM
 */

#include <stdio.h>
#include <stdlib.h>

#include <string.h>

typedef struct ElementoLista {
    char *nom;
    char* tipoSimbolo;
    char *tipoDato;
    char*ambito;
    char* descripcion;
    int valor;
    struct ElementoLista *siguiente;
} Elemento;

typedef struct ListaIdentificar {
    Elemento *inicio;
    Elemento *fin;
    int tamano;
} Lista;
/*inicializa la lista*/
void incializacion(Lista *lista);
/*En caso de error devuelve -1 sino 0*/
int InsercionEnListaVacia(Lista *lista, char *nom, char* tipoSimbolo, char *tipoDato, char*ambito, char* descripcion, int valor);

/*insertar en fin de la lista*/
int InsercionFinLista(Lista *lista, Elemento *actual, char *nom, char* tipoSimbolo, char *tipoDato, char*ambito, char* descripcion, int valor);
/*insertar en X posicion de la lista*/
void visualizacion(Lista *lista);

void incializacion(Lista *lista) {
    lista->inicio = NULL;
    lista->fin = NULL;
    lista->tamano = 0;
}

int InsercionEnListaVacia(Lista *lista, char *nom, char* tipoSimbolo, char *tipoDato, char*ambito, char* descripcion, int valor) {

    Elemento *nuevo_elemento;

    if ((nuevo_elemento = (Elemento *) malloc(sizeof (Elemento))) == NULL)
        return -1;
    nuevo_elemento->ambito = (char *) malloc(50 * sizeof (char));
    nuevo_elemento->descripcion = (char *) malloc(50 * sizeof (char));
    nuevo_elemento->nom = (char *) malloc(50 * sizeof (char));
    nuevo_elemento->tipoDato = (char *) malloc(50 * sizeof (char));
    nuevo_elemento->tipoSimbolo = (char *) malloc(50 * sizeof (char));
    strcpy(nuevo_elemento->ambito, ambito);
    strcpy(nuevo_elemento->descripcion, descripcion);
    strcpy(nuevo_elemento->nom, nom);
    strcpy(nuevo_elemento->tipoDato, tipoDato);
    strcpy(nuevo_elemento->tipoSimbolo, tipoSimbolo);
    nuevo_elemento->valor = valor;

    nuevo_elemento->siguiente = NULL;
    lista->inicio = nuevo_elemento;
    lista->fin = nuevo_elemento;
    lista->tamano++;
    return 0;
}

int InsercionFinLista(Lista *lista, Elemento *actual, char *nom, char* tipoSimbolo, char *tipoDato, char*ambito, char* descripcion, int valor) {
    Elemento *nuevo_elemento;
    if ((nuevo_elemento = (Elemento *) malloc(sizeof (Elemento))) == NULL)
        return -1;
    nuevo_elemento->ambito = (char *) malloc(50 * sizeof (char));
    nuevo_elemento->descripcion = (char *) malloc(50 * sizeof (char));
    nuevo_elemento->nom = (char *) malloc(50 * sizeof (char));
    nuevo_elemento->tipoDato = (char *) malloc(50 * sizeof (char));
    nuevo_elemento->tipoSimbolo = (char *) malloc(50 * sizeof (char));
    strcpy(nuevo_elemento->ambito, ambito);
    strcpy(nuevo_elemento->descripcion, descripcion);
    strcpy(nuevo_elemento->nom, nom);
    strcpy(nuevo_elemento->tipoDato, tipoDato);
    strcpy(nuevo_elemento->tipoSimbolo, tipoSimbolo);
    nuevo_elemento->valor = valor;

    actual->siguiente = nuevo_elemento;
    nuevo_elemento->siguiente = NULL;

    lista->fin = nuevo_elemento;
    lista->tamano++;
    return 0;
}

void visualizacion(Lista *lista) {
    Elemento *actual;
    actual = lista->inicio;
    while (actual != NULL) {
        printf("%p - %s\n", actual, actual->valor);
        actual = actual->siguiente;
    }
}

/*
 * 
 */



void generarLexico(FILE *errLex) {
    errLex = fopen("errLexico.txt", "r");
    int a = 0;
    printf("Se han encontrado errores lexicos.\n");
    printf(".:MENU DE SCANNER LEXICO:.\n\n");
    printf("1. Generar y abrir HTML de errores\n");
    printf("2. Salir.\n");
    printf("NOTA: Es necesario reiniciar la aplicación para realizar un nuevo analisis.\n");

    scanf("%d", &a);
    if (a == 1) {
        FILE *pdf;
        pdf = fopen("lexico.html", "w");
        fputs("<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\" />", pdf);
        fputs("<html><body><center><table border=\"1\" bordercolor=\"#85f064\" cellpadding=\"1\" cellspacing=\"1\"><tbody>", pdf);
        fputs("<tr  bgcolor= \"#009e43\" > <td style=\"width: 70px;\"><b>No.</b></font></td> ", pdf);
        fputs("<td style=\"width: 60px;\"><b>Linea</b> </font></td>", pdf);
        fputs("<td style=\"width: 60px;\"><b>Columna</b> </font></td>", pdf);
        fputs("<td style=\"width: 100px;\"><b>Error Lexico</b> </font></td> <tr>", pdf);
        char lineas[800];
        char *ptrToken;
        int i = 1;
        char rango[3];
        while (fscanf(errLex, "%s", lineas) == 1) {
            ptrToken = strtok(lineas, ",");

            while (ptrToken != NULL) {

                if (i % 2 != 0) {
                    char* color = "<tr  bgcolor= \"#acf3ca\" > ";
                    fputs(color, pdf);
                } else {
                    char* color = "<tr  bgcolor= \"#ffffff\" >";
                    fputs(color, pdf);
                }
                sprintf(rango, "%d", i);
                fputs("<td style=\"width: 70px;\"> ", pdf);

                fputs(rango, pdf);
                fputs("</font></td>", pdf);

                fputs("<td style=\"width: 60px;\"><b>", pdf);
                fputs(ptrToken, pdf);
                fputs("</b> </font></td>", pdf);

                ptrToken = strtok(NULL, ",");
                fputs("<td style=\"width: 60px;\"><b>", pdf);
                fputs(ptrToken, pdf);
                fputs("</b> </font></td>", pdf);

                ptrToken = strtok(NULL, ",");
                fputs("<td style=\"width: 100px;\"><b>", pdf);
                fputs(ptrToken, pdf);
                fputs("</b> </font></td><tr>", pdf);
                i++;

                ptrToken = strtok(NULL, ",");
            }

        }
        fclose(pdf);
        system("xdg-open lexico.html");
    } else if (a == 2) {
        printf("Fin del programa");

    } else {
        printf("opción incorrecta: %i", a);
    }
    fclose(errLex);

}

void generarSintacticoPDF(FILE *errLex) {
    errLex = fopen("errSintactico.txt", "r");
    int a = 0;
    printf("Se han encontrado errores sintacticos.\n");
    printf(".:MENU DEL PARSER SINTACTICO:.\n\n");
    printf("1. Generar y abrir HTML de errores\n");
    printf("2. Salir.\n");
    printf("NOTA: Es necesario reiniciar la aplicación para realizar un nuevo analisis.\n");

    scanf("%d", &a);
    if (a == 1) {
        FILE *pdf;
        pdf = fopen("sintactico.html", "w");
        fputs("<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\" />", pdf);
        fputs("<html><body><center><table border=\"1\" bordercolor=\"#85f064\" cellpadding=\"1\" cellspacing=\"1\"><tbody>", pdf);
        fputs("<tr  bgcolor= \"#009e43\" > <td style=\"width: 70px;\"><b>No.</b></font></td> ", pdf);
        fputs("<td style=\"width: 60px;\"><b>Linea</b> </font></td>", pdf);
        fputs("<td style=\"width: 60px;\"><b>Columna</b> </font></td>", pdf);
        fputs("<td style=\"width: 100px;\"><b>Error Sintactico</b> </font></td> <tr>", pdf);
        char lineas[800];
        char *ptrToken;
        int i = 1;
        char rango[3];
        while (fscanf(errLex, "%s", lineas) == 1) {
            ptrToken = strtok(lineas, ",");

            while (ptrToken != NULL) {

                if (i % 2 != 0) {
                    char* color = "<tr  bgcolor= \"#acf3ca\" > ";
                    fputs(color, pdf);
                } else {
                    char* color = "<tr  bgcolor= \"#ffffff\" >";
                    fputs(color, pdf);
                }
                sprintf(rango, "%d", i);
                fputs("<td style=\"width: 70px;\"> ", pdf);

                fputs(rango, pdf);
                fputs("</font></td>", pdf);

                fputs("<td style=\"width: 60px;\"><b>", pdf);
                fputs(ptrToken, pdf);
                fputs("</b> </font></td>", pdf);

                ptrToken = strtok(NULL, ",");
                fputs("<td style=\"width: 60px;\"><b>", pdf);
                fputs(ptrToken, pdf);
                fputs("</b> </font></td>", pdf);

                ptrToken = strtok(NULL, ",");
                fputs("<td style=\"width: 100px;\"><b>", pdf);
                fputs(ptrToken, pdf);
                fputs("</b> </font></td><tr>", pdf);
                i++;

                ptrToken = strtok(NULL, ",");
            }

        }
        fclose(pdf);
        system("xdg-open sintactico.html");
    } else if (a == 2) {
        printf("Fin del programa");

    } else {
        printf("opción incorrecta: %i", a);
    }
    fclose(errLex);

    if (remove("errSintactico.txt") == -1);

}

int generarSintactico(char* s2, char* nom) {
    printf("\n------Contenido del Archivo------\n");
    system(s2);
    FILE *errLex = NULL;
    errLex = fopen("errSintactico.txt", "r");

    fseek(errLex, 0, SEEK_END); //Nos vamos el final del archivo

    if (ftell(errLex) > 1) {
        generarSintacticoPDF(errLex);

        return 0;

    } else
        printf("\nNo se han encontrado errores sintacticos\n");

    FILE *arc1;
    arc1 = fopen("archivo1.txt", "r");
    char lineas[800];
    char *ptrToken;
    char *nombre;
    while (fscanf(arc1, "%s", lineas) == 1) {
        ptrToken = strtok(lineas, ",");
        FILE *archivo3;
        archivo3 = fopen("archivo3.txt", "w");
        fclose(archivo3);
        while (ptrToken != NULL) {
            nombre = ptrToken;
            printf("\n------Se procederá a analizar el archivo:%s------\n", nombre);
            generarAnalisis(ptrToken);
            fseek(errLex, 0, SEEK_END); //Nos vamos el final del archivo

            if (ftell(errLex) > 1) {
                generarSintacticoPDF(errLex);

                if (remove("errSintactico.txt") == -1);
                return 0;

            } else
                printf("\nNo se han encontrado errores sintacticos\n");
            ptrToken = strtok(NULL, ",");
        }

        fclose(archivo3);

    }
    fclose(arc1);
    FILE *arc2;
    arc2 = fopen("archivo2.txt", "r");
    char lins[800];
    char *pToken;
    char *nombrer;
    while (fscanf(arc2, "%s", lins) == 1) {
        pToken = strtok(lins, ",");

        while (pToken != NULL) {
            nombre = pToken;
            printf("\n------Ejecución del archivo principal:%s------\n", nombre);
            generarAnalisisPrincipal(nombre);
            pToken = strtok(NULL, ",");
        }

    }
    fclose(arc2);




    fclose(errLex);

    FILE* archiv;

    archiv = fopen("semantico.txt", "r");
    fseek(archiv, 0, SEEK_END); //Nos vamos el final del archivo

    if (ftell(archiv) > 1) {
       
        FILE *pdf;
        pdf = fopen("sintactico.html", "w");
        fputs("<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\" />", pdf);
        fputs("<html><body><center><table border=\"1\" bordercolor=\"#85f064\" cellpadding=\"1\" cellspacing=\"1\"><tbody>", pdf);
        fputs("<tr  bgcolor= \"#009e43\" > <td style=\"width: 70px;\"><b>No.</b></font></td> ", pdf);
        fputs("<td style=\"width: 60px;\"><b>Linea</b> </font></td>", pdf);
        fputs("<td style=\"width: 60px;\"><b>Columna</b> </font></td>", pdf);
        fputs("<td style=\"width: 100px;\"><b>Error Sintactico</b> </font></td> <tr>", pdf);
        fputs("<td style=\"width: 100px;\"><b>Tipo de Archivo</b> </font></td> <tr>", pdf);
        char lineas[8000];
        char *ptrToken;
        int i = 1;
        char rango[3];
        while (fscanf(archiv, "%s", lineas) == 1) {
            ptrToken = strtok(lineas, ",");

            while (ptrToken != NULL) {

                if (i % 2 != 0) {
                    char* color = "<tr  bgcolor= \"#acf3ca\" > ";
                    fputs(color, pdf);
                } else {
                    char* color = "<tr  bgcolor= \"#ffffff\" >";
                    fputs(color, pdf);
                }
                sprintf(rango, "%d", i);
                fputs("<td style=\"width: 70px;\"> ", pdf);

                fputs(rango, pdf);
                fputs("</font></td>", pdf);

                fputs("<td style=\"width: 60px;\"><b>", pdf);
                fputs(ptrToken, pdf);
                fputs("</b> </font></td>", pdf);

                ptrToken = strtok(NULL, ",");
                fputs("<td style=\"width: 60px;\"><b>", pdf);
                fputs(ptrToken, pdf);
                fputs("</b> </font></td>", pdf);

                ptrToken = strtok(NULL, ",");
                fputs("<td style=\"width: 100px;\"><b>", pdf);
                fputs(ptrToken, pdf);
                fputs("</b> </font></td>", pdf);
                ptrToken = strtok(NULL, ",");
                fputs("<td style=\"width: 100px;\"><b>", pdf);
                fputs(ptrToken, pdf);
                fputs("</b> </font></td><tr>", pdf);
                i++;

                ptrToken = strtok(NULL, ",");
            }

        }
        fclose(pdf);
       // system("xdg-open sintactico.html");

    }
    fclose(archiv);

  
    system("xdg-open simbolos.html");
    return 1;
}

int generarAnalisisPrincipal(char* pToken) {
    char* tmp2 = "Se asigna la memoria necesaria para el funcionamiento del archivo";
    char TInOrden[900];
    char* s1 = malloc(sizeof (char)*(2 * strlen(TInOrden) + strlen(tmp2) + 10));
    system("flex scanner.l && bison -d parserp.y && cc lex.yy.c parserp.tab.c -o analizadorP -lfl -lm diccionario.c funciones.c");
    char* tmp1 = "./analizadorP ";
    printf("\n\n\t.:OPERACION DEL ARCHIVO: %s:.\n", pToken);
    strcpy(s1, tmp1);
    strcat(s1, pToken);
    system(s1);



}

void generarSemanticoPDF(FILE* archi) {



}

int generarAnalisis(char* ptrToken) {
    char* tmp2 = "Se asigna la memoria necesaria para el funcionamiento del archivo";
    char TInOrden[900];
    char* s1 = malloc(sizeof (char)*(2 * strlen(TInOrden) + strlen(tmp2) + 10));
    char* tmp1 = "./scanner ";
    printf(".:Analisis Lexico del archivo de entrada: %s:.\n", ptrToken);
    strcpy(s1, tmp1);
    strcat(s1, ptrToken);
    system(s1);
    FILE *errLex = NULL;
    errLex = fopen("errLexico.txt", "r");
    long int tamano;
    fseek(errLex, 0, SEEK_END); //Nos vamos el final del archivo
    tamano = ftell(errLex);
    if (tamano > 1) {
        generarLexico(errLex);
        printf("Se encontraron errores lexicos en el archivo %s\nNo se puede continuar con el analisis.", ptrToken);
        if (remove("errLexico.txt") == -1);
        return 0;
    } else {
        printf("El archivo analizado no contiene errores léxicos.\n");
        printf("\n.:Analisis Sintactico del archivo de entrada: %s:.\n", ptrToken);
        char* tmp3 = "./analizador ";
        char* s2 = malloc(sizeof (char)*(2 * strlen(TInOrden) + strlen(tmp2) + 10));
        strcpy(s2, tmp3);
        strcat(s2, ptrToken);
        system(s2);

    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Debe ingresar un archivo a analisar\nEjemplo: 201220120 proyecto.olc");
    } else {

        if (remove("simbolos.html") == -1);
        FILE* archivo = NULL;
        char* nombreArchivo = argv[1];
        archivo = fopen(nombreArchivo, "r");
        if (archivo == NULL) {
            printf("\nEl archivo se encuentra vació o no es compatible\n");
        } else {
            printf("\n.:Realización de analisis léxico:.\n");
            system("flex lexer.l");
            system("cc lex.yy.c -o scanner -lfl -lm");
            char* tmp2 = "Se asigna la memoria necesaria para el funcionamiento del archivo";
            char TInOrden[900];
            char* s1 = malloc(sizeof (char)*(2 * strlen(TInOrden) + strlen(tmp2) + 10));
            char* tmp1 = "./scanner ";
            strcpy(s1, tmp1);
            strcat(s1, nombreArchivo);
            system(s1);
            FILE *errLex = NULL;
            errLex = fopen("errLexico.txt", "r");
            long int tamano;
            fseek(errLex, 0, SEEK_END); //Nos vamos el final del archivo
            tamano = ftell(errLex);

            if (tamano > 1) {
                generarLexico(errLex);
                if (remove("errLexico.txt") == -1)
                    return 0;

            } else {
                printf("\nNo se han encontrado errores léxicos\n");

                printf("\n.:Realización de analisis sintactico:.\n");
                system("flex scanner.l && bison -d parser.y && cc lex.yy.c parser.tab.c -o analizador -lfl -lm diccionario.c");
                char* tmp3 = "./analizador ";
                char* s2 = malloc(sizeof (char)*(2 * strlen(TInOrden) + strlen(tmp2) + 10));
                strcpy(s2, tmp3);
                strcat(s2, nombreArchivo);
                generarSintactico(s2, nombreArchivo);
            }

        }

        fclose(archivo);


    }


    if (remove("analizadorP") == -1);
    if (remove("scanner") == -1);
    if (remove("archivo1.txt") == -1);
    if (remove("analizador") == -1);
    if (remove("errLexico.txt") == -1);
    if (remove("errSintactico.txt") == -1);
    if (remove("archivo2.txt") == -1);
    if (remove("archivo3.txt") == -1);
    //if (remove("semantico.txt") == -1);
    
    return 0;
}

