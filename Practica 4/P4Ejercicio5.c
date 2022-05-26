#include <stdio.h>
#include <stdlib.h>

void main(){

    int dni=39580415;
    int dniIngresado=0;
    int ingresadoCorrectamente=0;
    int intentos = 0;

    
    do
    {
        printf("Ingrese el DNI\n");
        scanf("%i", &dniIngresado);
        intentos++;
        if(dni!=dniIngresado){
            printf("Incorreto! \n");
        }else{
            ingresadoCorrectamente=1;
        }
    } while (dni!= dniIngresado && intentos<3);

    if(ingresadoCorrectamente==1){
        printf("La nota del alumno es: %i \n", 10);
    } else {
        printf("Se terminaron los intentos :( \n");
    }
    
    system("pause");
}