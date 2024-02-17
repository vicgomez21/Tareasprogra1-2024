#include <iostream>

using namespace std;

int main()
{
//agregamos valo 1 a nuestra variable iteradora
    int i=1;
// creamos un ciclo while evaluando nuestra variable iteradora
    while(i <=20)
    {
    //imprimimos 1 con su valor inicial
    cout << i;
    // agregamos condicion si i % 3 nos da 0 entondes es multiploo
    if(i%3 == 0)
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
