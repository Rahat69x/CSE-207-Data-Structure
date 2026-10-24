#ifndef DOUBLE_LINKED_LIST_DLL_H
#define DOUBLE_LINKED_LIST_DLL_H

#include <iostream>
#include "Node.h"
using namespace std;

class DLL {
public:
    Node* start;

    DLL() {
        start = nullptr;
    }

    Node* getNode() {
        Node* newNode = new Node();
        cout << "\nEnter Data: ";
        cin >> newNode->data;
        newNode->next = nullptr;
        newNode->prev = nullptr;
        return newNode;
    }

    void printList() {
        Node* temp = start;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << " -> ";
            }
            temp = temp->next;
        }
        cout << endl;
    }

    int nodeCounter() {
        if (start == nullptr)
            return 0;
        int counter = 1;
        Node* temp = start;
        while (temp->next != nullptr) {
            counter++;
            temp = temp->next;
        }
        return counter;
    }

    void insertFirst() {
        Node* newNode = getNode();
        if (start == nullptr) {
            start = newNode;
        } else {
            newNode->next = start;
            start->prev = newNode;
            start = newNode;
        }
    }

    void insertMiddle() {
        Node* newNode = getNode();
        if (start == nullptr) {
            start = newNode;
        } else {
            cout << "Enter Position: ";
            int position;
            cin >> position;
            if (position > 1 && position <= nodeCounter()) {
                int ctr = 1;
                Node* temp = start;
                while (ctr < position - 1) {
                    temp = temp->next;
                    ctr++;
                }
                newNode->next = temp->next;
                newNode->prev = temp;
                temp->next = newNode;
            } else {
                cout << "Invalid Position" << endl;
            }
        }
    }

    void insertLast() {
        Node* newNode = getNode();
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

    void deleteFirst() {
        if (start == nullptr) {
            cout << "List is Empty" << endl;
        } else {
            start = start->next;
            if (start != nullptr) {
                start->prev = nullptr;
            }
        }
    }

    void deleteMiddle() {
        if (start == nullptr) {
            cout << "Empty List" << endl;
        } else {
            cout << "Enter Position you want to delete: ";
            int position;
            cin >> position;
            if (position > 1 && position <= nodeCounter()) {
                int ctr = 1;
                Node* temp = start;
                while (ctr < position - 1) {
                    temp = temp->next;
                    ctr++;
                }
                temp->next->next->prev = temp;
                temp->next = temp->next->next;
            }
        }
    }

    void deleteLast() {
        if (start == nullptr) {
            cout << "Empty List" << endl;
        } else {
            Node* temp = start;
            while (temp->next->next != nullptr) {
                temp = temp->next;
            }
            temp->next = nullptr;
        }
    }
};

#endif // DOUBLE_LINKED_LIST_DLL_H
