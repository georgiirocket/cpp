#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

node* head = nullptr;
node* tail = nullptr;

void enqueue (int value) {
    if(head == nullptr) {
        head = new node;

        head->value = value;
        head->next = nullptr;

        tail = head;

        return;
    }

    tail->next = new node;
    tail = tail->next;
    tail->value = value;
    tail->next = nullptr;
}

void dequeue () {
    node* temp = head->next;

    delete head;

    head = temp;
}

void print() {
    node* temp = head;

    while (temp != nullptr)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    
    cout << endl;
}

int main() {
    enqueue(1);
    enqueue(9);
    enqueue(6);

    print();

    dequeue();

    print();

    cout << "Head: " << head->value << endl;
    cout << "Tail: " << tail->value << endl;

    return 0;
}