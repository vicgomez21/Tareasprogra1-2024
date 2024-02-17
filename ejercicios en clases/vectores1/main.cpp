#include <iostream>
using namespace std;
//Uso de vectores o arreglos de una dimensi�n
int main()
{
    const int NUMERONOTAS=5;
   //Definici�n de variables
    double notas[NUMERONOTAS]={0,0,0,0,0};
    //Ingreso de notas al Vector
    for (int i=0; i<NUMERONOTAS; i++)
    {
        cout << "Ingrese la nota " << i+1 << ":";
        cin >> notas[i];
    }
    //Calculo del total de notas
    double sumaDeNotas = 0;
    for (int j=0; j<NUMERONOTAS; j++)
    {
        sumaDeNotas=sumaDeNotas+notas[j];
    }
    //Calculo del promedio de notas
    double promedioDeNotas=0;
    promedioDeNotas=sumaDeNotas/NUMERONOTAS;
    //Asignacion de clasificacion de nota
    char clasificacionDeNota=' ';
    if (promedioDeNotas == 100)
    {
        clasificacionDeNota = 'A';
    }
    else if (promedioDeNotas >= 80)
    {
        clasificacionDeNota = 'B';
    }
    else if (promedioDeNotas >= 70)
    {
        clasificacionDeNota = 'C';
    }
    else if (promedioDeNotas >= 60)
    {
        clasificacionDeNota = 'D';
    }
    else
    {
        clasificacionDeNota = 'E';
    }
    //Resultados finales
    cout << "Total de Notas   : " << sumaDeNotas << endl;
    cout << "Promedio de Notas: " << promedioDeNotas << endl;
    cout << "Por el promedio obtenido usted merece una " << clasificacionDeNota << endl;
    return 0;
}
