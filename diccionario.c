
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <string.h>

#include "diccionario.h"

/* Implementación de las funciones sobre diccionarios */

/* 
 * Crea el espacio para almacenar las entradas del diccionario
 */
void inicializar_diccionario(DICCIONARIO *d) {
    d->tamano = 0;
    d->entradas = (ENTRADA *) malloc(MAX_DICCIONARIO * sizeof (ENTRADA));
    if (d->entradas == NULL) {
        printf("ERROR: no hay memoria para el diccionario\n");
        exit(1);
    }


}

void inicializar_diccionariosss(DICCIONARIO *d) {

    d->tamano = 0;
    d->entradas = (ENTRADA *) malloc(MAX_DICCIONARIO * sizeof (ENTRADA));
    if (d->entradas == NULL) {
        printf("ERROR: no hay memoria para el diccionario\n");
        exit(1);
    }



}

/* 
 * Libera el espacio para almacenar las entradas del diccionario
 */
void liberar_diccionario(DICCIONARIO *d) {
    free(d->entradas);
    d->tamano = 0;
}

/*
 * Inserta un par (nombre, valor) en el diccionario, o sobrescribe
 * el valor si ya existía esa variable
 */
void insertar_diccionario(DICCIONARIO *d, char * nombre, char* tipoSimbolo, char *tipoDato, char*ambito, char* descripcion, double valor) {
    ENTRADA * entrada = buscar_diccionario(d, nombre);
    if (entrada != NULL) {
        /* Entrada ya existe -> sobrescribirla */
        entrada->valor = valor;
    } else {
        /* Entrada nueva -> anadirla al final si hay espacio */
        if (d->tamano < MAX_DICCIONARIO) {
            d->entradas[d->tamano].nombre = nombre;
            d->entradas[d->tamano].valor = valor;

            d->entradas[d->tamano].tipoDato = tipoDato;
            d->entradas[d->tamano].tipoSimbolo = tipoSimbolo;

            d->entradas[d->tamano].ambito = ambito;
            d->entradas[d->tamano].descripcion = descripcion;
            d->tamano++;

        } else {
            printf("ERROR: diccionario lleno\n");
            exit(1);
        }
    }
}

/*
 * Busca la entrada asociada a un nombre de variable
 * - Si existe, devuelve un puntero a la misma
 * - Si no, devuelve NULL
 */
ENTRADA * buscar_diccionario(DICCIONARIO *d, char * nombre) {
    int i;
    for (i = 0; i < d->tamano; i++) {
        if (strcmp(d->entradas[i].nombre, nombre) == 0) {
            /* Encontrada -> devolver puntero a esa entrada */
            return (d->entradas + i);
        }
    }
    /* no encontrada */
    return (NULL);
}

/*
 * Borra la entrada asociada al nombre la variables, desplazando las entradas
 * siguientes una posicion atras
 */
void eliminar_diccionario(DICCIONARIO *d, char * nombre) {
    int encontrada = NO;
    int i;
    for (i = 0; i < d->tamano; i++) {
        if (!encontrada) {
            if (strcmp(d->entradas[i].nombre, nombre) == 0) {
                /* Encontrada  */
                encontrada = SI;
            }
        } else {
            /* Encontrada -> sobreescribir las anteriores */
            d->entradas[i - 1].nombre = d->entradas[i].nombre;
            d->entradas[i - 1].valor = d->entradas[i].valor;
        }
    }
    if (encontrada) {
        /* descontar la entrada eliminada */
        d->tamano--;
    }
}

/*
 * Imprime por STDOUT los pares (nombre,valor) almacenados
 */
void volcar_diccionario(DICCIONARIO *d) {
    int i;
    printf("\n\t------Variables en el archivo------\n");
    printf("\t[NOMBRE]   [VALOR]   [TIPO DE DATO]   [TIPO DE SIMBOLO]   [AMBITO]   [DESCRIPCION]\n");
    FILE *res;
    res = fopen("simbolos.html", "a+");
    fputs("<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\" />", res);
    fputs("<html><body><center><table border=\"1\" bordercolor=\"#85f064\" cellpadding=\"1\" cellspacing=\"1\"><tbody>", res);
    fputs("<tr><td style=\"width: 300px;\"> ", res);
    fputs("<H1>TABLA DE SIMBOLOS</H1>", res);
    fputs("</font></td><tr>", res);
    for (i = 0; i < d->tamano; i++) {
        char* b = d->entradas[i].tipoDato;

        char rango[3];
        if (i % 2 != 0) {
            char* color = "<tr  bgcolor= \"#acf3ca\" > ";
            fputs(color, res);
        } else {
            char* color = "<tr  bgcolor= \"#ffffff\" >";
            fputs(color, res);
        }


        sprintf(rango, "%d", i + 1);
        fputs("<td style=\"width: 30px;\"> ", res);
        fputs(rango, res);
        fputs("</font></td>", res);

        fputs("<td style=\"width: 120px;\"><b>", res);
        fputs(d->entradas[i].nombre, res);
        fputs("</b> </font></td>", res);

        fputs("<td style=\"width: 120px;\"><b>", res);
        fputs(d->entradas[i].tipoSimbolo, res);
        fputs("</b> </font></td>", res);

        fputs("<td style=\"width: 120px;\"><b>", res);
        fputs(d->entradas[i].tipoDato, res);
        fputs("</b> </font></td>", res);

        fputs("<td style=\"width: 120px;\"><b>", res);
        fputs(d->entradas[i].ambito, res);
        fputs("</b> </font></td>", res);

        fputs("<td style=\"width: 250px;\"><b>", res);
        fputs(d->entradas[i].descripcion, res);
        fputs("</b> </font></td>", res);

        char valor[11];
        sprintf(valor, "%d", (int) d->entradas[i].valor);

        fputs("<td style=\"width: 80px;\"><b>", res);
        fputs(valor, res);
        fputs("</b> </font></td><tr>", res);


        if (b[0] == 'E') {
            printf("\t%s -> %d -> %s -> %s -> %s -> %s\n", d->entradas[i].nombre, (int) d->entradas[i].valor, d->entradas[i].tipoDato, d->entradas[i].tipoSimbolo, d->entradas[i].ambito, d->entradas[i].descripcion);
        } else {
            printf("\t%s -> %f -> %s -> %s -> %s -> %s\n", d->entradas[i].nombre, d->entradas[i].valor, d->entradas[i].tipoDato, d->entradas[i].tipoSimbolo, d->entradas[i].ambito, d->entradas[i].descripcion);
        }


    }
    fclose(res);
}

void generarGrafica(char*nombre) {
}