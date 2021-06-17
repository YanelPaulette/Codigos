/*a) Listamos números
Solicitar al usuario ingrese 2 números y por donde desea ver la salida: Pantalla o
Archivo.
Desarrollar como mínimo 2 funciones, una para mostrar por pantalla y otra para
guardar en un archivo, los números comprendidos entre los ingresados por el
usuario.
Condiciones:
 Archivo tipo texto, nombre: numeros.txt*/

#include <stdio.h>

void mostrar();
void guardar();

main()
{
    int salida;
    int numInicio;
    int numFinal;

    printf("\n Ingrese desde: ");
    scanf("%i", &numInicio);
    printf("\n ingrese hasta: ");
    scanf("%i", &numFinal);

    printf("\n Salida 1:Monitor 2:Archivo: ");
    scanf("%i", &salida);

    switch (salida)
    {
    case 1:
        mostrar(numInicio, numFinal); //Muestra por pantalla
        break;

    case 2:
        guardar(numInicio, numFinal); //guarda archivo
        break;
    default:
        printf("\n el tipo de salida  ingresado es invalido ");
        break;
    }
}

void mostrar(int Num1, int Num2)

{
    printf("con fx mostrar \n ");

    for (int i = Num1; i <= Num2; i++)
    {
        printf("%d \n ", i);
    }
}

void guardar(int Num1, int Num2)
{

    FILE *Archivo; //1° puntero

    Archivo = fopen("numeros.txt", "wt");             // 2° lo abro
    for (int i = Num1; i <= Num2; i++) // 3° Lo que quiero guardar
    {
        fprintf(Archivo, "%i \n", i);  
    }

    fclose(Archivo); // lo cierro
}
