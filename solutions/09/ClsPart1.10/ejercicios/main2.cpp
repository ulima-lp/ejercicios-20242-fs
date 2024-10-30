#include <iostream>

using namespace std;

/*
10. Define una clase Estudiante con atributos como nombre y notaFinal.
Luego, crea una clase Grupo que contenga un array dinámico de estudiantes.
Implementa métodos para agregar estudiantes al grupo,
calcular el promedio del grupo, y mostrar la información de los estudiantes.
*/
class Estudiante {
private:
    string nombre;
    float notaFinal;
public:
    Estudiante(){
    }
    Estudiante(string nom, float nota){
        nombre = nom;
        notaFinal = nota;
    }
    float getNotaFinal() {
        return notaFinal;
    }
    void setNotaFinal(float nf) {
        notaFinal = nf;
    }
    void mostrar() const {
        cout << "Nombre: " << nombre << ", Nota Final: " << notaFinal << endl;
    }
};
class Grupo{
private:
    Estudiante* estudiantes;//[]
    int cantidad;
public:
    Grupo(){
        cantidad = 0;
        estudiantes = nullptr;
    }
    int getCantidad(){
        return cantidad;
    }
    void agregar(Estudiante &estudiante){
        Estudiante* nuevoArray = new Estudiante[cantidad + 1];//[ { -- } ]

        //copiar
        for(int i = 0; i < cantidad; i++){
            nuevoArray[i] = estudiantes[i];
        }
        nuevoArray[cantidad] = estudiante;//new Estudiante(estudiante);
        delete[] estudiantes;
        //[] = [ { -- } ]
        //[ { -- } ]
        estudiantes = nuevoArray;
        cantidad++;
    }
    float calcularPromedio(){
        float total = 0;
        for(int i = 0; i < cantidad; i++){
            total += estudiantes[i].getNotaFinal();
        }
        if(cantidad == 0){
            return 0;
        }
        return total / cantidad;
    }
    void mostrar(){
        for(int i = 0; i < cantidad; i++){
            estudiantes[i].mostrar();
        }
    }
};

int main()
{
    cout << "main2" << endl;
    Estudiante est = Estudiante("Manuel", 20.0);
    est.mostrar();
    Grupo grupo = Grupo();
    grupo.agregar(est);
    cout << "total: " << grupo.getCantidad() << endl;
    Estudiante est2 = Estudiante("Manuel2", 10.0);
    grupo.agregar(est2);
    Estudiante est3 = Estudiante("Manuel3", 15.0);
    grupo.agregar(est3);
    cout << grupo.calcularPromedio();
    grupo.mostrar();
    return 0;
}
