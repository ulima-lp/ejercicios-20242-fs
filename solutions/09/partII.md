#include <iostream>
#include <string>
using namespace std;

// 01. Clase Persona
class Persona {
public:
    string nombre;
    int edad;

    void mostrarInformacion() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

// 02. Clase Producto con getters y setters
class Producto {
private:
    string nombre;
    float precio;
    int cantidad;
public:
    void setNombre(string n) { nombre = n; }
    string getNombre() { return nombre; }
    
    void setPrecio(float p) { precio = p; }
    float getPrecio() { return precio; }
    
    void setCantidad(int c) { cantidad = c; }
    int getCantidad() { return cantidad; }
};

// 03. Clase Rectangulo
class Rectangulo {
public:
    float ancho, alto;

    Rectangulo(float a, float h) : ancho(a), alto(h) {}

    float calcularArea() {
        return ancho * alto;
    }
};

// 04. Clase Calculadora
class Calculadora {
public:
    float suma(float a, float b) { return a + b; }
    float resta(float a, float b) { return a - b; }
    float multiplicacion(float a, float b) { return a * b; }
    float division(float a, float b) { return (b != 0) ? a / b : 0; }
};

// 05. Clase Producto con método para calcular valor de inventario
class ProductoInventario {
public:
    string nombre;
    float precio;
    int cantidad;

    float calcularValorInventario() {
        return precio * cantidad;
    }
};

// 06. Clase Cadena que usa puntero dinámico
class Cadena {
private:
    char *cadena;
public:
    Cadena(const char* c) {
        cadena = new char[strlen(c) + 1];
        strcpy(cadena, c);
    }

    ~Cadena() {
        delete[] cadena; // liberar memoria
    }

    void mostrarCadena() {
        cout << cadena << endl;
    }
};

// 07. Clase Libro con constructor de copia profunda
class Libro {
private:
    char *titulo;
    string autor;
public:
    Libro(const char* t, string a) : autor(a) {
        titulo = new char[strlen(t) + 1];
        strcpy(titulo, t);
    }

    // Constructor de copia profunda
    Libro(const Libro &libro) {
        titulo = new char[strlen(libro.titulo) + 1];
        strcpy(titulo, libro.titulo);
        autor = libro.autor;
    }

    ~Libro() {
        delete[] titulo;
    }

    void mostrarLibro() {
        cout << "Título: " << titulo << ", Autor: " << autor << endl;
    }
};

// 08. Array dinámico de objetos Estudiante
class Estudiante {
public:
    string nombre;
    int edad;

    void mostrar() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

// 09. Clase ListaEnteros para gestionar array dinámico
class ListaEnteros {
private:
    int *lista;
    int size;
public:
    ListaEnteros() : lista(nullptr), size(0) {}

    void agregarEntero(int valor) {
        int *nuevaLista = new int[size + 1];
        for (int i = 0; i < size; i++) {
            nuevaLista[i] = lista[i];
        }
        nuevaLista[size] = valor;
        delete[] lista;
        lista = nuevaLista;
        size++;
    }

    void eliminarEntero() {
        if (size > 0) {
            int *nuevaLista = new int[size - 1];
            for (int i = 0; i < size - 1; i++) {
                nuevaLista[i] = lista[i];
            }
            delete[] lista;
            lista = nuevaLista;
            size--;
        }
    }

    void mostrarLista() {
        for (int i = 0; i < size; i++) {
            cout << lista[i] << " ";
        }
        cout << endl;
    }

    ~ListaEnteros() {
        delete[] lista;
    }
};

// 10. Clase Empleado con función que modifica salario
class Empleado {
public:
    string nombre;
    float salario;

    Empleado(string n, float s) : nombre(n), salario(s) {}
};

void modificarSalario(Empleado *empleado, float nuevoSalario) {
    empleado->salario = nuevoSalario;
}

// 11. Clase Sala que recibe puntero a array dinámico de objetos Silla
class Silla {
public:
    int numero;
    Silla(int n) : numero(n) {}
};

class Sala {
public:
    int capacidad;

    Sala(int cap) : capacidad(cap) {}

    void llenarSala(Silla* sillas[], int totalSillas) {
        for (int i = 0; i < totalSillas; i++) {
            cout << "Silla " << sillas[i]->numero << " en la sala." << endl;
        }
    }
};

// 12. Clase Equipo con array dinámico de objetos Jugador
class Jugador {
public:
    string nombre;

    Jugador(string n) : nombre(n) {}
};

class Equipo {
private:
    Jugador** jugadores;
    int numJugadores;

public:
    Equipo() : jugadores(nullptr), numJugadores(0) {}

    void agregarJugador(string nombre) {
        Jugador** nuevoArray = new Jugador*[numJugadores + 1];
        for (int i = 0; i < numJugadores; i++) {
            nuevoArray[i] = jugadores[i];
        }
        nuevoArray[numJugadores] = new Jugador(nombre);
        delete[] jugadores;
        jugadores = nuevoArray;
        numJugadores++;
    }

    void mostrarJugadores() {
        for (int i = 0; i < numJugadores; i++) {
            cout << "Jugador: " << jugadores[i]->nombre << endl;
        }
    }

    ~Equipo() {
        for (int i = 0; i < numJugadores; i++) {
            delete jugadores[i];
        }
        delete[] jugadores;
    }
};

// 13. Clase Producto con método para buscar el más caro
class ProductoCaro {
public:
    string nombre;
    float precio;

    ProductoCaro(string n, float p) : nombre(n), precio(p) {}
};

ProductoCaro* buscarProductoMasCaro(ProductoCaro* productos[], int size) {
    ProductoCaro* masCaro = productos[0];
    for (int i = 1; i < size; i++) {
        if (productos[i]->precio > masCaro->precio) {
            masCaro = productos[i];
        }
    }
    return masCaro;
}

// 14. Clase ClaseNumeros con array dinámico
class ClaseNumeros {
private:
    int *numeros;
    int size;
public:
    ClaseNumeros() : numeros(nullptr), size(0) {}

    void agregarNumero(int valor) {
        int *nuevoArray = new int[size + 1];
        for (int i = 0; i < size; i++) {
            nuevoArray[i] = numeros[i];
        }
        nuevoArray[size] = valor;
        delete[] numeros;
        numeros = nuevoArray;
        size++;
    }

    void mostrarNumeros() {
        for (int i = 0; i < size; i++) {
            cout << numeros[i] << " ";
        }
        cout << endl;
    }

    ~ClaseNumeros() {
        delete[] numeros;
    }
};

// 15. Clase Matriz con creación dinámica de matriz bidimensional
class Matriz {
private:
    int **matriz;
    int filas, columnas;

public:
    Matriz(int f, int c) : filas(f), columnas(c) {
        matriz = new int*[filas];
        for (int i = 0; i < filas; i++) {
            matriz[i] = new int[columnas];
        }
    }

    void llenarMatriz() {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                matriz[i][j] = (i + 1) * (j + 1);  // Llenar con valores
            }
        }
    }

    void imprimirMatriz() {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~Matriz() {
        for (int i = 0; i < filas; i++) {
            delete[] matriz[i];
        }
        delete[] matriz;
    }
};

int main() {
    // Aquí puedes probar las clases y métodos implementados.

    return 0;
}
