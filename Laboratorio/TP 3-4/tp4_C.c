/*Abecedario
Desarrollar el programa necesario que recuperar letras almacenadas en el archivo
letras.txt.
El programa principal deberá acumular la cantidad de cada una de las letras en un
vector para luego mostrarlo por pantalla.
Características del archivo:
 Archivo tipo texto, nombre: letras.txt*/

#include <stdio.h>
#include <string.h>

void vector(char);

main()
{
    FILE *fpuntero;
    char c;
    int cant_letras = 0;

    fpuntero = fopen("letras.txt", "r"); // modo: r (read)

    if (fpuntero == NULL)
    { // control si lo pudo abrir
        printf("Error al intentar abrir el archivo");
        return 1;
    }

    do
    {
        c = getc(fpuntero); // lee caracter por caracter
        printf(" %c", c);

        cant_letras++;
        //vector(c); // * no pude resolver guardarlo en un vector

    } while (c != EOF); // La función getc lee un caractér del archivo que es asignado a la variable c.

    printf("La cantidad de letras ingresadas son %d\n", cant_letras - 1);

    fclose(fpuntero);
}

/*void vector(char letra)
{
    char Letra_recibida;
    char letras[100];

    for (int i = 0; i < 100; i++)
    {
        printf("%c", Letra_recibida);
        scanf("%s", &letras[i]);
        printf("%s", letras[i]);
    }

}*/