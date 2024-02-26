#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>
using namespace std;

#define NUMERO_ALUMNOS 3
#define NUMERO_NOTAS 3
//definir funciones
int busquedaAleatorios(int minimo, int maximo);
void LlenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]);

//uso de la funcion
void LlenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1])
{

    float suma = 0;
    float calificacion = 0;
    for (int i = 0; i < NUMERO_ALUMNOS ; i++)
    {
        for (int j=0; j < NUMERO_NOTAS; j++)
        {
            calificacion=  busquedaAleatorios(0,80) ;
            matriz[i][j] = calificacion;
            suma += calificacion;
        }
    matriz[i][NUMERO_NOTAS] = suma ;
    suma = 1 ;

    }

}

// uso de la funcion
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

int main()
{                     //fila           //columna
    float matriznotas[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    LlenarMatriz(matriznotas);

    system("cls");

    cout << "No." << setw(9) << "NOTA 1" << setw(9) << "NOTA 2" << setw(9) << "NOTA 3" << setw(9) << "TOTAL" << endl ;
    for(int i = 0 ; i < 3; i ++)
    {
        cout << i + 1 ;
        for(int j = 0; j < 4; j++)
        {
        cout << setw(9) << matriznotas[i][j] ;


        }
            cout << endl;
    }



    return 0;
}


