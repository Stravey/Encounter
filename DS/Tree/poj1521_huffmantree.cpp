//
// Created by strive on 2026/1/6.
//
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;
// 哈夫曼编码 优先队列（小值优先）
int main()
{
    // 实际上定义一个堆
    priority_queue<int,vector<int>,greater<int>> q;
    string s;
    while(getline(cin,s) && s != "END") {
        sort(s.begin(),s.end());
        int num = 1;
        for(int i = 1;i <= s.length();i++) {
            if(s[i] != s[i - 1]) {
                q.push(num);
                num = 1;
            } else {
                num++;
            }
        }
        int ans = 0;
        if(q.size() == 1) {
            ans = s.length();
        }
        // 挑两个最小值出来
        while(q.size() > 1) {
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            q.push(a + b);
            ans += (a + b);
        }
        q.pop();
        cout << s.length() * 8 << " " << ans << " ";
        cout << fixed << setprecision(1) << (double)s.length() * 8 / (double)ans << endl;
    }
    return 0;
}
