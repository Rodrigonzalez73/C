#include <stdio.h>

float calcular_comision(int cantidad_dolares, float precio_dolar) {
    float comision = 0;
    if (cantidad_dolares > 5000) {
        comision = cantidad_dolares * precio_dolar * 0.05;
    }
    return comision;
}

float calcular_monto_total(int cantidad_dolares, float precio_dolar) {
    float comision = calcular_comision(cantidad_dolares, precio_dolar);
    float monto_total = cantidad_dolares * precio_dolar + comision;
    return monto_total;
}

void imprimir_ticket(int cantidad_dolares, float precio_dolar) {
    float comision = calcular_comision(cantidad_dolares, precio_dolar);
    float monto_total = calcular_monto_total(cantidad_dolares, precio_dolar);
    
    printf("Cantidad de dolares comprados: %d\n", cantidad_dolares);
    printf("Precio de cada dolar: %.2f\n", precio_dolar);
    printf("Monto de la comision: %.2f\n", comision);
    printf("Monto total a pagar: %.2f\n", monto_total);
}

int main() {
    int cantidad_dolares;
    float precio_dolar;
    
    printf("Ingrese la cantidad de dolares que desea comprar: ");
    scanf("%d", &cantidad_dolares);
    
    printf("Ingrese el precio de venta de cada dolar: ");
    scanf("%f", &precio_dolar);
    
    imprimir_ticket(cantidad_dolares, precio_dolar);
    
    return 0;
}
