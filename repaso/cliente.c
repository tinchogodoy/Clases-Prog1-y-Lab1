#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"
static int cliente_setId(Cliente* this);
Cliente* cliente_new()
{
    return (Cliente*) malloc(sizeof(Cliente));
}

void cliente_delete(Cliente* this)
{
    free(this);
}

Cliente* cliente_new2( char* nombre[50], char* apellido[50], char* cuit[14])
{
    Cliente* auxCliente = cliente_new();
    cliente_setNombre(auxCliente, nombre);
    //cliente_setApellido(auxCliente, apellido);
    //cliente_setCuit(auxCliente, cuit);
    //cliente_setId(auxCliente, idCliente);


    return auxCliente;
}


static int cliente_setId(Cliente* this)
{
    int retorno = -1;
    static int ultimoId = -1;
    if(this != NULL)
    {
        ultimoId++;
        this->idCliente = ultimoId;
        retorno = 0;
    }
    return retorno;
}

int cliente_setNombre(Cliente* this,char* nombre[50])
{
    int retorno = -1;
    if(this != NULL)// && !validarNombre(nombre))
    {
        strcpy(this->nombre, nombre);
        retorno = 0;
    }
    return retorno;
}

int cliente_getNombre(Cliente* this,char* nombre[50])
{
    int retorno = -1;
    if(this != NULL && nombre != NULL)
    {
        *nombre = this->nombre;
        retorno = 0;
    }
    return retorno;
}

int cliente_setApellido(Cliente* this,char apellido[50])
{
    int retorno = -1;
    if(this != NULL ) //&& !validarNombre(apellido))
    {
        strcpy(this->apellido,apellido);
        retorno = 0;

    }
    return retorno;
}

int cliente_getApellido(Cliente* this,char* apellido[50])
{
    int retorno = -1;
    if(this != NULL && apellido != NULL)
    {
        *apellido = this->apellido;
        retorno = 0;
    }
    return retorno;
}

int cliente_setCuit(Cliente* this,char cuit[14])
{
    int retorno = -1;
    if(this != NULL )//&& !validarNombre(cuit))
    {
        strcpy(this->cuit, cuit);
        retorno = 0;

    }
    return retorno;
}

int cliente_getCuit(Cliente* this,char* cuit[14])
{
    int retorno = -1;
    if(this != NULL && cuit != NULL)
    {
        *cuit = this->cuit;
        retorno = 0;
    }
    return retorno;
}

int cliente_alta(int* cantidad, Cliente* pArrayCliente[])
{
    pArrayCliente[*cantidad]= cliente_new2("Martincho","Skywalker","21204567894");
    *cantidad=(*cantidad)+1;

}

int cliente_mostrar(int cantidad, Cliente* pArrayCliente[])
{
    char nombre[50];
    int i;
    for(i=0; i<cantidad;i++)
    {
        cliente_getNombre((*(pArrayCliente+i)),nombre);

        printf("Nombre: %s\n",nombre);


    }

}
