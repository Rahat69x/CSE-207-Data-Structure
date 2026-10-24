#include <iostream>
using namespace std;

class Stack {
private:
    int arr[10];
    int top;

public:
    Stack() {
        top = 0;
    }

    void push(int item) {
        if (top == 10) {
            cout << "Stack full!" << endl;
        } else {
            arr[top] = item;
            top++;
            cout << "Pushed: " << item << endl;
        }
    }

    void pop() {
        if (top == 0) {
            cout << "Stack empty!" << endl;
        } else {
            top--;
            cout << "Popped: " << arr[top] << endl;
        }
    }

    void peek() {
        if (top == 0) {
            cout << "Stack empty!" << endl;
        } else {
            cout << "Top element: " << arr[top - 1] << endl;
        }
    }

    void display() {
        if (top == 0) {
            cout << "Stack empty!" << endl;
        } else {
            cout << "Current Stack (Top to Bottom): ";
            for (int i = top - 1; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    cout << "--- STACK OPERATIONS ---\n";
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();

    s.peek();

    s.pop();
    s.display();

    return 0;
}
