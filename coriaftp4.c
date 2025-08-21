#include <stdio.h>

/*Pedir el salario bruto de un empleado y calcular el salario neto con descuentos 
del 11% de jubilación (Jub) y 3% de obra social (OS). Mostrar los importes de los 
descuentos correspondientes. 
Salario Neto = Salario Bruto – Dto. Jub – Dto. OS*/

int main() {
    float salarioBruto, descuentoJub, descuentoOS, salarioNeto;

    printf("Ingrese el salario bruto del empleado: ");
    scanf("%f", &salarioBruto);

    descuentoJub = salarioBruto * 0.11; 
    descuentoOS = salarioBruto * 0.03; 

    salarioNeto = salarioBruto - descuentoJub - descuentoOS;

    printf("Descuento por Jubilación (11%%): $%.2f\n", descuentoJub);
    printf("Descuento por Obra Social (3%%): $%.2f\n", descuentoOS);
    printf("Salario Neto: $%.2f\n", salarioNeto);

    return 0;
}
