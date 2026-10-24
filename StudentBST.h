#ifndef STUDENT_BST_H
#define STUDENT_BST_H

#include "Node.h"

class StudentBST {
private:
    Node* root; // BST-এর মূল রুট পয়েন্টার

    // Private Helper Recursive Methods (BST-এর মূল অ্যালগরিদমসমূহ)
    Node* insertHelper(Node* current, const Student& student, bool& isInserted);
    Node* searchHelper(Node* current, int rollNumber) const;
    Node* deleteHelper(Node* current, int rollNumber, bool& isDeleted);
    void inorderHelper(Node* current) const;
    void destroyTree(Node* current);

    // ডিলিশনের সময় 2 children কেসে Inorder Successor বের করার হেল্পার
    Node* findMinNode(Node* current) const;

public:
    // Constructor
    StudentBST();

    // Destructor: সমস্ত মেমোরি রিলিজ করার জন্য
    ~StudentBST();

    // Public API Methods
    bool insert(const Student& student);
    Student* search(int rollNumber) const;
    bool deleteStudent(int rollNumber);
    void showAll() const;
    bool isEmpty() const;
    bool exists(int rollNumber) const;
};

#endif // STUDENT_BST_H
