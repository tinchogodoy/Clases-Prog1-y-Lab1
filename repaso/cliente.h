typedef struct
{
    char nombre[50];
    char apellido[50];
    char cuit[14];
    int idCliente;
}Cliente;

Cliente* cliente_new();
void cliente_delete(Cliente* this);
Cliente* cliente_new2( char nombre[50], char apellido[50], char cuit[14]);
int cliente_setNombre(Cliente* this,char nombre[50]);
int cliente_getNombre(Cliente* this,char* nombre[50]);
int cliente_setApellido(Cliente* this,char apellido[50]);
int cliente_getApellido(Cliente* this,char* apellido[50]);
int cliente_setCuit(Cliente* this,char cuit[14]);
int cliente_getCuit(Cliente* this,char* cuit[14]);


int cliente_alta(int* cantidad, Cliente* pArrayCliente[]);
int cliente_mostrar(int cantidad, Cliente* pArrayCliente[]);
