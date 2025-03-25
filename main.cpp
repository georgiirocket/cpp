#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // int num1 = 10;

    // if (num1 > 5) {
    //     cout << "Number is bigger than 5" << endl;
    // } else {
    //     cout << "Number is less than 5 or equal" << endl;
    // }
    int num = 4;

    switch (num)
    {
    case 1:
        cout << "Number is 1" << endl;

        break;
    case 4: 
        cout << "Number is 4" << endl;    

        break;
    default:
        cout << "Default" << endl;
        
        break;
    }

    return 0;
}