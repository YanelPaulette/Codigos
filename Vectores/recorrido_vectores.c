#include <stdio.h>

void main()
{
    int suma = 0;

    // declaracion y definicion
    int valores[] = {10, 20, 30, 40, 50};
    /*
    // printf("%d, %d \n", sizeof(int), sizeof(valores)); // 4, 20 (5 * sizeof(int))
    // printf("%p \n", valores); // 0xA4
    // printf("%p \n", valores + 2); // 0xAC (0xA4 + 2 * sizeof(int) = 0xAC)

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", valores[i]);
    }

    // un elemento solo del vector

    printf("En la posicion 3 es: %d \n", valores[3]);

    // forma decreciente
    for (int i = 5; i > 0; i--)
    {
        printf("en forma decreciente seria %d \n", valores[i - 1]);
    }

    for (int i = 0; i < 5; i++)
    {

        printf("%d \n", valores[i]);
        suma = suma + valores[i];
    }

    printf("La suma de los elementos es  %d \n", suma);

    // Pedir que ingrese un valor por pantalla
*/
    int cant = 0;

    printf("ingrese cantidad de elementos \n");
    scanf("%d", &cant);

    for (int i = 0; i < cant; i++)
    {

        printf(" Ingrese un valor %d \n", i + 1);
        scanf("%d", &valores[i]);
        suma = suma + valores[i];
    }

    printf(" la suma es  %d \n", suma);
}
