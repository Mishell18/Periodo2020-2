/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int numero,cont=1,cont2;
    printf("Ingrese el numero: ");
    scanf("%d",&numero);
    while(cont<=numero)
    {
        cont2=1;
        while(cont2<=cont)
        {
                printf("%d%d",cont2,cont2);
                cont2++;
        } 
        cont++;
        printf("\n");
    } 
    cont2=numero-1;
    while(cont2>=1)
    {
        cont=1;
        while(cont<=cont2)
        {
            printf("%d%d",cont,cont); 
            cont++;
        }
     printf("\n");
     cont2--;
    } 
}


