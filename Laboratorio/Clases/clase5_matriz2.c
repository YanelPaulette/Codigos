#include <stdio.h>

// * : VALOR
// & : POSICION (DONDE)

int valor = 25;         // VARIABLE
int *puntero;                 // DEFINE PUNTERO A UNA VARIABLE INT
char *c;        // PUNTERO A UN CHAR

int iVector[10] = {3, 5, 6, 7, 8, 9, 22, 23, 43, 33};
int iVector2[10] = {33, 53, 63, 37, 38, 49, 522, 23, 43, 33};

void Mostrar();
void Imprimir(int* );
void Vectores(int*[] );
void Matrices (int*[][]);

main ()
{
    puntero = &valor;             // ASIGNO AL PUNTERO LA DIRECCION DE MEMORIA DE LA VARIABLE VALOR

    printf ("\n");
    printf ("%i \n" , puntero);         //      DIREC MEM -- DEL PUNTERO
    printf ("%i \n" , *puntero);         //     VALOR 
    printf ("%i \n" , &puntero);         //     DIREC MEN -- DE LA VARIABLE APUNTADA!!
    printf ("%i \n" , valor);         //     DIREC MEN -- DE LA VARIABLE APUNTADA!!
    printf ("\n");

    valor = 100;
    Mostrar();
    
    Imprimir (&valor);          // LE ASIGNA LA DIRECCIÖN DE MEM de VALOR

    Vectores (&iVector);            // PASA EL VECTOR a la FUNCIOn COMO PUNTERO
    Vectores (&iVector2);            // PASA EL VECTOR a la FUNCIOn COMO PUNTERO

}

void Mostrar()
{

    printf ("%i \n" , *puntero);         //     VALOR 
    printf ("%i \n" , valor);         //     VALOR 

}

void Imprimir(int *valorEntero)         //VARIABLE DEL TIPO PUNTERO
{

    printf ("por puntero: %i \n", *valorEntero );

}

void Vectores(int *pVector[10])
{

    for (int i = 0; i < 10; i++)
    {
        printf("%i \t", pVector[i]);
    }
    
    printf("\n");
}

void Matrices(int *pMatriz[10][10])
{

    
}