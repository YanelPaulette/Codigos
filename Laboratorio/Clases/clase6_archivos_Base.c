#include <stdio.h>

main()
{

    // ESCRIBIR EN ARCHIVO

    //1: DECLARAR UN ARCHIVO    --> FILE* MiArchivo;        (variable de archivo)
    //2: ABRIRLO                --> Miarchivo = fopen (" nombre_archivo.extension " , " modo_apertura")
    // W  : WRITE ESCRITURA - SI EXISTE LO BORRA
    // A  : APPEND AGREGAR  SI EXISTE NO lo BORRA
    // T  : TEXTO
    // B  : BINARIO
    //3: ESCRIBIR               --> fprintf (  VaribleArchivo  , "formato del contenido" , contenido )
    //4: CERRAR                 --> fclose(VariableARchivo)

    FILE *MiArchivo;
    MiArchivo = fopen("MiArchivo.txt", "wt");
    fprintf(MiArchivo, "%s", "hola mundo c");
    fclose(MiArchivo);

    // ABRO el ARCHIVO PARA AGREGAR
    MiArchivo = fopen("MiArchivo.txt", "at");
    fprintf(MiArchivo, "%s", "Esto se agrego");
    fclose(MiArchivo);

    // ABRO el ARCHIVO PARA AGREGAR
    MiArchivo = fopen("MiArchivo.txt", "at");
    fprintf(MiArchivo, "%i", 128);
    fclose(MiArchivo);

    int iMiNumero = 567;
    MiArchivo = fopen("MiArchivo.txt", "at");
    fprintf(MiArchivo, "%i", iMiNumero);
    fclose(MiArchivo);

    char cMiLetra = 'M';
    MiArchivo = fopen("MiArchivo.txt", "at");
    fprintf(MiArchivo, "%c", cMiLetra);
    fclose(MiArchivo);
}