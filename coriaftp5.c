#include <stdio.h>

int main() {
    int dni, medioPago, tarjeta = 0, cuotas = 0;
    float total = 4600.0, interes = 0.0;

    // Validar DNI
    printf("Ingrese su DNI: ");
    scanf("%d", &dni);
    if (dni < 1000000 || dni > 99999999) {
        printf("DNI inválido. Debe estar entre 1000000 y 99999999.\n");
        return 1;
    }

    // Seleccionar medio de pago
    printf("Seleccione medio de pago:\n");
    printf("1 - Efectivo\n");
    printf("2 - Tarjeta de crédito\n");
    scanf("%d", &medioPago);
    
    if (medioPago != 1 && medioPago != 2) {
        printf("Opción de medio de pago inválida.\n");
        return 1;
    }

    if (medioPago == 2) {
        // Seleccionar tarjeta
        printf("Seleccione tipo de tarjeta:\n");
        printf("1 - Visa\n");
        printf("2 - American Express\n");
        printf("3 - Mercado Pago\n");
        printf("4 - Cabal\n");
        scanf("%d", &tarjeta);

        if (tarjeta < 1 || tarjeta > 4) {
            printf("Opción de tarjeta inválida.\n");
            return 1;
        }

        // Ingresar cantidad de cuotas
        printf("Ingrese cantidad de cuotas (1, 3, 6 o 12): ");
        scanf("%d", &cuotas);

        if (cuotas != 1 && cuotas != 3 && cuotas != 6 && cuotas != 12) {
            printf("Cantidad de cuotas inválida.\n");
            return 1;
        }

        // Calcular interés
        if (cuotas == 3) {
            interes = 0.04;
        } else if (cuotas == 6 || cuotas == 12) {
            interes = 0.08;
        }
    }

    float montoFinal = total + (total * interes);

    // Mostrar resumen
    printf("\n------ RESUMEN DE OPERACION ------\n");
    printf("DNI: %d\n", dni);
    printf("Medio de pago: %s\n", medioPago == 1 ? "Efectivo" : "Tarjeta de crédito");

    if (medioPago == 2) {
        char *nombreTarjeta;
        switch (tarjeta) {
            case 1: nombreTarjeta = "Visa"; break;
            case 2: nombreTarjeta = "American Express"; break;
            case 3: nombreTarjeta = "Mercado Pago"; break;
            case 4: nombreTarjeta = "Cabal"; break;
        }
        printf("Tarjeta: %s\n", nombreTarjeta);
        printf("Cuotas: %d\n", cuotas);
        printf("Interés aplicado: %.2f%%\n", interes * 100);
    } else {
        printf("Cuotas: 1 (sin interés)\n");
    }

    printf("Total a pagar: $%.2f\n", montoFinal);
    printf("----------------------------------\n");

    return 0;
}
