#include <iostream>
#include "DLL.h"

using namespace std;

int main() {
    DLL* dList = new DLL();

    cout << " INSERT FIRST \n";
    dList->insertFirst();
    cout << "After inserting first node:\n";
    dList->printList();

    dList->insertFirst();
    cout << "\nAfter inserting another at first:\n";
    dList->printList();

    dList->insertFirst();
    cout << "\nAfter inserting another at first:\n";
    dList->printList();

    cout << "\n\n DELETE FIRST \n";
    cout << "Before delete:\n";
    dList->printList();

    dList->deleteFirst();
    cout << "\nAfter delete first:\n";
    dList->printList();

    cout << "\n\n INSERT LAST \n";
    dList->insertLast();
    cout << "After inserting at last:\n";
    dList->printList();

    dList->insertLast();
    cout << "\nAfter inserting another at last:\n";
    dList->printList();

    cout << "\n\n DELETE LAST \n";
    cout << "Before delete last:\n";
    dList->printList();

    dList->deleteLast();
    cout << "\nAfter delete last:\n";
    dList->printList();

    cout << "\n\n INSERT MIDDLE \n";
    dList->insertMiddle();
    cout << "After inserting in middle:\n";
    dList->printList();

    dList->insertMiddle();
    cout << "\nAfter inserting another in middle:\n";
    dList->printList();

    cout << "\n\n DELETE MIDDLE \n";
    cout << "Before delete middle:\n";
    dList->printList();

    dList->deleteMiddle();
    cout << "\nAfter delete middle:\n";
    dList->printList();

    cout << "\n\n FINAL LIST \n";
    dList->printList();

    delete dList;
    return 0;
}
