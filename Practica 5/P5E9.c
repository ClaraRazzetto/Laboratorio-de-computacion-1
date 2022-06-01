/*
9 Escriba un programa que lea 5 números por teclado, los copie a otro array 
multiplicados por 2 y muestre el segundo array
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int arreglo1[5], arreglo2[5];
    
    printf("Ingrese 5 valores\n");
    for (int i = 0; i < 5; i++)
    {
       
       scanf("%i", &arreglo1[i]);
    }
 
    for (int i = 0; i < 5; i++)
    {
       arreglo2[i]=arreglo1[i]*2;
    }

    printf("Vector 2:\n");
    for (int i = 0; i <5 ; i++)
    {
        printf("%i\n",arreglo2[i]);
    }
    
    system ("pause");
}