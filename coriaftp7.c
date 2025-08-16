#include <stdio.h>

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
