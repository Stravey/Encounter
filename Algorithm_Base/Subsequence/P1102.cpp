//
// Created by strive on 2026/1/13.
//
#include <bits/stdc++.h>
const int N = 2e5 + 5;
int a[N];
using namespace std;
using ll = long long;
int main()
{
    int n,c;
    cin >> n >> c;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    sort(a + 1,a + n + 1);
    ll ans = 0;
    for(int i = 1,j = 1,k = 1;i <= n;i++) {
        while(j <= n && a[j] - a[i] < c) j++;
        while(k <= n && a[k] - a[i] <= c) k++;
        if(j <= n && a[j] - a[i] == c) {
            ans += (k - j);
        }
    }
    cout << ans << endl;
    return 0;
}