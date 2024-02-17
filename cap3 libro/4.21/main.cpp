
    // Ejercicio 4.21: ej04_21.cpp
 // ¿Qué es lo que imprime este programa?
 #include <iostream>
 using namespace std;

 int main()
 {
 unsigned int cuenta = 1; // inicializa cuenta
 while ( cuenta <= 10 ) // itera 10 veces
 {
 // imprime una línea de texto
 cout << ( cuenta % 1 ? "****" : "++++++++" ) << endl;
 ++cuenta; // incrementa cuenta
 } // fin de while
 } // fin de main
