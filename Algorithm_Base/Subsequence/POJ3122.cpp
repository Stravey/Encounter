//
// Created by strive on 2026/1/17.
//
#include <iostream>
#include <cmath>
using namespace std;
double PI = acos(-1.0);
double area[10010];
int n,m;
bool check(double mid) {
    int sum = 0;
    for(int i = 0;i < n;i++) {
        sum += (int)(area[i] / mid);
    }
    if(sum >= m) {
        return true;
    } else {
        return false;
    }
}
int main()
{
    int T;
    cin >> T;
    while(T--) {
        cin >> n >> m;
        // 还有主人自己
        m += 1;
        double maxx = 0;
        // 找最大的蛋糕
        for(int i = 0;i < n;i++) {
            int r;
            cin >> r;
            area[i] = PI * r * r;
            if(maxx < area[i]) {
                maxx = area[i];
            }
        }
        double left = 0,right = maxx;
        for(int i = 0;i < 100;i++) {
            double mid = left + (right - left) / 2;
            if(check(mid)) {
                left = mid;
            } else {
                right = mid;
            }
        }
        printf("%.4f\n",left);
    }
    return 0;
}