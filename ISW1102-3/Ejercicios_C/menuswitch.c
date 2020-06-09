/******************************************************************************

Crear un programa que realice un menu con las siguientes opciones

1. edad
2.calculo IMC
3.COnversion temperatura
*******************************************************************************/
#include <stdio.h>
#include <math.h>

void main()
{   int edad,op;
    char nombre[10];
    float peso,altura, IMC=0,gradosC, gradosF, centigrados=0,farenheit=0;
    printf("\t Menu Principal\n");
    printf("1.Mayor Edad \n2.IMC\n3.Conversion\n");
    printf("Escoja una opcion:");
    scanf("%d",&op);
    switch(op) 
    {
        case 1:
            {
            getchar();
            printf("Ingrese el nombre:");
            gets(nombre);
            printf("Ingrese la edad:");
            scanf("%i",&edad);
            if(edad>=18)
            printf("%s es mayor de edad",nombre);
            else
            printf("%s no es mayor de edad",nombre);
            }
        break;
        case 2:
         {
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
        break;
        case 3: 
        {
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
        break;
        default:
        printf("Opcion invalida.Intente nuevamente");
        }
    }



