/*Suponiendo que cada uno de los siguientes algoritmos son subprogramas, analizar y completar el
ambiente, también realizar las adecuaciones para generar el algoritmo principal.
Realizar el seguimiento determinando cuál será el resultado para el lote de prueba dado. Responda las
preguntas teniendo en cuenta lo efectuado.
*/

/*. Lote de prueba: 20, 14, -2, 0,10, 8,0, -1, 5*/


int acumm (int xacum){
    int acum,c;
    acum = 0;
    scanf("%d",c);
    while (c != 0){
        acum = acum+c;
        scanf("%d",c);
    }
    return c;
}

int main (){

    int acum;

    acumm (acum);

}