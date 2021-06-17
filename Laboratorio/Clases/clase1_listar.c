#include <stdio.h>

main()
{
    //listar los primeros 10 números naturales

    printf ("\n con FOR \n");
    for (int iFor = 1; iFor <= 10; iFor++)
    {
        printf (" %i \t   ", iFor);
    }

    printf ("\n con WHILE  \n");
    int iCantidad = 1;
    while (iCantidad <= 10)
    {
        printf (" %i  \t ", iCantidad);
        iCantidad++ ;
    }

    printf ("\n con DO  \n");
    int iHasta = 1;
    do
    {
        printf ("%i \t", iHasta);
        iHasta++;

    } while (iHasta <= 10);
    printf ("\n");


}

