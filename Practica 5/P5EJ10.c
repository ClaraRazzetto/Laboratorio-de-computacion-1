/*
10. Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente 
la suma de todos los números que no están en la diagonal principal
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int matriz[3][3]={1,2,2,2,1,2,2,2,1}, suma=0;

    printf("Matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", matriz[i][j]);

            if(i!=j){
                suma += matriz[i][j];
            }
        }
        printf("\n");
    }

    printf("Suma de los valores que no estan en la diagonal princial: %i\n", suma);
  
    system ("pause");
}