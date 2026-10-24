# CSE207 - Data Structures (Lab Reports & Mini Project)

**Course:** CSE207 - Data Structures  
**Institution:** East West University  
**Student Name:** Mahamudol Hasan Rahat  
**Student ID:** 2025-1-60-149  
**Section:** 03  
**Faculty:** Dr. Anup Kumar Paul, Associate Professor, Department of CSE  

---

## 📂 Repository Contents

This repository contains all official **Lab Reports** and the **Mini Project** for the CSE207 course at East West University:

```text
CSE-207-Data-Structure/
│
├── [MINI PROJECT] Student Record Management System (BST)
│   ├── Student.h & Student.cpp              # Student class (Encapsulation, Record Attributes)
│   ├── Node.h & Node.cpp                    # BST Node class (Student Data + Left & Right Pointers)
│   ├── StudentBST.h & StudentBST.cpp        # BST Implementation (Insert, Search, Delete, Inorder)
│   ├── main.cpp                             # Interactive Console UI & Random Roll Generator
│   ├── test_student.cpp                     # Student class unit test
│   ├── test_node.cpp                        # BST Node linking unit test
│   └── cover.pdf                            # Official Mini Project report cover
│
└── [LAB REPORTS] Lab Tasks & Implementations
    ├── Lab_Reports/01_Doubly_Linked_List/
    │   ├── Node.h                           # DLL Node with prev & next pointers
    │   ├── DLL.h                            # Insert/Delete (First, Middle, Last), Count, Print
    │   └── main.cpp
    │
    ├── Lab_Reports/02_Recursion/
    │   └── main.cpp                         # Factorial, Fibonacci, ReversePrint, Palindrome
    │
    ├── Lab_Reports/03_Queue/
    │   ├── Queue.h                          # Linear Queue using Array (enqueue, dequeue, display)
    │   └── main.cpp
    │
    ├── Lab_Reports/04_Circular_Queue/
    │   ├── Circular.h                       # Circular Queue using Array & modulo arithmetic
    │   └── main.cpp
    │
    ├── Lab_Reports/05_Stack_Array/
    │   ├── Stack.h                          # Stack implementation using Array (push, pop, peek)
    │   └── main.cpp
    │
    ├── Lab_Reports/06_Infix_Postfix/
    │   ├── InfixConversion.h                # Infix to Postfix conversion using Stack
    │   ├── PostFixEvaluation.h              # Postfix expression evaluation using Stack
    │   └── main.cpp
    │
    ├── Lab_Reports/07_Binary_Search_Tree/
    │   ├── Node.h                           # BST Node definition
    │   ├── BSToperation.h                   # Integer BST (Insert, Search, Delete, Traversals)
    │   └── main.cpp
    │
    └── Lab_Reports/08_Graph_BFS_DFS/
        └── main.cpp                         # Graph Adjacency List, BFS (Queue) & DFS (Stack)
```

---

## 🌟 Mini Project: Student Record Management System (BST)

### 📌 Project Overview
A complete **C++ Object-Oriented** Student Record Management System implemented using an authentic **Binary Search Tree (BST)** as the primary data structure without external libraries or databases.

### 🔑 Features & BST Ordering
- **Key:** Student **Roll Number** (Unique).
- **BST Rules:**
  - Smaller roll numbers are placed in the **left subtree**.
  - Larger roll numbers are placed in the **right subtree**.
  - Duplicate roll numbers are rejected.
- **Operations:**
  - `Insert`: Inserts new student record with auto unique roll generation or manual input.
  - `Search`: Fast $O(\log n)$ retrieval by roll number.
  - `Delete`: Accurately handles Leaf Node, Single Child, and Two Children (Inorder Successor).
  - `Show All`: Uses **Inorder Traversal** (`Left -> Root -> Right`) to print records in ascending sorted order of roll numbers.

### 🛠️ How to Compile and Run Mini Project
```bash
g++ -std=c++17 Student.cpp Node.cpp StudentBST.cpp main.cpp -o StudentRecordSystem.exe
./StudentRecordSystem.exe
```

---

## 🧪 How to Compile and Run Lab Tasks

Each lab task can be compiled independently:

```bash
# 1. Doubly Linked List
cd Lab_Reports/01_Doubly_Linked_List && g++ -std=c++17 main.cpp -o dll.exe && ./dll.exe

# 2. Recursion
cd Lab_Reports/02_Recursion && g++ -std=c++17 main.cpp -o recursion.exe && ./recursion.exe

# 3. Queue (Linear)
cd Lab_Reports/03_Queue && g++ -std=c++17 main.cpp -o queue.exe && ./queue.exe

# 4. Circular Queue
cd Lab_Reports/04_Circular_Queue && g++ -std=c++17 main.cpp -o circular.exe && ./circular.exe

# 5. Stack (Array)
cd Lab_Reports/05_Stack_Array && g++ -std=c++17 main.cpp -o stack.exe && ./stack.exe

# 6. Infix to Postfix & Postfix Evaluation
cd Lab_Reports/06_Infix_Postfix && g++ -std=c++17 main.cpp -o infix_postfix.exe && ./infix_postfix.exe

# 7. Basic Binary Search Tree
cd Lab_Reports/07_Binary_Search_Tree && g++ -std=c++17 main.cpp -o bst.exe && ./bst.exe

# 8. Graph BFS & DFS
cd Lab_Reports/08_Graph_BFS_DFS && g++ -std=c++17 main.cpp -o graph.exe && ./graph.exe
```

---

## 📜 License
Developed for academic coursework at East West University.
