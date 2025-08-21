#include <stdio.h>

/*Crear una función recursiva que cuente la cantidad de dígitos de un número 
entero positivo. */

// Función recursiva para contar los dígitos
int contarDigitos(int n) {
    if (n < 10) {
        return 1; // Caso base: un solo dígito
    } else {
        return 1 + contarDigitos(n / 10); // Llamada recursiva
    }
}

int main() {
    int numero;

    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, ingrese un número positivo.\n");
    } else {
        int cantidad = contarDigitos(numero);
        printf("El número %d tiene %d dígito(s).\n", numero, cantidad);
    }

    return 0;
}
