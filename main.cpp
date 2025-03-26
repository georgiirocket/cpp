#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

    arr[0][2] = 5;

    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < len; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}