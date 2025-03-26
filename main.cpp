#include <iostream>
using namespace std;

int main() {
    int a[5];
    int b[4] = {1,2,3,4};

    int len = sizeof(b) / sizeof(b[0]);

    for(int i = 0; i < len; i++) {
        cout << b[i] << " ";
    }

    return 0;
}