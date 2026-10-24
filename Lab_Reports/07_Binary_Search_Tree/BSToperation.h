#ifndef BST_OPERATION_H
#define BST_OPERATION_H

#include <iostream>
#include "Node.h"
using namespace std;

class BSToperation {
public:
    Node* root;

    BSToperation() {
        root = nullptr;
    }

    Node* getNode(int item) {
        Node* newNode = new Node();
        newNode->data = item;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }

    void insertHelper(int item) {
        root = insertRecursive(root, item);
    }

    Node* insertRecursive(Node* temp, int item) {
        if (temp == nullptr) {
            temp = getNode(item);
            return temp;
        } else if (item < temp->data) {
            temp->left = insertRecursive(temp->left, item);
        } else if (item > temp->data) {
            temp->right = insertRecursive(temp->right, item);
        }
        return temp;
    }

    void deleteHelper() {
        int item;
        cout << "Enter item to be deleted: ";
        cin >> item;
        if (searchRecursive(root, item)) {
            root = deleteRecursive(root, item);
            cout << item << " is deleted." << endl;
        } else {
            cout << item << " is not found." << endl;
        }
    }

    Node* deleteRecursive(Node* temp, int item) {
        if (temp == nullptr) {
            return nullptr;
        }
        if (item < temp->data) {
            temp->left = deleteRecursive(temp->left, item);
        } else if (item > temp->data) {
            temp->right = deleteRecursive(temp->right, item);
        } else {
            if (temp->left == nullptr && temp->right == nullptr) {
                delete temp;
                return nullptr;
            }
            if (temp->left == nullptr) {
                Node* child = temp->right;
                delete temp;
                return child;
            } else if (temp->right == nullptr) {
                Node* child = temp->left;
                delete temp;
                return child;
            }
            int minValue = minimumValue(temp->right);
            temp->data = minValue;
            temp->right = deleteRecursive(temp->right, minValue);
        }
        return temp;
    }

    int minimumValue(Node* temp) {
        int minValue = temp->data;
        while (temp->left != nullptr) {
            temp = temp->left;
            minValue = temp->data;
        }
        return minValue;
    }

    bool searchHelper() {
        int item;
        cout << "Enter item to be searched: ";
        cin >> item;
        return searchRecursive(root, item);
    }

    bool searchRecursive(Node* temp, int item) {
        if (temp == nullptr) {
            return false;
        } else if (item < temp->data) {
            return searchRecursive(temp->left, item);
        } else if (item > temp->data) {
            return searchRecursive(temp->right, item);
        } else {
            return true;
        }
    }

    void preOrder(Node* temp) {
        if (temp != nullptr) {
            cout << temp->data << " ";
            preOrder(temp->left);
            preOrder(temp->right);
        }
    }

    void inOrder(Node* temp) {
        if (temp != nullptr) {
            inOrder(temp->left);
            cout << temp->data << " ";
            inOrder(temp->right);
        }
    }

    void postOrder(Node* temp) {
        if (temp != nullptr) {
            postOrder(temp->left);
            postOrder(temp->right);
            cout << temp->data << " ";
        }
    }
};

#endif // BST_OPERATION_H
