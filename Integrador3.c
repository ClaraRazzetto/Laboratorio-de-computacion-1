/*
DESEAMOS REALIZA UN PROGRAMA QUE GESTIONA LAS NOTAS DE UNA CLASE DE ALUMNOS,
DE LOS CUALES SABEMOS DNI Y LA NOTA. EL PROGRAMA DEBE MOSTRAR UN MENU CON LAS SIGUIENTE OPCIONES A RESOLVER:
1-CARGAR ALUMNOS
2-BUSCAR ALUMNOS
3-MIDIFICAR LA NOTA DE UN ALUMNO
4-MOSTRAR EL LISTADO DE LOS 10 ALUMNOS
5-SALIR
DONDE LA OPCION  PERMITE CARGAR LOS  ALUMNNOS INGRESADOS PARA CADA UNO, DNI Y NOTA:
VALIDAR QUE EL DNI NO SEA MENOR QUE 11000000 NI MAYOR QUE 999999. VALIDAR QUE LA NOTA SEA MAYOR A 0 Y MENOR E IGUAL QUE 10*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcion, dni, nota, i;
   // int alumno[4][2]; //4 filas: que representan a cada alumnos y 2 columnas: una para el DNI y otra para la NOTA)
    int alumno[4][2]={11111111,4,22222222,6,33333333,7,44444444,9};
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
                
                for (int i = 0; i < 4; i++)
                {  
                    //ingreso el DNI del alumno i en la columna 0
                    printf("Ingerese el DNI del alumno %i:\n", i+1);
                    scanf("%i", &alumno[i][0]);
                    
                    //Valido el DNI
                    while (alumno[i][0]<1000000 || alumno[i][0]>99999999)
                    {
                        printf("DNI invalido!, ingrese nuevamente\n");
                        scanf("%i", &alumno[i][0]);
                    }
                    
                    //Ingreso la nota del alumno i en la columna 1
                    printf("Ingrese la nota del alumno %i\n", i+1);
                    scanf("%i", &alumno[i][1]);

                    //Valido la nota
                    while (alumno[i][1]<0 || alumno[i][1]>10)
                    {
                        printf("Nota invalido!, ingrese nuevamente\n");
                        scanf("%i", &alumno[i][1]);
                    }
                }            
                break;

            case(2):
                printf("Ingrese el DNI del alumno que desea buscar:\n");
                scanf("%i", &dni);

                while (dni<1000000 || dni>99999999)
                {
                    printf("DNI invalido!, ingrese nuevamente\n");
                    scanf("%i", &dni);
                }

                //Busco el indice donde se encuentra el DNI
                i=0;
                while (i<4)
                {
                    if (alumno[i][0]==dni)
                    {
                        //si encuentra al alumno muestro el DNI y la nota
                        printf("DNI %i NOTA %i\n", alumno[i][0],alumno[i][1]);

                        //le asigno 4 a i para salir del bucle
                        i=4;
                    } else {
                        //Si no encuentra el dni y ya recorrio toda la lista aviso que el DNI no existe
                        if(i==3){
                            printf("El DNI no existe\n");
                        }
                    }
                    //incremento i
                    i++;            
                }  
                break;

            case(3):
                printf("Ingrese el DNI del alumno al que desea modificarle la nota:\n");
                scanf("%i", &dni);
                //Valido el DNI ingresado
                while (dni<1000000 || dni>99999999)
                {
                    printf("DNI invalido!, ingrese nuevamente\n");
                    scanf("%i", &dni);
                }
                
                //Busco el indice donde se encuentra el DNI
                i=0;
                while (i<4)
                {
                    if (alumno[i][0]==dni)
                    {
                        //si encuentra al alumno pido que ingrese la nueva nota
                        printf("Ingrese la nueva nota\n");
                        scanf("%d", &nota);
                        //valido la nota
                        while(nota<0 || nota>10)
                        {
                            printf("Nota invalido!, ingrese nuevamente\n");
                            scanf("%i", &nota);
                        }
                        //cambio la nota
                        alumno[i][1]=nota;

                        //le asigno 10 a i para salir del bucle
                        i=4;
                    } else {
                        //Si no encuentra el dni y ya recorrio toda la lista aviso que el DNI no existe
                        if(i==3){
                            printf("El DNI no existe\n");
                        }
                    }
                    //incremento i
                    i++;            
                }  
                break;
                        
            case(4):
                printf("El listado de los 10 alumnos es:\n");
                printf("DNI     NOTA\n");
                for (int i = 0; i < 4; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        printf("%i ", alumno[i][j]);
                    }
                    printf("\n");
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