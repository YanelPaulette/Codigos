#include <stdio.h>

main()
{

    int iBandera = 0; // INICIO BANDERA (MARCA = 0  -- APAGADA)

    int anio = 2021;
    printf("%i \n", anio % 4);
    printf("%i \n", anio % 100);
    printf("%i \n", anio % 400);

    if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0)
        iBandera = 1; // Activo la bandera si esl año es bisiesto

    if (iBandera == 1)
    {
        printf("El Anio ES bisiesto \n");
    }
    else
    {
        printf("el Anio NO es bisiesto \n");
    }
}