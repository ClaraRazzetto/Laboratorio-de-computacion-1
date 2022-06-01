/*
8. Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los 
10 números en pantalla mediante un solo array
*/
#include<stdio.h>
#include<stdlib.h>

void main(){

    int vector1[5];
    int vector2[5];
    int vector3[10];
    
    printf("Ingrese 5 valores al vector 1:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &vector1[i]);
    }

    printf("Ingrese 5 valores al vector 2:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &vector2[i]);
    }
    
    //cargo el vector 3 
    for (int i = 0; i < 10; i++)
    {
        if(i < 5)
        {
            vector3[i]= vector1[i];
        }
        else
        {
            int j = 0;
            vector3[i]=vector2[j];
            j++;
        }
        
    }
    
    printf("Vector:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%i\n",vector3[i]);
    }

    system("pause");
}