//
// Created by strive on 2026/1/2.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int Hash[N] = {0};
// 手动实现队列
struct myqueue {
    int data[N];
    // 队头 队尾指针
    int head,rear;
    // 初始化队列
    bool init() {
        head = rear = 0;
        return true;
    }
    // 求队列长度
    int size() {
        return (rear - head + N) % N;
    }
    // 队列判空
    bool empty() {
        if(size() == 0) {
            return true;
        }
        return false;
    }
    // 入队
    bool push(int e) {
        if((rear + 1) % N == head) {
            return false;
        }
        data[rear] = e;
        rear = (rear + 1) % N;
        return true;
    }
    // 出队
    bool pop(int &e) {
        if(head == rear) {
            return false;
        }
        e = data[head];
        head = (head + 1) % N;
        return true;
    }
    // 获取队首元素 不删除
    int front() {
        if(empty()) {
            return -1;
        }
        return data[head];
    }
}Q;
int main()
{
    Q.init();
    int m,n;
    cin >> m >> n;
    int cnt = 0;
    while(n--) {
        int e;
        cin >> e;
        if(!Hash[e]) {
            cnt++;
            Q.push(e);
            Hash[e] = 1;
            while(Q.size() > m) {
                int tmp;
                Q.pop(tmp);
                Hash[tmp] = 0;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}