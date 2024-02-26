#include <stdio.h>      // Librería estándar de entrada y salida en C
#include <stdlib.h>     // Librería estándar de funciones de utilidad en C
#include <unistd.h>     // Librería estándar de funciones de sistema en POSIX (en este caso, getpid())
#include <string.h>     // Librería estándar de manipulación de cadenas en C
#include <iostream>     // Librería estándar de entrada y salida en C++
#include <iomanip>

 #include <iomanip> //sirve para formatos de salida
using namespace std;
#define CANDIDATOS 5
#define COLUMNAS 4
#define MAX_VOTOS 10000


//definimos funcion
void imprimirMatriz(float matriz[CANDIDATOS][COLUMNAS+1]);

//registros
//1
struct P_REP{
string nombre;
int V2017;
int V2019;
int V2021;
int V2023;
int VTOTALES;
};

struct P_DEMO{
string nombre;
int V2017;
int V2019;
int V2021;
int V2023;
int VTOTALES;
};
struct P_INDE{
string nombre;
int V2017;
int V2019;
int V2021;
int V2023;
int VTOTALES;
};
int main()
{
    float matriz[CANDIDATOS][COLUMNAS+1];
    imprimirMatriz(matriz);
    return 0;
}
int busquedaAleatorios(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
void imprimirMatriz(float matriz[CANDIDATOS][COLUMNAS+1]){
bool repetir=true;
char opcion;
P_REP p_rep[CANDIDATOS];
P_DEMO p_demo[CANDIDATOS];
P_INDE p_inde[CANDIDATOS];
//abrimos for para preguntar nombres de candidatos

for(int i=0;i<CANDIDATOS;i++){
    cout<<"candidato N0 "<< i+1<<" de el partido Independiente  "<<endl;
//----------------------------------------------------------------------------
   cout<<"Nombre: ";
    cin>>p_inde[i].nombre;
//----------------------------------------------------------------------------
//llenamos votaciones 2017 con ramdoms
p_inde[i].V2017=busquedaAleatorios(1,MAX_VOTOS);
//----------------------------------------------------------------------------
//llenamos votaciones 2017 con ramdoms
  p_inde[i].V2019=busquedaAleatorios(1,MAX_VOTOS);
//----------------------------------------------------------------------------
//llenamos votaciones 2017 con ramdoms
   p_inde[i].V2021=busquedaAleatorios(1,MAX_VOTOS);
//----------------------------------------------------------------------------
//llenamos votaciones 2017 con ramdoms
    p_inde[i].V2023=busquedaAleatorios(1,MAX_VOTOS);
//voto total P_INDEPENDIENTE
p_inde[i].VTOTALES=p_inde[i].V2017+p_inde[i].V2019+p_inde[i].V2021+ p_inde[i].V2023;

}
int votoM=0;
string empleado_Mayor;



for(int i=0;i< CANDIDATOS;i++){

if(p_inde[i].VTOTALES>votoM)
votoM=p_inde[i].VTOTALES;
empleado_Mayor=p_inde[i].nombre;
}

cout<<setw(9)<<"------PARTIDO INDEPENDIENTE-----"<<endl<<endl;
cout<<setw(9)<<"Nombre "<<setw(9)<<"2017 "<<setw(15)<<"2019 "<< setw(9) << "2021 " << setw(15) << "2023" << setw(15) << "Votos Totales" <<  endl<<endl;
    //for para imprimir los datos
    for(int i=0;i<CANDIDATOS;i++){
     cout<<setw(9)<<p_inde[i].nombre<<setw(9)<<p_inde[i].V2017<<setw(15)<<p_inde[i].V2019<< setw(9) << p_inde[i].V2021 << setw(15) << p_inde[i].V2023 << setw(15) <<p_inde[i].VTOTALES <<  endl<<endl;
    }
    cout<<"el candidato con mas votos es "<<empleado_Mayor <<" con "<< votoM<<endl<<endl;
}
