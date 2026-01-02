//
// Created by strive on 2026/1/2.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int a[N];
deque<int> q;
// 单调队列实现滑动窗口
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    // 最小值
    for(int i = 1;i <= n;i++) {
        while(!q.empty() && a[q.back()] > a[i]) {
            q.pop_back();
        }
        q.push_back(i);
        if(i >= m) {
            while(!q.empty() && q.front() <= i - m) {
                q.pop_front();
            }
            cout << a[q.front()] << " ";
        }
    }
    cout << endl;
    // 清空 再用一次
    while(!q.empty()) {
        q.pop_front();
    }

    // 最大值
    for(int i = 1;i <= n;i++) {
        while(!q.empty() && a[q.back()] < a[i]) {
            q.pop_back();
        }
        q.push_back(i);
        if(i >= m) {
            while(!q.empty() && q.front() <= i - m) {
                q.pop_front();
            }
            cout << a[q.front()] << " ";
        }
    }
    cout << endl;

    return 0;
}