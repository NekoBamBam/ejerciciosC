#include <stdio.h>

//TP4 EJ8
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
