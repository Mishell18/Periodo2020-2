/******************************************************************************

Crear un programa que permita claular el IMC de una persona
Datos de entrada
Real altura,peso, IMC=0
Cadena de caracteres nombre
Proceso
Escribir "Ingrese su nombre"
Leer nombre
Escribir"Ingresar el peso en kg"
leer  peso
Escribir "Ingrese la altura en m"
Leer atura
IMC=peso/(altura*altura)
Salida
Imprimir nombre," &s tiene un IMC de:",nombre,IMC
*******************************************************************************/
#include <stdio.h>
#include <math.h>
void main()
{char nombre [10];
float peso,altura, IMC=0;
printf("Ingrese su nombre:");
gets(nombre);
printf("Ingrese su peso en kg:");
scanf("%f",&peso);
printf("Ingrese su altura en m:");
scanf("%f",&altura);
IMC=peso/pow(altura,2);
printf ("%s tiene un IMC %f",nombre,IMC);



}

