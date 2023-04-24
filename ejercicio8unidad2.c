#include <stdio.h>

void informar_bancos_necesarios(int alumnos_inscriptos, int bancos_existentes) {
    int asientos_disponibles = 0;
    int bancos_necesarios = 0;
    for (int i = 1; i <= bancos_existentes; i++) {
        asientos_disponibles += 2;
    }
    if (alumnos_inscriptos > asientos_disponibles) {
        bancos_necesarios = (alumnos_inscriptos - asientos_disponibles) / 2;
        if ((alumnos_inscriptos - asientos_disponibles) % 2 != 0) {
            bancos_necesarios++;
        }
    }
    if (bancos_necesarios == 0) {
        printf("Los bancos existentes son suficientes para los alumnos inscriptos.\n");
    } else {
        printf("Es necesario agregar %d bancos.\n", bancos_necesarios);
    }
}

int main() {
    int alumnos_inscriptos, bancos_existentes = 30;
    printf("Ingrese la cantidad de alumnos inscriptos: ");
    scanf("%d", &alumnos_inscriptos);
    informar_bancos_necesarios(alumnos_inscriptos, bancos_existentes);
    return 0;
}