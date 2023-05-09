#include <stdio.h>

int suma (int xa,int xb){
    int sum;
    sum = xa+xb;
    return (sum);
}

void informa (int resultado,int xa,int xb){
    if(resultado>20){
        printf("El resultado supera el valor de 20");}
        else{
            printf("el resultado no supera el valor de 20");
        }

}

int main (){
    int a,b,res;
    printf("ingrese el num 1\n");
    scanf("%d",&a);
    printf("Ingrese el num 2\n");
    scanf("%d",&b);

    res=suma(a,b);
    informa(res,a,b);
}
