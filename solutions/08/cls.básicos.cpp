#include <iostream>
using namespace std;

int main() {
    // 1. Declara un puntero a un entero, asigna la dirección de una variable e imprime el valor.
    int a = 10;
    int *p = &a;
    cout << "1. Valor de la variable a través del puntero: " << *p << endl;

    // 2. Modifica el valor de la variable usando el puntero y muestra el resultado.
    *p = 20;
    cout << "2. Nuevo valor de la variable: " << a << endl;

    // 3. Muestra la dirección de memoria de una variable utilizando un puntero.
    cout << "3. Dirección de a: " << &a << endl;

    // 4. Declara un puntero a char y muestra el valor a través del puntero.
    char c = 'x';
    char *pChar = &c;
    cout << "4. Valor de char a través del puntero: " << *pChar << endl;

    // 5. Compara las direcciones de dos punteros.
    int b = 15;
    int *pB = &b;
    cout << "5. Las direcciones son " << ((p == pB) ? "iguales" : "diferentes") << endl;

    // 6. Incrementa el valor de una variable usando un puntero.
    *p += 1;
    cout << "6. Incremento de a: " << a << endl;

    // 7. Muestra el valor de una variable float usando un puntero.
    float f = 3.14;
    float *pFloat = &f;
    cout << "7. Valor del float a través del puntero: " << *pFloat << endl;

    // 8. Intercambia los valores de dos variables usando punteros.
    int x = 5, y = 10;
    int *pX = &x, *pY = &y;
    int temp = *pX;
    *pX = *pY;
    *pY = temp;
    cout << "8. Nuevos valores: x = " << x << ", y = " << y << endl;

    // 9. Verifica si un puntero está apuntando a nullptr.
    int *pNull = nullptr;
    cout << "9. El puntero está " << (pNull == nullptr ? "vacío" : "no vacío") << endl;

    // 10. Imprime la dirección a la que apunta un puntero y su propia dirección.
    cout << "10. Dirección de p: " << p << ", Dirección de p en sí: " << &p << endl;

    return 0;
}
