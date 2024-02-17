#include <iostream>

using namespace std;

int main()
{

    int par=0;
    //permite la suma de todos los numero pares
    //calculo de pares con saltos de uno en uno modulo
    //for(int i =2; i<=100; i++)
    //{
    //  if(i%2==0)
    //        par+=i;
    // }

    for(int i=2; i<=100; i+=2){
        par+=i;
    }

    cout <<"la suma de todos los pares de 2 a 100 es "<< par << endl;
    return 0;
}
