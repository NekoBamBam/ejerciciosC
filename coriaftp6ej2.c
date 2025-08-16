#include <stdio.h>

int main() {
    float calificaciones[5][3];
    float sumaAlumno, promedioAlumno;
    float sumaGeneral = 0;
    int i, j;

    // Leer calificaciones de los alumnos
    for (i = 0; i < 5; i++) {
        printf("Alumno %d:\n", i + 1);
        sumaAlumno = 0;
        for (j = 0; j < 3; j++) {
            printf("  Ingrese calificación %d: ", j + 1);
            scanf("%f", &calificaciones[i][j]);
            sumaAlumno += calificaciones[i][j];
        }
        promedioAlumno = sumaAlumno / 3.0;
        printf("  Promedio del alumno %d: %.2f\n\n", i + 1, promedioAlumno);
        sumaGeneral += promedioAlumno;
    }

    // Calcular y mostrar el promedio general
    float promedioGeneral = sumaGeneral / 5.0;
    printf("Promedio general de los 5 alumnos: %.2f\n", promedioGeneral);

    return 0;
}
