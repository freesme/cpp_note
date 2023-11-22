#include "Func.h"
#include <iostream>

int Func::max(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

void Func::swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void Func::swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    foo("swap inner: ", a, b);
}


void Func::swaps(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Func::foo(const string &str, int a, int b) {
    cout << str;
    cout << "a: ";
    cout << a;
    cout << " b: ";
    cout << b << endl;
}
