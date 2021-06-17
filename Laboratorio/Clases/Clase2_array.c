#include <stdio.h>
#include <string.h>                 //INCLUIR la LIBRERIA para STRING --> FUNCIONES CON CADENAS

main()
{

    char cApellido[20];

    char cApellido_char;

    //strcat(  valor1 , valor2 )  = valor1 (union) valor2       //__  concatenación 
    //strcmp( valor1, valor2)       //Comparar  - 3 resultados: 1  0  -1
                // valor1 > valor2 --> 1
                // valor1 = valor2 --> 0
                // valor1 < valor2 --> -1
    //strcpy  (valor1 , valor2)         // Copiar valor2 en valor1 

    for (int iPosicion = 0; iPosicion < 20; iPosicion++)            //carga del arrrAy Apellido[20]
    {
        if (iPosicion % 2 ==0)
        { 
            cApellido[iPosicion] = 'P';
        }   
        else
        {
            cApellido[iPosicion] = 'I';
        }
    }

    for (int i = 0; i < 20; i++)                                //MUestra contenido del vector
    {
        printf ("%i: %c \t", i, cApellido[i]);
    }
    printf ("\n");
    

    char cadena1[10];
    char cadena2[10];
    
    //strcpy(cadena1, cadena2);                       //Reemplza el valor de cadena1 por el valor de cadena2
    
    printf ("Ingrese su apellido: \n");
    scanf ("%s",  &cApellido);            // C: CHAR (solo 1 caracter)   // S: String (incluye espacios)
    printf("sin array %s \n", cApellido);


}