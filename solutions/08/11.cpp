#include <iostream>
using namespace std;

void rectangulo(float ancho, float alto, float* areaR, float* perimetroR){

    *areaR = ancho * alto;

    *perimetroR = 2*(ancho + alto);
}

int main(){
    float anc = 2;
    float alt = 4;
    float area = 0;
    float perimetro = 0;
    float* puntero1 = &area;
    float* puntero2 = &perimetro;

    cout << "Valores originales: " << endl;
    cout << "Numero 1: " << anc << endl;
    cout << "Numero 2: " << alt << endl;

    rectangulo(anc, alt, puntero1, puntero2);

    cout << "\nResultados: " << endl;
    cout << "Area: " << area << endl;
    cout << "Resultado: " << perimetro << endl;

    return 0;

}