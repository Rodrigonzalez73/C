#include <stdio.h>

int main(){
    int num1, num2, num3;
    char oper;

    printf("<<<Bienvenido>>>\n");
    printf("Elija el tipo de operacion, en la que la letra A es suma, B resta, C multiplicaci�n y D divisi�n\n");
    scanf("%c", &oper);

    printf("Ingrese un numero\n");
    scanf("%d", &num1);

    printf("Ingrese otro numero\n");
    scanf("%d", &num2);

    num3 = operacion(oper, num1, num2);

    printf("El resultado de la operacion es %d\n", num3);
    return 0;
}

int operacion(oper, num1, num2){
    int num3;

    switch(oper){
        case 'A':
            num3 = num1 + num2;
            break;
        case 'B':
            num3 = num1 - num2;
            break;
        case 'C':
            num3 = num1 * num2;
            break;
        case 'D':
            num3 = num1 / num2;
            break;
        default:
            printf("El n�mero ingresado es inv�lido\n");
    }

    return num3;
}

