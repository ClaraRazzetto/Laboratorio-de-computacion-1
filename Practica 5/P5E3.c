/* Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola, 
mostrar cuántas veces se repite el número 5. */

#include <stdio.h>
#include <stdlib.h>

void main(){

    int i, arreglo[5], cont;

    cont=0;

    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un valor\n");
        scanf("%i",&arreglo[i]);

         if (arreglo[i]==5)
        {
            cont ++;
        }
    }
    
    printf("El numero 5 aparece en total una cantidad de: %i veces\n", cont);

    system("pause");
}