/******************************************************************************
Crear un programa que permita ingresar el nombre y edad de una persona,
verifique si es mayor o menor de edad
Datos de Entrada
Entero edad
Cadena caracter nombre
Proceso
Escribir "Ingrese el nombre"
Leer "nombre"
Escribir "Ingrese la edad"
Leer "edad"
Si (edad>=18) entonces
 Escribir " es mayor de edad"
 de lo contrario 
 Escribir "es menor de edad"
 
 Datos de Salida
 Imprimir " es mayor de edad"
 o 
 Imprimir "es menor de edad"

*******************************************************************************/
#include <stdio.h>

void main()
{   int edad;
    char nombre[20];
    printf("Ingrese el nombre:");
    gets(nombre);
    printf("Ingrese la edad:");
    scanf("%i",&edad);
    if(edad>=18)
     printf("%s es mayor de edad",nombre);
    else
        printf("%s no es mayor de edad",nombre);
}
