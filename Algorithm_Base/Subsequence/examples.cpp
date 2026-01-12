//
// Created by strive on 2026/1/12.
//
#include <bits/stdc++.h>
using namespace std;
// 例2.1 找指定和的整数对
void get_sum(int a[],int n,int m) {
    sort(a,a + n);
    int i = 0,j = n - 1;
    while(i < j) {
        int sum = a[i] + a[j];
        if(sum > m) j--;
        else if(sum < m) i++;
        else if(sum == m) {
            cout << a[i] << " " << a[j] << endl;
            return;
        }
    }
}
int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    get_sum(a,10,10);
    return 0;
}
