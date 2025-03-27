## Cin

```c++
#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "What is your name?" << endl;
    cin >> name;
    
    cout << "My name is: " << name << endl;
    return 0;
}
```

## Sum, Difference ...

```c++
#include <iostream>
using namespace std;

int main() {
    int num1 = 10, num2 = 5;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;

    cout << sum << " " << difference << " " << product << " " << quotient << endl;
    return 0;
}
```

## Inc, Decr

```c++
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
```

```c++
#include <iostream>
using namespace std;

int main() {
    int num1 = 10, num2 = 5;

    num1++;//10
    num2--;//5

    --num1;//10
    ++num2;//5

    cout << num1 << " " << num2 << endl;


    return 0;
}
```

## Sqrt

```c++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 20;

    cout << sqrt(a) << endl;
    return 0;
}
```

## Pow

```c++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 20;

    cout << pow(a, 2) << endl;
    return 0;
}
```

## ABS

```c++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = -20;

    cout << abs(a) << endl;
    return 0;
}
```

## Operators

```c++
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
```

## If, Switch

```c++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1 = 10;

    if (num1 > 5) {
       cout << "Number is bigger than 5" << endl;
    } else {
       cout << "Number is less than 5 or equal" << endl;
    }

    
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
```

## For, While, Do

```c++
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
```

## Break, Continue

```c++
#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 10; i++) {
        if(i == 5) {
            break;
        }

        if(i % 2 == 0) {
            continue;
        }

        cout << i << " " ;
    }
    
    return 0;
}
```

## Array

```c++
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
```

## Two-dimensional array

```c++
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
```

## Function

```c++
#include <iostream>
using namespace std;

int myFunc() {
    return 5;
}

int main() {
    int value = myFunc();

    cout << value << endl;

    return 0;
}
```

## Function params

```c++
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
```

## Recursion

```c++
#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {
    int value = factorial(5);

    cout << value << endl;

    return 0;
}
```