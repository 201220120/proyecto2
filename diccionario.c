
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
	d->entradas = (ENTRADA *) malloc(MAX_DICCIONARIO * sizeof(ENTRADA));
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
void insertar_diccionario(DICCIONARIO *d, char * nombre, double valor) {
	ENTRADA * entrada = buscar_diccionario(d, nombre);
	if (entrada != NULL) {
		/* Entrada ya existe -> sobrescribirla */
		entrada->valor = valor;
	}
	else {
		/* Entrada nueva -> anadirla al final si hay espacio */
		if (d->tamano < MAX_DICCIONARIO) {
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
ENTRADA * buscar_diccionario(DICCIONARIO *d, char * nombre) {
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
void eliminar_diccionario(DICCIONARIO *d, char * nombre) {
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
void volcar_diccionario(DICCIONARIO *d) {
	int i;
	for (i=0; i < d->tamano; i++){
		printf("\t%s -> %f\n", d->entradas[i].nombre, d->entradas[i].valor);
	}
}
