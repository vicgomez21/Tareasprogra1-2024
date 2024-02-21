// Incluimos las librerías necesarias
#include <stdio.h>      // Librería estándar de entrada y salida en C
#include <stdlib.h>     // Librería estándar de funciones de utilidad en C
#include <unistd.h>     // Librería estándar de funciones de sistema en POSIX (en este caso, getpid())
#include <string.h>     // Librería estándar de manipulación de cadenas en C
#include <iostream>     // Librería estándar de entrada y salida en C++
#include <iomanip>      // Librería estándar para manipulación de salida en C++

using namespace std;    // Usamos el espacio de nombres estándar para evitar tener que anteponer std::

// Definimos algunas constantes
#define NUMERO_ALUMNOS 5                // Número de alumnos
#define NUMERO_MATERIAS 5               // Número de materias
#define NUMERO_NOTAS 4                  // Número de notas por alumno
#define MAX_CALIFICACION 100            // Calificación máxima posible
#define MIN_CALIFICACION 0              // Calificación mínima posible
#define MAXIMA_LONGITUD_CADENA 100      // Longitud máxima de las cadenas

// Prototipos de funciones
void llamaCiclo();

int busquedaAleatorios(int minimo, int maximo);

void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]);

void imprimirMatrizLinea();
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], string nombreFacultad);

// Función principal
int main() {
    srand(getpid());    // Inicializa la semilla para la generación de números aleatorios basada en el ID de proceso
    llamaCiclo();       // Llama a la función que inicia el ciclo principal del programa
    return 0;           // Termina el programa
}

// Función principal del ciclo del programa
void llamaCiclo() {
    // Declaración de variables locales
    float matriz_facultad_1[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];   // Matriz de notas para la facultad 1
    float matriz_facultad_2[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];   // Matriz de notas para la facultad 2
    float matriz_facultad_3[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];   // Matriz de notas para la facultad 3
    char opcion;        // Variable para almacenar la opción del usuario (s/n)
    bool repetir = true;    // Variable booleana para controlar la repetición del ciclo

    float promedio_facultad_1; // Promedio de notas para la facultad 1
    float promedio_facultad_2; // Promedio de notas para la facultad 2
    float promedio_facultad_3; // Promedio de notas para la facultad 3

    // Nombres de los alumnos
    char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA] = {"Carlos", "Luis", "Maria", "Pedro", "Juan"};

    // Bucle principal
    do {
        system("cls");  // Limpia la pantalla (solo funciona en sistemas Windows, en sistemas UNIX usar "clear")
        promedio_facultad_1 = 0;    // Reinicia el promedio para la facultad 1
        promedio_facultad_2 = 0;    // Reinicia el promedio para la facultad 2
        promedio_facultad_3 = 0;    // Reinicia el promedio para la facultad 3

        cout << "*** Comparativo de Facultades ***" << endl << endl;   // Imprime el título del comparativo

        // Llena y muestra la matriz de notas para la Facultad de Ingeniería
        llenarMatriz(matriz_facultad_1);
        promedio_facultad_1 = imprimirMatriz(matriz_facultad_1, alumnos, "Facultad de Ingenieria");

        // Llena y muestra la matriz de notas para la Facultad de Arquitectura
        llenarMatriz(matriz_facultad_2);
        promedio_facultad_2 = imprimirMatriz(matriz_facultad_2, alumnos, "Facultad de Arquitectura");

        // Llena y muestra la matriz de notas para la Facultad de Administración
        llenarMatriz(matriz_facultad_3);
        promedio_facultad_3 = imprimirMatriz(matriz_facultad_3, alumnos, "Facultad de Administracion");

        // Compara los promedios de las facultades y muestra el resultado
        if (promedio_facultad_1 > promedio_facultad_2 && promedio_facultad_1 > promedio_facultad_3) {
            cout << " La facultad con el mejor promedio es : " << "Facultad de Ingenieria" << " Promedio: " << promedio_facultad_1 << endl;
        } else if (promedio_facultad_2 > promedio_facultad_1 && promedio_facultad_2 > promedio_facultad_3) {
            cout << " La facultad con el mejor promedio es : " << "Facultad de Arquitectura" << " Promedio: " << promedio_facultad_2 << endl;
        } else if (promedio_facultad_3 > promedio_facultad_2 && promedio_facultad_3 > promedio_facultad_1) {
            cout << " La facultad con el mejor promedio es : " << "Facultad de Administracion" << " Promedio: " << promedio_facultad_3 << endl;
        } else {
            cout << " Algunas facultades tienen el mismo promedio " << endl << endl;
        }

        // Pregunta al usuario si desea repetir el cálculo
        cout << "Desea otro calculo (s/n)? ";
        cin >> opcion;
        if (opcion == 'n') {
            repetir = false;    // Si la opción es 'n', se termina el bucle
        }
    } while (repetir);  // El bucle se repite mientras repetir sea true
}

// Función para generar números aleatorios en un rango
int busquedaAleatorios(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

// Función para llenar una matriz de notas con valores aleatorios
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]) {
    int y, x;   // Variables de control de bucle

    // Bucle para recorrer las filas (alumnos) de la matriz
    for (y = 0; y < NUMERO_ALUMNOS; y++) {
        float suma = 0;     // Variable para almacenar la suma de las notas
        int calificacion = 0;   // Variable para almacenar la calificación de cada nota

        // Bucle para recorrer las columnas (notas) de la matriz
        for (x = 0; x < NUMERO_NOTAS; x++) {
            // Genera una calificación aleatoria dependiendo del tipo de evaluación
            if (x == 0 || x == 3) {     // Primer parcial
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 20);
            } else if (x == 1) {        // Segundo parcial
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 25);
            } else if (x == 2) {        // Examen final
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 35);
            }
            suma += (float)calificacion;    // Suma la calificación al total
            matriz[y][x] = calificacion;   // Asigna la calificación a la matriz
            calificacion = 0;   // Reinicia la variable de calificación para la próxima nota
        }

        // Agrega el promedio al final de cada fila de la matriz
        matriz[y][NUMERO_NOTAS] = suma;
    }
}

// Función para imprimir una línea divisoria en la salida
void imprimirMatrizLinea() {
    int x;  // Variable de control de bucle

    // Imprime una línea de separación
    cout << "+--------";
    for (x = 0; x < NUMERO_NOTAS + 1; x++) {
        cout << "+---------";
    }
    cout << "+\n";
}

// Función para imprimir una matriz de notas junto con estadísticas
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], string nombreFacultad) {
    // Declaración de variables locales
    int y, x;   // Variables de control de bucle
    float promedioMayor = matriz[0][NUMERO_NOTAS];   // Variable para almacenar el promedio mayor
    float promedioMenor = matriz[0][NUMERO_NOTAS];   // Variable para almacenar el promedio menor
    float totalGeneral = 0;     // Variable para almacenar el total de notas
    float promedioGeneral = 0;  // Variable para almacenar el promedio general
    char alumnoPromedioMayor[MAXIMA_LONGITUD_CADENA];    // Variable para almacenar el nombre del alumno con el promedio mayor
    char alumnoPromedioMenor[MAXIMA_LONGITUD_CADENA];    // Variable para almacenar el nombre del alumno con el promedio menor

    // Copia el nombre del primer alumno en las variables de nombres de promedio mayor y menor
    memcpy(alumnoPromedioMayor, alumnos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(alumnoPromedioMenor, alumnos[0], MAXIMA_LONGITUD_CADENA);

    // Imprime el nombre de la facultad
    cout << nombreFacultad << endl;

    // Imprime la leyenda de las notas
    cout << "(Nota1)=>Primer Parcial  (Nota2)=>Segundo Parcial (Nota3)=>Final (Nota4)=>Actividades" << endl;

    // Imprime una línea divisoria
    imprimirMatrizLinea();

    // Imprime la cabecera de la matriz
    cout << setw(9) << "Alumno";
    for (x = 0; x < NUMERO_NOTAS; x++) {
        cout << setw(9) << "Nota" << x + 1;
    }
    cout << setw(8) << "Tot" << endl;

    // Imprime una línea divisoria
    imprimirMatrizLinea();

    // Bucle para recorrer las filas (alumnos) de la matriz
    for (y = 0; y < NUMERO_ALUMNOS; y++) {
        cout << "!" << setw(8) << alumnos[y] << "!";  // Imprime el nombre del alumno

        float suma = 0; // Variable para almacenar la suma de las notas del alumno

        // Bucle para recorrer las columnas (notas) de la matriz
        for (x = 0; x < NUMERO_NOTAS; x++) {
            int calificacion = matriz[y][x];    // Obtiene la calificación del alumno en la nota actual
            cout << setw(9) << calificacion << "!";   // Imprime la calificación
        }

        float promedio = matriz[y][NUMERO_NOTAS];    // Obtiene el promedio del alumno
        totalGeneral += matriz[y][NUMERO_NOTAS];      // Actualiza el total de notas generales

        // Actualiza los promedios mayor y menor, junto con los nombres de los alumnos correspondientes
        if (promedio > promedioMayor) {
            promedioMayor = promedio;
            memcpy(alumnoPromedioMayor, alumnos[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor) {
            promedioMenor = promedio;
            memcpy(alumnoPromedioMenor, alumnos[y], MAXIMA_LONGITUD_CADENA);
        }

        // Imprime el promedio del alumno
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;

        // Imprime una línea divisoria
        imprimirMatrizLinea();
    }

    // Calcula el promedio general
    promedioGeneral = totalGeneral / NUMERO_ALUMNOS;

    // Imprime las estadísticas finales
    cout << "Nota mayor: " << setw(10) << alumnoPromedioMayor << setw(10) << promedioMayor << endl;
    cout << "Nota menor: " << setw(10) << alumnoPromedioMenor << setw(10) << promedioMenor << endl;
    cout << "Nota prom : " << setw(10) << promedioGeneral << endl << endl;

    return promedioGeneral; // Devuelve el promedio general
}
