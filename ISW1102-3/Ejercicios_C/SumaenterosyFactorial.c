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
int sumaNumeros(int,int); //parametros que voy a utilizar en la funcion 

void main()
{
    int numero1,numero2;
    printf("Ingrese el numero 1:");
    scanf("%d",&numero1);
    printf("Ingrese el numero 2:");
    scanf("%d",&numero2);
    printf("El factorial de %d es %d\n",numero1,factorial(numero1));
    printf("La suma es %d\n",sumaNumeros(numero1,numero2));
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

int sumaNumeros(int num1,int num2)
{
    return num1+num2;
}

