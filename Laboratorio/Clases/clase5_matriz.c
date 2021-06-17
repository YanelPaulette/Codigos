#include <stdio.h>
//#include <string>

main()
{

int iFilas = 10;
int iColumnas = 10 ;
int iz;

int iMatriz[iFilas][iColumnas];
/*
string sMatriz[4][12];

sMatriz[0][0] = "Consumos";
sMatriz[0][1] = "ENero";
sMatriz[0][2] = "Feb";
sMatriz[0][11] = "Diciembre";

sMatriz[1][0] = "Luz";
sMatriz[2][0] = "Gas";
sMatriz[3][0] = "Telef";
*

/*
[1][1]  --> LUZ : ENERO
[1][2]
[2][1] --> Gas : ENERO

for (i = 1; i <= 4; i++)      // 
    for (j = 1; j <= 12; j++  )  //

*/



//Recorro FILA x COLUMNA : por cada fila todas sus columnas 
for (int i = 0; i < iFilas; i++)        // LAS FILAS
{
    for (int j = 0; j < iColumnas; j++)     // LAS COLUMNAS
    {
        // LO QUE QUIERO HACER CON MI MAtRIZ!!!
        iMatriz[i][j] = 65 + rand() % 26 ;      //Aleatorio de 0 a 99
    }
}

iMatriz[3][6] = -1;             //Acceder a la fila 3 (4) columna 6 (7)

printf("\n");

//MOSTRAR EL CONTENIDO DE LA MATRIZ

for (int i = 0; i < iFilas; i++)
{
    for (int j = 0; j < iColumnas; j++)
    {
        printf ("%i \t", iMatriz[i][j]);
    }
    printf("\n");

}

printf("--------\n");

printf("un valor en particular%i \n", iMatriz[2][6]);

printf("--------\n");





}