#include <iostream>

using namespace std;

int main() {
  int numeroBinario, digito, valorDecimal = 0, exponente = 1;

  cout << "Introduzca un número binario: ";
  cin >> numeroBinario;

  // Convertir el número binario a decimal
  while (numeroBinario > 0) {
    // Obtener el dígito más a la derecha
    digito = numeroBinario % 10;


    // Sumar el valor del dígito a la potencia de 2 correspondiente
    valorDecimal += digito * exponente;

    // Multiplicar el exponente por 2 para pasar al siguiente dígito
    exponente *= 2;

    // Dividir el número binario por 10 para eliminar el dígito más a la derecha
    numeroBinario /= 10;

  }

  // Imprimir el valor decimal
  cout << "El numero binario a decimal es: " << valorDecimal << endl;

  return 0;
}
