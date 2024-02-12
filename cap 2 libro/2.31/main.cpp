#include <iostream>

using namespace std;

int main()
{
    float Km_C_Dia,Cst_L_gasolina,Prom_Km_L,Cst_est_dia,Peaje_Dia=0;

    float Costo_gasolina_kilometro,Costo_total_gasolina,Total;
    cout << "------Calculadora de costo dairio de gasolina------" << endl;

    cout<<"ingrese cuantos kilometros conduce en un dia"<<endl;
    cin>>Km_C_Dia;

    cout<<"ingrese el costo de la gasolina por litro"<<endl;
    cin>>Cst_L_gasolina;

    cout<<"ingrese el promedio  de kilometros por litro de gasolina"<<endl;
    cin>>Prom_Km_L;

    cout<<"ingrese el costo del estacionamiento por dia" << endl;
    cin >> Cst_est_dia;

    cout<<"ingrese el costo del peaje por dia" << endl;
    cin>>Peaje_Dia;

    Costo_gasolina_kilometro   =(Cst_L_gasolina)/(Prom_Km_L);
    Costo_total_gasolina       =(Costo_gasolina_kilometro)*(Km_C_Dia);
    Total                      =(Costo_total_gasolina)+(Cst_est_dia)+(Peaje_Dia);
    cout<<"el costo diario por conduicr "<<Km_C_Dia<<" KM es "<<Total<< " Quetzales al dia"<<endl;

    return 0;
}
