#include <stdio.h>

void devuelveultimodia(int fecha)
{
    fecha = 20190101;
}

main()
{

    int fecha = 20210429;
    printf("fecha  antes: %d \n ", fecha);
    devuelveultimodia(fecha);
    printf("fecha  despues con la fx: %d \n ", fecha);
}