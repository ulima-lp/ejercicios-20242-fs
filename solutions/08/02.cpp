#include <iostream>
using namespace std;

bool esPar(int* numero) {
   return (*numero % 2) == 0;
}

int main() {
   int num = 6;
   int* punteroNum = &num;

   if (esPar(punteroNum)) {
      cout << "El número es par." << endl;
   } else {
      cout << "El número no es par." << endl;
   }

   return 0;
}
