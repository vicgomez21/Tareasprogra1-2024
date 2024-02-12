#include <iostream>

using namespace std;

int main()
{
    char letra;
    cout << "ingrese un caracter que desea transformarlo en codigo ASCII" << endl;
    cin>> letra;
    cout<<"su valor en ASCII es :"<<static_cast< int >(letra);
    return 0;
}
