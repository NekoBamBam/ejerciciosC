#include <stdio.h>
#include <stdlib.h>

/*Declare tres variables de tipo int para almacenar tres notas ingresadas por el usuario. 
Calcule el promedio y muestre el resultado en pantalla con dos decimales de 
precisión. */

int main()
{
   //Tp 3

   //Grupo: Emir Negrete, Nicolas Franco Coria y Norali Gorosito

   //Punto 7 obligatorio
   //Declarar 3 variables int
   //Que las ingrese el usuario
   //Calcular promedio
   //Mostrar el resultado

   int num1, num2, num3;
   printf("Ingresa un numero de tu nota: ");
   scanf("%d", &num1);
   printf("Ingresa un numero de tu nota: ");
   scanf("%d", &num2);
   printf("Ingresa un numero de tu nota: ");
   scanf("%d", &num3);
   int promedioSuma = num1 + num2 + num3;
   float promedio = promedioSuma / 3.0;
   printf("El promedio de tu nota es de: %2.f", promedio);

   //Punto 1
   //Declarar 3 variables int con valores 10, 20, 30
   //Imprimir en pantalla
    /*
   int diez = 10;
   int veinte = 20;
   int treinta = 30;
   printf("Los valores son %d, %d, %d", diez, veinte, treinta);


    //Punto 2
    //Definir una constante float llamada PI = 3,1416
    //Declarar variable float, radio = 5.2
    //Calcular area
    //Imprimir

    float pi = 3.1416;
    float radio = 5.2;
    float radioCuadrado = radio * radio;
    float calcularArea = pi * radioCuadrado;
    printf("El area es %f", calcularArea);


    //Punto 3
    //Declarar dos variables float, con valor: 4.5 y 2.3
    //Mostrar todas sus operaciones

    float num1 = 4.5;
    float num2 = 2.3;
    float sum = num1 + num2;
    float rest = num1 - num2;
    float mult = num1 * num2;
    float div = num1/num2;
    printf("La suma es: %.2f, la resta es: %.2f, la multi es: %.2f y la div es: %.2f", sum, rest, mult, div);

    //Punto 4
    //Declarar variable tipo char y asignarle la letra �A�
    //Mostrar su valor y equivalente en ASCII

    char letra = 'A';
    int letraAscii = 65;
    printf("El equivalente ASCII de: %c es: %d", letra, letraAscii);


    //Punto 5
    //Solicitar a usuario un numero int y un float
    //Imprimir numeros
    int num1;
    float num2;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese un numero decimal: ");
    scanf("%f", &num2);
    printf("Los numeros que ingresaste son: %d y %f", num1, num2)

    //Punto 6
    //Declarar variables tipo: char, float, int y double
    //Utilizar funcion sizeof() que imprime tama�o en bytes
    char string = 'Hola como estas';
    float pi = 3.14;
    int num = 22;
    double num2 = 9;
    printf("%d", sizeof(string, pi, num, num2));
    */


    return 0;
}
