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

Cuantos numeros va a generar para la serie de n numeros pares y realce la suma de esos numeros

Ingrese la cantidad de numeros enteros positivos y realizar la suma de dichos numeros.
Ingrese la cantidad de numeros:-2
Ingrese la cantidad de numeros:2
Ingrese el numero:-3  
Ingrese el numero positivo:4 
INgrese el numero:7   

La suma de los 2 numeros es 11

Sentencias Repetitivas usando un contador
1.inicializacion
2.condicion
3.incremento o decremento



Sentencias Repetitivas usando un valor centinela
1.condicion

Crear un programa que permita determinar si un numero es par o impar

*******************************************************************************
Crear una funcion que permita generar la serie del fibonacci de n numeros enteros
positivos y realice la suma de dicha serie.

1 1 2 3 5 8 13

Ingrese la cantidad de numeros:-5
Ingrese la cantidad de numeros: 5
1 1 2 3 5

1+1=2
2+2=4
4+3=7
7+5=12

La suma es 12


*********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int factorial(int);
int sumaNumeros(int,int);
void tablaMult(int,int);
int sumaPositivos(int);
int fibonacci(int);

void main()
{
    int numero1,numero2,op;
    while(op!=6)
    {
        printf("1.Factorial\n2.Suma Numeros\n3.Tabla\n4.Suma Positivos\n5.Fibonacci\n6.Salir\n");
        printf("Escoja la opcion:");
        scanf("%d",&op);
    switch(op)
    {
        case 1:
            printf("Ingrese el numero: ");
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
            printf("La suma de los %d numeros es %d\n",numero1,sumaPositivos(numero1));//Llamada a la funcion
            
        break;
        case 5:
            do
            {
               printf("Ingrese la cantidad de numeros positivos:");
               scanf("%d",&numero1); 
            }while(numero1<0);
           printf("La suma es %d\n",fibonacci(numero1)); 
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
    int suma=0,num,cont=1;
    while(cont<=cant)
    {
        printf("Ingrese el numero:");
        scanf("%d",&num);
        while(num<0)
        {
            printf("Ingrese el numero:");
            scanf("%d",&num);
        }
        suma=suma+num;
        cont++; 
    }
    return suma;
}

int fibonacci(int n)
{
    int n1=0,n2=1,acum=0,i,suma=0;
    for(i=1;i<=n;i++)
    {
       /*printf("%d\t",n2);
       suma=suma+n2;
        acum=n1+n2;
        n1=n2;
        n2=acum;*/
        n1=n2;
        n2=acum;
        acum=n1+n2;
        printf("%d\t",acum);
        suma=suma+acum;
    }
    printf("\n");
    return suma;
}

