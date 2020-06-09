/******************************************************************************
Crear un programa que atraves del IMC determine el peso ideal de una persona
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
Si <18

*******************************************************************************/
#include <stdio.h>
#include <math.h>
void main()
{
float peso,altura, IMC=0;
printf("Ingrese su peso en kg:");
scanf("%f",&peso);
printf("Ingrese su altura en m:");
scanf("%f",&altura);
IMC=peso/pow(altura,2);
printf ("El IMC es %.2f\n",IMC);
if(IMC<18.5)
printf("Tiene peso bajo\n");
else if(IMC>=18.5 && IMC<=24.9)
printf("peso normal'");
else if (IMC>=30 && IMC<=39.9)
printf("tiene obesidad");
else
printf ("tiene obesidad morbida");


}



