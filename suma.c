#include <stdio.h>

int suma (int xa,int xb){
    return xa+xb;
}

int main (){

    int a,b,res;
    printf("Ingrese el valor de a\n");
    scanf("%d",&a);
    printf("Ingrese el valor de b\n");
    scanf("%d",&b);
    res=suma(a,b);
    if(res>20){
        printf("El resutaldo supera el valor de 20\n");
    } else{ printf("el resultado no supera el valor de 20");
    }



}
