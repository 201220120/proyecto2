
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <string.h>

#include "funciones.h"

/* Implementación de las funciones sobre diccionarios */

/* 
 * Crea el espacio para almacenar las entradas del diccionario
 */
void inicializar_diccionario2(BIBLIOTECA2 *d) {
	d->tamano = 0;
	d->entradas = (ENTRADA2 *) malloc(MAX_DICCIONARIO2 * sizeof(ENTRADA2));
	if (d->entradas == NULL) {
		printf("ERROR: no hay memoria para el diccionario\n");
		exit(1);
	}
}

/* 
 * Libera el espacio para almacenar las entradas del diccionario
 */
void liberar_diccionario2(BIBLIOTECA2 *d) {
	free(d->entradas);
	d->tamano = 0;
}

/*
 * Inserta un par (nombre, valor) en el diccionario, o sobrescribe
 * el valor si ya existía esa variable
 */
void insertar_diccionario2(BIBLIOTECA2 *d, char * nombre, char* valor) {
	ENTRADA2 * entrada = buscar_diccionario2(d, nombre);
	if (entrada != NULL) {
		/* Entrada ya existe -> sobrescribirla */
		entrada->valor = valor;
	}
	else {
		/* Entrada nueva -> anadirla al final si hay espacio */
		if (d->tamano < MAX_DICCIONARIO2) {
			d->entradas[d->tamano].nombre = nombre;
			d->entradas[d->tamano].valor = valor;	
			d->tamano++;
		}
		else {
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
ENTRADA2 * buscar_diccionario2(BIBLIOTECA2 *d, char * nombre) {
	int i;
	for (i=0; i < d->tamano; i++){
		if (strcmp(d->entradas[i].nombre, nombre)==0){ 
			/* Encontrada -> devolver puntero a esa entrada */
			return(d->entradas+i);
		}
	}
	/* no encontrada */
	return (NULL);
}

/*
 * Borra la entrada asociada al nombre la variables, desplazando las entradas
 * siguientes una posicion atras
 */
void eliminar_diccionario2(BIBLIOTECA2 *d, char * nombre) {
	int encontrada = NO;
	int i;
	for (i=0; i < d->tamano; i++){
		if (!encontrada) {
			if (strcmp(d->entradas[i].nombre, nombre)==0){ 
				/* Encontrada  */
				encontrada = SI;
			}
		}
		else {
			/* Encontrada -> sobreescribir las anteriores */
			d->entradas[i-1].nombre = d->entradas[i].nombre;
			d->entradas[i-1].valor = d->entradas[i].valor;
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
void volcar_diccionario2(BIBLIOTECA2 *d) {
	int i;
	for (i=0; i < d->tamano; i++){
		printf("\t%s -> %s\n", d->entradas[i].nombre, d->entradas[i].valor);
	}
}
