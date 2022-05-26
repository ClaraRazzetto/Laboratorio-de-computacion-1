/*4. Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
calculando y por último, el promedio general del curso.
*/

#include <stdio.h>
#include <stdlib.h>

void main(){

    int cantAlumnos, cantParciales,i,j;
    i=1;
    j=1;
    float suma,notas, promedioAlumno, sumaGeneral;

    printf("Ingrese cantidad de alumnos\n");
    scanf("%i",&cantAlumnos);
    printf("Ingrese cantidad de parciales que se tomaron durante el cuatrimestre\n");
    scanf("%i",&cantParciales);

    do
    {
        do
        {
            printf("Ingrese la nota %i del alumno %i\n", j, i);
            scanf("%f",&notas);
            if(notas>0 && notas<=10){
                suma += notas;
                j++;
            }else{
                printf("nota invalida\n");
            }
        } while (j<=cantParciales);
    
        promedioAlumno = suma/cantParciales;

        printf("El promedio del alumno %i es: %f\n", i, promedioAlumno);
        
        sumaGeneral += suma ;
        
        promedioAlumno=0;
        suma=0;
        i++;
        j=1;

    } while (i<=cantAlumnos);

    printf("El promedio general del curso es: %f\n", sumaGeneral/(cantAlumnos*cantParciales));
    system("pause");
}