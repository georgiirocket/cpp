#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

node* head = nullptr;

void push(int value) {
    if(head == nullptr) {
        head = new node;

        head->value = value;
        head->next = nullptr;

        return;
    }

    node* temp = new node;

    temp->value = value;
    temp->next = head;

    head = temp;
}

void pop() {
    node* temp = head->next;
    
    delete head;

    head = temp;
}

int main() {
    push(2);
    push(3);
    pop();

    cout << head->value << endl;

    return 0;
}