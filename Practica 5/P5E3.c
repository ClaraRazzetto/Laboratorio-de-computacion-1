#include <stdio.h>
#include <stdlib.h>

void main(){
    int arreglo [5];
    int i,suma;

    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un valor");
        scanf("%i",&arreglo[i]);
        suma += arreglo[i];
    }

    printf("La suma de los componentes es: %i", suma);
    printf("El promedio de los componentes inglesados es: %i", suma/5);
    
    system("pause");
}