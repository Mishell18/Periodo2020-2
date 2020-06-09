/******************************************************************************
Datos de Entrada
Entero op,edad;
Decimal descuento=0, total=0,compra=0;
Decimal L1,L2,L3,area=0,semip=0,area1;
Entero I=2, CAM=1,SSE=0;
Enterofilas,columnas,cantNum;
Entero voto,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,T=0;
Decimal porc1=0,porc2=0,porc3=0,porc4=0,porc5=0;
Proceso
Escribir"SENTENCIAS CONDICIONALES Y REPETITIVAS\n");
Escribir("\tMenu principal\n");
Escribir(" 1.Descuentos\n 2.Triángulo\n 3.Suma de terminos\n 4.Conteo de votos\n 5.Diagrama dado un número entero\n");
Escrbir("Escoja una opcion:");
Leer ("%d",&op);
    switch(op)
    {
        case 1:
                Escribir("Cual fue el valor de su compra:");
                Leer("%f",&compra);
                Si (compra>=5000)
                {
                    descuento=0.2;
                }
                sino si(compra >=1500 && compra <5000)
                {
                    descuento=0.15;
                }
                sino si(compra>=800 && compra<1500)
                {
                    descuento=0.1;
                }
                sino
                {
                    descuento=0;
                }
                total=compra-compra*descuento;
                Escribir("Su valor a pagar es  de $%.2f.", total);
        break;
        case 2:
                Escribir("Ingrese el valor del los tres lados\n");
                Escribir("Lado 1:");
                Leer("\t%f",&L1);
                Escribir("Lado 2:");
                Leer("\t%f",&L2);
                Escribir("Lado 3:");
                Leer("\t%f",&L3);
                Si(L1+L2>L3 && L2+L3>L1 && L1+L3>L2)
                {
                    si(L1==L2 & L2==L3 & L1==L3)
                        Escribir("\tES UN TRIÁNGULO EQUILÁTERO\n");
                    sino si(L1==L2 || L2==L3 || L1==L3)
                        Escribir("\tES UN TRIÁNGULO ISÓCELES\n");
                    sino
                    {
                        Escribir("\tES UN TRÍANGULO ESCALENO\n");
                    }
                    semip=(L1+L2+L3)/2;
                    area=sqrt((semip*(semip-L1)*(semip-L2)*(semip-L3)));
                    Escribir("El Área del triangulo es %.2f metros cuadrados." ,area);
                }
                sino
                {
                    Escribir("No es un triangulo");
                }
        break;
        case 3:
             Escribir("Dada la siguiente serie 2, 7, 10, 15, 18, 23,...,2500\n");
             Escribir("Todos sus terminos son:");
                   while (I<=2500)
                  {
                      SSE=SSE+I;
                      printf("\t %d",I);
                      if(CAM)
                      {
                          I=I+5;
                          CAM--;
                      }
                      else
                      {
                           I=I+3;
                           CAM++;
                      }
                      
                  }
                  Escribir("\n La suma de la serie es:%d",SSE);
        break;
        case 4:
         Escribir("Ingresar el primer voto:");
         Leer("%d",&voto);
         do{ 
             switch(voto){
                case 1:
                cont1++;
                break;
                case 2:
                cont2++;
                break;
                case 3:
                cont3++;
                break;
                case 4:
                cont4++;
                break;
                case 5:
                cont5++;
                break;
              }
              Escribir("Ingrese el siguiente voto:");
              Leer("%d",&voto);
         }while (voto);
            
            T=cont1+cont2+cont3+cont4+cont5;
            Escribir("Total de votos:%d\n", T);
            porc1=(float)(cont1*100)/T;
            porc2=(float)(cont2*100)/T;
            porc3=(float)(cont3*100)/T;
            porc4=(float)(cont4*100)/T;
            porc5=(float)(cont5*100)/T;
            Escribir(" El número de votos del candidato1 es %d y el porcentaje que obtuvo es de %.2f\n",cont1,porc1);
            Escribir(" El número de votos del candidato2 es %d y el porcentaje que obtuvo es de %.2f\n",cont2,porc2);
            Escribir(" El número de votos del candidato3 es %d y el porcentaje que obtuvo es de %.2f\n",cont3,porc3);
            Escribir(" El número de votos del candidato4 es %d y el porcentaje que obtuvo es de %.2f\n",cont4,porc4);
            Escribir(" El número de votos del candidato5 es %d y el porcentaje que obtuvo es de %.2f\n",cont5,porc5);
         
        case 5:
                
                Escribir("Escribir el numero de columnas que desea: ");
                Leer("%i",&cantNum);
                for (filas=1; filas<=cantNum;filas++)
                {
                for(columnas=1;columnas<=filas;columnas++)
                {
                    Escribir("%i\t",columnas);
                }
                Escribir("\n");
                }
        break;
        default:
                Escribir("Opcion invalida. Intente nuevamente");
    }
}
Datos de Salida
En caso 1
Escribir("Su valor a pagar es  de $%.2f.", total)
En caso 2
 Escribir("\tES UN TRIÁNGULO EQUILÁTERO\n");
 Escribir("El Área del triangulo es %.2f metros cuadrados." ,area);
 o
 Escribir("\tES UN TRIÁNGULO ISÓCELES\n");
 Escribir("El Área del triangulo es %.2f metros cuadrados." ,area);
 o
 Escribir("\tES UN TRÍANGULO ESCALENO\n");
 Escribir("El Área del triangulo es %.2f metros cuadrados." ,area);
 o
 Escribir("No es un triangulo");
 En caso 3
 Escribir("Todos sus terminos son:");
 Escribir("\n La suma de la serie es:%d",SSE);
 En caso 4
Escribir(" El número de votos del candidato1 es %d y el porcentaje que obtuvo es de %.2f\n",cont1,porc1);
Escribir(" El número de votos del candidato2 es %d y el porcentaje que obtuvo es de %.2f\n",cont2,porc2);
Escribir(" El número de votos del candidato3 es %d y el porcentaje que obtuvo es de %.2f\n",cont3,porc3);
Escribir(" El número de votos del candidato4 es %d y el porcentaje que obtuvo es de %.2f\n",cont4,porc4);
Escribir(" El número de votos del candidato5 es %d y el porcentaje que obtuvo es de %.2f\n",cont5,porc5);
En caso 5
Diagrama segun n 
1

12

123

1234

12345
*******************************************************************************/
#include <stdio.h> //Declaracion de biblioteca
#include <math.h> // Declaracion de biblioteca

void main() //Funcion principal main
{
    int op,edad;          //Declaracion de variables
    float descuento=0, total=0,compra=0;
    float L1,L2,L3,area=0,semip=0,area1;
    int I=2, CAM=1,SSE=0;
    int filas,columnas,cantNum;
    int voto,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,T=0;
    float porc1=0,porc2=0,porc3=0,porc4=0,porc5=0;
    printf("SENTENCIAS CONDICIONALES Y REPETITIVAS\n"); //Titulo central
    printf("\tMenu principal\n"); //\t Para centrar el titulo 
    printf(" 1.Descuentos\n 2.Triángulo\n 3.Suma de terminos\n 4.Conteo de votos\n 5.Diagrama dado un número entero\n"); //Despliegue del menu
    printf("Escoja una opcion:"); // Ingreso de datos 
    scanf("%d",&op); //op es la variable donde se van a alamacenar las opciones
    switch(op) //Inicio de estructura de control switch
    {
        case 1: //Inicio del caso 1
                printf("Cual fue el valor de su compra:"); // Ingreso de datos 
                scanf("%f",&compra); //Lectura de datos- El especificador %f para variables tipo float
                if (compra>=5000) //Inicio de la estructura de control if-else
                {
                    descuento=0.2; //Asignación del descuento para el condición 1
                }
                else if(compra >=1500 && compra <5000) //Si no se cumple la primera condicion se cumplirá el siguiente else
                {
                    descuento=0.15;  //Asignación del descuento para el condición 2
                }
                else if(compra>=800 && compra<1500)
                {
                    descuento=0.1;  //Asignación del descuento para el condición 3
                }
                else
                {
                    descuento=0;   //Asignación del descuento para el ultimo else
                }
                total=compra-compra*descuento;  //Operaciones para sacar el total apagar 
                printf("Su valor a pagar es  de $%.2f.", total);  //Salida de datos- %.2f para definir que solo salgan dos decimales
        break;  //Con esete break se cierra el caso 1
        case 2: //Inicio del caso 2
                printf("Ingrese el valor del los tres lados\n"); //\n se usa para dar un salto de linea 
                printf("Lado 1:"); // Ingreso de datos 
                scanf("\t%f",&L1); //Lectura de datos 
                printf("Lado 2:"); // Ingreso de datos 
                scanf("\t%f",&L2); //Lectura de datos 
                printf("Lado 3:"); // Ingreso de datos 
                scanf("\t%f",&L3); //Lectura de datos 
                if (L1+L2>L3 && L2+L3>L1 && L1+L3>L2) // Inicio de if-else
                {
                    if(L1==L2 & L2==L3 & L1==L3) //Se establece la condicion de adentro del primer if 
                        printf("\tES UN TRIÁNGULO EQUILÁTERO\n"); //Salida de datos 
                    else if (L1==L2 || L2==L3 || L1==L3)
                        printf("\tES UN TRIÁNGULO ISÓCELES\n");  //Salida de datos 
                    else
                    {
                        printf("\tES UN TRÍANGULO ESCALENO\n"); //Salida de datos 
                    }
                    semip=(L1+L2+L3)/2;   //Calculo del semiperimetro
                    area=sqrt((semip*(semip-L1)*(semip-L2)*(semip-L3))); //calculo del area
                    printf("El Área del triangulo es %.2f metros cuadrados." ,area); //Salida de datos 
                }
                else
                {
                    printf("No es un triangulo"); //Salida de datos 
                }
        break; //Con este break se cierra el caso 2
        case 3: //Inicio del caso 3
             printf("Dada la siguiente serie 2, 7, 10, 15, 18, 23,...,2500\n"); //\n para hacer un salto de linea
             printf("Todos sus terminos son:");
                   while (I<=2500)    //Inicio de estructura de control while
                  {
                      SSE=SSE+I;   //variable que se utilaza para sumar términos
                      printf("\t %d",I); //Salida de datos 
                      if(CAM)  //Inicio de esructura de control if-else
                      {
                          I=I+5;// I+ señala un incremento 
                          CAM--; //-- operador de decremento
                      }
                      else
                      {
                           I=I+3;//I + señala un incremento 
                           CAM++; //++operador de incremento
                      }
                      
                  }
                  printf("\n La suma de la serie es:%d",SSE); //Salida de datos 
        break; //Cierre del del caso 3
        case 4: //Inicio del bloque 4
         printf("Ingresar el primer voto:"); // Ingreso de datos 
         scanf("%d",&voto); //Lectura de datos 
         do{  //Inicio de esructura de control do-while
             switch(voto){     //Inicio de estructura de control switch
                case 1:
                cont1++; //contador uno-++-operador de incremento
                break;
                case 2: 
                cont2++; //contador dos-++-operador de incremento
                break;
                case 3:
                cont3++; //contador tres -++-operador de incremento
                break;
                case 4:
                cont4++;//contador cuatro-++-operador de incremento
                break;
                case 5:
                cont5++;//contador cinco-++-operador de incremento
                break;
              }
              printf("Ingrese el siguiente voto:");  // Ingreso de datos 
              scanf("%d",&voto);  //Lectura de datos 
         }while (voto); 
            
            T=cont1+cont2+cont3+cont4+cont5;    //Suma de todos los contadores usados
            printf("Total de votos:%d\n", T);
            porc1=(float)(cont1*100)/T;    //Operaciones para sacar el porcentaje
            porc2=(float)(cont2*100)/T;    
            porc3=(float)(cont3*100)/T;   //(float)como aclaración de que el resultado de la operacion me dará un decimal 
            porc4=(float)(cont4*100)/T;   //Si excluyo (float) cada variabel que representa el porcentaje me dará un número entero
            porc5=(float)(cont5*100)/T;
            printf(" El número de votos del candidato1 es %d y el porcentaje que obtuvo es de %.2f\n",cont1,porc1);  //Salida de datos 
            printf(" El número de votos del candidato2 es %d y el porcentaje que obtuvo es de %.2f\n",cont2,porc2);   //Salida de datos 
            printf(" El número de votos del candidato3 es %d y el porcentaje que obtuvo es de %.2f\n",cont3,porc3);  //Salida de datos 
            printf(" El número de votos del candidato4 es %d y el porcentaje que obtuvo es de %.2f\n",cont4,porc4);   //Salida de datos 
            printf(" El número de votos del candidato5 es %d y el porcentaje que obtuvo es de %.2f\n",cont5,porc5);  //Salida de datos 
        break; //Cierre del caso 4
        case 5: //Inicio del caso 5
                
                printf("Escribir el numero de columnas que desea: "); // Ingreso de datos 
                scanf("%i",&cantNum);   //Lectura de datos 
                for (filas=1; filas<=cantNum;filas++) //Inicio de estructura de control for 
                {
                for(columnas=1;columnas<=filas;columnas++) //++ operador de incremento
                {
                    printf("%i\t",columnas);//\t para una tabulacion horizontal del titulo- %i para variables de tipo entero
                }
                printf("\n"); //\n para hacer un salto de linea
                }
        break; //Cierre del caso 5
        default:  // Si los demás casos no se cumplen, fault se cumplirá
                printf("Opcion invalida. Intente nuevamente"); //Salida de datos
    }
}//Fin de proceso
