#include <stdio.h>

/*“Pedir al usuario que ingrese dos números (permitir ingresar número con 
decimales). Luego presentar el siguiente menú: 
1. Informar su suma 
2. Informar su resta 
3. Informar su multiplicación 
4. Informar su división 
5. Salir 
Seleccione una operación: 
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 
5 el programa debe terminar.” 
Vamos a modificar el mismo de la siguiente manera, de modo que sean 6 las 
opciones válidas: 
1. Informar su suma 
2. Informar su resta 
3. Informar su multiplicación 
4. Informar su división 
5. Informar cantidad de operaciones realizadas 
6. Salir 
Seleccione una operación: 
Se agregó una opción 5 que muestra la cantidad de operaciones que realizó el usuario. 
El menú se debe seguir mostrando al usuario mientras este no ingrese la opción 6. */

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
