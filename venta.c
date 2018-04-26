#include "VENTA.h"
#include "funcs.h"

int ven_init(Venta* array,int sizeArray)
{
    int i;
    for(i=0;i<sizeArray;i++)
    {
        array[i].isEmpty=1;
    }
    return 0;
}

int ven_mostrar(Venta* array,int sizeArray)
{
    int i;
    for(i=0;i<sizeArray;i++)
    {
        if(array[i].isEmpty==0)
        printf("%d %s %s\n", array[i].idVenta, array[i].idProducto, array[i].cantidad);
    }
    return 0;
}

int ven_mostrarUno(Venta* array, int id)
{

}

int ven_alta(Venta* array,int* calificacion, int sizeArray,int id)
{

        getStringLetras("\ningrese id Producto: ", array[id].idProducto);
        getStringLetras("\ningrese cantidad: ", array[id].cantidad);
        array[id].isEmpty=0;
//        array[id].idUsuario=id;
        return 0;
}

int ven_baja(Venta* array,int sizeArray,int id)
{

}
int ven_buscarLibre(Venta* array,int sizeArray)
{
    int i;
    int flag=-1;
    for(i=0;i<sizeArray;i++)
    {
        if(array[i].isEmpty==1)
        {
            flag=i;
            return flag;
        }
    }
    return flag;
}
