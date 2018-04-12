#include <stdio.h>
#include <stdlib.h>
#define MAXINT 32767
#define MININT -32768
#define MAXFLOAT 3.4E+38
#define MINFLOAT 3.4E-38


int pedirNumero(char* mensaje,float* resultado)
{
    int retorno=-9;
    float aux;
    int rtaScanf;
    do
    {
        printf("%s",mensaje);
        fflush(stdin);
        rtaScanf=scanf("%6f",&aux);
        if(rtaScanf!=1)
        {
            printf("Ingrese solo numeros \n");
            continue;
        }
         retorno=0;
         *resultado=aux;
     }while(retorno!=0);
    return retorno;
}

/** \brief Suma dos flotantes
 *
 * \param int es el primer numero a ser sumado
 * \param int es el segundo numero a ser sumado
 * \param int* es el resultado de la operacion pasado por referencia
 * \return int -1 Error overflow, 0 Ok
 *
 */
int sumar(float numeroUno, float numeroDos, float *resultado)
{
    double resultadoAuxiliar;//esta variable grande es para verificar la operacion
    int flagRetorno = -9;//declara q esta variable al tener -1 es error
    resultadoAuxiliar = numeroUno+numeroDos;//hace la operacion de la funcion
    if(resultadoAuxiliar <= MAXFLOAT && resultadoAuxiliar >= MINFLOAT) //lo compara con un define que es el mayor numero entero
    {
        *resultado = resultadoAuxiliar;//si entra esta bien la cuenta.
        flagRetorno = 0;//este valor va a devolver el retour como resultado de la funcion
    }
    else
    {
        flagRetorno=-1;
        printf("Error de desborde! ");
    }
    return flagRetorno;//si no entra en el if enviará como resultado de la funcion -1 que es error
}

/** \brief resta dos flotantes
 *
 * \param numeroUno float es el primer numero a ser restado
 * \param numeroDos float es el segundo numero a ser restado
 * \param resultado float* es el resultado de la operacion pasado por referencia
 * \return int -1 Error overflow, 0 OK
 *
 */
int resta(float numeroUno, float numeroDos, float *resultado)
{
    double resultadoAuxiliar;
    int flagRetorno = -9;
    resultadoAuxiliar = numeroUno-numeroDos;
    if(resultadoAuxiliar <= MAXFLOAT && resultadoAuxiliar >= MINFLOAT)
    {
        *resultado = resultadoAuxiliar;
        flagRetorno = 0;
    }
    else
    {
        flagRetorno=-1;
        printf("Error de desborde! ");
    }
    return flagRetorno;

}

/** \brief divide dos flotantes
 *
 * \param numeroUno float
 * \param numeroDos float
 * \param resultado float*
 * \return float
 *
 */
int division(float numeroUno, float numeroDos, float* resultado)
{
    double resultadoAuxiliar;
    int flagRetorno = -9;
    if(numeroDos!=0 )
    {
        resultadoAuxiliar = (float)numeroUno/(float)numeroDos;
        if(resultadoAuxiliar <= MAXFLOAT && resultadoAuxiliar >= MINFLOAT )
        {
            *resultado = resultadoAuxiliar;
            flagRetorno = 0;
        }
        else
        {
            flagRetorno=-1;
            printf("Error de desborde! ");
        }
    }
    else
    {
        flagRetorno=-2;
        printf("Error! ");
    }
    return flagRetorno;
}
int multiplicacion(float numeroUno, float numeroDos, float *resultado)
{
    double resultadoAuxiliar;
    int flagRetorno = -9;
    resultadoAuxiliar = numeroUno*numeroDos;
    if(resultadoAuxiliar <= MAXFLOAT && resultadoAuxiliar >= MINFLOAT)
    {
        *resultado = resultadoAuxiliar;
        flagRetorno = 0;
    }
    else
    {
        flagRetorno=-1;
        printf("Error de desborde! ");
    }
    return flagRetorno;
}
int factorial(int numeroUno, int *resultado)
{
    long resultadoAuxiliar=1;
    int flagRetorno = -9;
    int i;
    for(i=1; i<=numeroUno; i++)
    {
        resultadoAuxiliar=resultadoAuxiliar*i;
    }
    if(resultadoAuxiliar <= MAXINT && resultadoAuxiliar >= MININT)
    {
        *resultado = resultadoAuxiliar;
        flagRetorno = 0;
    }
    else
    {
        flagRetorno=-1;
        printf("Error de desborde! ");
    }
    return flagRetorno;

}
