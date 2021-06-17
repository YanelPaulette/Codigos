#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[100];
    int i, j; // para la matriz
    int matriz[20][20];
    char *pc;
    const char separador[2] = "\t"; // la variable tab
    char *token;
    int nro;

    // abro el archivo
    FILE *fp;
    fp = fopen("matriz.txt", "r");
    if (fp == NULL)
    {
        printf("No se puede abrir el archivo. . . ");
        return 1;
    }

    // fgets lee  el archivo linea por linea

    i = 0;

    do // al menos la 1° vuelta la da
    {
        pc = fgets(c, 100, fp); // lee y lo guarda en la variable c. devuelve un puntero a char
        j = 0;

        if (pc != NULL)// puntero que lee hasta el final de archivo
        {

            /* optener primera parte, primer token */
            token = strtok(c, separador); // separador es una variable
            /* recorrer todos los tokens */
            while (token != NULL)
            {
                nro = atoi(token);  // con atoi convierto el token en nro
                matriz[i][j] = nro; // guardo el nro en la matriz

                token = strtok(NULL, separador);
                j++; // x cada token avanza una columna
            }
            i++; // por cada linea avanza una fila
        }
        else
        {
            // printf("null");
        }

    } while (pc != NULL);

    printf("-----------------------------------\n");
  
  // leer la matriz por pantalla

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // acomoda la matriz
    }

    // for (i = 0; i <= 20; i++)
    // {
    //     for (j = 0; j < 20; j++)
    //     {
    //         while (c != EOF)
    //         {
    //             // fprintf(fp, "%d", matriz[i][j]);
    //         }
    //     }
    // }

    fclose(fp);

    return 0;
}