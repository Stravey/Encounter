//
// Created by strive on 2025/4/15.
//
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v) {
    for(vector<int>::iterator it = v.begin();it != v.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    return 0;
}
