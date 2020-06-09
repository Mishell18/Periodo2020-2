/******************************************************************************
    Dos formas para controlar un bucle
    valor centinela
    crear un programa que permita ingresar la cantidad de notas de un estudiante, determine su promedio
    e indique si aprueba o reprueba.


*******************************************************************************/
#include <stdio.h>

void main()
{
    float notas, suma=0,prom=0;
    int cont=1,cantNotas;
    char nombre[10];
    printf("Ingrese el nombre del estudiante:");
    gets(nombre);
    printf("Ingrese la cantidad de notas:");
    scanf("%d",&cantNotas);
    while(cont<=cantNotas)
    {
        printf("Ingrese la calificación:");
        scanf("%f",&notas);
        while(notas<0 || notas>10)
        {
           printf("Ingrese una calificación positiva o notas en el rango de 1-10:");
           scanf("%f",&notas);
        }
        suma=suma+notas;
        cont++;
    }
    prom=suma/cantNotas;
    printf("%s tiene un promedio de %.2f\n",nombre,prom);
    if(prom>=6)
    {
            printf("%s aprueba la materia\n",nombre);
    }
    else
    {
            printf("%s reprueba la materia\n",nombre);
    }
    
    
}


