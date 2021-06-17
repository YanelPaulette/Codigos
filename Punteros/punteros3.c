#include <stdio.h>

// ejeplo de un array con incremento 

int a[]; 
int con =0;

main ()
{
    

    for (size_t i = 0; i < 10; i++)
    {
        con=con+1; 
        a[i] = con; 
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", a[i]);
    }
}
