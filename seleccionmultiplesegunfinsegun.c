#include <stdio.h>

float aumento (float imp,float porc){
return (imp*porc/100);
}

float sueldoDefinitivo(float xsueldo, char xcateg){
    float def;
    def=xsueldo;
    switch(xcateg){
case'A':
    def=def+aumento(xsueldo,15);
case'B':
    def=def+aumento(xsueldo,15);
case'C':
    def=def+aumento(xsueldo,15);
case'D':
    def=def+aumento(xsueldo,10);
case'E':
    def=def+aumento(xsueldo,10);

default:
    printf("Esta categoria no percibe aumento\n");

    }
    return(def);
}

void mostrar (float sueldo,char categ){

    printf("La categoria de la persona es:%s",categ);
    printf("El sueldo de la persona es:%f",sueldo);
    return;

}

int main (){
    float sueldo;
    char categ;
    printf("Ingrse el sueldo de la persona\n");
    scanf("%f",&sueldo);
    printf("Ingrese la categoria de la persona A,B,C,D,E\n");
    scanf("%s",&categ);
    sueldo = sueldoDefinitivo(sueldo,categ);
    mostrar(sueldo,categ);
}
