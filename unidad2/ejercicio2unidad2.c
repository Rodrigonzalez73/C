#include <stdio.h>
#include <math.h>

int cuadrado (int xnum){
    int cuad,num;
    cuad = xnum * xnum;
    return cuad;
}

float quinta (int xnum){

    int div;
    div = xnum / 5;
    return div;
}

int main () {
    int num ;
    printf("Ingrese un numero:\n");
    scanf("%i",&num);

    printf("El cuadrado del numero es: %i"),cuadrado(num);

    printf("La quinta parte del numero es:%f \n"),quinta(num);
}