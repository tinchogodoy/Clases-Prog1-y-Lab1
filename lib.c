int getInt(char* mensaje, char* mensajeError, int reintentos, int minimo, int maximo, int* resultado)
{
    int retorno=-9;
    int datoPedido;
    do
    {
        reintentos--;
        printf("%s",mensaje);
        scanf("%d", &datoPedido);
    if(datoPedido>=minimo && datoPedido<=maximo)
    {
        retorno=0;
        *resultado=datoPedido;
        break;
    }
    else if(datoPedido<minimo)
    {
        retorno=-1;
    }
    else
    {
        retorno=-2;
    }
    printf("%s",mensajeError);

    }while(reintentos=0);

    return retorno;

}

