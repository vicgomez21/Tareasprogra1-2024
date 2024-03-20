#include <iostream>

using namespace std;

class Fecha {
public:
    Fecha(int dia, int mes, int ano);
   //---------------------------------------------------------
    void establecerMes(int mes);
    int obtenerMes() const;
   //---------------------------------------------------------
    void establecerDia(int dia);
    int obtenerDia() const;
    //---------------------------------------------------------
    void establecerAnio(int year);
    int obtenerAnio() const;
    //---------------------------------------------------------
    void mostrarFecha() const;

private:
    int mes;
    int dia;
    int year;
};
//---------------------------------------------------------
Fecha::Fecha(int dia, int mes, int year)
: dia(dia),mes(mes), year(year)
//---------------------------------------------------------
{
    if (mes < 1 || mes > 12) {
        this -> mes = 1;
    }
}
//---------------------------------------------------------
void Fecha::establecerMes(int mes)
{
    if (mes < 1 || mes > 12) {
        this->mes = 1;
    } else {
        this->mes = mes;
    }
}
//---------------------------------------------------------
int Fecha::obtenerMes() const
{
    return mes;
}
//---------------------------------------------------------
void Fecha::establecerDia(int dia)
{
    this->dia = dia;
}
//---------------------------------------------------------
int Fecha::obtenerDia() const
{
    return dia;
}
//---------------------------------------------------------
void Fecha::establecerAnio(int year)
{
    this->year = year;
}
//---------------------------------------------------------
int Fecha::obtenerAnio() const
{
    return year;
}
//---------------------------------------------------------
void Fecha::mostrarFecha() const
{
    cout << dia << "/" << mes << "/" << year << endl;
}
//---------------------------------------------------------
int main()
{
    Fecha fecha(25, 7, 2023);

    fecha.mostrarFecha();

//---------------------------------------------------------

    fecha.establecerDia(30);
    fecha.establecerMes(12);
    fecha.establecerAnio(2002);

    fecha.mostrarFecha();
//---------------------------------------------------------
    return 0;
}
