//
// Created by strive on 2025/12/31.
//
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v) {
    for(int & it : v) {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v = {9,8,7,6,5};
    cout << v[2] << endl;
    cout << v.at(2) << endl;
    //cout << v[7] << endl; // 产生未定义行为
    //cout << v.at(7) << endl; //产生异常

    cout << "front: " << v.front() << endl;
    cout << "back: " << v.back() << endl;
    return 0;
}
