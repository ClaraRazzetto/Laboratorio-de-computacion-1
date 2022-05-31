/*Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la 
forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, arreglo[5];

    for ( i = 0; i < 5; i++)
    {
       printf("Ingrese un valor\n");
       scanf("%i", &arreglo[i]);
    }
 
    printf("Valores en el orden ingresado:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Indice %i, Valor %i \n", i, arreglo[i]);
    }

    printf("Valores de atras hacia adelante:\n");
    for ( i = 4; i >= 0; i--)
    {
        printf("Indice %i, Valor %i\n", i, arreglo[i]);
    }
    
    system ("pause");
}