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
        }

};














        




int main() {
    MyQueue colita;
    colita.enqueue(5);
    colita.enqueue(4);
    colita.enqueue(3);
    colita.enqueue(2);
    colita.enqueue(1);
    colita.print();
    colita.dequeue();
    cout<<endl;
    colita.print();



    return 0;
}