/*Paulette Yanel. DNI 33088466

Para ellos se cuenta con una estructura de pacientes con los siguientes datos: 
Apellido, Nombre, Documento, Fecha Nacimiento, Especialidad.

Las especialidades pueden ser 3, 1: Clínica, 2: Trauma y 3: Laboratorio. 
Debe ser controlada al momento de la carga del turno.

El Sistema brindará al usuario un menú con las siguientes opciones:
 1: Alta turno, 2: Listar Turnos, 3: Generar Turnos, 4: Salir del sistema. 
 Cualquier otra opción ingresada debe informarse como “opción no válida” al usuario.
 Detalle de la acciones del menú:
 - Alta: solicitar en el Main() los datos al paciente que serán cargarlos en la estructura de Pacientes 
 y enviados a la función Guardar() que recibirá la estructura como parámetro.
  
  Antes de guardar en el archivo turnos.dat se debe validar que el paciente YA NO tenga un turno para esa especialidad 
  controlando que no existen ese Documento y Especialidad. Si Existiera debe informarse al usuario que el paciente YA 
  tiene un turno para esa especialidad.- 

  Listar: llamar a un funciones que muestro por pantalla todos los turnos otorgados
   hasta el momento que se encuentran en el archivo de turnos.
   
   - Generar: esta opción debe generar 3 archivos 
   (clínica.dat, trauma.dat y laboratorio.dat) tomando como base el archivo de general de turnos (turnos.dat) 
   moviendo los pacientes al archivo de destino correspondiente según la especialidad del turno dado. 

   Los archivos clínica.dat, trauma.dat y laboratorio.dat deben soportar agregación y al finalizar la distribución
    se debe eliminar el contenido del archivo turnos.dat.
    
     Ej: si el paciente pidió un turno para clínica deberán guardarse 
    sus datos en el archivo clínica.dat.- Salir: fin del sistema.
*/

#include <stdio.h>
#include <stdlib.h>

struct turno
{
    char nombre[20];
    char apellido[20];
    int documento;
    char nacimiento[15];
    char especialidad[20];

    //int num_ventanilla;
};

char guardar(documento, nombre, apellido, nacimiento, especialidad);
char listar();
void generar();

void main()
{
    int opcion;
    srand(time(NULL));
    struct turno persona;

    while (opcion != 4)
    {
        // pedir datos al paciente y grabar en struct:

        printf("----------------\n");
        printf("Bienvenido\n");
        printf("----------------\n");

        printf("Por favor seleccion una de las siguientes opciones \n1 = Alta de turno\n2 = Listar turnos  \n3= Generar Turno\n  \n4= Salir\n> ");
        scanf("%i", &opcion);
        printf("----------------\n");
        switch (opcion)
        {
        case 1:
            printf("\n Por favor ingrese sus datos .\nNombre: ");
            scanf("%s", &persona.nombre);
            printf("\n Apellido: ");
            scanf("%s", &persona.apellido);
            printf("\n Documento : ");
            scanf("%i", &persona.documento);
            printf("\n Fecha de nacimiento en formato (dia/mes/anio): ");
            scanf("%s", &persona.nacimiento);
            printf("\n Especialidad: \n 1 = Clinica \n2 = Traumatologia  \n3= Laboratorio\n  ");
            scanf("%s", &persona.especialidad);
            guardar(persona.documento, persona.nombre, persona.apellido, persona.nacimiento, persona.especialidad);
            break;
        case 2:
            listar();
            break;
        case 3:
            printf("Generar Turno");
            generar();
            break;
        case 4:
            printf("Finalizando programa...");
            exit(0);
        default:
            printf("opción no válida \n");
        }
    }
}

char guardar(documento, nombre, apellido, nacimiento, especialidad)
{

    int bandera = 0, documento_archivo;
    char nombre_archivo[20], apellido_archivo[20], nacimiento_archivo[15];
    char especialidad_archivo[20];

    FILE *fhandler;                       // puntero
    fhandler = fopen("turnos.txt", "a+"); // abro archivo

    while (fscanf(fhandler, "%i %s %s %s %d\n", &documento_archivo, &nombre_archivo, &apellido_archivo, &nacimiento_archivo,
                  &especialidad_archivo) != EOF)
    {
        if (documento == documento_archivo)
        {

            printf("----------------\n");
            printf("Esta persona ya tiene un turno otorgado: %i.\n", especialidad_archivo);
            printf("----------------\n");

            bandera = 1;
        }
    }
    if (bandera == 0)
    {
        printf("----------------\n");

        printf("Ingresando persona...\n");
        printf("----------------\n");

        fprintf(fhandler, "%i %s %s %s %d\n", documento, nombre, apellido, nacimiento, especialidad_archivo);
        printf("Se ingresaron todos los datos correctamente\n");
    }
    fclose(fhandler);
}

char listar()
{
    //lamar a un funciones que muestro por pantalla todos los turnos otorgados
    //hasta el momento que se encuentran en el archivo de turnos.

    printf("----------------\n");
    printf("Turnos otorgados  hasta la fecha:\n");
    printf("----------------\n");

    int bandera = 0, documento_archivo;
    char nombre_archivo[20], apellido_archivo[20], nacimiento_archivo[15];
    char especialidad_archivo[20];
    FILE *turn;
    turn = fopen("turnos.txt", "a+");

    while (fscanf(turn, "%i %s %s %s %d\n", &documento_archivo, &nombre_archivo, &apellido_archivo, &nacimiento_archivo, &especialidad_archivo) != EOF)
    {
        printf("%i %s %s %s %d\n", documento_archivo, nombre_archivo, apellido_archivo, nacimiento_archivo, especialidad_archivo);
    }
    fclose(turn);
}

void generar()

// - Generar: esta opción debe generar 3 archivos
//   (clínica.dat, trauma.dat y laboratorio.dat) tomando como base el archivo de general de turnos (turnos.dat)
//   moviendo los pacientes al archivo de destino correspondiente según la especialidad del turno dado.
{

    // me falto grabar la informacion en cada archivo, pasando la informacion por parametro


    FILE *Arch1;                        // puntero
    Arch1 = fopen("Clinica.dat", "at"); // abro
    fprintf(Arch1, "%s", " ");          // trabajo
    fclose(Arch1);                      //ciero

    FILE *Arch2;
    Arch2 = fopen("trauma.dat", "at");
    fprintf(Arch2, "%s", "");
    fclose(Arch2);

    FILE *Arch3;
    Arch3 = fopen("laboratorio.dat", "at");
    fprintf(Arch3, "%s", "");
    fclose(Arch3);

    /* No llegue a desarollar para pasar el archivo por parametro:

    FILE *arch;
    turno t;
    turno turnos;

    Arch_1 = fopen(Clinica.dat ", " at");

    fread(&a, sizeof(turno), 1, arch);
  
    while (!feof(arch))
    {
        // printf("%d, %s, %d\n",estructira.elemento (...);

        while (alumno_anterior.legajo == a.legajo && !feof(arch))
        {
            total = total + a.nota;
            cantidad += 1;
            // leemos el siguiente registro del archivo
            fread(&a, sizeof(Alumno), 1, arch);
        }
        promedio = (float)total / cantidad;
        printf("legajo %d, promedio: %.2f\n", alumno_anterior.legajo, promedio);

        total = 0;
        cantidad = 0;
    }

    // cerramos el archivo
    fclose(arch);
    return 0;*/
}
