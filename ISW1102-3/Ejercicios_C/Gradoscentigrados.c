/******************************************************************************

Realizar un programa que permita convertir grados centigrados a farenheit y viceversa.
Datos de Entrada
Reales gradosC, gradosF, centogrados=0,farenheit=0

Proceso
Escribir "Ingrese los grados centigrados"
Leer "gadosC"
Escribir "Ingrese los grados farenheit"
Leer "gadosF"
centigrados=(gradosF-32)+5/9
farenheit=gradosC+9/5+gradosF-32
Salida
Imprimir"La conversion de grados farenheit a centigrados es:",centigrados
Imprimir "La conversion de grados centigrados a farenheit es:",farenheit


*******************************************************************************/
#include <stdio.h>

void main()
{float gradosC, gradosF, centigrados=0,farenheit=0;
printf("Ingrese los grados centigrados:");
scanf("%f",&gradosC);
printf("Ingrese los grados farenheit:");
scanf("%f",&gradosF);
centigrados=(gradosF-32)*5/9;
farenheit=(gradosC*9/5)+32;
printf("La conversion de grados farenheit a centigrados es:%.2f\n",centigrados);
printf("La conversion de grados centigrados a farenheit es:%.2f",farenheit);

    
}


