/*Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
Cada ítem del vector representa la inflación de un mes de tal manera que el primer 
ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector 
que es 0.9 representa la inflación de diciembre. Se pide:
- Informar la inflación anual
- Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 = 0.1
- Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 = 0.9
*/

#include<stdio.h>
#include<stdlib.h>

void main(){
    
    float inflacion[]={0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    float inflacionAnual = 0 , mayorValor = inflacion[0], menorValor = inflacion[0];
    int i, menorMes = 0, mayorMes = 0;

    for (i = 0; i < 12; i++)
    {
        inflacionAnual += inflacion[i];

        if (inflacion[i] > mayorValor)
        {
            mayorValor = inflacion[i];
            mayorMes = i+1;
        } 

        if(inflacion[i] < menorValor){
            
            menorValor = inflacion[i];
            menorMes = i+1;
          
        }
        
    }
    
    printf("Inflacion anual: %0.1f\n", inflacionAnual);
    printf("Inflacion mas alta: \nMes %i = %0.1f \n", mayorMes, mayorValor);
    printf("Inflacion mas baja: \nMes %i = %0.1f \n", menorMes, menorValor);

    system("pause");
}