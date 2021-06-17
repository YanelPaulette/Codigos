#include <stdio.h>

int main()
{
    int numeros[50];  // capacidad (50)
    int longitud = 0; // lengh : longitud

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", numeros[i]);
        longitud++;
    }
    printf("la longitud es %d \n", longitud);
    printf("espacio disponible es  es %d \n", (50-longitud));
}