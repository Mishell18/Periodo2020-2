/******************************************************************************
Datos de entrada:
 Entero cedula=1,numplatos,i,cantplatos,cont;
Caracter nombre[20],plato[20];
 Decimal precio,subtotal,preciototal,total,iva;
 Proceso:
 Mientras (cedula!=0)
    {
        Escribir("Ingrese la cédula:");
        Leer("cedula);
        Escribir("Ingrese el nombre del cliente:");
        Leer("nombre);
        Escribir("Ingrese el numero de platos del menú que va a servirse:");
        Leer("numplatos);
        i=1;
        preciototal=0;
        subtotal=0;
        total=0;
        iva=0;
        Mientras(i<=numplatos)
        {    
            getchar();
            Escribir("Ingrese el nombre del palato %d:\n",i);
            Leer(plato);
            Escribir("Ingrese la cantidad de platos que desea:");
            Leer(cantplatos);
            Escribir("Ingrese el precio:");
            Leer(precio);
            preciototal=cantplatos*precio;
            subtotal=subtotal+preciototal;
            iva=0.12*subtotal;
            total=iva+subtotal;
            i++;
            
        }
        
            Escribir("RESTARURANTE BUEN SABOR\n");
            Escribir("Factura del cliente %s \n",nombre);
            Escribir("Cédula:",cedula);
            Escribir("subtotal=",subtotal);
            Escribir("Iva",iva);
            Escribir("Valor total a pagar",total);
        
        cont++;
    }
Salida:
            Escribir("RESTARURANTE BUEN SABOR\n");
            Escribir("Factura del cliente %s \n",nombre);
            Escribir("Cédula:",cedula);
            Escribir("subtotal= ",subtotal);
            Escribir("Iva=",iva);
            Escribir("Valor total a pagar=",total);
*******************************************************************************/
#include <stdio.h>  //Definicion de biblioteca

void main()   //Funcion principal main 
{   int cedula=1,numplatos,i,cantplatos,cont=0; 
    char nombre[20],plato[20];
    float precio,subtotal,preciototal,total,iva;
    while(cedula!=0) //valor centinela 
    {
         printf("Ingrese la cédula:");
         scanf("%i",&cedula);
        printf("Ingrese el nombre del cliente:");
        scanf("%s",&nombre);
        printf("Ingrese el numero de platos del menú que va a servirse:");
        scanf("%d",&numplatos);
        i=1;     //Inicializacion de variables
        preciototal=0;
        subtotal=0;
        total=0;
        iva=0;
        while(i<=numplatos)   //Inicio de la estructura de control repetitiva while
        {    
            getchar(); //funcion getchar para leer el caracter
            printf("Ingrese el nombre del palato %d:\n",i);    //Entrada de datos
            scanf("%s",&plato);
            printf("Ingrese la cantidad de platos que desea:");
            scanf("%d",&cantplatos);
            printf("Ingrese el precio:");
            scanf("%f",&precio);
            preciototal=cantplatos*precio; //operaciones para sacar el preciototal
            subtotal=subtotal+preciototal; //operaciones pra sacar el subtotal
            iva=0.12*subtotal;  //sacar el iva
            total=iva+subtotal; 
            i++; //contador
        
        }
        
            printf("RESTARURANTE BUEN SABOR\n");   //datos de salida para la factura
            printf("Factura del cliente %s \n",nombre);
            printf("Cédula:%i \n",cedula);
            printf("subtotal= %.2f \n",subtotal);
            printf("Iva=%.2f \n",iva);
            printf("Valor total a pagar=%.2f\n",total);
        
        cont++; //contador
        
        
        
    }
    

}

