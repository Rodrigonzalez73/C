#include <stdio.h>

bool esMujer (char xsexo){

    if (xsexo == 'F'){
        return (true);
    }

    else {return (false);
    }
}


int main (){

    char apellido [1];
    char sexo;
    float estatura, acumF,acumM;
    int i, cont_F, dni, cant;

    cont_F = 0;
    acumF = 0;
    acumM = 0;

    printf("Ingrese la cantidad de deportistas\n");
    scanf("%d",&cant);

    for (i=0;i<cant;i++){
        printf("Ingrese los datos del deportista",i);
        scanf("%c",&apellido);
        scanf("%d",&dni);
        scanf("%c",&sexo);
        scanf("f",&estatura);
        if(esMujer(sexo)){

        }



    }

}
