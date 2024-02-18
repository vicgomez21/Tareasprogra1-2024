#include <iostream>

using namespace std;

int main()
{
    float ventas_brutas = 0;
    int pago_semanal=200;
    float porcentaje_comision =0.09;
    float total=0;
    cout<<"Introduzca las ventas en dolares(-1 para salir): ";
    cin>> ventas_brutas;

    while(ventas_brutas!=-1)
    {
    cout<<"el salario es : "<<pago_semanal+(ventas_brutas*porcentaje_comision)<<endl;
    cout<<"Introduzca las ventas en dolares(-1 para salir): ";
    cin>> ventas_brutas;

    }
    return 0;
}
