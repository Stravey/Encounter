//
// Created by strive on 2026/1/1.
//
#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node * next;
};
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    // 建立动态链表
    node * head,* p,* now,* prev;
    head = new node;
    head -> data = 1;
    head -> next = nullptr;
    now = head;
    for(int i = 2;i <= n;i++) {
        p = new node;
        p -> data = i;
        p -> next = nullptr;
        now -> next = p;
        now = p;
    }
    now -> next = head;
    // 该题的具体过程
    now = head,prev = head;
    while((n--) > 1) {
        for(int i = 1;i < m;i++) {
            prev = now;
            now = now -> next;
        }
        printf("%d ",now -> data);
        prev -> next = now -> next;
        delete now;
        now = prev -> next;
    }
    printf("%d\n",now -> data);
    delete now;
    return 0;
}