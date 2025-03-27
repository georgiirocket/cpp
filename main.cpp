#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* ptr = &a;

    cout << &a << endl;
    cout << *ptr << endl;

    //Dynamic memory
    int* ptrOne = new int;
    *ptrOne = 8;

    delete ptrOne;

    ptrOne = nullptr;

    return 0;
}