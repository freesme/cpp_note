#include <iostream>
#include "func_example/Func.h"

using namespace std;

/**
* function
*/

int main() {
    int a = 10;
    int b = 20;

    cout << "Hello, World!" << endl;
    cout << Func::max(a, b) << endl;
    Func::foo("comp", a, b);

    swap(a, b);
    Func::foo("swap out: ", a, b);
    Func::swap(&a, &b);
    Func::foo("swap: ", a, b);

    Func::swaps(a, b);
    Func::foo("swaps: ", a, b);

    return 0;
}
