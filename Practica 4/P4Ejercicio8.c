#include<stdio.h>
#include<stdlib.h>

/* 8. Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para 
calcular la comisión que cobrarán. Los vendedores son 5, codificados de la ‘A’ a la ‘E’, y 
no se sabe cuántas ventas realizó cada uno. Los datos vienen ordenados y agrupados 
por vendedor. Por cada vendedor se ingresan cada uno de los importes de sus ventas. 
Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0. Se solicita 
mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es 
el 2,5% de la suma de sus ventas */

void main(){
    float venta = 0;
    float sumaVentas=0;
    int i;
    int vendedores = 5;

    for ( i = 0; i < vendedores; i++)
    {
       do
        {
            printf("Ingrese el valor de la venta o 0 para finalizar\n");
            scanf("%f",&venta);
            sumaVentas += venta;
        } while (venta!=0); 

        printf("Codigo vendedor: ");
        switch (i)
        {
        case 0:
            printf("A\n");
            break;
        case 1:
           printf("B\n");
            break;
        case 2:
           printf("C\n");
            break;
        case 3:
           printf("D\n");
            break;
        case 4:
           printf("E\n");
            break;
        }

        printf("Comision: %f\n", sumaVentas+ sumaVentas*0.025);
        sumaVentas=0;
    }

    system("pause");
}