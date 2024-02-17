#include <iostream>

using namespace std;
//prototipo de funciones
bool MultiplosDeTres(int n);

int main()
{
    int  i=1;
        while(i <=20)
    {
    //imprimimos 1 con su valor inicial
    cout << i;
    // agregamos condicion si i % 3 nos da 0 entondes es multiploo
    if(MultiplosDeTres(i))
        cout<< " es multiplo de 3";

       else
     //agregamos condicion cvontraria , no es multiplo
        cout<<" no es multiplo de 3";

    cout<<endl;
    //le sumamos un numero a la i para la siguiente iteracion hasta llegar a 20
    i++;
}

    return 0;
}
//implementacion de funciones
bool MultiplosDeTres(int n){
    if (n%3==0)  return true;
    else return  false;
}
