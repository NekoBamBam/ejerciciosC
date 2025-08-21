#include <stdio.h>
#include <string.h>
#define MAX_PRODUCTOS 10000

/*
Un comercio mantiene su inventario en un arreglo de hasta 10000 productos, 
con la estructura: 
nroItem, producto, marca, tipo, costo, stockMin, stockActual. 
Implementar un sistema que permita:
- Insertar nuevos productos (manteniendo el arreglo ordenado por ‘nroItem’). 
- Borrar productos por código. - Modificar productos.
- Buscar un producto por número de ítem.*/

// Definir la estructura Producto
typedef struct {
    int nroItem;
    char producto[50];
    char marca[30];
    char tipo[30];
    float costo;
    int stockMin;
    int stockActual;
} Producto;

// Prototipos de funciones
void insertarProducto(Producto inventario[], int *cantidad);
void borrarProducto(Producto inventario[], int *cantidad, int nroItem);
void modificarProducto(Producto inventario[], int cantidad, int nroItem);
int buscarProducto(Producto inventario[], int cantidad, int nroItem);
void mostrarProducto(Producto p);

int main() {
    Producto inventario[MAX_PRODUCTOS];
    int cantidad = 0;
    int opcion, nroItem;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Insertar producto\n");
        printf("2. Borrar producto\n");
        printf("3. Modificar producto\n");
        printf("4. Buscar producto\n");
        printf("5. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                insertarProducto(inventario, &cantidad);
                break;
            case 2:
                printf("Ingrese nroItem a borrar: ");
                scanf("%d", &nroItem);
                borrarProducto(inventario, &cantidad, nroItem);
                break;
            case 3:
                printf("Ingrese nroItem a modificar: ");
                scanf("%d", &nroItem);
                modificarProducto(inventario, cantidad, nroItem);
                break;
            case 4:
                printf("Ingrese nroItem a buscar: ");
                scanf("%d", &nroItem);
                int pos;
                pos = buscarProducto(inventario, cantidad, nroItem);
                if (pos != -1) {
                    mostrarProducto(inventario[pos]);
                } else {
                    printf("Producto no encontrado.\n");
                }
                break;
            case 5:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida.\n");
        }
    } while(opcion != 5);

    return 0;
}

// Mostrar un producto
void mostrarProducto(Producto p) {
    printf("NroItem: %d\n", p.nroItem);
    printf("Producto: %s\n", p.producto);
    printf("Marca: %s\n", p.marca);
    printf("Tipo: %s\n", p.tipo);
    printf("Costo: %.2f\n", p.costo);
    printf("Stock Minimo: %d\n", p.stockMin);
    printf("Stock Actual: %d\n", p.stockActual);
}

// Insertar producto ordenado por nroItem
void insertarProducto(Producto inventario[], int *cantidad) {
    if (*cantidad >= MAX_PRODUCTOS) {
        printf("Inventario lleno.\n");
        return;
    }

    Producto nuevo;
    printf("Ingrese nroItem: ");
    scanf("%d", &nuevo.nroItem);
    printf("Ingrese nombre producto: ");
    scanf("%s", nuevo.producto);
    printf("Ingrese marca: ");
    scanf("%s", nuevo.marca);
    printf("Ingrese tipo: ");
    scanf("%s", nuevo.tipo);
    printf("Ingrese costo: ");
    scanf("%f", &nuevo.costo);
    printf("Ingrese stock minimo: ");
    scanf("%d", &nuevo.stockMin);
    printf("Ingrese stock actual: ");
    scanf("%d", &nuevo.stockActual);

    // Buscar posición para insertar
    int i = *cantidad - 1;
    while (i >= 0 && inventario[i].nroItem > nuevo.nroItem) {
        inventario[i+1] = inventario[i];
        i--;
    }
    inventario[i+1] = nuevo;
    (*cantidad)++;
    printf("Producto insertado correctamente.\n");
}

// Borrar producto por nroItem
void borrarProducto(Producto inventario[], int *cantidad, int nroItem) {
    int pos = buscarProducto(inventario, *cantidad, nroItem);
    if (pos == -1) {
        printf("Producto no encontrado.\n");
        return;
    }

    for (int i = pos; i < *cantidad - 1; i++) {
        inventario[i] = inventario[i+1];
    }
    (*cantidad)--;
    printf("Producto borrado correctamente.\n");
}

// Modificar producto
void modificarProducto(Producto inventario[], int cantidad, int nroItem) {
    int pos = buscarProducto(inventario, cantidad, nroItem);
    if (pos == -1) {
        printf("Producto no encontrado.\n");
        return;
    }

    printf("Modificando producto nroItem %d\n", nroItem);
    printf("Ingrese nuevo nombre producto: ");
    scanf("%s", inventario[pos].producto);
    printf("Ingrese nueva marca: ");
    scanf("%s", inventario[pos].marca);
    printf("Ingrese nuevo tipo: ");
    scanf("%s", inventario[pos].tipo);
    printf("Ingrese nuevo costo: ");
    scanf("%f", &inventario[pos].costo);
    printf("Ingrese nuevo stock minimo: ");
    scanf("%d", &inventario[pos].stockMin);
    printf("Ingrese nuevo stock actual: ");
    scanf("%d", &inventario[pos].stockActual);

    printf("Producto modificado correctamente.\n");
}

// Buscar producto por nroItem — búsqueda binaria porque está ordenado
int buscarProducto(Producto inventario[], int cantidad, int nroItem) {
    int inicio = 0, fin = cantidad - 1, medio;

    while (inicio <= fin) {
        medio = (inicio + fin) / 2;
        if (inventario[medio].nroItem == nroItem)
            return medio;
        else if (inventario[medio].nroItem < nroItem)
            inicio = medio + 1;
        else
            fin = medio - 1;
    }
    return -1;
}
