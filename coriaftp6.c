#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int opcion;
    int cantidadOperaciones = 0;

    // Pedir los dos números
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    // Menú de opciones
    do {
        printf("\n----- MENU DE OPERACIONES -----\n");
        printf("1. Informar su suma\n");
        printf("2. Informar su resta\n");
        printf("3. Informar su multiplicacion\n");
        printf("4. Informar su division\n");
        printf("5. Informar cantidad de operaciones realizadas\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                resultado = num1 + num2;
                printf("La suma es: %.2f\n", resultado);
                cantidadOperaciones++;
                break;
            case 2:
                resultado = num1 - num2;
                printf("La resta es: %.2f\n", resultado);
                cantidadOperaciones++;
                break;
            case 3:
                resultado = num1 * num2;
                printf("La multiplicacion es: %.2f\n", resultado);
                cantidadOperaciones++;
                break;
            case 4:
                if(num2 != 0) {
                    resultado = num1 / num2;
                    printf("La division es: %.2f\n", resultado);
                } else {
                    printf("Error: No se puede dividir por cero.\n");
                }
                cantidadOperaciones++;
                break;
            case 5:
                printf("Cantidad de operaciones realizadas: %d\n", cantidadOperaciones);
                break;
            case 6:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Intente nuevamente.\n");
        }

    } while(opcion != 6);

    return 0;
}
