
#include <stdio.h>

int sumar(int, int);

main()
{

    int cant = 0;
    int suma = 0;
    int valores[] = {10, 20, 30, 40, 50};

    printf("ingrese cantidad de elementos \n");
    scanf("%d", &cant);

    for (int i = 0; i < cant; i++)
    {

        printf(" Ingrese un valor %d \n", i + 1);
        scanf("%d", &valores[i]);
        suma = sumar(suma, valores[i]);
    }

    printf(" la suma es  %d \n", suma);
}

int sumar(int valor1, int valor2) // definicion
{
    int sumando = 0;
    return valor1 + valor2;
}
