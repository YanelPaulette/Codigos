#include <stdio.h>

void mostrar();


main()
{
   int vector[8]= {0,0,0,0,0,0,0,0};
   mostrar( vector);
    
   for (int i = 0; i < 8; i++)
   {
         vector[i-1] = 0;
         vector[i] = 1;
         mostrar(vector);

         //for (int i = 0; i < 8; i++)
         //{
         //   printf ("%i \t ",  vector[i]);
         //}
         //printf ("\n");

   }
}


void mostrar(int vector[8] )
{

   for (int i = 0; i < 8; i++)
   {
      printf ("%i \t ",  vector[i]);
   }
   printf ("\n");

}