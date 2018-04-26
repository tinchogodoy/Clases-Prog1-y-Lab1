#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED 123
typedef struct
{
    char nombre[50];
    char password[50];
    int idUsuario;
    int isEmpty;
}Usuario;
#endif // USUARIO_H_INCLUDED

int usu_init(Usuario* array,int sizeArray);
int usu_mostrar(Usuario* array,int sizeArray);
int usu_mostrarUno(Usuario* array,int sizeArray,int id);
int usu_alta(Usuario* array,int sizeArray,int id);
int usu_baja(Usuario* array,int sizeArray,int id);
int usu_ordenamiento(Usuario* array,int sizeArray);
int usu_buscarLibre(Usuario* array,int sizeArray);
