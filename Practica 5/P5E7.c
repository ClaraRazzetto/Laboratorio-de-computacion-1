/*
7. Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar, 
leer las notas por consola, mostrar la suma de sus componentes y el promedio.

*/
#include<stdio.h>
#include<stdlib.h>

void main(){

    int cantidadNotas;

    printf("Ingrese la cantidad de notas que desea cargar:\n");
    scanf("%i", &cantidadNotas);
    
    float notas[cantidadNotas], suma = 0, promedio = 0;

    for (int i = 0; i < cantidadNotas; i++)
    {
        printf("Ingrese una nota\n");
        scanf("%f", &notas[i]);

        suma += notas[i];
    }
    
    promedio = suma/cantidadNotas;

    printf("Suma de las notas: %0.2f\n", suma);
    printf("Promedio de las notas: %0.2f\n", promedio);
   
    system("pause");
}