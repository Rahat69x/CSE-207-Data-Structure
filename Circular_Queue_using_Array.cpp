#include <iostream>
using namespace std;

class CircularQueue {
private:
    int data[10];
    int f, r;
    int count;

public:
    CircularQueue() {
        f = 0;
        r = 0;
        count = 0;
    }

    void enqueue(int x) {
        if (count == 10) {
            cout << "Queue is full!" << endl;
        } else {
            data[r] = x;
            r = (r + 1) % 10;
            count++;
            cout << "Enqueued: " << x << endl;
        }
    }

    void dequeue() {
        if (count == 0) {
            cout << "Queue is empty!" << endl;
        } else {
            cout << "Deleted element is: " << data[f] << endl;
            f = (f + 1) % 10;
            count--;
        }
    }

    void display() {
        if (count == 0) {
            cout << "Queue is empty!" << endl;
        } else {
            cout << "Circular Queue: ";
            for (int i = 0; i < count; i++) {
                cout << data[(f + i) % 10] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    CircularQueue q;
    cout << "--- CIRCULAR QUEUE OPERATIONS ---\n";
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
