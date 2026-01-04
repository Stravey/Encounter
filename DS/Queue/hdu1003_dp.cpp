//
// Created by strive on 2026/1/4.
//
#include <bits/stdc++.h>
using namespace std;
int dp[100005];
// 定义状态dp[i] 表示以a[i]为结尾的最大子序和
// dp[i]只包含一个元素a[i]
// dp[i]包含多个元素 取最大  dp[i] = max(dp[i - 1] + a[i],a[i])
int main()
{
    int t;
    cin >> t;
    for(int k = 1;k <= t;k++) {
        int n;
        cin >> n;
        for(int i = 1;i <= n;i++) {
            cin >> dp[i];
        }
        int start = 1,end = 1,pos = 1;
        int max_sum = dp[1];
        for(int i = 2;i <= n;i++) {
            if(dp[i - 1] + dp[i] >= dp[i]) {
                dp[i] = dp[i - 1] + dp[i];
            } else {
                pos = i;
            }
            if(dp[i] > max_sum) {
                max_sum = dp[i];
                start = pos;
                end = i;
            }
        }
        printf("Case %d:\n",k);
        printf("%d %d %d\n",max_sum,start,end);
        if(k != t) {
            cout << endl;
        }
    }
    return 0;
}