#include <iostream>
#include "BSToperation.h"
using namespace std;

int main() {
    BSToperation* op = new BSToperation();

    op->insertHelper(50);
    op->insertHelper(25);
    op->insertHelper(36);
    op->insertHelper(33);
    op->insertHelper(49);
    op->insertHelper(60);
    op->insertHelper(72);

    cout << "Preorder: ";
    op->preOrder(op->root);
    cout << endl;

    cout << "Inorder: ";
    op->inOrder(op->root);
    cout << endl;

    cout << "Postorder: ";
    op->postOrder(op->root);
    cout << endl;

    if (op->searchHelper()) {
        cout << "Item found." << endl;
    } else {
        cout << "Item not found." << endl;
    }

    op->deleteHelper();
    cout << "After deleting item:" << endl;

    cout << "Inorder: ";
    op->inOrder(op->root);
    cout << endl;

    cout << "Preorder: ";
    op->preOrder(op->root);
    cout << endl;

    cout << "Postorder: ";
    op->postOrder(op->root);
    cout << endl;

    delete op;
    return 0;
}
