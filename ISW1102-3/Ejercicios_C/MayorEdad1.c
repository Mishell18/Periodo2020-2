/******************************************************************************
Realizar un programa que permita calcular el área del circulo.
Datos de Entrada
Decimal radio, area=0
Proceso
Escribir "Ingrese el radio"
Leer radio
area=pi*radio*
Salida 
Imprimir "El area es",area;

*******************************************************************************/
#include <stdio.h> //Declaración de librería
#include<math.h> 
void main()//Declaracion de la funcion principal
{   float radio,area=0,pi=3.14;
    printf("Ingrese el radio:");
    scanf("%f",&radio);
    area=pi*pow(radio,2);
    printf("El area es %f",area);

}

