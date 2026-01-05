//
// Created by strive on 2026/1/5.
//
#include <bits/stdc++.h>
using namespace std;
int h[100005],ans[100005];
int main()
{
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> h[i];
    }
    stack<int> s;
    for(int i = n;i >= 1;i--) {
        while(!s.empty() && h[s.top()] <= h[i]) {
            s.pop();
        }
        if(s.empty()) ans[i] = 0;
        else ans[i] = s.top();
        s.push(i);
    }
    for(int i = 1;i <= n;i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
