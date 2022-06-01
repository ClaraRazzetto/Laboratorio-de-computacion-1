/* Dado el vector {10, 20, 5, 15, 30, 20}
- Informar el vector de la forma: "Indice: X, Valor: Y".
- Totalizar el vector e informar el total.
- Informar el contenido de las posiciones impares.
- Informar las posiciones que contienen números impares.
- Informar el mayor número.
- Informar cuántas veces aparece el número 20
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
     
    int vector[]={10, 20, 5, 15, 30, 20};
    int i, suma=0, mayor = vector[0], cantidad=0;

    printf("Vector:\n");

    for ( i = 0; i < 6; i++)
    {
        //mostrar el vector
        printf("Indice %i, Valor %i \n", i, vector[i]);

        //suma de los elementos del vector
        suma += vector[i];

    }

    printf("\nLa suma de los elementos del vector es: %i\n\n", suma);

    //informar contenido en posiciones impares
    printf("Contenido en posiciones impares:\n");
    for ( i = 1; i < 6; i += 2)
    {
        printf("Indice %i, Valor %i \n", i, vector[i]);
        
    }

    printf("\nPosiciones que contienen valores impares:\n");
    for ( i = 0; i < 6; i++)
    {
        
        //posiciones que contienen números impares
        if(vector[i]%2 != 0)
        {
            printf("Indice %i, Valor %i \n", i, vector[i]);
        }

        //mayor número 
        if(vector[i]>mayor){
            mayor = vector[i];
        }
        
        //cantidad de veces que aparece el número 20
        if (vector[i]==20){
            cantidad += 1;
        }
    }
    
    printf("\nEl mayor valor encontrado en el vector es: %i\n\n", mayor);

    printf("El valor 20 aparece un total de: %i veces\n\n", cantidad);
 
    system ("pause");
}
