#include <stdio.h>
#include <math.h>

float hipotenusa (float xa, float xb){
    //comienzo
    float hip;
    hip = sqrt(pow(xa,2))+pow(xb,2);
    return(hip);
}

int main () {
    float a, b, c;
    printf ("Ingrese el valor del cateto mayor:\n");
    scanf("%f",&a);
    printf("Ingrese el valor del cateto Menor:\n ");
    scanf("%f",&b);

    c=hipotenusa(a,b);
    printf("El valor de la hipotenusa es:%f \n",c);

}