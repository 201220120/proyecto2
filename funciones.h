#ifndef _BIBLIOTECA_H
#define _BIBLIOTECA_H


#define SI 1
#define NO 0

#define MAX_DICCIONARIO2 2000

struct entrada2 {
	char * nombre;
	char* valor;
};

typedef struct entrada2 ENTRADA2;

struct diccionario2 {
	int tamano;
	ENTRADA2 * entradas;
};

typedef struct diccionario2 BIBLIOTECA2;


/* Interfaz de las funciones sobre diccionarios */

void inicializar_diccionario2(BIBLIOTECA2 *d);
void liberar_diccionario2(BIBLIOTECA2 *d);
void insertar_diccionario2(BIBLIOTECA2 *d, char * nombre, char* valor);
ENTRADA2 * buscar_diccionario2(BIBLIOTECA2 *d, char * nombre);
void eliminar_diccionario2(BIBLIOTECA2 *d, char * nombre);
void volcar_diccionario2(BIBLIOTECA2 *d);

#endif  /* _DICCIONARIO_H */