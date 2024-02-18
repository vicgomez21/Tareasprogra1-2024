#include <iostream>

using namespace std;

int main()
{
    int a,b,c=0;
    cout<<"ingresa el primer numero ";
    cin>>a;
    cout<<"ingresa el segundo numero ";
    cin>>b;
    cout<<"ingresa el tercer numero ";
    cin>>c;
if (a != 0 && b != 0 && c != 0) {

    if(((a*a)+(b*b))==c*c){
        cout<<"si pdria ser un traingulo recto";
        cout<<"su hipotenusa es " << c<<" y sus catetos son "<<a<<" y "<< b<<endl;
    }

    else if((b*b)+(c*c)==a*a){
     cout<<"si pdria ser un traingulo recto";
      cout<<"si pdria ser un traingulo recto";
     cout<<"su hipotenusa es " << a<<" y sus catetos son "<<b<<" y "<< c<<endl;
    }

    else if((a*a)+(c*c)==b*b){
     cout<<"si pdria ser un traingulo recto";
     cout<<"su hipotenusa es " << b<<" y sus catetos son "<<a<<" y "<< c<<endl;
    }

else {
        cout << "Los numeros deben ser distintos de cero." << endl;
    }
}
    return 0;
}


