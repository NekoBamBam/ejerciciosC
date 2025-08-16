#include <stdio.h>

int main() {
    int numeros[5];
    int duplicados[5];

    // Leer 5 números por teclado
    printf("Ingrese 5 números:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

  
    for (int i = 0; i < 5; i++) {
        duplicados[i] = numeros[i] * 2;
    }

   
    printf("\nNúmeros multiplicados por 2:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", duplicados[i]);
    }

    printf("\n");

    return 0;
}
