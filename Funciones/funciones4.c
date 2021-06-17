#include <stdio.h>
#include <string.h>

void imprimir(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c \n", s[i]);
        //putchar(s[i]);
        //puts(s[i]);
    }
}

void main()
{
    char s[] = "hola";
    // printf recibe el puntero al inicio de la cadena
    // Recorre e imprime hasta que encuentra un '\0'
    printf("%s", s);

    printf("%u", sizeof(s)); // 5
    // Requiere #include <string.h>
    printf("%u", strlen(s)); // 4

    printf("\n imprimir \n");
    imprimir(s);
}