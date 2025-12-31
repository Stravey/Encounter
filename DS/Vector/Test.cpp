//
// Created by strive on 2025/12/30.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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
    // c是a的复制
    vector<string> c(a.begin(),a.end());
    for(int i = 0;i < 10;i++) {
        cout << c[i] << endl;
    }
}
void test_03() {
    // 定义一个空数组
    vector<int> a;
    // 尾部添加元素
    a.push_back(10);
    a.push_back(11);
    a.push_back(12);
    a.push_back(13);
    a.push_back(14);
    a.push_back(15);
    for(int i : a) {
        cout << i << " ";
    }
    cout << endl;
    cout << "-----------------------------" << endl;
    // 输出a的大小
    cout << a.size() << endl;
    cout << "-----------------------------" << endl;
    // 判断是否为空 0 - false  1 - true
    cout << a.empty() << endl;
    cout << "-----------------------------" << endl;
    // 打印第一个元素
    cout << a[0] << endl;
    cout << "-----------------------------" << endl;
    // 在第i个元素前插入k
    a.insert(a.begin() + 1,5);
    for(int x : a) {
        cout << x << " ";
    }
    cout << endl;
    cout << "-----------------------------" << endl;
    a.push_back(8);
    cout << "-----------------------------" << endl;
    // 尾部插入10个值为5的元素
    a.insert(a.end(),10,5);
    for(int x : a) {
        cout << x << " ";
    }
    cout << endl;
    cout << "-----------------------------" << endl;
    // 删除末尾元素
    a.pop_back();
    for(int x : a) {
        cout << x << " ";
    }
    cout << endl;
    cout << "-----------------------------" << endl;
    /*// 删除区间元素
    a.erase(a.begin() + 5,a.end() + 8);
    for(int x : a) {
        cout << x << " ";
    }
    cout << endl;
    cout << "-----------------------------" << endl;*/
    // 删除第3个元素
    a.erase(a.begin() + 2);
    for(int x : a) {
        cout << x << " ";
    }
    cout << endl;
    cout << "-----------------------------" << endl;
    // 数组大小变为30
    a.resize(30);
    cout << a.size() << endl;
    // 清空数组a
    a.clear();
    cout << a.empty() << endl;
};
void test_04() {
    vector<int> a(10);
    for(int i = 0;i < 10;i++) {
        a[i] = i + 1;
    }
    for(int x : a) {
        cout << x << " ";
    }
    cout << endl;
    cout << "----------------------------" << endl;
    // 翻转数组
    reverse(a.begin(),a.end());
    for(int x : a) {
        cout << x << " ";
    }
    cout << endl;
    cout << "----------------------------" << endl;
    // 排序数组
    vector<int> b = {1,2,5,10,3,6,8,4,9,7};
    for(int x : b) {
        cout << x << " ";
    }
    cout << endl;
    cout << "----------------------------" << endl;
    sort(a.begin(), a.end());
    for(int x : a) {
        cout << x << " ";
    }
    cout << endl;
    cout << "----------------------------" << endl;
}
signed main()
{
    // test_01();
    // test_02();
    // test_03();
    test_04();
}