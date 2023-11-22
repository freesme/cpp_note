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


    int var1;
    char var2[10];

    cout << "var1 变量的地址： ";
    cout << &var1 << endl;

    cout << "var2 变量的地址： ";
    cout << &var2 << endl;


    int var = 20;   // 实际变量的声明
    int *ip;        // 指针变量的声明

    ip = &var;       // 在指针变量中存储 var 的地址

    cout << "Value of var variable: ";
    cout << var << endl;

    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: " << endl;
    cout << ip << endl;
    cout << &var << endl;
    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;
    cout << &ip << endl;

    return 0;
}
