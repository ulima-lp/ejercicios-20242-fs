//Elabora una función que reciba un puntero a un numero entero, calcule su cuadrado y actualize su valor.

#include <iostream>
using namespace std;

void calcularCuadrado(int* numero) {
   *numero = (*numero) * (*numero);
}

int main() {
   int numero = 5;
   int* puntero = &numero;

   cout << "Valor original: " << numero << endl;

   calcularCuadrado(puntero);

   cout << "Valor actualizado: " << numero << endl;

   return 0;
}
