#include <stdio.h>
#include <stdlib.h>

/*Diseñar un programa que permita cargar números enteros por teclado (finaliza 
con 0) e insertarlos al inicio de la lista. Luego, mostrar todos los valores 
ingresados.*/

struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

int main() {
    struct Nodo* lista = NULL;  // Punteroinicio de la lista
    struct Nodo* nuevo;         // Puntero crear nuevos nodos
    int numero;

    // Cargar números por teclado 
    printf("Ingrese numeros enteros (finaliza con 0):\n");
    do {
        printf("Numero: ");
        scanf("%d", &numero);

        if (numero != 0) {
            // Reservar espacio para el nuevo nodo
            nuevo = (struct Nodo*)malloc(sizeof(struct Nodo));

            // Verificar que se reservó memoria correctamente
            if (nuevo == NULL) {
                printf("No se pudo asignar memoria.\n");
                return 1;
            }

            // Cargar dato en el nodo
            nuevo->dato = numero;

            // Insertar el nodo al inicio de la lista
            nuevo->siguiente = lista;
            lista = nuevo;
        }

    } while (numero != 0);

    // Mostrar valores ingresados
    printf("\nNumeros ingresados (en orden inverso al ingreso):\n");
    struct Nodo* aux = lista;
    while (aux != NULL) {
        printf("%d\n", aux->dato);
        aux = aux->siguiente;
    }

    // Liberar memoria 
    aux = lista;
    while (aux != NULL) {
        struct Nodo* temp = aux;
        aux = aux->siguiente;
        free(temp);
    }

    return 0;
}
