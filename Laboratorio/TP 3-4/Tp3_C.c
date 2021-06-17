/*Abecedario
Desarrollar el programa necesario que utilizando 2 funciones, una para generar
letras y otra para guardar en un archivo opere de la siguiente manera:
El programa principal deberá:
1) Solicitar al usuario la cantidad de letras a generar
2) Llamar a fx Generar(), quien retornará una letra entre la A y Z en forma
aleatoria
3) Mostrar por pantalla la letra a guardar
4) Llamar a fx Guardar(), pasando como parámetro la letra generada.*/

#include <stdio.h>
#include <stdlib.h>

void generar(int);  //  va a recibir un entero
void guardar(char); //  va a recibir un char

main()

{
    int cantidad;

    printf("Ingrese la cantidad de letras \n");
    scanf("%d", &cantidad);

    generar(cantidad); // informo el entero
}

void generar(int cantidad_) // recibe un entero
{

    int num_random;
    char Letra_generada;

    for (int i = 0; i < cantidad_; i++)

    {
        num_random = 65 + rand() % (90 + 1 - 65); // random
        Letra_generada = num_random;              // para la fx guardar
        printf("%c", num_random);               //c forzarlo a ser char
        guardar(Letra_generada);                  // paso esta letra como parametro 
    }
}

void guardar(char Letra_guardar) // recibe el char, la letra generada en la fx generar

{

    FILE *archivo; // puntero

    archivo = fopen("letras.txt", "a"); //abro con A, para agregar
    fputc(Letra_guardar, archivo);      // el paramentro que le paso, es el char de fx generar.
                                        //fputs: guarda un string en una linea

    fclose(archivo); // cierro
}