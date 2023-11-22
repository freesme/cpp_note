//
// Created by K K on 2023/11/22.
//

#ifndef CPP_NOTE_FUNC_H
#define CPP_NOTE_FUNC_H

#include <iostream>

using namespace std;


class Func {

public:
    static int max(int num1, int num2);

    static void swap(int *a, int *b);

    static void swap(int a, int b);

    static void swaps(int &a, int &b);

    static void foo(const string &str, int a, int b);
};

#endif //CPP_NOTE_FUNC_H
