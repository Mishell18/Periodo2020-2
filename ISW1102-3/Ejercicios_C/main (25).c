/******************************************************************************
Crear un programa que permita realizar un menú con las siguientes opciones:
1.Para una guardería de perros,realice un programa que acepte datos para el ID del 
propietario de un perro, nombre, raza, edad y peso del perro.Despliegue una factura
contenga todos los datos de entrada al igual que la tarifa semanal de la guardería, la cual 
es de $55 para perros con menos de 7 kilogramos, $75 para perros de 7 a 14 kilogramos 
inclusive, $105 para perros de 14.1 a 37 kilogramos inclusive, y $125 para perros con más 
de 37 kilogramos.
2. Dados tres números, determinar si la suma de cualquier pareja de ellos es igual al tercer 
número. Si se cumple esta condición, escribir IGUALES y, en caso contrario, escribir 
DISTINTAS.  Por ejemplo en el caso que los números sean 3 9 6 la respuesta es IGUALES
, ya que 3+6 = 9. Sin embargo, si los números fueran 2 3 4, el resultado sería DISTINTAS

Datos de entrada
Entero op, edad,tarifa=0, numero1,numero2,numero3,suma1=0,suma2=0,suma3=0;
Decimal float peso;
Caracter  char nombre[20],raza[40];
Proceso
 Escribir ("\t Menu Principal \n");
 Escribir(" 1.Datos para el ID y factura\n 2.Suma de parejas de tres numeros\n");
 Escribir ("Escoja una opcion:");
 Leer("%d",&op);
   switch(op){
       case 1:
           {  
               Escribir("Ingresar nombre del perro:");
               Leer("%s",&nombre);
               Escribir("Ingresar raza del perro:");
               leer (raza);
               Escribir("Ingresar edad del perro:");
               Leer ("%i",&edad);
               Escribir("Ingresar el peso del perro:");
               Leer("%f",&peso);
                Si (peso<7) entonces{
                   tarifa=55;
               }si no {
                   si(peso>=7 && peso<=14)entonces{
                       tarifa=75;
                   }sino {
                       si (peso>=14.1 && peso<=37)entonces{
                           tarifa=105;
                       }sino{
                           tarifa=125;
                       }
                   }
               }
                Escribir("\t Factura \n");
               Escrbir("Nombre:%s \n",nombre);
               Escrbir("Raza:%s\n",raza);
               Escrbir("Peso:%.2f\n",peso);
               Escrbir("Tarifa semanal:%i\n",tarifa);
               
               
               
           }
       break;
       case 2:
          Escrbir("Ingresar primer numero:");
          Leer("%i",&numero1);
          Escrbir}("Ingresar segundo numero:");
          Leer("%i",&numero2);
          Escrbir("Ingresar tercer numero:");
          Leer("%i",&numero3);
          suma1=numero1+numero2;
          suma2=numero1+numero3;
          suma3=numero2+numero3;
          Si(suma1==numero3 || suma2==numero3 || suma3==numero3)entonces{
             Escrbir("Son iguales");
          }sino{
              Escrbir("Son distintas");
          }
          
          
          
          
       break;
   }
}
Salida
Escribir("\t Factura \n");
Escrbir("Nombre:%s \n",nombre);
Escrbir("Raza:%s\n",raza);
Escrbir("Peso:%.2f\n",peso);
Escrbir("Tarifa semanal:%i\n",tarifa);
o 
Escrbir("Son iguales");
sino
Escrbir("Son distintas");

*******************************************************************************/
#include <stdio.h> //Declaracion de biblioteca

void main() //funcion Principal
{  int op, edad,tarifa=0, numero1,numero2,numero3,suma1=0,suma2=0,suma3=0; //Declaracion de variables enteras
   float peso;  //Declaracion de variabes decimales
   char nombre[20],raza[40]; //Declaracion de caracteres 
    printf("\t Menu Principal \n");  //Se imprime el titulo menu principal
    printf(" 1.Datos para el ID y factura\n 2.Suma de parejas de tres numeros\n"); //Se imprimen las opciones del menu
    printf("Escoja una opcion:"); //  Se imprime esocja solo una opcion de las dos ya presentadas
    scanf("%d",&op);                  //La variable op almacena todas las opciones del menu
   switch(op){                     // Elaboracion del menu con la ayuda de la estructura de control switch
       case 1:                     //Cada caso es una para la respectiva opcion escogida
           {  
               printf("Ingresar nombre del perro:"); //Entrada de los datos que utilizaré
               scanf("%s",&nombre);   //Es importante recordar que dentro de los casos no se deben declarar las variables
               getchar();            //getchar  nos ayudara a leer la cadena de caracteres dentro del caso1 de switch
               printf("Ingresar raza del perro:"); // Se imprime ingresar reza del perro
               gets(raza);                        //Usé gets porque existen razas de perros largas, por lo tanto son una cadena de caracteres  
               printf("Ingresar edad del perro:");//Se imprime ingresar el peso del perro
               scanf("%i",&edad);                 //Usé %i porque la edad es un entero
               printf("Ingresar el peso del perro:"); //Se imprime ingresar el peso del perro
               scanf("%f",&peso);                   //use %f porque el peso puede ser un numero decimal
               if(peso<7){                       //Comparacion del peso con  la ayuda de la estructura de control if-else
                   tarifa=55;                    //Si la condicion es verdadera a la tarifa se le asigna un valor determinado 
               }else {                           // si no es así
                   if(peso>=7 && peso<=14){      //se abre otra condicion
                       tarifa=75;                // Si esta nueva condicion es verdadera a la tarifa se le asigna un valor determinado
                   }else {                       //si es falso
                       if(peso>=14.1 && peso<=37){ //se abre otra condicion 
                           tarifa=105;            // si esta otra condicion es verdadera, a la tarifa se le asigna u nuevo valor
                       }else{                      //sino es así
                           tarifa=125;             //por ultimo a la tarifa de le asigna otro valor si es que ninguna de las anteriores condiciones se cumplen
                       }
                   }
               }
               printf("\t Factura \n");             //uso 't para que el titulo quede mas centrado
               printf("Nombre:%s \n",nombre);       // Para que salga mi dato nombre pongo %s
               printf("Raza:%s\n",raza);            //Para que salga mi dato raza pongo %s
               printf("Peso:%.2f\n",peso);           //Para que salga mi dato peso pongo %f y especifico cuantos decimales quiero
               printf("Tarifa semanal:%i\n",tarifa);  //Para que salga mi dato tarifa pongo %i 
               
               
               
           }
       break;    //Con este break se cierra el caso1 
       case 2:   //Empieza el caso 2
          printf("Ingresar primer numero:");   //Ingreso de los datos que utiizaré para el caso dos 
          scanf("%i",&numero1);                 // uso %i porque la variable numero1 es un entero
          printf("Ingresar segundo numero:");  //Cada printf debe ir al final con ;
          scanf("%i",&numero2);                // uso %i porque la variable numero2 es un entero
          printf("Ingresar tercer numero:");  
          scanf("%i",&numero3);             // uso %i porque la variable numero3 es un entero
          suma1=numero1+numero2;              // hay que realizar operaciones de suma con cada pareja posible de los tres numeros
          suma2=numero1+numero3;              //utilizo tres variables para almacenar las tres sumas
          suma3=numero2+numero3;
          if(suma1==numero3 || suma2==numero3 || suma3==numero3){   //Comparacion de el resultado de las sumas con la ayuda de la estructura de control if else
              printf("Son iguales");          // si la condicion es verdadera se escribirá en el resultado que son iguales
          }else{                               // si la condicion es falsa se escribirá en el resultado que son distintas
              printf("Son distintas");
          }
          
          
          
          
       break; //Con este brake se termina el caso 2
   }
}


