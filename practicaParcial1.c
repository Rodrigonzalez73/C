#include <stdio.h>

float aumento(float xprecio ,int sum){
    float porcentaje;
    porcentaje = xprecio * sum/100 ;
    return porcentaje;

}

void rubro (char xcod,float xprecio){
    int por;
    float total,aumentoPrecio;
    switch(xcod){
case 'A':
    aumentoPrecio = aumento(xprecio,10);
    break;
case 'B':
    aumentoPrecio = aumento(xprecio,10);
    break;
case 'C':
    aumentoPrecio = aumento(xprecio,15);
    break;
case 'D':
    aumentoPrecio = aumento(xprecio,15);
    break;
case 'E':
    aumentoPrecio = aumento(xprecio,20);
    break;

    }
    total = xprecio + aumentoPrecio;
    printf("El total que pagara segun su rubro es: %2.f\n",total);
}



#include <stdio.h>





int main() {
    float precio;
    char codigo;
    char opcion;

    printf("<<<BIENVENIDOS>>>\n");

    do {
        printf("Ingrese el codigo A, B, C o D: ");
        scanf(" %c", &codigo);
        getchar(); // Consumir el carácter de salto de línea en el buffer de entrada

        while (!(codigo == 'A' || codigo == 'B' || codigo == 'C' || codigo == 'D' || codigo == 'E')) {
            printf("Codigo invalido. Ingrese el codigo A, B, C o D: ");
            scanf(" %c", &codigo);
            getchar();
        }

        printf("Ingrese el precio: ");
        scanf("%f", &precio);
        printf("Codigo: %c\nPrecio: %.2f\n", codigo, precio);
        rubro (codigo,precio);



        printf("Desea ingresar mas datos? (S/N): ");
        scanf(" %c", &opcion);
        getchar();
    } while (opcion == 'S' || opcion == 's');

    return 0;
}

