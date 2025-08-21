#include <stdio.h>

/*Crear un procedimiento que reciba un caracter y un número, e imprima un 
“triángulo” formado por ese caracter, que tenga como anchura inicial la que se 
ha indicado.  Por ejemplo, si la caracter es * y la anchura es 4, debería mostrar 
en pantalla:  
****   
***   
**   
*   
*/

void imprimir_triangulo(char caracter, int anchura) {
    for (int i = anchura; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", caracter);
        }
        printf("\n");
    }
}

int main() {
    char c;
    int ancho;

    printf("Introduce un caracter: ");
    scanf(" %c", &c);  // Espacio antes de %c para ignorar espacios o saltos de línea previos
    printf("Introduce la anchura inicial del triángulo: ");
    scanf("%d", &ancho);

    imprimir_triangulo(c, ancho);

    return 0;
}
