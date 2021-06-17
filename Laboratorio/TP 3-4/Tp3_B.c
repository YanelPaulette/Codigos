/*
Cargamos alumnos
Solicitar al usuario el ingreso de: apellido y nombre de 20 alumnos, los que serán
guardados en una matriz.
Al finalizar la carga, los datos deberán ser resguardados en un archivo de texto
utilizando una función Guardar() que reciba como parámetro la matriz.
Condiciones
 Archivo tipo texto, nombre: alumnos.txt
 Grabar archivo por flujos, un alumno por fila
 Si el archivo contiene alumnos, se debe agregar al final.*/

#include <stdio.h>

#define cantidad 5 //lo uso por la condicion del enunciado:  valor fijo que impacta en muchos lados
#define apenom 30  // para ocupar columnas con los nombres

void Guardar(char matriz[cantidad][apenom]); //recibe una matriz de 20 x 30

int main()
{


    char matriz[cantidad][apenom]; //  defino la matriz

    printf("Ingresar 20 alumnos (apellido y nombre) \n");
    for (int i = 0; i < cantidad; i++)
    {
        gets(matriz[i]); //ingresar cadenas de texto , se que no teniamos que usar Gets,
                         //pero no pude hacerlo funcionar con SCANF y en la teoria lo vimos. 
    }

    Guardar(matriz);

    return 0;
}

void Guardar(char matriz[cantidad][apenom]) // recibo estos parametros de main
{
    int i = 0;
    int J = 0;

    FILE *archivo; // puntero al archivo

    archivo = fopen("alumnos.txt", "a"); //lo abro, con A, para agregar

    for (i = 0; i < cantidad; i++) // grabo la info
    {

        fputs(matriz[i], archivo); //  guarda un string en una linea
        fputs("\n", archivo);
    }

    fclose(archivo); // cierro
}