#include "empleado.h"
#include "funcs.h"

int emp_init(Empleado* arrayEmpleados,int sizeArray)
{
    int i;
    for(i=0;i<sizeArray;i++)
    {
        arrayEmpleados[i].isEmpty=1;
    }
    return 0;
}

int emp_mostrar(Empleado* arrayEmpleados,int sizeArray)
{
    int i;
    for(i=0;i<sizeArray;i++)
    {
        if(arrayEmpleados[i].isEmpty==0)
        printf("%d %s %s\n", arrayEmpleados[i].idEmpleado, arrayEmpleados[i].nombre, arrayEmpleados[i].apellido);
    }
    return 0;
}

int emp_alta(Empleado* arrayEmpleados,int sizeArray,int id)
{

        getStringLetras("\ningrese nombre: ", arrayEmpleados[id].nombre);
        getStringLetras("\ningrese apellido: ", arrayEmpleados[id].apellido);
        arrayEmpleados[id].isEmpty=0;
        arrayEmpleados[id].idEmpleado=id;
        return 0;
}

int emp_baja(Empleado* arrayEmpleados,int sizeArray,int id)
{

}
int buscarLibre(Empleado* arrayEmpleados,int sizeArray)
{
    int i;
    int flag=-1;
    for(i=0;i<sizeArray;i++)
    {
        if(arrayEmpleados[i].isEmpty==1)
        {
            flag=i;
            return flag;
        }
    }
    return flag;
}
