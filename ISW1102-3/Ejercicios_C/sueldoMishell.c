/******************************************************************************
Una empresa clasifica a sus empleados en dos grupos, los del grupo 1 son aquellos
que laboran dentro de la misma y desean darles un aumento de sueldo siguiendo el
siguiente criterio: si el empleado trabajó más de 40 horas, su sueldo será incrementado
en $50.00, si el empleado es mujer o es mayor de 25 años y tiene en la empresa más
de 30 años su sueldo se incrementará en $800.00 y si no cumple con estas
condiciones solo se incrementa en $100.00 (este último es independiente de las horas
trabajadas), Para los empleados del grupo 2 (los que aspiran a ingresar a la
empresa)si es mayor de 18 años y tiene más de 85 puntos en una prueba presentada
entonces será contratado. Elaborar un programa para determinar el sueldo de una
persona e indicar si será o no contratado. Debe especificar los datos de entrada,
proceso y salida.
Datos de entrada
Entero op,op2,horas,edad,anos, puntos
Decimal sueldo, sueldototal=0;
Proceso
 Escribir("1.grupo1\n2.grupo2\n");
 Escribir("Escoja una opcion:");
 Leer op
 Escribir "¿Cuantas horas trabajó?";
 Leer horas;
 Escribir"Ingese su sueldo:;
  Leer sueldo
  Escribir "1.masculino\n.2.femenino\n";
  Escribir ("escoja una opcion:");
  Leer op2;
 Escribir "Ingrese su edad:");
  Leer edad ;
  Escribir("Cuantos años lleva en la empresa:");
  Leer("%d",&anos);
  Escribir ("¿Cual fue su puntuación en la prueba:");
    Leer puntos;
    if(op==1)
    {
    if (horas>40)
      sueldototal=sueldo+50;
    else if(op2==2 ||edad>25 &&anos>30)
     {
         sueldototal=sueldo+800;
     }
     else {
     sueldototal=sueldo+100;
     }
     printf("El sueldo total es %f",sueldototal);
    }
    else
    {  if (edad>18 && puntos>85)
       printf("Será contratado");
    }
}

*******************************************************************************/
#include <stdio.h>
void main()
{ int op,op2,horas,edad,anos, puntos;
  float sueldo, sueldototal=0;
 
    printf("1.grupo1\n2.grupo2\n");
    printf("Escoja una opcion:");
    scanf("%d",&op);
    printf("Ingrese su edad:");
    scanf("%d",&edad);
  if(op==1) {
       printf("¿Cuantas horas trabajó?");
       scanf("%d",&horas);
       printf("Ingese su sueldo:");
       scanf("%f",&sueldo);
       printf("1.masculino\n2.femenino\n");
       printf("escoja una opcion:");
       scanf("%d",&op2);
       printf("Cuantos años lleva en la empresa:");
       scanf("%d",&anos);
       if (horas>40)
       sueldototal=sueldo+50;
      if((op2==2 ||edad>25) &&anos>30)
     sueldototal=sueldo+800;
     else 
     sueldototal=sueldo+100;
      printf("El sueldo total es %f",sueldototal);
        
     }
  else  {
      printf("¿Cual fue su puntuación en la prueba?");
      scanf("%d",&puntos);
      if (edad>18 && puntos>85){
      printf("Será contratado");
      }
      else {
          printf("No será contratado");
        }
      
    }
    
    }


