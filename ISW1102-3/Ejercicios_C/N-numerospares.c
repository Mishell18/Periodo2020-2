/******************************************************************************

Crear un programa que permita generar la serie de n numeros pares

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont, par=0,cantNum;
    printf("\t\tNumeros Pares\n");
    printf("INgrese la cantidad de numeros:");
    scanf("%d",&cantNum);
    for(cont=1;cont<=cantNum;cont=cont+1)
    {
            par=par+2;
            printf("%d\n",par);
            
    }
}

