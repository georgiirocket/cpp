#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

node* head = nullptr;
node* temp;

void add(int value) {
    if(head == nullptr) {
        head = new node;

        head->value = value;
        head->next = nullptr;

        temp = head;

        return;
    }

    head->next = new node;
    head = head->next;
    head->value = value;
}

void print() {
    node* t = temp;

    while (t != nullptr)
    {
        cout << t->value << " ";

        t = t->next;
    }

    cout << endl;
}

int main() {
    add(1);
    add(2);
    add(3);

    print();

    return 0;
}