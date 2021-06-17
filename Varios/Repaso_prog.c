#include <stdio.h>

// Clase 8 - ejercicio 1
// repaso variables, punteros

int main(int argc, char const *argv[])
{
    // 1) tipos de datos basicos:

    int i;
    float f;
    char c;
    double d;

    // una declaracion de una variable especifica 2 cosas:
    //   - declara la cantidad de almacenamiento que debe reservarse en memoria
    //   - especifica como se van a interpretar los datos representados,

    // el operador &(ampersan) permite acceder a ubicacion (direccion) donde una
    //variable está almacenada en la memoria.
    &i;

    // 2)declaracion de punteros.permite guardar una direccion de memoria de cierto tipo de dato.
    int *pi;   // puntero a un entero  (siempre es puntero a un tipo de dato)
    float *pf; // puntero a float
    char *pc;  // puntero a char

    int valor = 34;

    pi = &valor;                                                             // asignacion a un puntero, direccion de memoria de la variable 'valor'
    printf(" *pi me da el contenido de la direccion de memoria %d \n", *pi); // accedemos al contenido de la direccion de memoria a la que apunta 'pi'
    printf(" pi sin (*) me da la direccion de memoria %d \n", pi);           // accedemos al contenido de la direccion de memoria a la que apunta 'pi'

    *pi = 99;
    printf("Nuevo valor -99- del puntero %d \n", *pi);
    printf("Nuevo valor - 99-  de la variable valor %d \n", valor);

    // tambien se puede castear una asignacion a un puntero
    pi = (int *)pf;

    // // 3) funciones
    // int x = 5;

    return 0;
}