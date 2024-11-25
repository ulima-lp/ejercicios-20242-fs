#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

// Ejercicio 1: Uso de `new` para asignar memoria dinámica
void ejercicio1() {
    int* array = new int[5];

    cout << "Llenando el array con valores (1, 2, 3, 4, 5):" << endl;
    for (int i = 0; i < 5; ++i) {
        array[i] = i + 1;
    }

    cout << "Valores duplicados:" << endl;
    for (int i = 0; i < 5; ++i) {
        array[i] *= 2;
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;
}

// Ejercicio 2: Duplicar cada elemento en una pila
void duplicarElementos(stack<int>& pila) {
    stack<int> auxiliar;

    while (!pila.empty()) {
        int elemento = pila.top();
        pila.pop();
        auxiliar.push(elemento);
        auxiliar.push(elemento);
    }

    while (!auxiliar.empty()) {
        pila.push(auxiliar.top());
        auxiliar.pop();
    }
}

void ejercicio2() {
    stack<int> pila;

    pila.push(1);
    pila.push(2);
    pila.push(3);

    cout << "Pila original:" << endl;
    stack<int> temp = pila;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    duplicarElementos(pila);

    cout << "Pila después de duplicar cada elemento:" << endl;
    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
    cout << endl;
}

// Ejercicio 3: Invertir elementos de una cola
void invertirCola(queue<int>& cola) {
    stack<int> pila;

    while (!cola.empty()) {
        pila.push(cola.front());
        cola.pop();
    }

    while (!pila.empty()) {
        cola.push(pila.top());
        pila.pop();
    }
}

void ejercicio3() {
    queue<int> cola;

    cola.push(1);
    cola.push(2);
    cola.push(3);
    cola.push(4);

    cout << "Cola original:" << endl;
    queue<int> temp = cola;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    invertirCola(cola);

    cout << "Cola invertida:" << endl;
    while (!cola.empty()) {
        cout << cola.front() << " ";
        cola.pop();
    }
    cout << endl;
}

// Ejercicio 4: Intercalar dos colas
queue<int> intercalarColas(queue<int> cola1, queue<int> cola2) {
    queue<int> resultado;

    while (!cola1.empty() || !cola2.empty()) {
        if (!cola1.empty()) {
            resultado.push(cola1.front());
            cola1.pop();
        }
        if (!cola2.empty()) {
            resultado.push(cola2.front());
            cola2.pop();
        }
    }

    return resultado;
}

void ejercicio4() {
    queue<int> cola1, cola2;

    cola1.push(1);
    cola1.push(3);
    cola1.push(5);

    cola2.push(2);
    cola2.push(4);

    cout << "Cola 1:" << endl;
    queue<int> temp1 = cola1;
    while (!temp1.empty()) {
        cout << temp1.front() << " ";
        temp1.pop();
    }
    cout << endl;

    cout << "Cola 2:" << endl;
    queue<int> temp2 = cola2;
    while (!temp2.empty()) {
        cout << temp2.front() << " ";
        temp2.pop();
    }
    cout << endl;

    queue<int> resultado = intercalarColas(cola1, cola2);

    cout << "Cola intercalada:" << endl;
    while (!resultado.empty()) {
        cout << resultado.front() << " ";
        resultado.pop();
    }
    cout << endl;
}

// Ejercicio 5: Verificar si una cadena es un palíndromo
bool esPalindromo(const string& cadena) {
    stack<char> pila;
    queue<char> cola;

    for (char c : cadena) {
        if (isalnum(c)) {
            c = tolower(c);
            pila.push(c);
            cola.push(c);
        }
    }

    while (!pila.empty()) {
        if (pila.top() != cola.front()) {
            return false;
        }
        pila.pop();
        cola.pop();
    }

    return true;
}

void ejercicio5() {
    string cadena;

    cout << "Introduce una cadena: ";
    getline(cin, cadena);

    if (esPalindromo(cadena)) {
        cout << "La cadena es un palíndromo." << endl;
    } else {
        cout << "La cadena no es un palíndromo." << endl;
    }
}

int main() {
    cout << "Ejercicio 1:" << endl;
    ejercicio1();
    cout << endl;

    cout << "Ejercicio 2:" << endl;
    ejercicio2();
    cout << endl;

    cout << "Ejercicio 3:" << endl;
    ejercicio3();
    cout << endl;

    cout << "Ejercicio 4:" << endl;
    ejercicio4();
    cout << endl;

    cout << "Ejercicio 5:" << endl;
    ejercicio5();
    cout << endl;

    return 0;
}
