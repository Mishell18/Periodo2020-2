/******************************************************************************
Crear un programa que le permita ingresar n numeros positivos, y realice la
suma de dichos numeros.


*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1, cantNum;
    float numero,suma=0;
    printf("INgrese la cantidad de numeros:");
    scanf("%d",&cantNum);
    while(cont<=cantNum)
    {
            printf("Ingrese el numero:");
            scanf("%f",&numero);
            while(numero<0)
            {
                printf("Ingrese un numero positivo:");
                scanf("%f",&numero);  
            }
        suma=suma+numero;
        cont++;
    }
    printf("La suma es %.1f",suma);
}

