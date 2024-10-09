/*
Implemente un programa que calcule el Indice de Masa Corporal, que capture mediante consola dos valores numéricos que representan la talla (m) y el peso (kg). Utilizar la siguiente fórmula: IMC = peso / (talla)^2
Imprimir el nivel de peso según el resultado del IMC, tomar como referencia la siguiente guía:
IMC < 18.5 -> Bajo peso
IMC >= 18.5, IMC < 25 -> Normal
IMC >= 25, IMC < 30 -> Sobrepeso
IMC >= 30 -> Obesidad
*/
#include <iostream>
using namespace std;

int main (){
    double peso;
    double altura;
    double imc;

    cout<<"Ingrese su peso en kg: "<<endl;
    cin>> peso;

    cout<<"Ingrese su altura en cm: "<<endl;
    cin>> altura;

    altura = altura/100;

    imc= peso/(altura*altura);

    if (imc < 18.5) {cout << "Tiene bajo peso" << endl;} 
    else if (imc >= 18.5 && imc < 25) {cout << "Su peso es normal" << endl;}
    else if (imc >= 25 && imc < 30) {cout << "Está en sobrepeso" << endl;}
    else {cout << "Tiene obesidad" << endl;}

    return 0;
}
