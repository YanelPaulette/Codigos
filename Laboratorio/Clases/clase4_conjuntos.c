#include <stdio.h>
/*

Dados el conjunto A (5) elementos y el conjunto B (7) elementos:
A = {3; 6; 8; 22; 56;}
B = {8; 14; 33; 22; 43; 56; 72}
Resolver B - A = C 
*/

main()
{

    int A[5] = {3, 6, 8, 22, 56};
    int B[7] = {8, 14, 33, 22, 43, 56, 72};

    
    int iContadoC=0;

    int C[7] = {-1, -1, -1, -1, -1, -1, -1};
    //for (int i = 0; i < 7; i++)
    //{
    //    C[i]=-1;
    //}

   //printf("%i \n", sizeof(int));           // MUESTRA LA LONG en BIT de un INT
    //printf ("%i \n", sizeof(A) / sizeof(int) ); // DETERMINA LA LONG del VECTOR de ENTEROS
    //printf("\n\n");

    printf("\n VECTOR A:  ");
    for (int i = 0; i < 5; i++)
    {
        printf ("%i \t", A[i]);
    }

    printf("\n VECTOR B: ");
    for (int i = 0; i <   7   ; i++)
    {
        printf ("%i \t", B[i]);
    }
    
    // B - A --> los elementos B que no estan A
    int iBandera;

    //printf("\n B - A ");
    for (int i = 0; i < 7; i++)         //RECORRO " B ""
    {
        iBandera = 0;
        for (int j = 0; j < 5; j++)         // RECORRE " A "
        {
            if ( B[i]  == A[j] )        // EL ELMENTO DE B ESTA EN A
            {  
                iBandera = 1;
                j = 5;                  // ME PERMITE FINALIZR EL FOR ANTES DE TIEMPO
            }
        }

        if (iBandera==0)            // BANDERA NO CAMBIO  -- EL ELMENTO DE B NO esta en A
        {
            //printf ("%i \t", B[i]);
            C[iContadoC] = B[i];
            iContadoC++;

        }
    
    }

    printf("\n VECTOR C: ");

    for (int i = 0; i < 7; i++)
    {
        if (C[i] != -1)
            printf("%i \t", C[i]);
    }

    printf ("\n");
    

}