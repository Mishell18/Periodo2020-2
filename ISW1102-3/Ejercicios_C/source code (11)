/******************************************************************************
Crear un programa que permita ingresar n notas para n estudiantes y determine
su promedio

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cantNotas,i=1,j,nEst;
    float notas,suma=0,prom=0;
    char nombre[10];
    
    printf("Ingrese la cantidad de estudiantes:");
    scanf("%d",&nEst);
    printf("Ingrese la cantidad de notas:");
    scanf("%d",&cantNotas);
    while(i<=nEst)
    {
        getchar();
        printf("Estudiante Nº%d\n",i);
        printf("Ingrese el nombre:");
        gets(nombre);
        j=1;
        suma=0;
        while(j<=cantNotas)
        {
            printf("Ingrese la calificación %d:",j);
            scanf("%f",&notas);
            while(notas<0 || notas>10)
            {
              printf("Ingrese una calificación positiva o notas entre 1 y 10:");
              scanf("%f",&notas);      
            }
            suma=suma+notas;
            j++;
        }
    i++;
    prom=suma/cantNotas;
    printf("%s tiene un promedio de %.2f\n",nombre,prom);
    if(prom>=6)
    {
            printf("%s aprueba la materia\n",nombre);
    }
    else
    {
            printf("%s aprueba la materia\n",nombre);
    }
    
   } 
    
}

