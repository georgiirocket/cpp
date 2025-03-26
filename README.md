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