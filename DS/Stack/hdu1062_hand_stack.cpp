//
// Created by strive on 2026/1/5.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 100100;
// 手写栈
struct myStack {
    char a[N]{};
    int t = 0;
    void push(char x) {
        a[++t] = x;
    }
    char top() {
        return a[t];
    }
    void pop() {
        t--;
    }
    int empty() {
        return t == 0 ? 1 : 0;
    }
}st;

int main()
{
    int n;
    cin >> n;
    getchar();
    while(n--) {
        while(true) {
            char ch = getchar();
            if(ch == ' ' || ch == '\n' || ch == EOF) {
                while(!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
                if(ch == '\n' || ch == EOF) {
                    break;
                }
                cout << " ";
            } else {
                st.push(ch);
            }
        }
        cout << endl;
    }
    return 0;
}