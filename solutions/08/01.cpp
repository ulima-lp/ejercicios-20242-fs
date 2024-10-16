#include <iostream>
#include <windows.h>
using namespace std;

void intercambiar(int* a, int* b) {
   int temp = *a;
   *a = *b;
   *b = temp;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
   int num1 = 5;
   int num2 = 10;

   cout << "Antes del intercambio:" << endl;
   cout << "num1 = " << num1 << endl;
   cout << "num2 = " << num2 << endl;

   intercambiar(&num1, &num2);

   cout << "Después del intercambio:" << endl;
   cout << "num1 = " << num1 << endl;
   cout << "num2 = " << num2 << endl;

   return 0;
}
