#ifndef VENTA_H_INCLUDED
#define VENTA_H_INCLUDED
typedef struct
{
    char nombre[50];
    char precio[50];
    int cantidad;
    int calificacion;
    int idVenta;
    int idProducto;
    int isEmpty;
}Venta;
#endif // VENTA_H_INCLUDED

int ven_init(Venta* array,int sizeArray);
int ven_mostrar(Venta* array,int sizeArray);
int ven_mostrarUno(Venta* array, int id);
int ven_alta(Venta* array,int* calificacion , int sizeArray, int id);
int ven_baja(Venta* array,int sizeArray,int id);
int ven_ordenamiento(Venta* array,int sizeArray);
int ven_buscarLibre(Venta* array,int sizeArray);
