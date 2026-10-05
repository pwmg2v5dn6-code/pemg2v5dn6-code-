#include <stdio.h>

int main() {
    int suma = 0;
    int nota;
    float promedio;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Ingrese la nota %d (0-100): ", i);
        scanf("%d", &nota);

        while (nota < 0 || nota > 100) {
            printf("Nota invalida. Ingrese una nota entre 0 y 100: ");
            scanf("%d", &nota);
        }

        suma = suma + nota;
    }

    promedio = suma / 10.0;

    printf("\nLa suma de las notas es: %d\n", suma);
    printf("El promedio del estudiante es: %.2f\n", promedio);

    return 0;
}
