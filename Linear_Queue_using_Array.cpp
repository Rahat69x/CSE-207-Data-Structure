#include <iostream>
using namespace std;

class Queue {
private:
    int f, r;
    int data[10];

public:
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
            cout << "Enqueued: " << x << endl;
        }
    }

    void dequeue() {
        if (f == r) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Dequeued: " << data[f] << endl;
            f++;
        }
    }

    void display() {
        if (f == r) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = f; i < r; i++) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    cout << "--- LINEAR QUEUE OPERATIONS ---\n";
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    q.dequeue();
    q.display();

    return 0;
}
