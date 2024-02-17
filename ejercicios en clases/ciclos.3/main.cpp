#include <iostream>

using namespace std;

int main()
{
    int i=1;
    bool sumar=true;
    bool terminar=false;
    do{
        cout<<i;
        terminar=(i==23);
        if(terminar)
            cout<< ".";
        else
            cout<<", ";
        if (sumar)
            i+=4;
        else
            i-=2;
        sumar= !sumar;

    }while(!terminar);
    cout << endl;
    return 0;
}
