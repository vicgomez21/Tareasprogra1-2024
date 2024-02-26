// Ejemplo de utilizaci�n de matrices codigo heredado de C

#include <iostream> //biblioteca predeterminada

#include <stdio.h> //biblioteca para los macros
#include <string.h> //biblioteca para modificador de cadenas
#include <stdlib.h> //biblioteca para usar vectores, rand()
#include <iomanip> //biblioteca para los comendos setw(); y setprecision();


//#include <unistd.h>
//#include <windows.h>

using namespace std;

#define NUMERO_CANDIDATOS 5
#define NUMERO_RONDAS 5
#define MAX_VOTACION 50
#define MIN_VOTACION 1
#define MAXIMA_LONGITUD_CADENA 100

void llamaCiclo();

int busquedaAleatorios(int minimo, int maximo);

void llenarMatriz(float matriz[NUMERO_CANDIDATOS][NUMERO_RONDAS + 1]);

void imprimirMatrizLinea();

float imprimirMatriz(float matriz[NUMERO_CANDIDATOS][NUMERO_RONDAS + 1], char  candidatos[NUMERO_CANDIDATOS][MAXIMA_LONGITUD_CADENA], string nombreMesa);

int main()
{
    //srand(getpid()); //se utiliza para crear numeros aleatorios
    llamaCiclo();
    return 0;
}
void llamaCiclo()
{
    float Matriz_mesa_001[NUMERO_CANDIDATOS][NUMERO_RONDAS+ 1];

    char opcion;
    bool repetir = true;


    char candidatos[NUMERO_CANDIDATOS][MAXIMA_LONGITUD_CADENA] = {"","","","",""};
    do
    {
        system("cls");
cout << "*** Elecciones Generales 2024 ***" << endl << endl;
        for (int i=0; i < NUMERO_CANDIDATOS; i ++ )
        {
            cout << "Ingrese el nombre del candidato " << i + 1 << endl;;
            cin >> candidatos[i] ;

        }

        cout << "* Comparativo de Votaciones *" << endl << endl;

        llenarMatriz(Matriz_mesa_001);
        imprimirMatriz(Matriz_mesa_001, candidatos, "MESA DE VOTOS 001");


        //}
        cout << "Desea otro calculo (s/n)? ";
        cin >> opcion;
        if (opcion == 'n')
        {
            repetir=false;
        }
    } while (repetir);
}
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz(float matriz[NUMERO_CANDIDATOS][NUMERO_RONDAS + 1])
{
    int y, x;
    for (x = 0; x < NUMERO_CANDIDATOS; x++)
    {
        float suma = 0;
        int calificacion = 0;
        for (y = 0; y < NUMERO_RONDAS; y++)
        {
            if (y == 0 || y == 4 || y == 3)  //primer cuarta y quinbta votacion
            {
                calificacion = busquedaAleatorios(MIN_VOTACION, 25);
            } else if (y == 1)  //segunda votacion
            {
                calificacion = busquedaAleatorios(MIN_VOTACION, 25);
            } else if (y == 2)  //tercera votacion
            {
                calificacion = busquedaAleatorios(MIN_VOTACION, 25);
            }
            suma += (float)calificacion;
            matriz[x][y] = calificacion;
            calificacion=0;
        }
        // Agregar promedio

        matriz[x][NUMERO_RONDAS] = suma;
    }
}

void imprimirMatrizLinea()
{
    int x;

    cout << "+--------";
    for (x = 0; x < NUMERO_RONDAS+ 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}
float imprimirMatriz(float matriz[NUMERO_CANDIDATOS][NUMERO_RONDAS + 1], char candidatos[NUMERO_CANDIDATOS][MAXIMA_LONGITUD_CADENA], string nombreMesa)
{
    //Funci�n que imprime la matriz en pantalla y realizando los calculos necesarios del promedio
    int y, x;

    float promedioMayor = matriz[0][NUMERO_RONDAS];
    float promedioMenor = matriz[0][NUMERO_RONDAS];
    float totalGeneral = 0;
    float promedioGeneral = 0;

    char candidatoPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char candidatoPromedioMenor[MAXIMA_LONGITUD_CADENA];

    memcpy(candidatoPromedioMayor, candidatos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(candidatoPromedioMenor, candidatos[0], MAXIMA_LONGITUD_CADENA);

    cout << nombreMesa << endl;
    cout << "Primera Ronda  Segundo ronda tercera ronda   cuarta ronda  quinta ronda" << endl;

    imprimirMatrizLinea();

    cout << setw(9) << "Candidatos";//coloca espacios

    for (x = 0; x < NUMERO_RONDAS; x++)
    {
        cout << setw(9) << "ronda" << x + 1;
    }
    cout << setw(8) << "Tot" << endl;

    imprimirMatrizLinea();

    for (y = 0; y < NUMERO_CANDIDATOS; y++)
    {
        cout << "!" << setw(8) << candidatos[y] << "!";
        float suma = 0;

        for (x = 0; x < NUMERO_RONDAS; x++)
        {
            int calificacion = matriz[y][x];
            cout << setw(9) << calificacion << "!";
        }

        float promedio = matriz[y][NUMERO_RONDAS];
        totalGeneral += matriz[y][NUMERO_RONDAS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(candidatoPromedioMayor,candidatos[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(candidatoPromedioMenor, candidatos[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;//sirve para redondear los decimales
        imprimirMatrizLinea();
    }



    cout << "el candidato con mayor numero de votos: " << setw(10) << candidatoPromedioMayor <<  setw(10) << promedioMayor << endl;
    cout << "el candidato con menor numero de votos " << setw(10) << candidatoPromedioMenor <<  setw(10) << promedioMenor << endl;
cout << "El ganador es " << setw(10) << candidatoPromedioMayor <<  setw(10) << promedioMayor << endl;
    return promedioGeneral;
}
