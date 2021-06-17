#include <stdio.h>

main()
{

    //int arra7[10];

    //TIPO DE ACCESO
    /*
    W   : ESCRITURA (LECTURA)   - SI NO EXISTE LO CREA - SI EXISTE BORRA CONTENIDO
    R   : LECTURA           - SI NO EXISTE NO LO CREA (ERROR)
    A   : ESCRITURA CON AGREGACION - SI NO EXISTE LO CREA - SI EXISTE AGREGA

    T: texto
    b: binario*/

    FILE *Archivo; // Declaro archivo

    Archivo = fopen("miarchivo.txt", "wt"); //abro archivo

    fprintf(Archivo, "esto es una prueba");

    /*for (int i = 0; i < 10; i++)
    {

        fprintf(Archivo, arra7[i]);
    }

    fclose(Archivo); //cierro archivo*/
}