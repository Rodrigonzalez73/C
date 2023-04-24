#include <stdio.h>

void apuestas_entre_valores(int n, int valor_min, int valor_max) {
    int num, importe;
    for (int i = 1; i <= n; i++) {
        printf("Ingrese el número de la apuesta %d: ", i);
        scanf("%d", &num);
        printf("Ingrese el importe de la apuesta %d: ", i);
        scanf("%d", &importe);
        if (importe >= valor_min && importe <= valor_max) {
            printf("Apuesta número %d tiene un importe de $%d\n", num, importe);
        }
    }
}

void apuestas_mayores_3000(int n) {
    int num, importe;
    for (int i = 1; i <= n; i++) {
        printf("Ingrese el número de la apuesta %d: ", i);
        scanf("%d", &num);
        printf("Ingrese el importe de la apuesta %d: ", i);
        scanf("%d", &importe);
        if (importe > 3000) {
            printf("Apuesta número %d tiene un importe de $%d\n", num, importe);
        }
    }
}

int main() {
    int N, valor_min, valor_max;
    
    // Consulta 1
    printf("Ingrese la cantidad de apuestas: ");
    scanf("%d", &N);
    printf("Ingrese el valor mínimo: ");
    scanf("%d", &valor_min);
    printf("Ingrese el valor máximo: ");
    scanf("%d", &valor_max);
    apuestas_entre_valores(N, valor_min, valor_max);
    
    // Consulta 2
    printf("Ingrese la cantidad de apuestas: ");
    scanf("%d", &N);
    apuestas_mayores_3000(N);
    
    return 0;
}
