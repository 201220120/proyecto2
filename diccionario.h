/* 
 * File:   diccionario.h
 * Author: braian
 *
 * Created on 20 de mayo de 2015, 08:19 PM
 */

#ifndef _DICCIONARIO_H
#define _DICCIONARIO_H


#define SI 1
#define NO 0

#define MAX_DICCIONARIO 1000

struct entrada {
	char * nombre;
	double valor;
};

typedef struct entrada ENTRADA;

struct diccionario {
	int tamano;
	ENTRADA * entradas;
};

typedef struct diccionario DICCIONARIO;


/* Interfaz de las funciones sobre diccionarios */

void inicializar_diccionario(DICCIONARIO *d);
void liberar_diccionario(DICCIONARIO *d);
void insertar_diccionario(DICCIONARIO *d, char * nombre, double valor);
ENTRADA * buscar_diccionario(DICCIONARIO *d, char * nombre);
void eliminar_diccionario(DICCIONARIO *d, char * nombre);
void volcar_diccionario(DICCIONARIO *d);

#endif  /* _DICCIONARIO_H */

