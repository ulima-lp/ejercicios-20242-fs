#include <iostream>
using namespace std;

int encontrarMaximo(int* arreglo, int tamano) {
   int maximo = *arreglo;

   for (int i = 1; i < tamano; i++) {
      if (*(arreglo + i) > maximo) {
         maximo = *(arreglo + i);
      }
   }
   return maximo;
}

int main() {
   int numeros[] = {5, 12, 20, 32, 1, 8, 15};
   int tamano = sizeof(numeros) / sizeof(numeros[0]);

   int maximo = encontrarMaximo(numeros, tamano);

   cout << "El valor maximo es: " << maximo << endl;

   return 0;
}
