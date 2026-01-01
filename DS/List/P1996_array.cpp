//
// Created by strive on 2026/1/1.
//
#include <bits/stdc++.h>
using namespace std;
int nodes[150];
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= n - 1;i++) {
        nodes[i] = i + 1;
    }
    nodes[n] = 1;
    int now = 1,prev = 1;
    while((n--) > 1) {
        for(int i = 1;i < n;i++) {
            prev = now;
            now = nodes[now];
        }
        cout << now << " ";
        nodes[prev] = nodes[now];
        now = nodes[prev];
    }
    cout << now << " ";
    return 0;
}