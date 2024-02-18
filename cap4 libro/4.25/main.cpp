#include <iostream>

using namespace std;

int main()
{
//variable
int i,j,tamano=0;
cout<<"ingrese el tamaño que desee de la figura no mayor a 20 ";
cin>>tamano;
cout<<"\n\n";
if (tamano<20)
{
    for(i=0; i<tamano; i++)
    {
        for (j=0; j<tamano; j++ )
        {
           if((i==0)|| (j==0)||(i==tamano-1)||(j==tamano-1))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }

}
else{
    cout<<"error numero no valido";
    }




    return 0;
}

