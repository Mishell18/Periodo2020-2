/******************************************************************************

Crear un programa que realice el factorial de cualquier numero, usando funciones

1.Definicion de librerias
2.Definicion de prototipos de funciones
3.LLamada a la funcion en main()
4.Implementacion de funcion

3!=1*2*3=6
*******************************************************************************/
#include <stdio.h>
int factorial(int);

void main()
{
    int numero1;
    printf("Ingrese el numero:");
    scanf("%d",&numero1);
    printf("El factorial de %d es %d",numero1,factorial(numero1));
}

int factorial(int num)
{
    int fact=1,cont=1;
    while(cont<=num)
    {
        fact=fact*cont;
        cont++;
    }
return fact;    
}


