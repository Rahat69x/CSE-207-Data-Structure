# CSE207 - Data Structures & Mini Project

**Course:** CSE207 - Data Structures  
**Institution:** East West University  
**Student Name:** Mahamudol Hasan Rahat  
**Student ID:** 2025-1-60-149  
**Section:** 03  
**Faculty:** Dr. Anup Kumar Paul, Associate Professor, Department of CSE  

---

## 📂 Repository Contents

This repository contains both the **Mini Project** and the official **Lab Assignments** for the CSE207 course:

```text
CSE-207-Data-Structure/
│
├── [MINI PROJECT] Student Record Management System (BST)
│   ├── Student.h & Student.cpp        # Student class (Encapsulation, Record Attributes)
│   ├── Node.h & Node.cpp              # BST Node class (Student Data + Left & Right Pointers)
│   ├── StudentBST.h & StudentBST.cpp  # BST Implementation (Insert, Search, Delete, Inorder)
│   ├── main.cpp                       # Interactive Console UI & Random Roll Generator
│   ├── test_student.cpp               # Student class unit test
│   ├── test_node.cpp                  # BST Node linking unit test
│   └── cover.pdf                      # Official Mini Project report cover
│
└── [LAB REPORTS] Lab Tasks & Assignments
    ├── Lab_Reports/01_Doubly_Linked_List/
    │   ├── Node.h
    │   ├── DLL.h
    │   └── main.cpp
    ├── Lab_Reports/02_Recursion/
    │   └── main.cpp                   # Factorial, Fibonacci, ReversePrint, Palindrome
    ├── Lab_Reports/03_Queue/
    │   ├── Queue.h
    │   └── main.cpp                   # Linear Queue implementation
    └── Lab_Reports/04_Circular_Queue/
        ├── Circular.h
        └── main.cpp                   # Circular Queue implementation
```

---

## 🌟 Mini Project: Student Record Management System using BST

### 📌 Project Overview
A complete **C++ Object-Oriented** Student Record Management System implemented using a pure **Binary Search Tree (BST)** as the primary data structure without external libraries or databases.

### 🔑 Features & BST Ordering
- **Key:** Student **Roll Number** (Unique).
- **BST Rules:**
  - Smaller roll numbers are placed in the **left subtree**.
  - Larger roll numbers are placed in the **right subtree**.
  - Duplicate roll numbers are rejected.
- **Operations:**
  - `Insert`: Inserts new student record with auto unique roll generation or custom input.
  - `Search`: Fast $O(\log n)$ retrieval by roll number.
  - `Delete`: Accurately handles Leaf Node, Single Child, and Two Children (Inorder Successor).
  - `Show All`: Uses **Inorder Traversal** (`Left -> Root -> Right`) to print records in ascending order of roll numbers.

### 🛠️ How to Compile and Run Mini Project
```bash
g++ -std=c++17 Student.cpp Node.cpp StudentBST.cpp main.cpp -o StudentRecordSystem.exe
./StudentRecordSystem.exe
```

---

## 🧪 How to Compile and Run Lab Tasks

### 1. Doubly Linked List
```bash
cd Lab_Reports/01_Doubly_Linked_List
g++ -std=c++17 main.cpp -o dll.exe
./dll.exe
```

### 2. Recursion
```bash
cd Lab_Reports/02_Recursion
g++ -std=c++17 main.cpp -o recursion.exe
./recursion.exe
```

### 3. Queue (Linear)
```bash
cd Lab_Reports/03_Queue
g++ -std=c++17 main.cpp -o queue.exe
./queue.exe
```

### 4. Circular Queue
```bash
cd Lab_Reports/04_Circular_Queue
g++ -std=c++17 main.cpp -o circular.exe
./circular.exe
```

---

## 📜 License
Developed for academic coursework at East West University.
