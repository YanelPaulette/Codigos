/*d) Guardar Matriz
Desarrollar el programa que permita recuperar los datos de una matriz de 20 x 20
desde el archivo de texto matriz.txt.
Listar por pantalla los datos recuperados del archivo respetando el formato de la
matriz.
Características del archivo:

 Archivo tipo texto, nombre: matriz.txt*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[100];
    char *pc;
 

    FILE *fp;
    fp = fopen("matriz.txt", "r");

    if (fp == NULL)
    {
        printf("No se puede abrir el archivo. . . ");
        return 1;
    }

    do
    {   
        pc = fgets(c, 100, fp);

        if (pc != NULL)
        {
            printf("%s ", c);
        }
        else
        {
            printf("Error");
        }
    } while (pc != NULL);
    {
        return 0;
    }

    fclose(fp);

    return 0;
}