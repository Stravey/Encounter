//
// Created by strive on 2026/1/1.
//
#include <iostream>
#include <stack>
int main()
{
    int n;
    std::cin >> n;
    getchar();
    while(n--) {
        std::stack<char> s;
        while(true) {
            char ch = getchar();
            if(ch == ' ' || ch == '\n' || ch == EOF) {
                while(!s.empty()) {
                    std::cout << s.top();
                    s.pop();
                }
                if(ch == '\n' || ch == EOF) {
                    break;
                }
                std::cout << " ";
            } else {
                s.push(ch);
            }
            std::cout << std::endl;
        }
    }
    return 0;
}
