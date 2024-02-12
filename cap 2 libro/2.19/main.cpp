#include <iostream>

using namespace std;

int main()
{
    //inicializamos variable en 0
    int a,b,c,suma,promedio,producto,menor,mayor=0;

    cout << "Introduzca tres enteros distintos: " ;
    cin >> a >> b >> c;
//----SUMA--------------------------------------
    cout << "Los tres enteros distintos son: "<< a<<" "<<b<<" "<<c<< endl;
    suma=a+b+c;
    cout<<"La suma es :"<<suma<<endl;
//---promedio-----------------------------------------------
    promedio=3;
    cout<< "el promedio de los 3 numeros es: "<<suma/promedio<<endl;


//------producto------------------------------------------------------
    producto=a*b*c;
    cout<<"El producto de los 3 numeros es: "<<producto<<endl;

// aritmetica logica del el valor menor y mayor--------
    menor=a;
    mayor=a;
//------------------------------------------------------------------------------
    if (b>mayor){
        mayor=b;
    }else if (b<menor){
        menor=b;
    }
//--------------------------------------------------------------------------------
    if(c>mayor){
        mayor=c;
    }else if (c<menor){
        menor=c;
    }
//---------------------------------------------------------------------------------
    cout<<"el numero menor es: "<<menor<<endl;
    cout<<"el numero mayor es: "<<mayor<<endl;
    return 0;
}
