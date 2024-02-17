#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int numero;
    int mayor1;
    int mayor2;
    while(i<=10){


    cout<< "ingrese un numero ";
    cin>>numero;
    if (numero>mayor1)
        mayor1=numero;
     else if(numero>mayor2)
        mayor2=numero;

    i++;
    }
    cout<<"el numero mayor dentro de los 10 numeros introducidos es "<<mayor1<<" y "<<mayor2;
    return 0;
}
