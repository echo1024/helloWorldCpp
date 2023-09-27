//
// Created by 327620669_25515 on 2023/9/27.
//
#include "swap.h"
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}