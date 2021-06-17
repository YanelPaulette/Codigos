#include <stdio.h>

int main()
{

    char str[] = "hola mundo\n";

    FILE *fpuntero; // file es un tipo de dato

    fpuntero = fopen("hola_mundo_W.txt", "w");
    if (fpuntero == NULL) // por si no puede abrirlo
    {
        printf("Error al intentar abrir el archivo");
        return 1;
    }

   
       for (int i = 0; i < 120; i++)
    {
    fprintf(fpuntero, "Guardamos la  linea  string %d %s", i,  str);
    }
    

    fclose(fpuntero);
    // printf("Pulse una tecla para salir del programa\n");

    return 0;
}