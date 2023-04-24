//Algoritmo frigorias


#include <stdio.h>

float calculoVolumen (float xancho, float xlargo, float xalto ){

    float volumen;
    volumen = xancho * xlargo * xalto ;

    volumen = volumen * 50;

    return volumen;

}

int main (){

    float ancho, largo, alto;

    printf("<<<BIENVENIDOS!>>> \n");
    printf("Ingrese el ancho de la habitacion");
    scanf("%f",&ancho);
    printf("Ingrese el largo de la habitacion");
    scanf("%f",&largo);
    printf("Ingrese el alto de la habitacion");
    scanf("%f",&alto);

    printf("Usted necesitara la siguiente cantidad de frigorias %f ",calculoVolumen (ancho, largo, alto ));



}