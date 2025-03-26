#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "i = " << i  << endl;
    }

    int num = 0;

    while (num < 5)
    {
        cout << "num = " << num  << endl;

        num++;
    }

    int num2 = 10;

    //First iteration, without conditional
    do
    {
        cout << "num2 = " << num2  << endl;

        num2++;
    } while (num2 < 5);
    
    

    return 0;
}