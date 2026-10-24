#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <iostream>
using namespace std;

class Stack {
public:
    int arr[10];
    int top;

    Stack() {
        top = 0;
    }

    void push(int item) {
        if (top == 10) {
            cout << "Stack full" << endl;
        } else {
            arr[top] = item;
            top++;
        }
    }

    void pop() {
        if (top == 0) {
            cout << "Stack empty" << endl;
        } else {
            top--;
        }
    }

    void peek() {
        if (top == 0) {
            cout << "Stack empty" << endl;
        } else {
            cout << arr[top - 1] << endl;
        }
    }

    void display() {
        if (top == 0) {
            cout << "Stack empty" << endl;
        } else {
            for (int i = top - 1; i >= 0; i--) {
                cout << arr[i] << endl;
            }
            cout << endl;
        }
    }
};

#endif // STACK_STACK_H
