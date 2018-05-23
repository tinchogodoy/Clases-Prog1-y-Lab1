#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"

int main()
{
    Cliente arrayCliente[50];

    Cliente* pArrayCliente[50];
    int cantidadClientes=0;
    printf("%d",cantidadClientes);

    cliente_alta(&cantidadClientes,pArrayCliente);
    cliente_alta(&cantidadClientes,pArrayCliente);
    cliente_alta(&cantidadClientes,pArrayCliente);
    cliente_alta(&cantidadClientes,pArrayCliente);
    cliente_alta(&cantidadClientes,pArrayCliente);
    cliente_alta(&cantidadClientes,pArrayCliente);
    cliente_mostrar(cantidadClientes, pArrayCliente);

    return 0;
}
