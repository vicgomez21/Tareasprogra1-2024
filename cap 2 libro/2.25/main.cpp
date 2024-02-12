#include <iostream>

using namespace std;

int main()
{
    int num1,num2=0;

    cout << "Ingresa 2 numeros" << endl;
    cin>> num1>>num2;
    if (num2%num1==0){
        cout<<num1<<" si es un multiplo de :"<<num2<<endl;
    }
    else{
        cout<<num2<<" no es un multiplo de :"<<num2<<endl;
    }
    return 0;
}
