#ifndef QUEUE__QUEUE_H
#define QUEUE__QUEUE_H

#include <iostream>
using namespace std;

class Queue {
public:
    int f, r;
    int data[10];

    Queue() {
        f = 0;
        r = 0;
    }

    void enqueue(int x) {
        if (r == 10) {
            cout << "Queue is full" << endl;
        } else {
            data[r] = x;
            r++;
        }
    }

    void dequeue() {
        if (f == r) {
            cout << "Queue is empty" << endl;
        } else {
            f++;
        }
    }

    void display() {
        if (f == r) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue is " << endl;
            for (int i = f; i < r; i++) {
                cout << data[i] << endl;
            }
            cout << endl;
        }
    }
};

#endif // QUEUE__QUEUE_H
