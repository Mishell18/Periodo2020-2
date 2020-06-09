/******************************************************************************
Realizar un programa que permita ingresar por teclado, 
el nombre, apellido y la edad de una persona e imprima los datos.
Datos de Entrada
Caracter nombre, apellido,hobby,artista,cancion,pelicula,juego,disgusto
Entero edad
Proceso
Escribir"Ingrese nombre"
Leer "nombre"
Escribir"Ingrese apellido"
Leer "apellido"
Escribir "Ingrese edad"
Leer "edad"
Escribir "Ingrese su hobby "
Leer "hobby"
Escribir "Ingrese su artista favorito "
Leer "artista"
Escribir "Ingrese su cancion favorita "
Leer "cancion"
Escribir "Ingrese su pelicula favorita "
Leer "pelicula"
Escribir "Ingrese su juego favorito "
Leer "juego"
Escribir "Actividad que le disgusta"
Leer "disgusto"
Escribir "*****************"
Escribir "Bibliografia"
Escribir "*****************"
Salida 
Escribir"Nombre:",nombre;
Escribir"Apellido:", apellido;
Escribir "Edad:",edad;
Escribir"Hobby:",hobby;
Escribir"Artista favorito:",artista;
Escribir"Cancionancion favorita:",cancion;
Escribir"Pelicula favorito:",pelicula;
Escribir"Juego favorito:",juego;
Escribir"Actividad que le disgusta:",disgusto;

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nombre [10], apellido [10],hobby [10],artista[10],cancion[10],pelicula[10],juego[10],disgusto[10];
    int edad;
    printf("Ingrese su nombre:");
    scanf("%s",nombre);
    printf("Ingrese su apellido:");
    scanf("%s",apellido);
    printf("Ingrese su edad:");
    scanf("%i",&edad);
    printf("Ingrese su hobby:");
    scanf("%s",hobby);
    printf("Ingrese su artista favorito:");
    scanf("%s",artista);
    printf("Ingrese su cancion favorita:");
    scanf("%s",cancion);
    printf("Ingrese su pelicula favorita:");
    scanf("%s",pelicula);
    printf("Ingrese su juego favorito:");
    scanf("%s",juego);
    printf("Actividad que le disgusta:");
    scanf("%s",disgusto);
    printf("*****************\n");
    printf("Bibliografia\n");
    printf("*****************\n");
    printf("Nombre:%s\n",nombre);
    printf("Apellido:%s\n",apellido);
    printf("Edad:%d \n",edad);
    printf("Hobby:%s\n",hobby);
    printf("Artista favorito:%s\n",artista);
    printf("Cancion favorita:%s\n",cancion);
    printf("Pelicula favorita:%s\n",pelicula);
    printf("Juego favorito:%s\n",juego);
    printf("Actividad que le disgusta:%s\n",disgusto);
    
    
    
}

