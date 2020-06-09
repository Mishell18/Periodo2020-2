/******************************************************************************
Realizar un programa que permita obtener la solución o soluciones de una ecuación
cuadrática, debe especificar los datos de entrada, proceso y salida
Datos de Entrada
Real a,b,c,x1=0,x2=0
Proceso
Escribir"Ingrese el coeficiente a"
Leer a
Escribir "Ingresar el coeficiente b"
Leer b
Escribir"Ingrese el coeficiente c"
Leer c
x1=(-b+sqrt(b^2-4ac))/2a
x2=(-b-sqrt(b^2-4ac))/2a
Salida
Imprimir"La primera solución de la ecuación es",x1;
Imprimir"La segunda solución de la ecuación es",x2;

*******************************************************************************/
#include <stdio.h>// Declaracion de libreria
#include <math.h>// Declaracion de libreria

void main()// Funcion principal
{
    float a,b,c,x1=0,x2=0; // Declaración de variables
    printf("Ingrese el coeficiente a:"); //Funcion print para ingresar dato1
    scanf("%f",&a);  //funcion scan para leer el dato 1
    printf("Ingrese el coeficiente b:"); // Funcion print para ingresar dato2
    scanf("%f",&b); //funcion scan para leer el dato 2
    printf("Ingrese el coeficiente c:"); //Funcion print para ingresar dato3
    scanf("%f",&c);//Funcion scan para leer el dato 3
    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a); //formula
    x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);// formula
    printf ("La primera solución de la ecuación es:%.2f\n",x1);//Imprimir resultado1 
    printf ("La segunda solución de la ecuación es:%.2f",x2);//Imprimir resultado2
}


