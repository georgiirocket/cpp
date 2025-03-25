#include <iostream>
using namespace std;

int main() {
    int num1 = 10, num2 = 5;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;

    cout << sum << " " << difference << " " << product << " " << quotient << endl;

    num1++;
    num1 = num1 + 1;
    num1 += 1;

    num2--;
    num2 = num2 - 1;
    num2 -= 1;

    num1 *= 2;
    num1 /= 4;

    --num1;
    ++num2;


    return 0;
}