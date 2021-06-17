#include <stdio.h>
#include <string.h>

main()

{
    char cApellido[20];
    //strcat(  valor1 , valor2 )  = valor1 (union) valor2       //__  concatenación
    //strcmp( valor1, valor2)       //Comparar  - 3 resultados: 1  0  -1
    // valor1 > valor2 --> 1
    // valor1 = valor2 --> 0
    // valor1 < valor2 --> -1
    //strcpy  (valor1 , valor2)         // Copiar valor2 en valor1


    strcpy('yanel', 'paulette');
    

    for (int iPosicion = 0; iPosicion < 20; iPosicion++) //carga del arrrAy Apellido[20]
    {
        if (iPosicion % 2 == 0)
        {
            cApellido[iPosicion] = 'P';
        }
        else
        {
            cApellido[iPosicion] = 'I';
        }
    }
}