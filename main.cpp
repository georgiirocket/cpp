#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;

    void print() {
        cout << "Name is: " << name << endl;
        cout << "Age: " << age << endl;
    }
};




int main() {
    Person p = {"Alex", 20};
    p.print();

    return 0;
}