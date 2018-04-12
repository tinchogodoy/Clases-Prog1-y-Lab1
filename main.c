#include <stdio.h>
#include <stdlib.h>
#include "CALCULADORA.h"
#define CANT_OPCION 9

int main()
{
    char seguir='s';
    int opcion=0;
    float auxOption;
    float primerOperando=0;
    int primerOperandoMenu=-1;
    float segundoOperando=0;
    int segundoOperandoMenu=-1;
    float resultado;
    float resultadoDiv;
    float resultadoFac;
    int rtaScanf;

    while(seguir=='s')
    {

        do
        {
            system("cls");
            printf("\nCALCULADORA");
            if(primerOperandoMenu==0)
            {
                printf("\n1- Ingresar 1er operando (A=%.2f)\n",primerOperando);
            }
            else
            {
                printf("\n1- Ingresar 1er operando (A=x)\n");
            }
            if(segundoOperandoMenu==0)
            {
                printf("2- Ingresar 2do operando (B=%.2f)\n",segundoOperando);
            }
            else
            {
                printf("2- Ingresar 2do operando (B=y)\n");
            }
            printf("3- Calcular la suma (A+B)\n");
            printf("4- Calcular la resta (A-B)\n");
            printf("5- Calcular la division (A/B)\n");
            printf("6- Calcular la multiplicacion (A*B)\n");
            printf("7- Calcular el factorial (A!)\n");
            printf("8- Calcular todas las operaciones\n");
            printf("9- Salir\n");
            printf("ingrese una opcion: ");
            fflush(stdin);
            rtaScanf=scanf("%d",&opcion);

            if(rtaScanf !=1)
            {
                printf("Nooooo solo numeros \n");
                continue;
            }

        }while(opcion<=1 && opcion>=CANT_OPCION);
        switch(opcion)
        {
            case 1:
                pedirNumero("ingrese primer operando (A): ",&primerOperando);
                printf("Operando A=%2f\n",primerOperando);
                primerOperandoMenu=0;
                system("pause");
                break;
            case 2:
                pedirNumero("ingrese segundo operando (B): ",&segundoOperando);
                printf("Operando B=%2f\n",segundoOperando);
                segundoOperandoMenu=0;
                system("pause");
                break;
            case 3:
                if(sumar(primerOperando, segundoOperando, &resultado)==0)
                {
                    sumar(primerOperando, segundoOperando, &resultado);
                    printf("El resultado de la suma es (%f+%f)=%.2f\n",primerOperando,segundoOperando,resultado);
                    system("pause");
                    break;
                }else if(sumar(primerOperando, segundoOperando, &resultado)==-1)
                {
                    printf("(%f+%f)=La suma no entra como flotante\n\a",primerOperando,segundoOperando);
                    system("pause");
                    break;
                }
                break;
            case 4:
                if(resta(primerOperando, segundoOperando, &resultado)==0)
                {
                    resta(primerOperando, segundoOperando, &resultado);
                    printf("El resultado de la resta es (%f-%f)=%.2f\n",primerOperando,segundoOperando,resultado);
                    system("pause");
                    break;
                }else if(resta(primerOperando, segundoOperando, &resultado)==-1)
                {
                    printf("(%f-%f)=La resta no entra como flotante\n\a",primerOperando,segundoOperando);
                    system("pause");
                    break;
                }
                system("pause");
                break;
            case 5:
                if(division(primerOperando, segundoOperando, &resultadoDiv)==0)
                {
                    division(primerOperando, segundoOperando, &resultadoDiv);
                    printf("El resultado de la division es (%f/%f)=%.2f\n",primerOperando,segundoOperando,resultadoDiv);
                    system("pause");
                    break;
                }else if(division(primerOperando, segundoOperando, &resultadoDiv)==-1)
                {
                    printf("(%f/%f)=La division no entra como flotante\n\a",primerOperando,segundoOperando);
                    system("pause");
                    break;
                }else if(division(primerOperando, segundoOperando, &resultadoDiv)==-2)
                {
                    printf("(%f/%f)=La division no tiene solucion\n\a",primerOperando,segundoOperando);
                    system("pause");
                    break;
                }
                break;
            case 6:
                multiplicacion(primerOperando, segundoOperando, &resultado);
                if(multiplicacion(primerOperando, segundoOperando, &resultado)==0)
                {
                    printf("El resultado de la multiplicacion es (%f*%f)=%.2f\n",primerOperando,segundoOperando,resultado);
                    system("pause");
                    break;
                }else if(multiplicacion(primerOperando, segundoOperando, &resultado)==-1)
                {
                    printf("(%f*%f)=La multiplicacion no entra como flotante\n\a",primerOperando,segundoOperando);
                    system("pause");
                    break;
                }
                system("pause");
                break;
            case 7:
                factorial(primerOperando, &resultadoFac);
                printf("El resultado del factorial es (%d!)=%d\n",primerOperando,resultadoFac);
                system("pause");
                break;
            case 8:
                if(sumar(primerOperando, segundoOperando, &resultado)==0)
                {
                    sumar(primerOperando, segundoOperando, &resultado);
                    printf("El resultado de la suma es (%f+%f)=%.2f\n",primerOperando,segundoOperando,resultado);
                }else if(sumar(primerOperando, segundoOperando, &resultado)==-1)
                {
                    printf("(%f+%f)=La suma no entra como flotante\n\a",primerOperando,segundoOperando);
                }
                if(resta(primerOperando, segundoOperando, &resultado)==0)
                {
                    resta(primerOperando, segundoOperando, &resultado);
                    printf("El resultado de la resta es (%f-%f)=%.2f\n",primerOperando,segundoOperando,resultado);
                }else if(resta(primerOperando, segundoOperando, &resultado)==-1)
                {
                    printf("(%d-%d)=La resta no entra como flotante\n\a",primerOperando,segundoOperando);
                }
                if(division(primerOperando, segundoOperando, &resultadoDiv)==0)
                {
                    division(primerOperando, segundoOperando, &resultadoDiv);
                    printf("El resultado de la division es (%f/%f)=%.2f\n",primerOperando,segundoOperando,resultadoDiv);
                }else if(division(primerOperando, segundoOperando, &resultadoDiv)==-1)
                {
                    printf("(%f/%f)=La division no entra como flotante\n\a",primerOperando,segundoOperando);
                }else if(division(primerOperando, segundoOperando, &resultadoDiv)==-2)
                {
                    printf("(%f/%f)=La division no tiene solucion\n\a",primerOperando,segundoOperando);
                }
                multiplicacion(primerOperando, segundoOperando, &resultado);
                if(multiplicacion(primerOperando, segundoOperando, &resultado)==0)
                {
                    printf("El resultado de la multiplicacion es (%f*%f)=%.2f\n",primerOperando,segundoOperando,resultado);
                }else if(multiplicacion(primerOperando, segundoOperando, &resultado)==-1)
                {
                    printf("(%f*%f)=La multiplicacion no entra como flotante\n\a",primerOperando,segundoOperando);
                }
                factorial(primerOperando, &resultadoFac);
                if(factorial(primerOperando, &resultadoFac)==0)
                {
                     printf("El resultado del factorial es (%d!)=%d\n",primerOperando,resultadoFac);
                }else if(multiplicacion(primerOperando, segundoOperando, &resultado)==-1)
                {
                    printf("(%d!)=El factorial no entra como entero\n\a",primerOperando,segundoOperando);
                }
                system("pause");
                break;
            case 9:
                seguir = 'n';
                printf("ha salido del menu. Adios\n");
                break;
        }

      }
    return 0;
}
