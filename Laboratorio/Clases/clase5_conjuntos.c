#include <stdio.h>
/*

Dados el conjunto A (5) elementos y el conjunto B (7) elementos:
A = {3; 6; 8; 22; 56;}
B = {8; 14; 33; 22; 43; 56; 72}
Resolver B - A = C  --> Diferencia: TODOS LOS DE B QUE NO ESTAN EN A 
*/

void main()
{

    int A[5] = {3, 6, 8, 22, 56};
    int B[7] = {8, 14, 33, 22, 43, 56, 72};
    int C[7];

    for (int z = 0; z < 7; z++)
    {
        C[z] = -1;
    }

    //14, 33, 43, 72

    //B - A

    //int iBandera;      //Marcar si el elmento de B esta en A

    int iPosicionC = 0;

    for (int i = 0; i < 7; i++) //RECORRE B
    {
        int iBandera = 0; // Inicializo la bandera

        for (int j = 0; j < 5; j++) // RECORRE A
        {
            if (B[i] == A[j]) // ESTA EN A !!!!
            {
                iBandera = 1;
            }
        }

        if (iBandera == 0)
        {
            printf("%i \t", B[i]);
            C[iPosicionC] = B[i]; // CARGAR EN C el valor de B
            iPosicionC++;         //Avanzo una posicion en C
        }
    }

    printf("\n Muestro Vector");

    for (int i = 0; i < 7; i++)
    {
        if (C[i] != -1)
            printf("%i \t", C[i]);
    }
    printf("\n");
}
