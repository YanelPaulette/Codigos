/*Cargamos alumnos
Para verificar la carga de alumnos, se nos solicita desarrollar la funcionalidad
de lectura del archivo de alumnos.txt.
Para ello, desarrollar una función Mostrar() que recorra el archivo de alumnos y
muestre uno a uno los Apellidos y Nombres contenidos.
Mostrar al final la cantidad de alumnos cargados en el archivo.
Características del archivo
 Archivo tipo texto, nombre: alumnos.txt*/

#include <stdio.h>
#
void mostar();

main()
{
    mostrar();
}

void mostrar()

{
      FILE *fpuntero;
    char c, *pc;
    char buffer[100];
    int total_alumnos = 0;

    fpuntero = fopen("alumnos.txt", "r");
    if (fpuntero == NULL)
    {
        perror("Error al intentar abrir el archivo");
        return 1;
    }

    do
    {
        pc = fgets(buffer, 100, fpuntero); // arraym cantidad, punteros

        if (pc != NULL)
        {
            printf("%s", buffer);
            total_alumnos++;
        }
        else
        {
            printf("");
        }

    } while (pc != NULL);

    printf("El total de alumnos ingresados es %d", total_alumnos);

    fclose(fpuntero);
}
