#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    //tamaño del arreglo
    int tam = 2;

    //nombre dni nota
    char nombre[tam][15];
    int dni[tam];
    float nota[tam];

    int opcion,dniIngresar,i;
    float notaIngresar;

    do
    {
        printf("Bienvenido al sistema de gestion de alumnos\n");
        printf("Seleccion la opcion deseada:\n");
        printf("1- CARGAR ALUMNO\n");
        printf("2- BUSCAR ALUMNO\n");
        printf("3- MODIFICAR NOTA DE UN ALUMNO\n");
        printf("4- MOSTRAR EL LISTADO DE LOS 10 ALUMNOS\n");
        printf("5- SALIR\n");
        scanf("%i", &opcion);

        switch (opcion)
        {
            case(1):
                
                for (int i = 0; i < tam; i++)
                {  
                    printf("Ingerese el nombre del alumno %i:\n", i+1);
                    scanf("%s", &nombre[i]);

                    //ingreso el DNI del alumno i en la columna 0
                    printf("Ingerese el DNI del alumno %i:\n", i+1);
                    scanf("%i", &dni[i]);
                    
                    //Valido el DNI
                    while (dni[i]<1000000 || dni[i]>99999999)
                    {
                        printf("DNI invalido!, ingrese nuevamente\n");
                        scanf("%i", &dni[i]);
                    }
                    
                    //Ingreso la nota del alumno i en la columna 1
                    printf("Ingrese la nota del alumno %i\n", i+1);
                    scanf("%f", &nota[i]);

                    //Valido la nota
                    while (nota[i]<0 || nota[i]>10)
                    {
                        printf("Nota invalido!, ingrese nuevamente\n");
                        scanf("%f", &nota[i]);
                    }
                }            
                break;

            case(2):
                printf("Ingrese el DNI del alumno que desea buscar:\n");
                scanf("%i", &dniIngresar);

                while (dniIngresar<1000000 || dniIngresar>99999999)
                {
                    printf("DNI invalido!, ingrese nuevamente\n");
                    scanf("%i", &dniIngresar);
                }

                //Busco el indice donde se encuentra el DNI
                i=0;
                while (i<tam)
                {
                    if (dni[i]==dniIngresar)
                    {
                        //si encuentra al alumno muestro Nombre, el DNI y la nota
                        printf("NOMBRE: %s DNI %i NOTA %f\n",nombre[i],dni[i], nota[i]);

                        //le asigno 4 a i para salir del bucle
                        i=tam;
                    } else {
                        //Si no encuentra el dni y ya recorrio toda la lista aviso que el DNI no existe
                        if(i==tam){
                            printf("El DNI no existe\n");
                        }
                    }
                    //incremento i
                    i++;            
                }  
                break;

            case(3):
                printf("Ingrese el DNI del alumno al que desea modificarle la nota:\n");
                scanf("%i", &dniIngresar);
                //Valido el DNI ingresado
                while (dniIngresar<1000000 || dniIngresar>99999999)
                {
                    printf("DNI invalido!, ingrese nuevamente\n");
                    scanf("%i", &dniIngresar);
                }
                
                //Busco el indice donde se encuentra el DNI
                i=0;
                while (i<tam)
                {
                    if (dni[i]==dniIngresar)
                    {
                        //si encuentra al alumno pido que ingrese la nueva nota
                        printf("Ingrese la nueva nota\n");
                        scanf("%f", &notaIngresar);
                        //valido la nota
                        while(notaIngresar < 0 || notaIngresar > 10)
                        {
                            printf("Nota invalida!, ingrese nuevamente\n");
                            scanf("%f", &notaIngresar);
                        }
                        //cambio la nota
                        nota[i]=notaIngresar;

                        //le asigno 10 a i para salir del bucle
                        i=tam;
                    } else {
                        //Si no encuentra el dni y ya recorrio toda la lista aviso que el DNI no existe
                        if(i==tam-1){
                            printf("El DNI no existe\n");
                        }
                    }
                    //incremento i
                    i++;            
                }  
                break;
                        
            case(4):
                printf("El listado de los 10 alumnos es:\n");
                printf("NOMBRE         DNI     NOTA\n");
                for (int i = 0; i < tam; i++)
                {
                    printf("%s %i %0.2f\n", nombre[i], dni[i],nota[i]);
                }
                break;
            
            case (5):
                printf("Bye\n");      
                break;

            default:
                printf("Opcion invalida!\n");
                break;
        }

    } while (opcion != 5);
        
    system("pause");
}
