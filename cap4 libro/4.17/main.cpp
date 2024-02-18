#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int numero;
    int mayor;
    while(i<=10){


    cout<< "ingrese un numero ";
    cin>>numero;
    if (numero>mayor)
        mayor=numero;

    i++;
    }
    cout<<"el numero mayor dentro de los 10 numeros introducidos es "<<mayor;
    return 0;
}
