#include <iostream>

using namespace std;
class LibroCalificaciones {
public:
    LibroCalificaciones(string NombreCurso,string NombreInstructor);
//---------------------------------------------------------
    void EstablecerNombreCurso(string Nombre);
    string obtenerNombreCurso();
//---------------------------------------------------------
    void EstablecerNombreInstructor(string Nombre);
    string obtenerNombreInstructor();
    //-------------------------------------------------------
    void mensaje();
private:
    string NombreCurso;
    string NombreInstructor;
};
LibroCalificaciones::LibroCalificaciones(string NombreCurso,string NombreInstructor)
: NombreCurso(NombreCurso), NombreInstructor(NombreInstructor)
{
}
//----------------------------------------------------------------------------------
void LibroCalificaciones::EstablecerNombreCurso(string Nombre)
{
    NombreCurso=Nombre;
}

string LibroCalificaciones::obtenerNombreCurso()
{
    return NombreCurso;
}
//------------------------------------------------------------------------------------------
void LibroCalificaciones::EstablecerNombreInstructor(string Nombre)
{
    NombreInstructor=Nombre;
}

string LibroCalificaciones::obtenerNombreInstructor()
{
    return NombreInstructor;
}
//----------------------------------------------------------------------------------
void LibroCalificaciones::mensaje()
{
    cout<<"LIBRO DE CALIFICACIONES DEL CURSO : "<<obtenerNombreCurso()<<endl;
    cout<<"ESTE CURSO ES IMPARTIDO POR : "<< obtenerNombreInstructor()<<endl;
}
int main()
{
    LibroCalificaciones LibroCalificaciones("programacion 1","EDUARDO DEL AGUILA");
    LibroCalificaciones.mensaje();
    return 0;
}
