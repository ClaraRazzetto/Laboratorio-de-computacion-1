//6. Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio.

#include <stdio.h>

void main() {

    int cantidad, salida;
    float suma, nota;
    salida=1;
    cantidad = 0;
    
    do
    {
        
        printf("ingrese una nota o 0 para salir\n");
        scanf("%f", &nota);
        
        if(nota>0 && nota<=10)
        {
            suma = suma + nota;

            cantidad = cantidad + 1;
        }

    } while (nota != 0);
    
    printf("el promedio es: %f", (suma/cantidad));
    
}
