/*
a)	Listamos números
Solicitar al usuario ingrese 2 números y por donde desea ver la salida: Pantalla o Archivo.
Desarrollar como mínimo 2 funciones, una para mostrar por pantalla y otra para guardar en un archivo, 
los números comprendidos entre los ingresados por el usuario.

Condiciones:
•	Archivo tipo texto, nombre: numeros.txt
*/

#include <stdio.h>


void mostrar(int, int);
void guardar(int, int);


main()
{

    int iDesde; 
    int iHasta;
    int iSalida;        //0: pantalla - 1: arhcivo


    printf ("\n Ingrese desde: ");
    scanf("%i",&iDesde );
    printf("\n ingrese hasta: ");
    scanf ("%i", &iHasta);

    printf("\n Salida 0:Monitor 1:Archivo: ");
    scanf("%i", &iSalida);


    switch (iSalida)
    {
    case 0:
        mostrar(iDesde, iHasta);              //PANTALLA
        break;
    
    case 1:
        guardar(iDesde, iHasta);              //ARCHIVO
        break;
    default:
        printf("\n el tipo de salida es invalido ");
        break;
    }


}
void mostrar(int iNum1, int iNum2)
{

    for (int i = iNum1; i <= iNum2; i++)
    {
        printf(" %i \n "  , i  );
    }
   

}


void guardar(int iNum1, int iNum2)
{

    FILE* Archivo;
    Archivo = fopen("numeros2.txt" , "wt"  ) ;           // R  : READ LECTURA
                                                        // W  : WRITE ESCRITURA - SI EXISTE LO BORRA 
                                                        // A  : APPEND AGREGAR  SI EXISTE NO lo BORRA
                                                        // T  : TEXTO
                                                        // B  : BINARIO
    for (int i = iNum1; i <= iNum2; i++)
    {
            fprintf (Archivo   ,   "%i \n"  , i);       // ARCHIVO , FORMATO , VALORES
    }

    fclose(Archivo);
    

}