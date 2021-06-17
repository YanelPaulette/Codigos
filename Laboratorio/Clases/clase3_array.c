#include <stdio.h>
#include <string.h>


main()
{

    // VECTORES
    char iVector[10];        // DEFINIR UN VECTOR DE 10 ELEMENTOS ENTEROS    10 Posiciones--> 0 a 9
    
    for (int i = 0; i < 10; i++)            //RECORRE EL VECTOR
    {
            if (i%2 ==0 )   //PAR
                iVector[ i ]  = i + 100;            // CARGA en CADA ELEMENTO el VALOR DE LA POSICION
            else
                iVector[ i ] = ('a' + i);
    }

    for (int i = 0; i < 10; i++)            //MUESTRA VECTOR
    {
            if (i%2 ==0 )   //PAR
               printf("Elemento: %i  \t  valor: %i  \n", i,  iVector[ i ] );
            else
               printf("Elemento: %i  \t  valor: %c  \n", i,  iVector[ i ] );
    }
    printf("\n");
    

    for (int i = 0; i < 10; i++)
    {
        iVector[i] =0;
        
    }
    
    iVector[3] =1;
    
    for (int i = 0; i < 10; i++)
    {
        printf ("%i", iVector[i]);
    }
    




