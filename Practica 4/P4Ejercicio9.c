#include<stdio.h>
#include<stdlib.h>

/*
9. Realizar un programa que permita ver información a un cliente de un banco. Para ello 
el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero), 
validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
ingreso de contraseña. Al loguarse correctamente presentar un menú con las 
siguientes opciones:
1- Consultar saldo
2- Consultar CBU
3- Salir
*/

void main(){

    int dni=39580415;
    int pass=1234;
    int saldo = 150000;
    int cbu = 986323456;

    int dniIngresado =0;
    int passIngresado = 0;

    int intentos = 0;
    int ingresadosCorrectamente = 0;
    int op;

    do
    {
        printf("Ingrese dni\n");
        scanf("%i", &dniIngresado);

        if(dni!= dniIngresado){
            printf("DNI Incorrecto!\n");
            intentos ++;
        }else{
            
            do
            {
                printf("Ingrese pass\n");
                scanf("%i", &passIngresado);
                
                if(pass!=passIngresado){
                    printf("Pass Incorrecto!\n");
                    intentos ++;
                }else{
                    ingresadosCorrectamente=1;
                }
            
            } while (intentos<3 && pass != passIngresado);
            
        }
        
    } while (intentos<3 && dni!=dniIngresado);
    
    if(ingresadosCorrectamente == 1){

        printf("1-Consultar saldo\n");
        printf("2-Consultar CBU\n");
        printf("3-Salir\n");
        scanf("%i",&op);

        switch (op)
        {
        case 1:
            printf("Saldo = %i \n", saldo);
            break;
        case 2: 
            printf("cbu = %i \n", cbu);
        case 3:
            printf("Usted ha salido del programa\n");
            break;
        }
    }else{
        printf("Se terminaron los intentos :( \n");
    }

    system("pause");
}