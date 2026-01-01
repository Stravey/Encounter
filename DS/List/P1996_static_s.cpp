//
// Created by strive on 2026/1/1.
//
// 结构体数组实现单向静态链表
#include <bits/stdc++.h>
using namespace std;
const int N = 105;
struct node {
    int id; // 单项指针
    int nextid;
    // int data; // 节点值 若有必要
}nodes[N];
int main()
{
    int n,m;
    cin >> n >> m;
    nodes[0].nextid = 1;
    for(int i = 1;i <= n;i++) {
        nodes[i].id = i;
        nodes[i].nextid = i + 1;
    }
    nodes[n].nextid = 1; // 循环链表:尾指向头
    int now = 1,prev = 1; // 从第一个结点开始
    while((n--) > 1) {
        for(int i = 1;i < m;i++) {
            prev = now;
            now = nodes[now].nextid;
        }
        cout << nodes[now].id << " ";
        nodes[prev].nextid = nodes[now].nextid;
        now = nodes[prev].nextid;
    }
    cout << nodes[now].nextid << " " << endl;
    return 0;
}