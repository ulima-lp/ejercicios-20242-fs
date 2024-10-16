#include <iostream>
using namespace std;

int* leerValores(int n) {
   int* valores = new int[n];

   for (int i = 0; i < n; i++) {
      cout << "Ingrese el valor " << i + 1 << ": ";
      cin >> valores[i];
   }

   return valores;
}

void imprimirValores1(int* arreglo, int n) {
   for (int i = 0; i < n; i++) {
      cout << arreglo[i] << " ";
   }
   cout << endl;
}

void imprimirValores2(int* arreglo, int n) {
   for (int* puntero = arreglo; puntero < arreglo + n; puntero++) {
      cout << *puntero << " ";
   }
   cout << endl;
}

int main() {
   int n;
   cout << "Ingrese la cantidad de valores: ";
   cin >> n;

   int* arreglo = leerValores(n);

   cout << "Valores ingresados:" << endl;
   imprimirValores1(arreglo, n);

   cout << "Valores ingresados (otra forma):" << endl;
   imprimirValores2(arreglo, n);

   delete[] arreglo;

   return 0;
}
