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
    vector<int> v1 = {9,8,7,6};
    printVector(v1);
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;
    // 扩容机制为2倍
    v1.push_back(5);
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;

    v1.resize(10);
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;
    printVector(v1);

    v1.resize(2);
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;
    printVector(v1);
    return 0;
}
