//
// Created by strive on 2026/1/2.
//
#include <bits/stdc++.h>
using namespace std;
int q[1005] = {0}; // 计数器
queue<int> memory; // 队列模拟内存
int main()
{
    int m,n;
    cin >> m >> n;
    int cnt = 0;
    while(n--) {
        int x;
        cin >> x;
        if(!q[x]) {
            ++cnt;
            memory.push(x);
            q[x] = 1;
            while(memory.size() > m) {
                q[memory.front()] = 0;
                memory.pop();
            }
        }
    }
    cout << cnt << endl;
    return 0;
}