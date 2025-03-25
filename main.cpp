#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1 = 10, num2 = 5;

    cout << (num1 > num2) << endl;
    cout << (num1 < num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 <= num2) << endl;
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;

    // 1 && 1 = 1
    // 0 && 1 = 0
    // 0 && 0 = 0

    // 1 || 1 = 1
    // 1 || 0 = 1
    // 0 || 1 = 1
    // 0 || 0 = 0

    // !1 = 0
    // !0 = 1

    return 0;
}