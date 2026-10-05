#include <stdio.h>

int main() {
    int clases, asistencias;
    float porcentaje;

    printf("Ingrese el total de clases programadas: ");
    scanf("%d", &clases);

    printf("Ingrese la cantidad de clases a las que asistio: ");
    scanf("%d", &asistencias);

    porcentaje = (asistencias * 100.0) / clases;

    printf("\nPorcentaje de asistencia: %.2f%%\n", porcentaje);

    if (porcentaje >= 50) {
        printf("El estudiante CUMPLE con el 50%% de asistencia.\n");
    } else {
        printf("El estudiante NO CUMPLE con el 50%% de asistencia.\n");
    }

    return 0;
}
