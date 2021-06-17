/*
Desarrollar el programa que permita recuperar los datos de una matriz de 20 x 20 desde el archivo de 
texto matriz.txt.

Listar por pantalla los datos recuperados del archivo respetando el formato de la matriz.

Características del archivo:
•	Archivo tipo texto, nombre: matriz.txt
*/

#include <stdio.h>

void mostrar();

main()
{
    mostrar();
}

void mostrar()
{
    char alumnos2[20][20]; // 20 ALUMNOS | 20 lugares para APELLIDO | 20 lugraes para NOMBRE

    FILE *archivor;

    archivor = fopen("alumnos.txt", "rt");
    int i = 0;
    do
    {
        fscanf(archivor, "%s %s \n", alumnos2[i][0], alumnos2[i][1]);
        i++;
    } while (!feof(archivor));

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s %s \n", alumnos2[i][0], alumnos2[i][1]);
    }

    printf("\n");

    fclose(archivor);
}