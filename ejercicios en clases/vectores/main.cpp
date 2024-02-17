#include <iostream>

using namespace std;
//declaramos funciones
void LlamarCiclo();
void LlenarMatriz(float matriz[NUMEROALUMNOS][ NUMERONOTAS+1]);
//declaracion de constantes
#define NUMEROALUMNOS 5
#define NUMEROMATERIAS  5
#define NUMERONOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAX_LONGITUD_CADENA 100
int main()
{
 LlamarCiclo();
    return 0;
}
void LlamarCiclo()
{
    float MatrizFacultad_1[NUMEROALUMNOS][NUMERONOTAS+1];
    float MatrizFacultad_2[NUMEROALUMNOS][NUMERONOTAS+1];
    float MatrizFacultad_3[NUMEROALUMNOS][NUMERONOTAS+1];

    char opcion;
    bool repetir =true

    float PromedioFacultad_1;
    float PromedioFacultad_2;
    float PromedioFacultad_3;

    char AlumnosFacultad[NUMEROALUMNOS][MAX_LONGITUD_CADENA]={"Carlos","Maria","Max","Pedro","Vic"};

    do
    {
        PromedioFacultad_1=0;
        PromedioFacultad_2=0;
        PromedioFacultad_3=0;

        cout<<"***comparativo de facultades****"<<endl<<endl;
        LlenarMatriz(matrizfacultad_1);



    }
}

void LlenarMatriz(float matriz[NUMEROALUMNOS] [NUMERONOTAS+1])
{
    int y,z;
    for(z=0; y < NUMEROALUMNOS; y++)
    {
        float suma=0;
        int CalificacionAlumno=0;
        for(z=0); z<NUMERONOTAS; z++
        {

        }
    }
}
