#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Stack {
public:
    Node *top;
    int sz;

    Stack(){
        top = NULL;
        sz = 0;
    }

    void push(int data){
        Node *node = new Node(data);
        node->next = top;
        top = node;
        sz++;
    }

    void pop(){
        if (top != NULL){
            top = top->next;
            sz--;
        }
    }

    int size(){
        return this->sz;
    }

    bool empty(){
        return (sz == 0);
    }
};

int main(){
    Stack *st = new Stack();
    st->push(20);
    st->push(30);
    st->push(40);
    st->push(5);
    cout << st->top->data << ' ' << st->size() << endl;
    while (!st->empty()){
        cout << st->top->data << ' ';
        st->pop();
    }
    cout << endl;
    cout << st->size() << endl;
    return 0;
}