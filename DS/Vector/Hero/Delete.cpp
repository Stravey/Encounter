//
// Created by strive on 2025/12/31.
//
#include <iostream>
#include <vector>
using namespace std;

void remove1(vector<int>& v,int index) {
    v.erase(v.begin() + index);
}

void remove2(vector<int>& v,int index) {
    swap(v[index],v.back());
    v.pop_back();
}

void printVector(vector<int>& v) {
    for(int & it : v) {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    cout << "remove1 : " << endl;
    for(int i = 0;i < 200005;i++) {
        v.push_back(i);
    }
    for(int i = 0;i < 200000;i++) {
        remove1(v,4);
    }
    printVector(v);
    cout << "remove2 : " << endl;
    for(int i = 0;i < 200005;i++) {
        v.push_back(i);
    }
    for(int i = 0;i < 200000;i++) {
        remove2(v,4);
    }
    printVector(v);
    return 0;
}