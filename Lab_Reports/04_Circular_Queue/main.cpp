#include <iostream>
#include <queue>
#include "Circular.h"

using namespace std;

int main() {
    Circular *q = new Circular;

    q->enqueue(10);
    q->enqueue(20);
    q->enqueue(30);

    cout << "After enqueing ";
    q->display();

    q->dequeue();
    cout << "After dequeuing ";
    q->display();

    cout << "After dequeuing ";
    q->dequeue();
    q->display();

    delete q;
    return 0;
}
