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
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    printVector(v);

    vector<int> v2 = {9,3,1,4,2};
    printVector(v2);

    vector<int> v3;
    v3.assign(v.begin(),v.end());
    printVector(v3);

    return 0;
}
