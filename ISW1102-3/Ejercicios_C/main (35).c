/******************************************************************************

Crear un programa que realice el factorial de cualquier numero, usando funciones

1.Definicion de prototipos de funciones
2.LLamada a la funcion en main()
3.Implementacion de funcion

3!=1*2*3=6

--------------------------------------

tabla de multiplicar:4
Limite de la tabla: 5

4*1=4
.
.
4*5=20


Crear un programa que permita ingresar por teclado n numeros positivos enteros y 
realice la suma de dichos numeros

Ingrese la cantidad de numeros:-2
Ingrese la cantidad de numeros:2
Ingrese el numero:-3
Ingrese un numero positivo:6
Ingrese un numero positivo:8
La suma de los dos numeros es 14.


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int factorial(int);
int sumaNumeros(int,int);
void tablaMult(int,int);
int sumaPositivos(int);
void funcionPar(int);
void main()
{
    int numero1,numero2,op;
    while(op!=5)
    {
        printf("1.Factorial\n2.Suma Numeros\n3.Tabla\n4.Suma Positivos\n5.numerospares\n6.Salir\n");
        printf("Escoja la opcion:");
        scanf("%d",&op);
    switch(op)
    {
        case 1:
            printf("Ingrese el numero 1:");
            scanf("%d",&numero1);
            printf("El factorial de %d es %d\n",numero1,factorial(numero1));
        break;
        case 2:
            printf("Ingrese el numero 1:");
            scanf("%d",&numero1);
            printf("Ingrese el numero 2:");
            scanf("%d",&numero2);
            printf("La suma es %d\n",sumaNumeros(numero1,numero2));  
        break;
        case 3:
            printf("Ingrese la tabla:");
            scanf("%d",&numero1);
            printf("Ingrese el limite:");
            scanf("%d",&numero2);
            tablaMult(numero1,numero2);
        break;
        case 4:
            printf("Ingrese la cantidad de numeros:");
            scanf("%d",&numero1);
            while(numero1<0)
            {
                printf("Ingrese la cantidad de numeros positivos:");
                scanf("%d",&numero1);
            
            }
           printf(" La suma es %d\n",sumaPositivos(numero1)); 
        break;
        case 5:
            printf("Ingrese la cantidad de numeros:");
            scanf("%d",&numero1);
            funcionPar(numero1);
           
        break;
        case 6:
            exit(0);
        break;
        default:
            printf("Opcion invalida");
        break;
        
        
    }
  }
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

void tablaMult(int tabla,int lim)
{
    int resul=1,cont=1;
    while(cont<=lim)
    {
        resul=tabla*cont;
        printf("%dX%d=%d\n",tabla,cont,resul);
        cont++;
    }
}

int sumaPositivos(int cant)
{
    int num,cont=1,suma=0;
    while(cont<=cant)
    {
        printf("Ingrese el numero:");
        scanf("%d",&num);
        while(num<0)
        {
            printf("Ingrese el numero positivo:");
            scanf("%d",&num);
            
        }
        suma=suma+num;
        cont++;
    }
return suma;
}
void funcionPar (int num1)
{
    int cont, par=0;
     for(cont=1;cont<=num1;cont=cont+1)
            {
                    par=par+2;
                    printf("%d\n",par);
                    
            }

}

