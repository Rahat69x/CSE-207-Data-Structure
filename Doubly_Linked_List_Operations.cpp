#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val = 0) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* start;

    DoublyLinkedList() {
        start = nullptr;
    }

    void printList() {
        Node* temp = start;
        if (temp == nullptr) {
            cout << "List is Empty" << endl;
            return;
        }
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) cout << " <-> ";
            temp = temp->next;
        }
        cout << endl;
    }

    int nodeCounter() {
        int count = 0;
        Node* temp = start;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void insertFirst(int val) {
        Node* newNode = new Node(val);
        if (start == nullptr) {
            start = newNode;
        } else {
            newNode->next = start;
            start->prev = newNode;
            start = newNode;
        }
    }

    void insertLast(int val) {
        Node* newNode = new Node(val);
        if (start == nullptr) {
            start = newNode;
        } else {
            Node* temp = start;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void insertMiddle(int val, int position) {
        if (start == nullptr || position <= 1) {
            insertFirst(val);
            return;
        }
        int total = nodeCounter();
        if (position > total) {
            insertLast(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = start;
        int ctr = 1;
        while (ctr < position - 1 && temp->next != nullptr) {
            temp = temp->next;
            ctr++;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }

    void deleteFirst() {
        if (start == nullptr) {
            cout << "List is Empty" << endl;
            return;
        }
        Node* toDelete = start;
        start = start->next;
        if (start != nullptr) {
            start->prev = nullptr;
        }
        delete toDelete;
    }

    void deleteLast() {
        if (start == nullptr) {
            cout << "List is Empty" << endl;
            return;
        }
        if (start->next == nullptr) {
            delete start;
            start = nullptr;
            return;
        }
        Node* temp = start;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->prev->next = nullptr;
        delete temp;
    }

    void deleteMiddle(int position) {
        if (start == nullptr) {
            cout << "List is Empty" << endl;
            return;
        }
        if (position == 1) {
            deleteFirst();
            return;
        }
        Node* temp = start;
        int ctr = 1;
        while (ctr < position && temp != nullptr) {
            temp = temp->next;
            ctr++;
        }
        if (temp == nullptr) {
            cout << "Invalid Position" << endl;
            return;
        }
        if (temp->prev != nullptr) {
            temp->prev->next = temp->next;
        }
        if (temp->next != nullptr) {
            temp->next->prev = temp->prev;
        }
        delete temp;
    }
};

int main() {
    DoublyLinkedList dList;

    cout << "--- INSERT FIRST (20, 30, 40) ---\n";
    dList.insertFirst(20);
    dList.insertFirst(30);
    dList.insertFirst(40);
    dList.printList();

    cout << "\n--- DELETE FIRST ---\n";
    dList.deleteFirst();
    dList.printList();

    cout << "\n--- INSERT LAST (50, 60) ---\n";
    dList.insertLast(50);
    dList.insertLast(60);
    dList.printList();

    cout << "\n--- DELETE LAST ---\n";
    dList.deleteLast();
    dList.printList();

    cout << "\n--- INSERT MIDDLE (40 at pos 2, 70 at pos 3) ---\n";
    dList.insertMiddle(40, 2);
    dList.insertMiddle(70, 3);
    dList.printList();

    cout << "\n--- DELETE MIDDLE (pos 3) ---\n";
    dList.deleteMiddle(3);
    dList.printList();

    cout << "\nFinal List: ";
    dList.printList();

    return 0;
}
