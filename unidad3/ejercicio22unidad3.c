/*Ejercicio 22
Se cuenta con información de los pedidos de medicamentos realizados por distintas farmacias a una
droguería. Por cada pedido se ingresa:
 CUIL de la farmacia,
 Tipo de medicamento (‘c’: comprimido,´i´: inyectable, ‘j’: jarabe)
 cantidad de unidades.
El ingreso de pedidos de medicamentos finaliza con cantidad de unidades nula.
Construir un algoritmo, que, usando subprogramas, permita informar si el CUIL de la farmacia que
mayor cantidad de inyectables pidió coincide con el CUIL de la Farmacia que menos jarabes solicitó.*/



#include <stdio.h>




int main (){

    int cuil,cant;
    char tm;
    printf("<<<BIENVENIDO>>\n");
    printf("Ingrese el cuil de la farmacia\n");
    scanf("%d",cuil);
        while (cuil != 0)
        {
            printf("Ingrese tipo de medicamento c: comprimido, i: inyectable, j: jarabe \n ");
            scanf("%c",tm);
            printf("Ingrese la cantidad\n");
            scanf("%d",cant);
        }
        


}