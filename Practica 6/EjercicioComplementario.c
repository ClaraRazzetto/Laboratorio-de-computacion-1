/*
Debemos desarrollar un programa de simulación del funcionamiento de un cajero
automático. El mismo deberá ser capaz de realizar las siguientes acciones:

Tenemos 5 cuentas con contraseñas.
Al ingresar se pide numero de cuenta y contraseña para ingresar al menú
Función login() para validar, como max 3 veces se puede ingresar la contraseña incorrecta

1) Depósito.
2) Extracción: Si el cliente intenta sacar una cantidad que supera el saldo de su cuenta, el cajero le
avisará de que no es posible sacar esa cantidad porque ha excedido el saldo disponible de la
cuenta.
3) Consultar saldo.
4) Mostrar la cantidad de operaciones realizadas y el saldo actual.
5) Salir
 
- Nunca se permitirá registrar más de 10 movimientos. Cuando lleguen a los 10 movimientos
el sistema deberá mostrar un cartel informando “Llegó al límite de operaciones. Fin.
Gracias!”.
*/

#include<stdio.h>
#include<stdlib.h>

//vector cuenta
int tam = 5; 
//contraseña
int pass[]={234,5286,945,666,9999};
//saldo
float saldo[]={19000, 2000, 100000, 5000, 3500};

//funciones
int login();
void Deposito(int cuenta, float cantDeposito);
void Extraccion(int cuenta, float cantExtraccion);
void ConsultarSaldo(int cuenta);
void OperacionesSaldo(int cuenta, int operaciones);

void main(){

    int opcion, operaciones = 0;
    float cantDeposito = 0;
    float cantExtraccion = 0;

    int cuenta = login();

    if(cuenta != -1){
        do
        {
            printf("Cajero automatico:\n");
            printf("1-Deposito \n");
            printf("2-Extraccion\n");
            printf("3-Consultar Saldo\n");
            printf("4-Mostrar la cantidad de operaciones realizadas y el saldo actual\n");
            printf("5-Salir\n");
            printf("Ingrese la opcion deseada\n");
            scanf("%i",&opcion);

            switch (opcion)
            {
            case 1:
                printf("Ingrese deposito\n");
                scanf("%f",&cantDeposito);
                Deposito(cuenta, cantDeposito);
                break;
            
            case 2:
                printf("Ingrese monto a extraer\n");
                scanf("%f",&cantExtraccion);
                Extraccion(cuenta,cantExtraccion);
                break;
            
            case 3:
                ConsultarSaldo(cuenta);
                break;
            
            case 4:
                OperacionesSaldo(cuenta,operaciones);
                break;
            
            case 5:
                printf("bye\n");
                break;

            default:
                printf("Opcion incorrecta! Ingrese nuevamente\n");
                scanf("%i",&opcion);
                break;
            }

            operaciones++;

        } while (opcion != 5 && operaciones < 10);

        if(operaciones = 10){
            printf("Llego al limite de operaciones.\nFin. \nGracias!\n");
        }
        
    }
    system("pause");
}

void OperacionesSaldo(int cuenta,int operaciones){
    printf("Numero de operaciones realizadas: %i\n", operaciones+1);
    printf("Saldo actual: %0.2f\n", saldo[cuenta]);
}

void ConsultarSaldo(int cuenta){
    printf("Su saldo es: %0.2f\n", saldo[cuenta]);
}

void Extraccion(int cuenta, float cantExtraccion){
    if(cantExtraccion > saldo[cuenta]){
        printf("Saldo insuficiente para realizar esta operacion\n");
    }else{
        saldo[cuenta] -= cantExtraccion;
    }
}

void Deposito(int cuenta, float cantDeposito){
    saldo[cuenta] += cantDeposito;
}

int login(){
    int numCuenta = -1;
    int passIngresado;
    int i = 0, intentos = 1;

    printf("Ingrese numero de cuenta\n");
    scanf("%i",&numCuenta);
    numCuenta = numCuenta - 1;

    while(i<tam)
    {
        if(numCuenta == i)
        {
            printf("Ingrese pass\n");
            scanf("%i",&passIngresado);
            
            while(pass[i] != passIngresado && intentos<3){
                printf("Pass incorrecta! Ingrese nuevamente\n");
                scanf("%i",&passIngresado);
                intentos++;
            }

            if(intentos == 3){
                printf("Pass incorrecta! Terminaron sus intentos\n");
                numCuenta = -1;
            }

            i=tam;
        }else {
            if(i == tam-1)
            {
                printf("Numero de cuenta incorrecto!\n");
                numCuenta = -1;
            }
        }
        i++;
    }
    return numCuenta;
}