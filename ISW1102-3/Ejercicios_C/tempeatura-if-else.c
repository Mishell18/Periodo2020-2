/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{   float temperatura;
    printf("Ingrese la temperatura:");
    scanf("%f",&temperatura);
    if(temperatura>30){
        printf("Natación");
     }
    else if (temperatura>20 && temperatura<=20){
      printf("Tenis");
      }
    else if (temperatura>10 && temperatura<=20){
        printf("Golf");
      }
    else if (temperatura>5 && temperatura<=10){
        printf("Esqui");
     }
    else {
        printf("Parchis");
        
    }
    
}

