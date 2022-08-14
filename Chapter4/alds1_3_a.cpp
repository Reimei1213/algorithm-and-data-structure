#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int top, S[1000];

void push(int x) {
    S[++top] = x;
}

int pop() {
    return S[top--];
}

int main() {
    int a, b;
    top = 0;
    char s[100];

    while(scanf("%s", s) != EOF) {

        if(s[0] == '+') {
            a = pop();
            b = pop();
            push(a+b);
        } else if (s[0] == '-') {
            b = pop();
            a = pop();
            push(a-b);
        } else if (s[0] == '*') {
            a = pop();
            b = pop();
            push(a*b);
        } else {
            push(atoi(s));
        }
    }

    cout << pop() << endl;
    
    return 0;
}