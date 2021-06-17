#include <stdio.h>
#include <string.h>

main()
{
    char s1[] = "hola";
    char s2[] = "chau";

    //if (s1 == s2) {
    // ¡ERROR! estoy comparando los punteros
    // }
    int d = strcpy(s1, s2); // pone el valor 2 en valor 1
    printf(" con strcpy %s \n ", d);

    int e = strcat(s1, s2); // pone el valor 2 en valor 1
    printf("con strcat %s \n", e);

    if (strcmp(s1, s2) == 0)
    {
        // Compara caracter a caracter
        printf("con strcmp Son iguales");
    }
    else
    {
        printf("No son iguales");
    }
}