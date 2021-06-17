
//GLOBALES
const float fValorDolar= 90.02;
const float fValorEuro = 120.23;
const float fValorReales = 78;

void main()
{
    
    int iMonedaOrigen;          //  0: Dolares, 1: Pesos, 2:Reales, 3: Euro
    int iMonedaDestino;         //  0: Dolares, 1: Pesos, 2:Reales, 3: Euro

    float fValorConvertir;

    printf ("\n Ingrese la moneda de Origen:");
    printf ("\n 0: Dolares \n 1: Pesos \n 2: Reales \n 3: Euro");
    printf ("\n");
    scanf ("%i", &iMonedaOrigen);

    printf ("\n Ingrese la moneda de Destino:");
    printf ("\n 0: Dolares \n 1: Pesos \n 2: Reales \n 3: Euro");
    printf ("\n");
    scanf ("%i", &iMonedaDestino);

    if (iMonedaOrigen == iMonedaDestino)
        printf(" \n La monedas de origen y destino deben ser diferentes \n");
    else
    {    
        printf ("\n Ingrese cantidad a convertir:");
        printf ("\n");
        scanf ("%f", &fValorConvertir);
    
        switch (iMonedaOrigen)
        {
        case 0:
        
            switch (iMonedaDestino)
            {
            case 1:         // DOLAR a PESOS
                printf("%0.2f", fValorConvertir * fValorPesos );
                break;
            
            case 2:         // DOLAR a Reales
                break;

            case 3:         // DOLAR A EURO
                break;
            }
            break;
        
        case 1:
            switch (iMonedaDestino)
            {
            case 0:     //PESOS a DOLRES
                
                break;
            
            case 2:     // PESOS a REALES
                break;
            case 3:       //PESOS a EURO  
                break;  
            }

            break;
        
        case 2:         // REALES A ***
           //SW     
 
            break;

        
        
        case 3:         // EURO A ***

            //SW
            break;
        }

    }


}