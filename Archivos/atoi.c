#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // atoi convierte un string a int (solo numeros, con letras lo rompe)

    int val;
    char str[20];

    strcpy(str, "98993489"); // copiamos string a str
    val = atoi(str);         // devuelve el entero representado en el string
    printf("---------------------------");
    printf(" \n String value = %s \n , Int value = %d\n", str, val);
    printf(" \n ---------------------------");



    // strtol convierte mix letras y numeros

    char str2[30] = " 2030300 This is test"; // variable con numeros (al inicio),  y letras
    char *ptr; // extrae las letras
    long ret;  // extrae los numeros

    ret = strtol(str2, &ptr, 10);
    printf("The number(unsigned long integer) is %ld\n", ret);
    printf("String part is |%s|", ptr);

    return (0);
}