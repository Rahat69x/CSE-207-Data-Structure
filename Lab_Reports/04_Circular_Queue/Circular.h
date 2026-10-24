#ifndef CIRCULAR_CIRCULAR_H
#define CIRCULAR_CIRCULAR_H

#include <iostream>
using namespace std;

class Circular {
public:
    int data[10];
    int f, r;
    int count = 0;

    Circular() {
        f = 0;
        r = 0;
    }

    void enqueue(int x) {
        if (count == 10) {
            cout << "queue is full" << endl;
        } else {
            data[r] = x;
            r = (r + 1) % 10;
            count++;
        }
    }

    void dequeue() {
        if (count == 0) {
            cout << "queue is empty" << endl;
        } else {
            cout << "Delete element is " << data[f] << endl;
            f = (f + 1) % 10;
            count--;
        }
    }

    void display() {
        if (count == 0) {
            cout << "queue is empty" << endl;
        } else {
            cout << "queue is" << endl;
            for (int i = 0; i < count; i++) {
                cout << data[(f + i) % 10] << endl;
            }
            cout << endl;
        }
    }
};

#endif // CIRCULAR_CIRCULAR_H
