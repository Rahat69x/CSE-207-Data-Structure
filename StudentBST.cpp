#include "StudentBST.h"
#include <iostream>

// Constructor: রুট নোড শুরুতে nullptr থাকে
StudentBST::StudentBST() {
    root = nullptr;
}

// Destructor: সম্পূর্ণ ট্রি ডিলিট করে মেমোরি ফ্রী করে
StudentBST::~StudentBST() {
    destroyTree(root);
}

void StudentBST::destroyTree(Node* current) {
    if (current != nullptr) {
        destroyTree(current->left);
        destroyTree(current->right);
        delete current;
    }
}

// -------------------------------------------------------------------------
// ১. INSERT OPERATION (BST ইনসার্ট অ্যালগরিদম)
// ছোট রোল বাঁয়ে, বড় রোল ডানে, ডুপ্লিকেট রোল রিজেক্ট করা হবে
// -------------------------------------------------------------------------
Node* StudentBST::insertHelper(Node* current, const Student& student, bool& isInserted) {
    // বেস কেস: খালি জায়গায় নতুন নোড তৈরি হবে
    if (current == nullptr) {
        isInserted = true;
        return new Node(student);
    }

    int newRoll = student.getRollNumber();
    int currentRoll = current->data.getRollNumber();

    if (newRoll < currentRoll) {
        // নতুন রোল ছোট হলে বাম সাব-ট্রিতে যাবে
        current->left = insertHelper(current->left, student, isInserted);
    } 
    else if (newRoll > currentRoll) {
        // নতুন রোল বড় হলে ডান সাব-ট্রিতে যাবে
        current->right = insertHelper(current->right, student, isInserted);
    } 
    else {
        // ডুপ্লিকেট রোল পাওয়া গেছে: ইনসার্ট বাতিল
        isInserted = false;
        std::cout << "\n[Error] Duplicate Roll Number: " << newRoll << " already exists in the system!\n";
    }

    return current;
}

bool StudentBST::insert(const Student& student) {
    bool isInserted = false;
    root = insertHelper(root, student, isInserted);
    return isInserted;
}

// -------------------------------------------------------------------------
// ২. SEARCH OPERATION (BST সার্চ অ্যালগরিদম - O(log N))
// -------------------------------------------------------------------------
Node* StudentBST::searchHelper(Node* current, int rollNumber) const {
    // নোড না পাওয়া গেলে অথবা রোল ম্যাচ করলে রিটার্ন করবে
    if (current == nullptr || current->data.getRollNumber() == rollNumber) {
        return current;
    }

    // কাঙ্ক্ষিত রোল ছোট হলে বাঁয়ে সার্চ করবে
    if (rollNumber < current->data.getRollNumber()) {
        return searchHelper(current->left, rollNumber);
    }

    // কাঙ্ক্ষিত রোল বড় হলে ডানে সার্চ করবে
    return searchHelper(current->right, rollNumber);
}

Student* StudentBST::search(int rollNumber) const {
    Node* result = searchHelper(root, rollNumber);
    if (result != nullptr) {
        return &(result->data);
    }
    return nullptr;
}

bool StudentBST::exists(int rollNumber) const {
    return searchHelper(root, rollNumber) != nullptr;
}

// -------------------------------------------------------------------------
// ৩. DELETE OPERATION (BST ডিলিশনের ৩টি কেস হ্যান্ডেলিং)
// -------------------------------------------------------------------------
Node* StudentBST::findMinNode(Node* current) const {
    // ডান সাব-ট্রির সবচেয়ে ছোট মান (Inorder Successor) খোঁজা
    while (current && current->left != nullptr) {
        current = current->left;
    }
    return current;
}

Node* StudentBST::deleteHelper(Node* current, int rollNumber, bool& isDeleted) {
    if (current == nullptr) {
        isDeleted = false;
        return nullptr;
    }

    int currentRoll = current->data.getRollNumber();

    if (rollNumber < currentRoll) {
        current->left = deleteHelper(current->left, rollNumber, isDeleted);
    } 
    else if (rollNumber > currentRoll) {
        current->right = deleteHelper(current->right, rollNumber, isDeleted);
    } 
    else {
        // নোডটি পাওয়া গেছে! ডিলিট করা হচ্ছে:
        isDeleted = true;

        // Case 1: Leaf Node (কোনো সন্তান নেই)
        if (current->left == nullptr && current->right == nullptr) {
            delete current;
            return nullptr;
        }
        // Case 2: একটি সন্তান আছে (শুধু ডান সন্তান)
        else if (current->left == nullptr) {
            Node* temp = current->right;
            delete current;
            return temp;
        }
        // Case 2: একটি সন্তান আছে (শুধু বাম সন্তান)
        else if (current->right == nullptr) {
            Node* temp = current->left;
            delete current;
            return temp;
        }
        // Case 3: দুটি সন্তানই আছে (Node with two children)
        else {
            // ডান সাব-ট্রির সর্বনিম্ন নোড (Inorder Successor) বের করা
            Node* temp = findMinNode(current->right);

            // কারেন্ট নোডের ডেটা Inorder Successor-এর ডেটা দিয়ে প্রতিস্থাপন করা
            current->data = temp->data;

            // Inorder Successor নোডটিকে ডান সাব-ট্রি থেকে ডিলিট করা
            bool subDeleted = false;
            current->right = deleteHelper(current->right, temp->data.getRollNumber(), subDeleted);
        }
    }
    return current;
}

bool StudentBST::deleteStudent(int rollNumber) {
    bool isDeleted = false;
    root = deleteHelper(root, rollNumber, isDeleted);
    return isDeleted;
}

// -------------------------------------------------------------------------
// ৪. SHOW / INORDER TRAVERSAL (Left -> Root -> Right)
// এই ট্রাভার্সাল ব্যবহারে রোল নম্বর অনুযায়ী ছোট থেকে বড় সাজানো দেখায়
// -------------------------------------------------------------------------
void StudentBST::inorderHelper(Node* current) const {
    if (current == nullptr) {
        return;
    }
    // ১. বাম সাব-ট্রি ভিজিট (ছোট রোলসমূহ)
    inorderHelper(current->left);

    // ২. বর্তমান নোডের রেকর্ড ডিসপ্লে
    current->data.display();

    // ৩. ডান সাব-ট্রি ভিজিট (বড় রোলসমূহ)
    inorderHelper(current->right);
}

void StudentBST::showAll() const {
    if (root == nullptr) {
        std::cout << "\n[Notice] No student records found. The tree is empty!\n";
        return;
    }
    std::cout << "\n========== ALL STUDENT RECORDS (Sorted by Roll via BST Inorder) ==========\n";
    inorderHelper(root);
    std::cout << "==========================================================================\n";
}

bool StudentBST::isEmpty() const {
    return root == nullptr;
}
