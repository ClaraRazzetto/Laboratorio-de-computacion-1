/*3. Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
(repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
usuario la suma de los 10 números ingresados.*/

#include <stdio.h>

void main(){

   int num, i, sum;
   sum = 0;

    for ( i = 0; i < 10; i++)
    {
        do
        {
            printf("ingrese un número positivo\n");
            scanf("%i", &num);
            if (num <= 0 )
            {
                printf("valor invalido\n");
            }else{
                sum = sum + num;
            }
        } while (num <= 0);
        
    }

    printf("la suma es: %i\n", sum);
    
   
   
   
}