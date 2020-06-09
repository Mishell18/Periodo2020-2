/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{float gradosC, gradosF, centigrados=0,farenheit=0;
int op;
printf("1.centigrados a farenheit\n2.farenhet a centigrados\n");
printf("escoja una opcion:");
scanf("%d",&op);
if(op==1)
{
printf("Ingrese los grados centigrados:");
scanf("%f",&gradosC);
farenheit=(gradosC*9/5)+32;
printf("La conversion de grados centigrados a farenheit es:%.2f",farenheit);
}
else if(op==2)
{
printf("Ingrese los grados farenheit:");
scanf("%f",&gradosF);
centigrados=(gradosF-32)*5/9;
printf("La conversion de grados farenheit a centigrados es:%.2f",centigrados);
}


    
}


