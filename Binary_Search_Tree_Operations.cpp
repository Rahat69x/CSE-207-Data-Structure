#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
public:
    Node* root;

    BST() {
        root = nullptr;
    }

    Node* insert(Node* current, int val) {
        if (current == nullptr) return new Node(val);
        if (val < current->data) current->left = insert(current->left, val);
        else if (val > current->data) current->right = insert(current->right, val);
        return current;
    }

    void insert(int val) {
        root = insert(root, val);
    }

    bool search(Node* current, int val) {
        if (current == nullptr) return false;
        if (current->data == val) return true;
        if (val < current->data) return search(current->left, val);
        return search(current->right, val);
    }

    bool search(int val) {
        return search(root, val);
    }

    Node* findMin(Node* current) {
        while (current && current->left != nullptr) {
            current = current->left;
        }
        return current;
    }

    Node* remove(Node* current, int val) {
        if (current == nullptr) return nullptr;

        if (val < current->data) {
            current->left = remove(current->left, val);
        } else if (val > current->data) {
            current->right = remove(current->right, val);
        } else {
            // Case 1 & 2: 0 or 1 child
            if (current->left == nullptr) {
                Node* temp = current->right;
                delete current;
                return temp;
            } else if (current->right == nullptr) {
                Node* temp = current->left;
                delete current;
                return temp;
            }
            // Case 3: 2 children
            Node* temp = findMin(current->right);
            current->data = temp->data;
            current->right = remove(current->right, temp->data);
        }
        return current;
    }

    void remove(int val) {
        root = remove(root, val);
    }

    void inOrder(Node* current) {
        if (current == nullptr) return;
        inOrder(current->left);
        cout << current->data << " ";
        inOrder(current->right);
    }

    void preOrder(Node* current) {
        if (current == nullptr) return;
        cout << current->data << " ";
        preOrder(current->left);
        preOrder(current->right);
    }

    void postOrder(Node* current) {
        if (current == nullptr) return;
        postOrder(current->left);
        postOrder(current->right);
        cout << current->data << " ";
    }
};

int main() {
    BST tree;
    int items[] = {50, 25, 36, 33, 49, 60, 72};
    for (int x : items) tree.insert(x);

    cout << "Preorder:  "; tree.preOrder(tree.root); cout << endl;
    cout << "Inorder:   "; tree.inOrder(tree.root); cout << endl;
    cout << "Postorder: "; tree.postOrder(tree.root); cout << endl;

    cout << "\nSearch 25: " << (tree.search(25) ? "Found" : "Not Found") << endl;
    cout << "Search 99: " << (tree.search(99) ? "Found" : "Not Found") << endl;

    cout << "\nDeleting 36..." << endl;
    tree.remove(36);
    cout << "Inorder after deleting 36: "; tree.inOrder(tree.root); cout << endl;

    return 0;
}
