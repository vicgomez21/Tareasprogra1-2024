#include <iostream>

using namespace std;
//clase
class Factura {
public:
    //atributo
    string NumeroDePieza;
    string Caracteristicas;
    int cantidad;
    int precio;
    int Monto;
    //constructor
    Factura(){
        NumeroDePieza="102520";
        Caracteristicas="tornillo de 9 pulgadas";
        cantidad=4;
        precio=10;
    }

    Factura(string mNumeroDePieza,string mCaracteristicas,int mCantidad, int mprecio)
    {
        NumeroDePieza=mNumeroDePieza;
        Caracteristicas=mCaracteristicas;
        cantidad=mCantidad;
        precio=mprecio;
        Monto=mCantidad*mprecio;


    }
    //comportamiento
    int obtener_monto_Factura(){
        cout<<Monto<< endl;
    }

};
int main()
{
    // instancia
    Factura miPrimerFactura;
    cout<<"factura de primera compra "<<endl;
    cout<<"numero de pieza: "<<miPrimerFactura.NumeroDePieza<<endl;
    cout<<"Caracteristicas "<<miPrimerFactura.Caracteristicas<<endl;
    cout<<"Cantidad de piezas  "<<miPrimerFactura.cantidad<<endl;
    cout<<"Precio de Factura "<<miPrimerFactura.precio<<endl;


    miPrimerFactura.obtener_monto_Factura();

    return 0;
}
