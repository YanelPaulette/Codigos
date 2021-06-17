#include <stdio.h>


struct alumno                   // ESTRCUTRUA de ALUMNO
{
    char apellido[20];
    char nombre[20];
    int edad;
    char jubilado[1];      // NO SE GUARDA EN ARCHIVO
};

struct alumno alumnos[20];      //DECLARO ARRAY de 20 ALUMNOS

void mostrar(struct alumno);



main()
{

    for (int i = 0; i < 20; i++)
    {
        //alumnos.apellido = "ape";
        strcpy(alumnos[i].apellido , "ape");
        strcpy(alumnos[i].nombre  , "Nom"  );
        alumnos[i].edad = i*10;
    }
    

    printf("CARGA ORIGINAL \n");

    for (int i = 0; i <20; i++)
    {

        printf("Alumno %i - Ape: " , i);
        printf("%s \t ", alumnos[i].apellido);

        printf("- Nom: ");
        printf("%s \t ", alumnos[i].nombre);

        printf("- Edad: ");
        printf("%i \n ", alumnos[i].edad);
    }
    

    FILE* archivo;
    archivo = fopen("salumnos.txt", "wt");

    for (int i = 0; i < 20; i++)
    {
        //GUARDO ESTRUCTURA EN ARCHIVO
        fprintf(archivo, "%s %s %i \n", alumnos[i].apellido, alumnos[i].nombre, alumnos[i].edad );
    }
    
    fclose(archivo);

    archivo = fopen("salumnos.txt", "rt");

    for (int i = 0; i < 20; i++)
    {
        //LEO ESTRUCTURA DEL ARCHIVO 
        fscanf(archivo, "%s %s %i \n" , &alumnos[i].apellido, &alumnos[i].nombre, &alumnos[i].edad  );

        if (alumnos[i].edad >= 80)
          strcpy(alumnos[i].jubilado , "S");
        else
          strcpy(alumnos[i].jubilado , "N");
      
    }
    

    fclose(archivo);

    printf("CARGA DESDE ARCHIVO \n");


    for (int i = 0; i <20; i++)
    {

        printf("Alumno %i - Ape: " , i);
        printf("%s \t ", alumnos[i].apellido);

        printf("- Nom: ");
        printf("%s \t ", alumnos[i].nombre);

        printf("- Edad: ");
        printf("%i \t ", alumnos[i].edad);
        
        printf("- Jubiliado: ");
        printf("%s \n ", alumnos[i].jubilado);
    }
    

    mostrar(alumnos[20]);


}


void mostrar(struct alumno al)
{

    printf("%s", al.apellido);
}
