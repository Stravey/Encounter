//
// Created by strive on 2026/1/4.
//
#include <bits/stdc++.h>
using namespace std;
const int INF = 0X7FFFFFFF;
// 逐个扫描序列中的元素并累加 加一个正数 子序列就会增加 加一个负数 子序列就会减小
// 如果当前得到的子序列和为负数 这个负数在接下来的累加中就会被抛弃 从下一位开始累加
int main()
{
    int t;
    cin >> t;
    for(int i = 1;i <= t;i++) {
        int n;
        cin >> n;
        int max_sum = -INF;
        int start = 1,end = 1,pos = 1;
        int sum = 0;
        for(int j = 1;j <= n;j++) {
            int a;
            cin >> a;
            sum += a;
            if(sum > max_sum) {
                max_sum = sum;
                start = pos;
                end = j;
            }
            if(sum < 0) {
                sum = 0;
                pos = j + 1;
            }
        }
        printf("Case %d:\n",i);
        printf("%d %d %d\n",max_sum,start,end);
        if(i != t) {
            cout << endl;
        }
    }
    return 0;
}
