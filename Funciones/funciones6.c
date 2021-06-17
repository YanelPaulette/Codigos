#include <stdio.h>

int suma();
int resta();
void mostrar_suma(int TotalSuma);
void mostrar_suma_resta(int TotalSuma, int TotalResta);

main()

{
    int total = suma();
    int totalresta = resta();
    // printf(" El total de la suma es %d \n", total);
    //printf(" El total de la suma es %d \n", suma());
    //    mostrar_suma(total);
    mostrar_suma_resta(total, totalresta);
}

int suma()
{
    int num, num2;
    printf("Ingrese datos para la suma \n");

    printf("Ingrese un numero \n");
    scanf("%d", &num);
    printf("Ingrese un numero \n");
    scanf("%d", &num2);

    int suma = num + num2;
    return suma;
}

int resta()
{

    int num, num2;

    printf("Ingrese datos para la resta \n");
    printf("Ingrese un numero \n");
    scanf("%d", &num);
    printf("Ingrese un numero \n");
    scanf("%d", &num2);

    int resta = num - num2;
    return resta;
}

void mostrarsuma(int TotalSuma)
{
    printf("Total de la suma con total suma: %i \n", TotalSuma);
}

void mostrar_suma_resta(int TotalSuma, int TotalResta)
{
    printf("Total de la suma con suma y resta  : %i \n", TotalSuma);
    printf("Total de la resta con suma y resta : %i \n", TotalResta);
}