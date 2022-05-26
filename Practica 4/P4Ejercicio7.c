/*
7. Ingresar un conjunto de números reales distintos de cero. Para finalizar la entrada de 
datos, ingresar un cero. Determinar e informar la cantidad de números que lo forman.
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    float num;
    int contador=0;

    do
    {
        printf("Ingrese un número real distinto de cero o 0 para salir\n");
        scanf("%f", &num);
        if (num!=0){
            contador++;    
        }
    } while (num!=0);
    
    printf("La cantidad de números ingresados es: %i\n", contador);

    system("pause");
}