#include <iostream>
using namespace std;

//ORDENAMIENTO BURBUJA
void burbuja(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambiar los elementos si están en el orden incorrecto
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



int main (){
    int n;
    cout << "Ingrese la cantidad de elementos en el arreglo: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese los elementos del arreglo, uno por uno: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
    }

    burbuja(arr, n);
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}
