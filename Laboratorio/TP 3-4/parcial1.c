/*
Se deberá cargar primeramente una matriz de 20 x 20 con números enteros seleccionados aleatoriamente 
entre 1 y 1000 (incluidos los extremos).
Una vez cargada la matriz se debe guardar en un archivo de texto con el nombre matriz.dat.
Defina una segunda matriz de 20 x 20 que se cargue con los datos del archivo matriz.dat 
recientemente guardados.Para finalizar, mostrar por pantalla la matriz cargada desde el archivo
 y la suma total de los valores de sus filas pares e impares como Total pares: xxx | Total impares: xxx.
*/

#include <stdio.h>
#include <stdlib.h>

void cargar();
void guardar();
void leer();

#define contador 20

int Matriz[20][20]; // defino la matriz, tamaño pedido. Int: num enteros
int cont = 0;

main()

{
    cargar();  // llamo a la fx cargar la matriz con num random
    guardar(); // llamo a la fx guardar matriz en archivo
    leer();    // llamo a la fx leer la matriz
}

void cargar()

{

    int Num_Random = 0;
    int Total_filas = 0;
    int fila_par = 0;
    int fila_impar = 0;
    for (int i = 0; i < 20; i++) // Recorro Filas
    {
        for (int j = 0; j < 20; j++) // Recorro Columnas
        {
            Num_Random = Matriz[i][j] = rand() % 1001; //Aleatorio de 1 a 1000
        }
    }
    printf("------------------------------- \n");
    printf("La matriz cargarda en la  fx cargar \n");
    printf("------------------------------- \n");

    // Muestro la matriz
    for (int i = 0; i < 20; i++)
    {
        Total_filas++;
        if (Total_filas % 2 == 0)
        {
            fila_par++;
        }
        else
            fila_impar++;

        for (int j = 0; j < 20; j++)
        {
            printf("%i \t", Matriz[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------------------------------- \n");
    printf(" El total de filas de la matriz es:  %i \n", Total_filas);
    printf(" El total de filas par de la matriz es: %i\n", fila_par);
    printf(" El total de filas impar  de la matriz es:  %i  \n", fila_impar);
    printf("-------------------------------------------------- \n");
}

void guardar() //

{
    int Matriz2[20][20];
    int Total_filas = 0;

    FILE *archivo; // puntero

    archivo = fopen("matriz.dat", "wt"); //abro con wt, para truncar

    printf(" \n");

    for (int i = 0; i < 20; i++) // Recorro Filas
    {
        for (int j = 0; j < 20; j++) // Recorro Columnas
        {

            Matriz2[i][j] = Matriz[i][j];
            fprintf(archivo, "%d", Matriz[i][j]);
            Total_filas++;
        }
    }

    fclose(archivo); // cierro

    printf(" El total de filas de la matriz es \n");
}

void leer()
{

    char c[100];
    char buff[255];

    FILE *fp;
    fp = fopen("matriz4.txt", "r"); // abro el archivo

    if (fp == NULL)
    {
        printf("No se puede abrir el archivo. . . "); // devuelva error si no lo abre
        //return 1;
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    while (fscanf(fp, "%s", buff) != EOF)
    {
        printf("%s\t", buff);
        cont++;
        if (cont == contador)
        {
            printf("\n");

            cont = 0;
        }
    }

    fclose(fp); // cierro el archivo

    //return 0;
}