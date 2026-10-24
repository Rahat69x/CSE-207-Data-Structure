#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    Stack* stack = new Stack();
    int item, x;

    cout << "Enter a number: ";
    cin >> item;

    for (int i = 0; i < item; i++) {
        cout << "please enter data ";
        cin >> x;
        stack->push(x);
    }

    cout << endl;
    cout << "after pushing the number " << endl;
    stack->display();

    stack->pop();
    cout << "after pop" << endl;
    stack->display();

    cout << "peek" << endl;
    stack->peek();

    delete stack;
    return 0;
}
