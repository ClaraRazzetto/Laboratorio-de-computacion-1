/*
Grupo 8
Mazzurco, Sofia
Pisacco Cal, Carla
Razzetto, Clara
Solohaga, Berenice
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    int cantidad = 100;
    
    int codigoBarra[cantidad];
    char descripcion[cantidad][100];
    int stock[cantidad];
    
    int cantidadIngresada = 0; //cantidad de electrodomesticos que se ingresaron
    int i = 0; //acumulador
    int codigoBarraIngreso; //codigo de barra a ingresar en caso 2
    int stockIngreso; // stock a ingresar en caso 2
    int opcion; //a seleccionar en el menu
    int salida = 1; //salida de la carga de datos en el arreglo

    do
    {

        printf("MENU\n");
        printf("1. Cargar productos\n");
        printf("2. Modificar stock\n");
        printf("3. Mostrar productos sin stock\n");
        printf("4. Listar productos\n");
        printf("5. Salir\n");
        printf("Ingrese la opcion deseada\n");
        scanf("%i",&opcion);

        switch (opcion)
        {
        case 1:
                do
                {
                    printf("Ingrese el codigo de barras\n");
                    scanf("%i",&codigoBarra[cantidadIngresada]);
                    printf("Ingrese descripcion\n");
                    scanf("%s",&descripcion[cantidadIngresada]);
                    printf("Ingrese cantidad de stock\n");
                    scanf("%i",&stock[cantidadIngresada]);
                    cantidadIngresada++;
                    printf("Ingrese 0 para salir\n");
                    scanf("%i",&salida);
                } while (salida != 0 && cantidadIngresada < cantidad ); 
                //mientras no se desee salir y la cantidad de electrodomesticos ingresados no supere a 100
                //si vuelvo a seleccionar la op 1, el indice arranca con el valor de la ultima carga (no se sobreescribe)
                
            break;
        
        case 2:
            printf("Ingrese el codigo de barra\n");
            scanf("%i", &codigoBarraIngreso);
            
            //mientras i sea menor a la cantidad de electrodomesticos ingresados en el arreglo
            while(i<cantidadIngresada)
            {
                //si encuentro el codigo de barras, cambio el stock y salgo del bucle con i = cantidadIngresada+1
                //sino si el codigo de barras no se encuentra y se termino de recorrer el arreglo muestro el mensaje
                //de electrodomestico inexistente
                if(codigoBarra[i]==codigoBarraIngreso)
                {
                    printf("Ingrese el nuevo stock\n");
                    scanf("%i",&stock[i]);
                    i=cantidadIngresada;
                }else
                {
                    if(i==cantidadIngresada-1)
                    {
                        printf("Electrodomestico inexistente!\n");
                    }
                }
                i++;
            }

            break;
        
        case 3:
            printf("Lista de electrodomesticos sin stock\n");
            //recorro el arreglo hasta la cantidad de electrodomesticos ingresados
            for (int i = 0; i < cantidadIngresada ; i++)
            {
                //si el stock es cero lo muestra
                if(stock[i]==0)
                {
                    printf("Codigo de Barra: %i \n", codigoBarra[i]);
                    printf("Descripcion: %s \n", descripcion[i]);
                    printf("Stock: %i \n", stock[i]);
                }
                
            }   
            break;
        
        case 4:
            //recorro el arreglo hasta la cantidad de electrodomesticos ingresados y los muestro
            for (int i = 0; i < cantidadIngresada ; i++)
            {
                printf("Codigo de Barra: %i \n", codigoBarra[i]);
                printf("Descripcion: %s \n", descripcion[i]);
                printf("Stock: %i \n", stock[i]);
            }
            break;
        
        case 5:
            printf("Chau!\n");
            break;
        
        default:
            //Si la opción no se encuentra entre el 1 y el 5, puede ingresar nuevamente sin salirse del programa
            printf("Opcion incorrecta! Ingrese nuevamente\n");
            scanf("%i",&opcion);
            break;
        }

    } while (opcion != 5);
    
    system("pause");
}