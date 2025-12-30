//
// Created by strive on 2025/7/14.
//
#include "iostream"

using namespace std;

void f(int x) {
    if(x <= 0) return;
    f(x - 1);
    f(x - 2);
    cout << x << " ";
}

int main()
{
    f(4);
    return 0;
}