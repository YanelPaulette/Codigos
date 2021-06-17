#include <stdio.h>

void Convertir (int);

main()
{

    //minuscula:  97 - 122
    //mayusculas:  65 - 90
    //  DIF: +/-32

    int cLetra = 'ñ';
    Convertir(cLetra);

    printf ("\n");

}

//void Convertir(int cLetra)
void Convertir(int cLetra)
{
    if (cLetra == (int)'ñ')      // ñ
        { 
            printf ("%c", 165);
        }
    
    if (cLetra == (int)'Ñ')      // Ñ
        {
            printf ("%c", 164);
        }


    if (cLetra >= 65  && cLetra <=90)  // MAYS
        printf ("\n %c ", cLetra + 32 );
    
    if (cLetra >= 97 && cLetra <= 122) // MINS
        printf ("\n %c", cLetra - 32);


   


}