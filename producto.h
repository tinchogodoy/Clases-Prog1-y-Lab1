#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
typedef struct
{
    char nombre[50];
    char precio[50];
    int idProducto;
    int idUsuario;
    int isEmpty;
}Producto;
#endif // PRODUCTO_H_INCLUDED

int pro_init(Producto* array,int sizeArray);
int pro_mostrar(Producto* array,int sizeArray);
int pro_alta(Producto* array,int idUsuario, int sizeArray,int id);
int pro_baja(Producto* array,int sizeArray,int id);
int pro_ordenamiento(Producto* array,int sizeArray);
int pro_buscarLibre(Producto* array,int sizeArray);

