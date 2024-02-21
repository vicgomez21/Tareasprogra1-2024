#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <iomanip>
using namespace std;

#define NUM_ALMACENES 3
#define NUM_PRODUCTOS 4
#define MAX_STOCK 100
#define MIN_STOCK 0
#define MAX_LONGITUD_CADENA 100

void ejecutarCiclo();
int generarAleatorio(int minimo, int maximo);
void llenarInventario(int inventario[NUM_ALMACENES][NUM_PRODUCTOS]);
void imprimirSeparador();
void imprimirInventario(int inventario[NUM_ALMACENES][NUM_PRODUCTOS], char nombresAlmacenes[NUM_ALMACENES][MAX_LONGITUD_CADENA], string nombreEmpresa);

int main() {
    srand(time(nullptr));
    ejecutarCiclo();
    return 0;
}

void ejecutarCiclo() {
    int inventario_almacen_1[NUM_ALMACENES][NUM_PRODUCTOS];
    int inventario_almacen_2[NUM_ALMACENES][NUM_PRODUCTOS];
    int inventario_almacen_3[NUM_ALMACENES][NUM_PRODUCTOS];
    char opcion;
    bool repetir = true;

    char nombres_almacenes[NUM_ALMACENES][MAX_LONGITUD_CADENA] = {"Almacen pipo", "Almacen andre", "Almacen osacrin"};

    do {
        system("clear");

        cout << "*** Comparativo de Inventario ***" << endl << endl;

        llenarInventario(inventario_almacen_1);
        imprimirInventario(inventario_almacen_1, nombres_almacenes, "Empresa la quemona - Inventario Almacen A");

        llenarInventario(inventario_almacen_2);
        imprimirInventario(inventario_almacen_2, nombres_almacenes, "Empresa el jocote - Inventario Almacen b");

        llenarInventario(inventario_almacen_3);
        imprimirInventario(inventario_almacen_3, nombres_almacenes, "Empresa pepina - Inventario Almacen C");

        cout << "¿Desea realizar otros stocks? (s/n): ";
        cin >> opcion;

        if (opcion == 'n') {
            repetir = false;
        }
    } while (repetir);
}

int generarAleatorio(int minimo, int maximo) {
    return minimo + rand() % (maximo - minimo + 1);
}

void llenarInventario(int inventario[NUM_ALMACENES][NUM_PRODUCTOS]) {
    for (int i = 0; i < NUM_ALMACENES; i++) {
        for (int j = 0; j < NUM_PRODUCTOS; j++) {
            inventario[i][j] = generarAleatorio(MIN_STOCK, MAX_STOCK);
        }
    }
}

void imprimirSeparador() {
    cout << "*--------";
    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        cout << "*---------";
    }
    cout << "*\n";
}

void imprimirInventario(int inventario[NUM_ALMACENES][NUM_PRODUCTOS], char nombresAlmacenes[NUM_ALMACENES][MAX_LONGITUD_CADENA], string nombreEmpresa) {
    int total_general = 0;
    cout << nombreEmpresa << endl;
    imprimirSeparador();
    cout << setw(9) << "Almacen .";
    for (int i = 0; i < NUM_PRODUCTOS; i++) {
        cout << setw(11) << "Producto" << i + 1;
    }
    cout << setw(9) << "Total" << endl;
    imprimirSeparador();
    for (int i = 0; i < NUM_ALMACENES; i++) {
        cout << "!" << setw(8) << nombresAlmacenes[i] << "!";
        int total_almacen = 0;
        for (int j = 0; j < NUM_PRODUCTOS; j++) {
            cout << setw(9) << inventario[i][j] << "!";
            total_almacen += inventario[i][j];
        }
        total_general += total_almacen;
        cout << setw(9) << total_almacen << "!" << endl;
        imprimirSeparador();
    }
    cout << "Total general: " << total_general << endl << endl;
}
