//
// Created by strive on 2025/4/10.
//
/*#include<iostream>
using namespace std;

void bubbleSort(int a[],int l,int r){

}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    bubbleSort(a,1, 4);
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
long long n,m;
long long a[N];
long long ans = 0;

int main()
{
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 1;i < m;i++){
        ans += abs((a[i] * a[i]) - (a[i - 1] * a[i - 1]));
    }
    cout << ans;
    return 0;
}