#include <iostream>

using namespace std;

int main() {
  int numeroBinario, digito, valorDecimal = 0, exponente = 1;

  cout << "Introduzca un n�mero binario: ";
  cin >> numeroBinario;

  // Convertir el n�mero binario a decimal
  while (numeroBinario > 0) {
    // Obtener el d�gito m�s a la derecha
    digito = numeroBinario % 10;


    // Sumar el valor del d�gito a la potencia de 2 correspondiente
    valorDecimal += digito * exponente;

    // Multiplicar el exponente por 2 para pasar al siguiente d�gito
    exponente *= 2;

    // Dividir el n�mero binario por 10 para eliminar el d�gito m�s a la derecha
    numeroBinario /= 10;

  }

  // Imprimir el valor decimal
  cout << "El numero binario a decimal es: " << valorDecimal << endl;

  return 0;
}
