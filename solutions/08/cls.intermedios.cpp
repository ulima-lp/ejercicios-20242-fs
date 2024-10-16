#include <iostream>
using namespace std;

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void modificarArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}


// 11. Función para modificar elementos de un array.
void modificarArray11(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 10;  // Incrementar cada elemento en 10
    }
}

// 12. Función para crear un array dinámico y llenarlo.
int* crearArray(int size) {
    int *arr = new int[size];  // Crear array dinámico
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;  // Asignar valores
    }
    return arr;
}

// 14. Función para ordenar un array dinámico con el método de burbuja.
void ordenarArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambiar valores usando aritmética de punteros
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    // 1. Modifica un valor a través del puntero.
    int a = 10;
    int *p = &a;
    *p = 25;
    cout << "1. Nuevo valor de a: " << a << endl;

    // 2. Recorre un array de 5 enteros con un puntero.
    int arr[5] = {1, 2, 3, 4, 5};
    int *pArr = arr;
    cout << "2. Elementos del array: ";
    for (int i = 0; i < 5; i++) {
        cout << *(pArr + i) << " ";
    }
    cout << endl;

    // 3. Sumar los elementos de un array usando un puntero.
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += *(pArr + i);
    }
    cout << "3. Suma de los elementos: " << suma << endl;

    // 4. Multiplica cada elemento por 2 usando un puntero.
    for (int i = 0; i < 5; i++) {
        *(pArr + i) *= 2;
    }
    cout << "4. Elementos multiplicados por 2: ";
    for (int i = 0; i < 5; i++) {
        cout << *(pArr + i) << " ";
    }
    cout << endl;

    // 5. Intercambiar valores de dos variables con punteros.
    int x = 5, y = 10;
    intercambiar(&x, &y);
    cout << "5. Nuevos valores: x = " << x << ", y = " << y << endl;

    // 6. Usa new para asignar memoria a un entero.
    int *pNew = new int(30);
    cout << "6. Valor dinámico: " << *pNew << endl;
    delete pNew;

    // 7. Usa new para un array de 5 enteros y libéralo.
    int *pArray = new int[5] {1, 2, 3, 4, 5};
    cout << "7. Array dinámico: ";
    for (int i = 0; i < 5; i++) {
        cout << pArray[i] << " ";
        cout << *(pArray + i) << " ";
    }
    cout << endl;
    delete[] pArray;

    // 8. Copia un array estático a uno dinámico.
    int arrStatic[5] = {10, 20, 30, 40, 50};
    int *arrDynamic = new int[5];
    for (int i = 0; i < 5; i++) {
        arrDynamic[i] = arrStatic[i];
    }
    cout << "8. Array estático copiado al dinámico: ";
    for (int i = 0; i < 5; i++) {
        cout << arrDynamic[i] << " ";
    }
    cout << endl;
    delete[] arrDynamic;

    // 9. Sumar elementos de dos arrays dinámicos.
    int size = 5;
    int *arr1 = new int[size] {1, 2, 3, 4, 5};
    int *arr2 = new int[size] {6, 7, 8, 9, 10};
    int *sumArray = new int[size];

    for (int i = 0; i < size; i++) {
        sumArray[i] = arr1[i] + arr2[i];  // Sumar elementos
    }

    cout << "9. Suma de los arrays: ";
    for (int i = 0; i < size; i++) {
        cout << sumArray[i] << " ";
    }
    cout << endl;
    delete[] arr1;
    delete[] arr2;
    delete[] sumArray;

    // 10. Recorrer una cadena de caracteres con un puntero.
    char str[] = "Hola Mundo";
    char *pStr = str;

    cout << "10. Caracteres de la cadena: ";
    while (*pStr != '\0') {
        cout << *pStr << " ";  // Imprimir cada carácter
        pStr++;
    }
    cout << endl;

    // 11. Modificar un array a través de un puntero.
    int arrMod[] = {1, 2, 3, 4, 5};
    modificarArray11(arrMod, 5);

    cout << "11. Array modificado: ";
    for (int i = 0; i < 5; i++) {
        cout << arrMod[i] << " ";
    }
    cout << endl;

    // 12. Crear, llenar y liberar un array dinámico.
    int *arrDinamico = crearArray(5);
    cout << "12. Array dinámico: ";
    for (int i = 0; i < 5; i++) {
        cout << arrDinamico[i] << " ";
    }
    cout << endl;
    delete[] arrDinamico;

    // 13. Encontrar el valor máximo de un array dinámico.
    int *arrMax = new int[5] {5, 1, 8, 3, 2};
    int maxVal = *arrMax;  // Inicializar con el primer valor
    for (int i = 1; i < 5; i++) {
        if (*(arrMax + i) > maxVal) {
            maxVal = *(arrMax + i);  // Encontrar el máximo
        }
    }

    cout << "13. Valor máximo: " << maxVal << endl;
    delete[] arrMax;

    // 14. Ordenar un array dinámico con el método de burbuja.
    int *arrOrdenar = new int[5] {3, 5, 1, 4, 2};
    ordenarArray(arrOrdenar, 5);

    cout << "14. Array ordenado: ";
    for (int i = 0; i < 5; i++) {
        cout << arrOrdenar[i] << " ";
    }
    cout << endl;
    delete[] arrOrdenar;

    // 15. Sumar dos matrices dinámicas.
    int filas = 2, columnas = 3;
    int **matriz1 = new int*[filas];
    int **matriz2 = new int*[filas];
    int **matrizSuma = new int*[filas];

    // Inicializar matrices dinámicas
    for (int i = 0; i < filas; i++) {
        matriz1[i] = new int[columnas] {i + 1, i + 2, i + 3};  // {1, 2, 3}, {2, 3, 4}
        matriz2[i] = new int[columnas] {i + 4, i + 5, i + 6};  // {4, 5, 6}, {5, 6, 7}
        matrizSuma[i] = new int[columnas];
        for (int j = 0; j < columnas; j++) {
            matrizSuma[i][j] = matriz1[i][j] + matriz2[i][j];  // Sumar elementos
        }
    }

    cout << "15. Suma de las matrices: " << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matrizSuma[i][j] << " ";
        }
        cout << endl;
    }

    // Liberar memoria
    for (int i = 0; i < filas; i++) {
        delete[] matriz1[i];
        delete[] matriz2[i];
        delete[] matrizSuma[i];
    }
    delete[] matriz1;
    delete[] matriz2;
    delete[] matrizSuma;

    return 0;
}
