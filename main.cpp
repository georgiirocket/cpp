#include <iostream>
using namespace std;

void increment(int x) {
    x++;

    cout << "Increment" <<  x << endl;
}

//Link
void decrement(int& x) {
    x--;

    cout << "Decrement" <<  x << endl;
}

int main() {
    int value = 5;

    increment(value);
    decrement(value);

    cout << value << endl;

    return 0;
}