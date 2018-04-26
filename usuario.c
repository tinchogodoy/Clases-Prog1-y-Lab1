#include "USUARIO.h"
#include "funcs.h"

int usu_init(Usuario* array,int sizeArray)
{
    int i;
    for(i=0;i<sizeArray;i++)
    {
        array[i].isEmpty=1;
    }
    return 0;
}

int usu_mostrar(Usuario* array,int sizeArray)
{
    int i;
    for(i=0;i<sizeArray;i++)
    {
        if(array[i].isEmpty==0)
        printf("%4d %20s \n", array[i].idUsuario, array[i].nombre);
    }
    return 0;
}
int usu_mostrarUno(Usuario* array, int sizeArray, int id)
{
        int i;
        for(i=0;i<sizeArray;i++)
        {
            if(array[i].idUsuario==id && array[i].isEmpty==0)
            {
                printf("%d %s \n", array[id].idUsuario, array[id].nombre);
                return 0;
            }
        }
      return -1;
 }

int usu_alta(Usuario* array,int sizeArray,int id)
{


        getString("\ningrese nombre: ", array[id].nombre);
        getString("\ningrese password: ", array[id].password);
        array[id].isEmpty=0;
        array[id].idUsuario=id;
        return 0;
}

int usu_baja(Usuario* array,int sizeArray,int id)
{


        array[id].isEmpty=1;

        return 0;

}
int usu_buscarLibre(Usuario* array,int sizeArray)
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
