#include <iostream>
using namespace std;

class Node{
private:
    int value;
    Node * next;
public:
    Node(int v){
        value = v;
        next = nullptr;
    }
    void setNext(Node * tmp){
        next = tmp;
    }
    Node* getNext(){
        return next;
    }
    int getValue(){
        return value;
    }
};

class MyStack{
    private:
        Node * head;
        int cantidad;
    public:
        MyStack(){
            head = nullptr;
            cantidad = 0;
        }
        bool isEmpty(){
            if(head==nullptr)
                return true;
            else
                return false;
        }
        void push(int n){
            Node * nuevoNodo = new Node(n);
            if(isEmpty()){
                head = nuevoNodo;
            }
            else{
                nuevoNodo->setNext(head);
                head = nuevoNodo;
            }
            cantidad++;
        }
        int pop(){
            if(!isEmpty()){
                int tmp = head->getValue();
                head = head->getNext();
                cantidad--;
                return tmp;
            }
        }
        int top(){
            if(!isEmpty()){
                return head->getValue();
            }
        }

        int getTotal(){
            return cantidad;
        }
        //1. Escribe una función que reciba un valor y devuelva true si el valor existe en la pila, o false en caso contrario.
        bool exists(int value){
            MyStack pilaAux;
            bool result = false;
            while (!isEmpty())
            {
                int tmp = pop();
                if(tmp == value){
                    result = true;
                }
                pilaAux.push(tmp);
                cout<<tmp<<"->";
            }
            while (!pilaAux.isEmpty())
            {
                int tmp = pilaAux.pop();
                push(tmp);
            }
            return result;
        }

        void print(){
            MyStack pilaAux;
            while (!isEmpty())
            {
                int tmp = pop();
                pilaAux.push(tmp);
                cout<<tmp<<"->";
            }
            cout<<endl;
            while (!pilaAux.isEmpty())
            {
                int tmp = pilaAux.pop();
                push(tmp);
            }
        }
        //Crea una función que recorra e imprima todos los elementos de la pila,
        //sin eliminar ni modificar el contenido.
        void print2(){
            Node* nodoTmp = head;
            while(nodoTmp != nullptr){
                cout<<nodoTmp->getValue()<<"->";
                nodoTmp = nodoTmp->getNext();
            }
            cout<<endl;
        }
        bool exists2(int val){
            Node* nodoTmp = head;
            while(nodoTmp != nullptr){
                if(nodoTmp == val){
                    return true;
                }
                nodoTmp = nodoTmp->getNext();
            }
            return false;
        }
};


int main() {
    MyStack pilita;
    pilita.push(2);
    pilita.push(6);
    pilita.push(7);
    pilita.print();
    pilita.print2();
    cout<< pilita.getTotal()<<endl;
    pilita.pop();
    cout<<endl;
    pilita.print();
    cout<< pilita.getTotal()<<endl;
    cout<<endl;
    if(pilita.exists(2)){
        cout << "Existe." << endl;
    }else{
        cout << "No existe." << endl;
    }
    cout<< pilita.getTotal()<<endl;

    pilita.print2();
    return 0;
}
