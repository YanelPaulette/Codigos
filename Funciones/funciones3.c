#include <stdio.h>

void saltearlinea();

main()

{
    int cant = 0;
    int valores[] = {10, 20, 30, 40, 50};

    printf("ingrese cantidad de elementos \n");
    scanf("%d", &cant);

    for (int i = 0; i < cant; i++)
    {

        printf(" Ingrese un valor %d \n", i + 1);
        saltearlinea();
        scanf("%d", &valores[i]);
    }

}

void saltearlinea()

{
printf(" ver funcion \n \n");
}