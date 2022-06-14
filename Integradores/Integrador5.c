#include <stdio.h>
#include <stdlib.h>

int numerosID[50];
float pesos[50];
int destinos[50];
int horasPlanificadas[50];
int estados[50];

const int tam = 2;

void cargarEnvios();
void mostrarEnvios();
void modificarEstadoDeUnEnvio();
void mostrarEnvioParaDestino(int destino);

void main()
{
    int opcion = 0;
    int des = 0; 

    do
    {
        printf("\n1- Cargar env%cos planificados.", 161);
        printf("\n2- Mostrar env%cos planificados.", 161);
        printf("\n3- Modificar estado de un env%co.", 161);
        printf("\n4- Mostrar env%cos para un destino.", 161);
        printf("\n5- Salir.\n\n");
        scanf("%d", &opcion);

        if(opcion != 5)
        {
            switch(opcion)
            {
                case 1: 
                    //Cargar envíos planificados
                    cargarEnvios();
                    break;
                case 2: 
                    //Mostrar envíos planificados
                    mostrarEnvios();
                    break;
                case 3: 
                    //Modificar estado de un envío  
                    modificarEstadoDeUnEnvio();
                    break;
                case 4: 
                    //Mostrar envíos para un destino
                    printf("Destino a buscar: ");
                    printf("\n1- Rosario");
                    printf("\n2- Funes");
                    printf("\n3- Roldan");
                    printf("\n4- Baigorria");
                    printf("\n");
                    scanf("%i", &des);
                    //validar destino 
                    mostrarEnvioParaDestino(des);

                    break;
                default:
                    printf("La opci%cn ingresada es inv%clida\n", 162, 160);
            }  
        }

    } while (opcion != 5);
}


void cargarEnvios()
{
    printf("--Ingrese los datos de los env%cos--\n", 161);

    for(int i = 0; i < tam; i++)
    {
        printf("Nro. de env%co: ", 161);
        scanf("%d", &numerosID[i]);  

        while (numerosID[i]<100 || numerosID[i]>999)
        {
            printf("Nro. invalido! Ingrese nuevamente: ");
            scanf("%d", &numerosID[i]);
        }
        
        printf("Ingrese el peso: ");
        scanf("%f", &pesos[i]);

        while (pesos[i]<0)
        {
            printf("Peso invalido! Ingrese nuevamente: ");
            scanf("%f", &pesos[i]);
        }
        
        printf("Ingrese el destino: ");
        printf("\n1- Rosario");
        printf("\n2- Funes");
        printf("\n3- Roldan");
        printf("\n4- Baigorria");
        printf("\n");
        scanf("%i", &destinos[i]);

        while (destinos[i]<1 || destinos[i]>4)
        {
            printf("Destino invalido! Ingrese nuevamente: ");
            scanf("%i", &destinos[i]);
        }

        printf("Ingrese la hora: ");
        scanf("%d", &horasPlanificadas[i]);

        while (horasPlanificadas[i]<8 || horasPlanificadas[i]>22)
        {
            printf("Hora invalido! Ingrese nuevamente: ");
            scanf("%d", &numerosID[i]);
        }

        printf("Ingrese el estado: ");
        printf("\n0- Pendiente");
        printf("\n1- Despachado");
        printf("\n");
        scanf("%d", &estados[i]);

        while (estados[i]!=1 && estados[i]!=0)
        {
            printf("Estado invalido! Ingrese nuevamente: ");
            scanf("%d", &estados[i]);
        }
    }
}


void mostrarEnvios()
{
    printf("---ENVIOS PLANIFICADOS---\n");
    for(int i = 0; i < tam; i++)
    {
        printf(" %d \t", numerosID[i]);
        printf(" %.2f \t", pesos[i]);
        switch(destinos[i])
        {
            case 1:
                printf("Rosario");
                break;
            case 2:
                printf("Funes");
                break;
            case 3:
                printf("Roldan");
                break;
            case 4:
                printf("Baigorria");
                break; 
            default:
                printf("Destino inv%clido\n", 160);
        }
        printf("\t");
        printf(" %d hs \t", horasPlanificadas[i]);

        switch(estados[i])
        {
            case 0:
                printf("Pendiente");
                break;
            case 1:
                printf("Despachado");
                break;
            default:
                printf("Estado inv%clido\n", 160);
        }
        
        printf("\n");    
    }
}

void modificarEstadoDeUnEnvio()
{
    int nroID = 0, est = 0;
    int encontrado = 0;

	printf("Nro del env%co a modificar:", 161);	
    scanf("%d", &nroID);

    while (nroID<100 || nroID>999)
    {
        printf("Nro. invalido! Ingrese nuevamente: ");
        scanf("%d", &nroID);
    }

    for (int i = 0; i < tam; i++)
    {
        if (nroID == numerosID[i])
        {
            printf("Ingrese el estado: ");
            printf("\n0- Pendiente");
            printf("\n1- Despachado");
            printf("\n");
            scanf("%d", &est);

            while (est!=1 && est!=0)
            {
                printf("Estado invalido! Ingrese nuevamente: ");
                scanf("%d", &est);
            }
            
            estados[i]= est;
            
            /*
            if(estado[i]==1){
                estado[i]=0;
            }else{
                estado[i]=1;
            }
            */
            
            encontrado = 1;
        }
        
    }
    
    if(encontrado == 0){
        printf("No se encontro el ID ingresado");
    }

}

void mostrarEnvioParaDestino(int destino)
{

}