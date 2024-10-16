#include <iostream>
using namespace std;

int calcularCuadrado(int* numero) {
   return (*numero) * (*numero);
}

int main() {
   int numero = 5;
   int* puntero = &numero;

   cout << "Valor original: " << numero << endl;

   int resultado = calcularCuadrado(puntero);
   *puntero = resultado;

   cout << "Valor actualizado: " << numero << endl;

   return 0;
}
