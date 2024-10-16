#include <iostream>
using namespace std;

void imprimirReversa(char* arreglo) {
   int tamano = 0;
   while (*(arreglo + tamano) != '\0') {
      tamano++;
   }

   for (int i = tamano - 1; i >= 0; i--) {
      cout << *(arreglo + i);
   }
   cout << endl;
}

int main() {
   char mensaje[] = "Mahin Vega";

   imprimirReversa(mensaje);

   return 0;
}
