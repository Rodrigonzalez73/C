#include <stdio.h>

// Funci�n que retorna la cantidad de deportistas de categor�a A
int contarDeportistasCategoriaA(int numDeportistas) {
    int contador = 0;
    for (int i = 0; i < numDeportistas; i++) {
        char categoria;
        printf("Ingrese la categor�a del deportista %d (A o B): ", i+1);
        scanf(" %c", &categoria);
        if (categoria == 'A') {
            contador++;
        }
    }
    return contador;
}

// Funci�n que retorna la categor�a del deportista con el mayor puntaje
char obtenerCategoriaDeportistaMayorPuntaje(int numDeportistas) {
    int puntajeMayor = -1;
    char categoriaDeportistaMayorPuntaje;
    for (int i = 0; i < numDeportistas; i++) {
        char categoria;
        int puntaje;
        printf("Ingrese el puntaje del deportista %d: ", i+1);
        scanf("%d", &puntaje);
        printf("Ingrese la categor�a del deportista %d (A o B): ", i+1);
        scanf(" %c", &categoria);
        if (puntaje > puntajeMayor) {
            puntajeMayor = puntaje;
            categoriaDeportistaMayorPuntaje = categoria;
        }
    }
    return categoriaDeportistaMayorPuntaje;
}

// Funci�n principal
int main() {
    int numDeportistas;
    printf("Ingrese la cantidad de deportistas: ");
    scanf("%d", &numDeportistas);

    int numDeportistasCategoriaA = contarDeportistasCategoriaA(numDeportistas);
    printf("La cantidad de deportistas de categor�a A es: %d\n", numDeportistasCategoriaA);

    char categoriaDeportistaMayorPuntaje = obtenerCategoriaDeportistaMayorPuntaje(numDeportistas);
    printf("La categor�a del deportista con el mayor puntaje es: %c\n", categoriaDeportistaMayorPuntaje);

    return 0;
}
