#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    FILE *fp = fopen("test.txt", "w");

    if (fp == NULL) {
        puts("Couldn't open file or file already exists");
        // exit(0);

    } else {
        fputs("programacion 1, 2021 1 C, v3", fp); // guarda un string en una linea

        puts("archivo creado!");
        fclose(fp);

    }
    return 0;
}