/******************************************************************************
Crear un programa que permita generar la serie de los 5 primeros numeros pares
*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1, par=0;
    printf("\t\tNumeros Pares\n");
    while(cont<=5)
    {
            par=par+2;
            printf("%d\n",par);
            cont=cont+1;
    }
}

