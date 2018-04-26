#include "PRODUCTO.h"
#include "funcs.h"

int pro_init(Producto* array,int sizeArray)
{
    int i;
    for(i=0;i<sizeArray;i++)
    {
        array[i].isEmpty=1;
    }
    return 0;
}

int pro_mostrar(Producto* array,int sizeArray)
{
    int i;
    for(i=0;i<sizeArray;i++)
    {
        if(array[i].isEmpty==0)
        printf("%d %s %s\n", array[i].idProducto, array[i].nombre, array[i].precio);
    }
    return 0;
}

int pro_alta(Producto* array,int idUsuario, int sizeArray,int id)
{

        getStringLetras("\ningrese nombre: ", array[id].nombre);
        getStringLetras("\ningrese precio: ", array[id].precio);
        array[id].isEmpty=0;
        array[id].idProducto=id;
        array[id].idUsuario=idUsuario;
        return 0;
}

int pro_baja(Producto* array,int sizeArray,int id)
{

}
int pro_buscarLibre(Producto* array,int sizeArray)
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
