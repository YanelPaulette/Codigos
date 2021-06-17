/* Guardar Matriz
Desarrollar el programa que permita guardar los datos de una matriz de 20 x 20 en
un archivo de texto.
En primer lugar, se deberá utilizar una función
para cargar la matriz con valores aleatorios
considerando un valor de “random” ingresado por el
usuario: ej: si ingresa 200, el “random” será
entre 0 y 199.
Se requiere que la carga de la matriz se realizase en forma vertical.
Finalizada la carga, mostrar el contenido de la matriz por pantalla y resguardar
la misma en el archivo de texto.
Condiciones:
 Archivo tipo texto, nombre: matriz.txt
 Si contiene información previa, la misma deberá truncarse.*/

#include <stdio.h>
#include <stdlib.h>

void cargar(int); // ca a recibir un entero
void guardar();

int Matriz[20][20];

main()
{
    int Limite_superior;

    printf(" Ingrese un numero \n");

    scanf("%d", &Limite_superior);
    cargar(Limite_superior);
    guardar();
}

void cargar(int Lim_superior) // recibe el limite del usuario
{

    int Num_Random;

    for (int j = 0; j < 20; j++) // Recorro Filas
    {
        for (int i = 0; i < 20; i++) // Recorro Columnas
        {
            Num_Random = Matriz[i][j] = rand() % Lim_superior; //Aleatorio de 0 a 99
        }
    }
}

void guardar() // recibe el char, la letra generada en la fx generar

{

    FILE *archivo; // puntero

    archivo = fopen("matriz.txt", "wt"); //abro con wt, para truncar

    printf(" \n");

    for (int j = 0; j < 20; j++) // Recorro Filas
    {
        for (int i = 0; i < 20; i++) // Recorro Columnas
        {

            printf("%i  \t", Matriz[i][j]);
            fprintf(archivo, "%i\t", Matriz[i][j]);
        }
       
    }

    fclose(archivo); // cierro
}
