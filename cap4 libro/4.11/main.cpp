#include <iostream>

using namespace std;
//(Kilometraje de gasolina) Los conductores se preocupan acerca del kilometraje de sus autom�viles. Un
//conductor ha llevado el registro de varios viajes, anotando los kil�metros conducidos y los litros usados en cada
//viaje. Desarrolle un programa en C++ que utilice una instrucci�n while para recibir como entrada los kil�metros
//conducidos y los litros usados por cada viaje, y que imprima el total de kil�metros por litro obtenidos en todos
//los reabastecimientos hasta este punto.
int main()
{
float KilometroUsados=0;
float LitrosUsados=0;
float total=0;
cout<<"Escribe los Kilometros usados (-1 para salir): "<<endl;
    cin>>KilometroUsados;

while(KilometroUsados !=-1)
{


    cout<<"Escribe los litros usados : ";
    cin>>LitrosUsados;
    total=KilometroUsados/LitrosUsados;
    cout<<"el total de Kilometros por litro es : "<<total<<endl;
     cout<<"Escribe los Kilometros usados (-1 para salir): "<<endl;
    cin>>KilometroUsados;



}
    return 0;
}
