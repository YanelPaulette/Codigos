#include <stdio.h>

void mostrar();                     //MOSTRAR MATRIZ CARGADA y GUARDARLA EN ARCHIVO
void cargar(int);                   //CARGAR MATRIZ

int matriz[20][20];     

main()
{

    int valor;
    printf("\n ingrese un numero:");
    scanf ("%i", &valor);

    cargar(valor);              // LLAMO a la FX con el valor ingresado por el usuario
    mostrar();
}


void cargar(int valor)
{
    for (int j = 0; j < 20; j++)
    {
        for (int i = 0; i < 20; i++)
        {
            matriz[i][j] = rand() % valor;
        }
    }
}

void mostrar()
{
    FILE* archivo;
    archivo = fopen("archivo_d.txt", "wt");         //DEFINO ARCHVIO PARA GUARDAR DATOS

    printf("\n");           
    for (int j = 0; j < 20; j++)                    //MUESTRA CONTENIDO DE LA MATRIZ
    {
        for (int i = 0; i < 20; i++)
        {
            printf("%i \t" ,  matriz[i][j] );       
            fprintf (archivo, "%i \t", matriz[i][j]);       //GUARDAR VALOR EN ARCHIVO
        }
        printf("\n");
        //fprintf (archivo, " \n", "");       //GUARDAR VALOR EN ARCHIVO
    }

    fclose(archivo);


}