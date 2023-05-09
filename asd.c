#include <stdio.h>

int main() {
    int numeroInicial, numeroFinal, conteo=0, registro;

    printf("Introduce el numero inicial: ");
    scanf("%d", &numeroInicial);

    printf("Introduce el numero final: ");
    scanf("%d", &numeroFinal);

    if (numeroFinal < numeroInicial) {
        int temp = numeroFinal;
        numeroFinal = numeroInicial;
        numeroInicial = temp;
    }

    for (registro = numeroInicial; registro <= numeroFinal; registro++) {
        if (registro >= numeroInicial && registro <= numeroFinal) {
            conteo++;
        }
    }

    printf("Hay %d registros entre %d y %d\n", conteo, numeroInicial, numeroFinal);

    return 0;
}
