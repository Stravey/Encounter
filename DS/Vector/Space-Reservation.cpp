//
// Created by strive on 2025/12/31.
//
#include <iostream>
#include <vector>
using namespace std;

// reserve 修改的是 capacity
// resize 修改的是 size
int main()
{
    vector<int> v;
    v.reserve(100); // 预留空间
    for(int i = 0;i < 100;i++) {
        cout << "size = " << v.size() << ", " << "capacity = " << v.capacity() << endl;
        v.push_back(i);
    }
}