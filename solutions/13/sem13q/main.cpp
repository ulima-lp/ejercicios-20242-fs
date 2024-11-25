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
    public:
        MyStack(){
            head = nullptr;
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
        }
        int pop(){
            if(!isEmpty()){
                int tmp = head->getValue();
                head = head->getNext();
                return tmp;
            }
        }
};
class MyQueue{
    private:
        Node * head;
        Node * last;
    public:
        MyQueue(){
            head = nullptr;
            last = nullptr;
        }
        bool isEmpty(){
            if(head==nullptr)
                return true;
            else
                return false;
        }
        void enqueue(int N){
            Node * nuevoNodo = new Node(N);
            if(isEmpty()){
                head = nuevoNodo;
                last = nuevoNodo;
            }
            else{
                last->setNext(nuevoNodo);
                last = nuevoNodo;
            }
        }
        int dequeue(){
            if(!isEmpty()){
                int tmp = head->getValue();
                if(head->getNext()==nullptr)
                    last = nullptr;
                head = head->getNext();
                return tmp;
            }

        }
        void print(){
            MyQueue colaAux;
            while (!isEmpty())
            {
                int tmp = dequeue();
                colaAux.enqueue(tmp);
                cout<<tmp<<"->";
            }
            while (!colaAux.isEmpty())
            {
                int tmp = colaAux.dequeue();
                enqueue(tmp);
            }
            cout << endl;
        }
        void print2() {
            Node* nodotmp = head;
            while (nodotmp != nullptr) {
                cout << nodotmp ->getValue()<<">>>>";
                nodotmp = nodotmp->getNext();
            }
            cout << endl;
        }
        int front(){
            if(isEmpty()){
                return 0;//-1
            }
            else{
                return head->getValue();
            }
        }
        void clear() {
            while (!isEmpty()) {
                dequeue();
            }
        }
        void invert(){//6.
            //colaMain: 5->4->3->2->1->

            //colaMain: dequeue() enqueue()
            //pilaAux : push() pop()
            //colaMain: 1->2->3->4->5->
            MyStack pilaAux;
            while(!isEmpty()){
                pilaAux.push(dequeue());
            }
            while(!pilaAux.isEmpty()){
                enqueue(pilaAux.pop());
            }
        }
        //7. Implementa una función que devuelva una copia de la cola
        //sin modificar la cola original.
        MyQueue copiar(){
            MyQueue colaAux;
            MyQueue colaAux2;
            while (!isEmpty())
            {
                int tmp = dequeue();
                colaAux.enqueue(tmp);
                colaAux2.enqueue(tmp);
            }

            while (!colaAux.isEmpty())
            {
                int tmp = colaAux.dequeue();
                enqueue(tmp);
            }
            return colaAux2;
        }
        //8. Crea una función que reciba un valor y determine si existe
        //en la cola, devolviendo un valor booleano.
        bool exists(int num){
            MyQueue colaAux;
            bool encontrado = false;
            while (!isEmpty())
            {
                int tmp = dequeue();
                if(num == tmp){
                    encontrado = true;
                }
                colaAux.enqueue(tmp);
            }
            while (!colaAux.isEmpty())
            {
                int tmp = colaAux.dequeue();
                enqueue(tmp);
            }
            return encontrado;
        }
        //9.sume todos los elementos de la cola y devuelva el resultado.
        int sum(){
            MyQueue colaAux;
            int suma = 0;
            while (!isEmpty())
            {
                int tmp = dequeue();
                suma = suma + tmp;
                colaAux.enqueue(tmp);
            }
            while (!colaAux.isEmpty())
            {
                int tmp = colaAux.dequeue();
                enqueue(tmp);
            }
            return suma;
        }
        //10. elimine todos los elementos impares de la cola, manteniendo los pares.
        void pares(){
            MyQueue colaAux;
            int suma = 0;
            while (!isEmpty())
            {
                int tmp = dequeue();
                if(tmp % 2 == 0){
                    colaAux.enqueue(tmp);
                }
            }
            while (!colaAux.isEmpty())
            {
                int tmp = colaAux.dequeue();
                enqueue(tmp);
            }
        }
};

int main() {
    MyQueue colita;
    colita.enqueue(5);
    colita.enqueue(4);
    colita.enqueue(3);
    colita.enqueue(2);
    colita.enqueue(1);
    cout<< "front: " << (colita.front()) << endl;
    colita.print();

    colita.pares();
    cout<< "pares:" << endl;
    colita.print();

    return 0;
}

