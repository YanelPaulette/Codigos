
#include <stdio.h>
#include <string.h> // por strcpy
#define COLS 50     // uso una constante

int main()
{
    const int columnas = 50;
    char datos[3][COLS]; //  NULL : \0
    char palabra[COLS];
    char palabra2[COLS];

    for (int i = 0; i < 3; i++) // guardo en el vector
    {
        printf("ingrese  nombre :"); //pido
        scanf("%s", palabra);         // guardo

        printf("ingrese apellido :"); //pido
        scanf("%s",  palabra2);        // guardo

        strcat(palabra, " ");
        strcat(palabra, palabra2); // con esto concatenas

        strcpy(datos[i], palabra); // strcpy para asignar un string a otro string. 1° Destino / 2° lo que queremos copiar
    }

    printf("---------------------\n");

    for (int i = 0; i < 3; i++) // para mostrar la matriz
    {
        // // imprimir fila completa ( aca se puede porque son strings)
        printf("fila %d: %s\n", i, datos[i]);

        /* imprimir caracter por caracter (celda por celda)
    for (int j = 0; j < COLS && datos[i][j]!='\0'; j++) //imprime hasta el ultomo caracter o hasta que llegue al final del string. 
    {
      printf("%c", datos[i][j]); // muestro con %c
    }
    printf("\n");*/
    }

    FILE *arch; // declarar puntero al archivo

    arch = fopen("datos.txt", "w"); // lo abro

    for (int i = 0; i < 3; i++) // recorremos la matriz
    {
        fprintf(arch, "%s\n", datos[i]); // escribo con formato-  imprimo fila completa
    }

    fclose(arch); // lo cerramos

    return 0;
}