/*
Se desea administrar la carga personas para otorgar turnos de atención por ventanilla.
Al momento de solicitar un turno se pide a cada persona los siguientes datos: Nombre,
Apellido, Documento, fecha de nacimiento y Nro. De ventanilla (1 al 10 inclusive) de
atención el cual será calculado aleatoriamente. Todos los datos deberán ser almacenados
temporalmente en una estructura diseñada para tal fin.

Luego de cargada la persona en la estructura se deberá enviar la misma a una función que
valide su NO existencia previa y guarde la misma en un archivo de texto.

La validación consta en asegurarse que el Documento ingresado NO se encuentre en los
documentos de las personas YA CARGADAS en el archivo. De existir mostrar mensaje
indicando que la persona YA tiene un turno asignado para la ventanilla “X”. Sino, dar de
alta a la persona en el archivo.

Para la gestión, el sistema deberá ofrecer al usuario un menú con las opciones:
Ingresar, Listar y Salir.

Detalle de las opciones:
 Ingresar: proceso de alta de personas con su correspondiente validación y
guardado en el archivo.
 Listar: usando una función, mostrar por pantalla el listado de personas
cargadas en el archivo indicando al final del listado la cantidad de personas
listadas.
 Salir: Finalizar la aplicación.

Al archivo de personas deberá borrarse con cada nuevo inicio del sistema.
*/


#include <stdio.h>

struct turno
    {
        char nombre[20];
        char apellido[20];
        int documento;
        char nacimiento[15];
        int num_ventanilla;
    };

char validacion(documento,nombre,apellido,nacimiento,num_ventanilla);
char listar();


void main()
{
    int opcion;
    srand(time(NULL));
    struct turno persona;
    while (opcion != 3)
    {
        printf("Elija que hacer a continuacion:\n1 = Ingresar nuevo turno\n2 = Ver lista de todos los turnos agendados\n3= Salir\n> ");
        scanf("%i",&opcion);
        printf("----------------\n");
        switch (opcion)
        {
        case 1:
            printf("Por favor ingrese sus datos para poner validar el turno.\nNombre: ");
            scanf("%s",&persona.nombre);
            printf("Apellido: ");
            scanf("%s",&persona.apellido);
            printf("Documento : ");
            scanf("%i",&persona.documento);
            printf("Fecha de nacimiento en formato (dia/mes/anio): ");
            scanf("%s",&persona.nacimiento);
            persona.num_ventanilla = rand() % 11;
            validacion(persona.documento,persona.nombre,persona.apellido,persona.nacimiento,persona.num_ventanilla);
            break;
        case 2:
            listar();
            break;
        case 3:
            printf("Finalizando programa...");
            exit(0);
        default:
            printf("Opcion invalidad, intente de nuevo\n");
        }
    }

}

char validacion(documento,nombre,apellido,nacimiento,num_ventanilla)
{
    int bandera = 0,documento_archivo;
    char nombre_archivo[20], apellido_archivo[20],nacimiento_archivo[15];
    int num_ventanilla_archivo;
    FILE *fhandler;                                // puntero
    fhandler = fopen("turnos.txt", "a+");          // abro archivo   
    
    while (fscanf(fhandler, "%i %s %s %s %d\n",&documento_archivo, &nombre_archivo, &apellido_archivo, &nacimiento_archivo, &num_ventanilla_archivo) != EOF)
    {
       if (documento == documento_archivo)
        {
            printf("Esta persona ya tiene un turno en la ventanilla numero: %i.\n",num_ventanilla_archivo);
            bandera = 1;
        }
    }
    if (bandera == 0)
    {
        printf("Ingresando persona...\n");
        fprintf(fhandler,"%i %s %s %s %d\n",documento,nombre,apellido,nacimiento,num_ventanilla);
        printf("Se ingresaron todos los datos correctamente\n");
    }
    fclose(fhandler);
}

char listar()
{
    printf("Turnos asignados hasta la fecha:\n");
    int bandera = 0,documento_archivo;
    char nombre_archivo[20], apellido_archivo[20],nacimiento_archivo[15];
    int num_ventanilla_archivo;
    FILE *fhandler;
    fhandler = fopen("turnos.txt", "a+");
    
    while (fscanf(fhandler, "%i %s %s %s %d\n",&documento_archivo, &nombre_archivo, &apellido_archivo, &nacimiento_archivo, &num_ventanilla_archivo) != EOF)
    {
       printf("%i %s %s %s %d\n",documento_archivo, nombre_archivo, apellido_archivo, nacimiento_archivo, num_ventanilla_archivo);
    }
    fclose(fhandler);
}

