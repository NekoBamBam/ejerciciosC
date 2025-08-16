#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definir la estructura del nodo
struct Nodo {
    char url[100];
    struct Nodo* siguiente;
};

// Función para apilar una URL
void apilar(struct Nodo** pila, char nuevaUrl[]) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));

    if (nuevoNodo == NULL) {
        printf("Error al asignar memoria.\n");
        return;
    }

    strcpy(nuevoNodo->url, nuevaUrl);
    nuevoNodo->siguiente = *pila;
    *pila = nuevoNodo;
}

// Función para desapilar
void desapilar(struct Nodo** pila) {
    if (*pila == NULL) {
        printf("No hay páginas en el historial.\n");
        return;
    }

    struct Nodo* temp = *pila;
    printf("Volviendo desde: %s\n", temp->url);
    *pila = temp->siguiente;
    free(temp);
}

// Función para ver la página actual
void verPaginaActual(struct Nodo* pila) {
    if (pila == NULL) {
        printf("No hay páginas abiertas.\n");
    } else {
        printf("Página actual: %s\n", pila->url);
    }
}

// Función para mostrar todo el historial
void mostrarHistorial(struct Nodo* pila) {
    if (pila == NULL) {
        printf("Historial vacío.\n");
        return;
    }

    printf("Historial de navegación:\n");
    struct Nodo* aux = pila;
    while (aux != NULL) {
        printf("- %s\n", aux->url);
        aux = aux->siguiente;
    }
}

// Liberar toda la memoria antes de salir
void liberarPila(struct Nodo** pila) {
    struct Nodo* aux = *pila;
    while (aux != NULL) {
        struct Nodo* temp = aux;
        aux = aux->siguiente;
        free(temp);
    }
    *pila = NULL;
}

int main() {
    struct Nodo* historial = NULL;
    int opcion;
    char url[100];

    do {
        printf("\n--- Menu ---\n");
        printf("1. Ingresar nueva pagina\n");
        printf("2. Volver a pagina anterior\n");
        printf("3. Ver pagina actual\n");
        printf("4. Mostrar historial\n");
        printf("5. Salir\n");
        printf("Seleccion: ");
        scanf("%d", &opcion);
        getchar();  // Consumir el Enter pendiente

        switch (opcion) {
            case 1:
                printf("Ingrese URL: ");
                fgets(url, 100, stdin);
                url[strcspn(url, "\n")] = '\0'; // Eliminar el Enter final
                apilar(&historial, url);
                break;

            case 2:
                desapilar(&historial);
                break;

            case 3:
                verPaginaActual(historial);
                break;

            case 4:
                mostrarHistorial(historial);
                break;

            case 5:
                liberarPila(&historial);
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida.\n");
        }
    } while (opcion != 5);

    return 0;
}
