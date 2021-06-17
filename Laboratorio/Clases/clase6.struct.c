//struct Guia3_Ejer_emplo
//    {
//        /* data */
//    };

#include <stdio.h>

struct Alumno           // CREAR UN NUEVO TIPO DE DATO 
{
    char apellido[20];          // VECTOR de CARACTERES
    char nombre[20];
    int edad;
    
};

main()
{
    struct Alumno alumnos[20];          //DECLARA variable alumnos del tipo STRUCT ALUMNO
                                        // VECTOR de ALUMNO (apellido y nombre)

    for (int i = 0; i < 20; i++)
    {
        strcpy(alumnos[i].apellido , "sdaksjda");
        strcpy(alumnos[i].nombre , "sajkldjasl");
        alumnos[i].edad = 10;
    }
    

    for (int i = 0; i < 20; i++)
    {
        printf ("Alumno %i: %s \t %s \n" , i,  alumnos[i].apellido , alumnos[i].nombre);
    }
    


}