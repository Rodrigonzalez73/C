#include <stdio.h>

float calculoPrecio (float xprecio, float xlitros) {

    float total;
    total = xprecio * xlitros;
    return total; 
}

int main () {

    float precioNafta,litros;

     printf("Ingrese cuantos litros de nafta desea comprar:\n");
     scanf("%f",&litros);
     printf("Ingrese el precio del litro de nafta:\n");
     scanf("%f",&precioNafta);

    

    printf("Usted debera pagar: $ %f ",calculoPrecio(precioNafta,litros));

}