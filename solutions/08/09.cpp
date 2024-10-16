#include <iostream>
using namespace std;

void intercambiarPunteros(string** ptr1, string** ptr2) {
    string* temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    string texto1 = "Hola";
    string texto2 = "Mundo";
    string* puntero1 = &texto1;
    string* puntero2 = &texto2;

    cout << "Valores originales:" << endl;
    cout << "Puntero 1: " << *puntero1 << endl;
    cout << "Puntero 2: " << *puntero2 << endl;

    intercambiarPunteros(&puntero1, &puntero2);

    cout << "Valores intercambiados:" << endl;
    cout << "Puntero 1: " << *puntero1 << endl;
    cout << "Puntero 2: " << *puntero2 << endl;

    return 0;
}
