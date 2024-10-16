#include <iostream>
using namespace std;

void determinarSigno(int* numero) {
   if (*numero > 0) {
      cout << "El numero es positivo." << endl;
   } else if (*numero < 0) {
      cout << "El numero es negativo." << endl;
   } else {
      cout << "El numero es cero." << endl;
   }
}

int main() {
   int num = -5;
   int* punteroNum = &num;

   determinarSigno(punteroNum);

   return 0;
}
