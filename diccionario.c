
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
    for (i = 0; i < d->tamano; i++) {
        char* b = d->entradas[i].tipoDato;
        
        int a = 0;
        
        if (b[0] == 'E') {
            printf("\t%s -> %d -> %s -> %s -> %s -> %s\n", d->entradas[i].nombre,(int)d->entradas[i].valor, d->entradas[i].tipoDato, d->entradas[i].tipoSimbolo, d->entradas[i].ambito, d->entradas[i].descripcion);
        } else {
            printf("\t%s -> %f -> %s -> %s -> %s -> %s\n", d->entradas[i].nombre,d->entradas[i].valor, d->entradas[i].tipoDato, d->entradas[i].tipoSimbolo, d->entradas[i].ambito, d->entradas[i].descripcion);
        }


    }

}
