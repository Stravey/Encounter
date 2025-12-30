//
// Created by strive on 2025/12/30.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void test_01() {
    // 初始化a数组
    vector<int> a;
    // 用a数组定义b
    vector<int> b(a);
    // 定义一个大小为100的数组
    vector<int> c(100);
    // 定义一个100个元素5的数组
    vector<int> d(100,5);
    for(int i = 0;i < 100;i++) {
        cout << d[i] << endl;
    }
}
void test_02() {
    // 定义10个值为null元素的string类型数组
    vector<string> a(10,"null");
    for(int i = 0;i < 10;i++) {
        cout << a[i] << endl;
    }
    // 定义10个值为hello元素的string类型数组
    vector<string> b(10,"hello");
    for(string s : b) {
        cout << s << endl;
    }
}
signed main()
{
    // test_01();
    test_02();
}