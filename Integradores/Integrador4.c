/*
Se desea realizar un programa que gestione el stock de un negocio de venta de
electrodomésticos. Como máximo se permitirán cargar 100 electrodomésticos. De cada
electrodoméstico se conoce su código de barras, su descripción y una cantidad en stock.
Se deberá presentar un menú con las siguientes opciones:
1. Cargar productos.
2. Modificar stock.
3. Mostrar productos sin stock.
4. Listar productos.
5. Salir.
Donde, la opción 1 permite cargar los 100 electrodomésticos ingresando para cada uno: código
de barras, descripción y cantidad.
La opción 2 debe pedir el código de barras del electrodoméstico al cual se desea cambiar el
stock y la nueva cantidad. Si el código de barras ingresado no existe, informar la situación con
un mensaje “Electrodoméstico inexistente”, si el código de barras si se encuentra modificar su
stock con la cantidad ingresada.
La opción 3 debe mostrar en la consola los datos de aquellos electrodomésticos con cantidad
igual a cero.
La opción 4 debe mostrar en la consola el listado de electrodomésticos.
SOLO se saldrá de la aplicación si se selecciona la opción 5.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct electrodomestico{
    int codigoBarra;
    char descripcion[100];
    int stock;
};

void main(){

    int cantidad = 100;
    struct electrodomestico electrodomesticos[cantidad]; 
    
    int cantidadIngresada = 0; //cantidad de electrodomesticos que se ingresaron
    int i = 0; //acumulador
    int codigoBarra; //codigo de barra a ingresar en caso 2
    int stock; // stock a ingresar en caso 2
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
                    scanf("%i",&electrodomesticos[cantidadIngresada].codigoBarra);
                    printf("Ingrese descripcion\n");
                    scanf("%s",&electrodomesticos[cantidadIngresada].descripcion);
                    printf("Ingrese cantidad de stock\n");
                    scanf("%i",&electrodomesticos[cantidadIngresada].stock);
                    cantidadIngresada++;
                    printf("Ingrese 0 para salir\n");
                    scanf("%i",&salida);
                } while (salida != 0 && cantidadIngresada < cantidad ); 
                //mientras no se desee salir y la cantidad de electrodomesticos ingresados no supere a 100
                //si vuelvo a seleccionar la op 1, el indice arranca con el valor de la ultima carga (no se sobreescribe)
                
            break;
        
        case 2:
            printf("Ingrese el codigo de barra\n");
            scanf("%i", &codigoBarra);
            
            //mientras i sea menor a la cantidad de electrodomesticos ingresados en el arreglo
            i = 0;
            while(i < cantidadIngresada)
            {
                //si encuentro el codigo de barras, cambio el stock y salgo del bucle con i = cantidadIngresada+1
                //sino si el codigo de barras no se encuentra y se termino de recorrer el arreglo muestro el mensaje
                //de electrodomestico inexistente
                if (electrodomesticos[i].codigoBarra == codigoBarra)
                {
                    printf("Ingrese el nuevo stock\n");
                    scanf("%i",&electrodomesticos[i].stock);
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
                if(electrodomesticos[i].stock==0)
                {
                    printf("Codigo de Barra: %i \n", electrodomesticos[i].codigoBarra);
                    printf("Descripcion: %s \n", electrodomesticos[i].descripcion);
                    printf("Stock: %i \n", electrodomesticos[i].stock);
                }
                
            }   
            break;
        
        case 4:
            //recorro el arreglo hasta la cantidad de electrodomesticos ingresados y los muestro
            for (int i = 0; i < cantidadIngresada ; i++)
            {
                printf("Codigo de Barra: %i \n", electrodomesticos[i].codigoBarra);
                printf("Descripcion: %s \n", electrodomesticos[i].descripcion);
                printf("Stock: %i \n", electrodomesticos[i].stock);
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