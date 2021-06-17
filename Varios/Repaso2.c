#include <stdio.h>

// Clase 8 - ejercicio 2 
// repaso funciones, paso de parametros por valor y referencia a funciones 

// declaracion de funciones 

void func_valor (int); 
void func_referencia (int *); 

int main(int argc, char const *argv[])
{
  // 3) funciones 
  int x = 5; 

  // En general los parametros se pasan a una funcion de C mediante valor, es decir, 
  // los valores se que se pasan se copian a los parametros de la funciones llamada en el momento que se invoca. 
  // Si el parametro se modifica dentro de la funcion, no se altera el valor en el programa que la llama. 


  // 3.1) 
  printf(" Valor de la V -5 - en main %d\n", x); 

  func_valor(x);  // invocacion (llamado) a funcion  (se pasa una copia de 'x') 
  // la variable 'x' se pasa por valor, no se ve afectado su valor dentro del programa main. 

  printf(" V x, despues de la fx por valor  no cambia %d\n", x);  // 5


  // 3.2) 
  //Si quiero que se modifique el valor de la V, entonces lo tengo que pasar por referencia
  func_referencia( &x ); // a la fx le paso la referencia de la ubicacion de memoria de esa variable, 
                         // no una copia
  printf(" V x, despues de la fx por  referencia si cambia %d\n", x); 
  
  return 0;
}


void func_valor( int y )  // recibe un valor 
{
  // se recibe el parametro 'y' por valor (es una copia de 'x') 
  // ++y;  // y++; 
  
  printf("V -5- dentro de funcion pasando  por valor : %d\n", ++y);  // 6
}


void func_referencia( int *py ) // recibe la referencia como un puntero
{
  // se recibe el parametro puntero 'py' por referencia. contiene una referencia a una ubicacion en memoria de una variable. 
  // los punteros son el mecanismo usado en C para permitir que una funcion llamada modifique las variable en la funcion que la llama.
  // ++(*py); 
  *py += 1;
  // *py = *py + 1;
  printf("dentro de funcion pasando por referencia : %d\n", *py); 
}