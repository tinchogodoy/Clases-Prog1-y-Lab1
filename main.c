#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"
#include "USUARIO.h"
#include "PRODUCTO.h"
#include "VENTA.h"
#define USER 100
#define PRODUCTOS 1000

int main()
{
    char arrayUsuario[USER][20]={"Lopez", "Alvarez", "Zapata", "Perez", "Albornoz"};
    int notaUno[USER]={10,4,2,9,8};
    int notaDos[USER]={1,8,2,8,10};
    float promedio [USER];
    int primerNota;
    int segundaNota;
    char apellidos;*/
    int i;
    int aux;
    int opcion;
    int id=0;
    Usuario arrayUsuarios[USER];
    usu_init(arrayUsuarios, USER);


   do{


        printf("1 - Alta usuario \n");
        printf("2 - Modificar datos del usuario \n");
        printf("3- Baja del usuario \n");
        printf("4 - Publicar productos \n");
        printf("5 - Modificar publicacion \n");
        printf("6 - Cancelar publicacion \n");
        printf("7 - Comprar producto \n");
        printf("8- Listar publicaciones de usuario \n");
        printf("9 - Listar publicaciones \n");
        printf("10 - Listar usuarios \n");

        scanf("%d", &opcion);

        switch(opcion)
        {
                case 1:
                    printf("Alta Usuario:\n");
                    id=(usu_buscarLibre(arrayUsuarios,USER));
                    usu_alta(arrayUsuarios,USER,id);
                    usu_mostrar(arrayUsuarios,USER);

                    break;

                case 2:
                    printf("Modificar datos de usuario\n");
                    usu_mostrar(arrayUsuarios,USER);
                    id=(get_Int("\ningrese Id usuario :"));
                    usu_mostrarUno( arrayUsuarios, USER, id);
                    usu_alta(arrayUsuarios,USER,id);
                    usu_mostrarUno( arrayUsuarios, USER, id);
                    break;
                case 3:

                    printf("Baja del usuario\n");
                    usu_mostrar(arrayUsuarios,USER);
                    id=(get_Int("\ningrese Id usuario :"));
                    usu_mostrarUno( arrayUsuarios, USER, id);

                    //hacer pregunta s o n
                    usu_baja(arrayUsuarios,USER,id);
                    usu_mostrar(arrayUsuarios,USER);

                    break;

                case 4:
                   // ordenarArrayIntInsertion(arrayEmpleados,USER,int 1)
                    break;

                case 5:
                    printf("Fin de la operacion");
                    break;

                case 6:


                    printf("Cancelando publicacion:\n");
                 //   emp_mostrar(arrayEmpleados,USER);
                    break;

                case 7:

                     printf("Comprando producto:\n");
               //     id=(buscarLibre(arrayEmpleados,USER));
                    printf("%d",id);
                  //  emp_alta(arrayEmpleados, USER, id);
                   //  emp_mostrar(arrayEmpleados,USER);
                    id++;
                    break;
                case 8:

                    printf("Listando publicaciones\n");
                  //  emp_baja(arrayEmpleados,USER,id);


                    break;

                case 9:

               //     ordenarArrayIntInsertion(arrayEmpleados,USER,int 1)
                    break;

                case 10:
                    printf("Lista de usuarios\n");
                    usu_mostrar(arrayUsuarios,USER);
                    break;


        }
        printf("\ningrese una opcion: ");
        system("pause");
        system("cls");

    }while(opcion != 4);

    return 0;
}
