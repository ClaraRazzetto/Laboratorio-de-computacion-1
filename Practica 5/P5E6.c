/*
6. Ingrese por teclado la facturación de los últimos 6 meses. Informar:
- La facturación total
- El promedio de facturación
- La máxima facturación
- La mínima facturación
*/

#include<stdio.h>
#include<stdlib.h>

void main(){
    float facturacion[6], total = 0, max, min;

    for (int i = 0; i < 6; i++)
    {
        printf("Ingrese la facturacion del mes %i\n", i+1);
        scanf("%f", &facturacion[i]);

        total += facturacion[i];

        if(i==0){
            max = facturacion[0];
            min = facturacion[0];
        } else {
            
            if(max < facturacion[i]){
                max = facturacion[i];
            }

            if(min > facturacion[i]){
                min = facturacion[i];
            } 
        }

       
    }
    
    printf("\nFacturacion total: %0.2f\n", total);
    printf("Promedio: %0.2f\n", total/6);
    printf("Maxima facturacion: %0.2f\n", max);
    printf("Minima facturacion: %0.2f\n", min);

    system("pause");
}