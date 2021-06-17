/*
LListamos números
Comprobamos el desarrollo para listar números, de
tal manera que se desea abrir el archivo
“números.txt” generado anteriormente.
Leer el archivo para indicar cuales fueron los números ingresados por el usuario y
listar por pantalla los números contenidos en el archivo.
Características del archivo:
 Archivo tipo texto, nombre: numeros.txt

*/
#include <stdio.h>


main()
{
    FILE *fpuntero;                        // puntero 
    char str[100];                         

    fpuntero = fopen("numeros.txt", "r"); // modo r : lectura
    if (fpuntero == NULL)                 // si falla devuelve un error
    {
        perror("Error al intentar abrir el archivo");
        return 1;
    }

    while (fscanf(fpuntero, "%s", str) != EOF) //  lo lee hasta End of File
    {

        printf("%s\n", str);                   // imprime los numeros   
    }

    fclose(fpuntero);
}