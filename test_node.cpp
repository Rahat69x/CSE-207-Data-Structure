#include <iostream>
#include "Node.h"

int main() {
    std::cout << "========================================\n";
    std::cout << "        STEP 2: Testing Node Class      \n";
    std::cout << "========================================\n\n";

    // ১. তিনটি Student অবজেক্ট তৈরি করি
    Student sRoot("Rahat", 100, "CSE207", 85.0, 3.80);
    Student sLeft("Afsana", 50, "CSE207", 90.0, 3.95);
    Student sRight("Tanvir", 150, "CSE207", 82.0, 3.70);

    // ২. BST-এর ৩টি নোড ডাইনামিকালি তৈরি করি (heap memory-তে)
    Node* rootNode = new Node(sRoot);
    Node* leftChild = new Node(sLeft);
    Node* rightChild = new Node(sRight);

    // ৩. পয়েন্টার দিয়ে ম্যানুয়ালি যুক্ত করি (BST লজিক: ছোট রোল বাঁয়ে, বড় রোল ডানে)
    rootNode->left = leftChild;   // Roll 50 < Roll 100 -> বাঁয়ে
    rootNode->right = rightChild; // Roll 150 > Roll 100 -> ডানে

    // ৪. ভেরিফিকেশন ও ডিসপ্লে
    std::cout << "[Root Node (Roll: " << rootNode->data.getRollNumber() << ")]:\n";
    rootNode->data.display();

    std::cout << "\n[Left Child (Roll: " << rootNode->left->data.getRollNumber() << " < Root)]:\n";
    rootNode->left->data.display();

    std::cout << "\n[Right Child (Roll: " << rootNode->right->data.getRollNumber() << " > Root)]:\n";
    rootNode->right->data.display();

    // ৫. মেমোরি ক্লিনআপ (free memory)
    delete rootNode->left;
    delete rootNode->right;
    delete rootNode;

    std::cout << "\n>>> Node Class and BST linking working successfully! <<<\n";
    return 0;
}
