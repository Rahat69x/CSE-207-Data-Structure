# CSE 207: Data Structures (Official Lab Experiments & Mini Project)

**Institution:** East West University  
**Department:** Computer Science and Engineering  
**Course:** CSE 207 (Data Structures)  
**Instructor:** Dr. Anup Kumar Paul, Associate Professor  
**Student Name:** Mahamudol Hasan Rahat  
**Student ID:** 2025-1-60-149  
**Section:** 03  

---

## 📌 Repository "About" (for GitHub)

> **This repository strictly follows the East West University CSE 207 Data Structures Lab Manual sequence (Experiments 1 to 10) by Dr. Anup Kumar Paul, and includes the Student Record Management System Mini Project using BST.**

---

## 🔬 List of Lab Experiments (Strict Sequential Order 1 to 10)

The root directory contains each experiment in strict sequential order from Experiment 1 to Experiment 10:

```text
CSE-207-Data-Structure/
│
├── 01_Searching_Algorithms.cpp            # a. Linear Search, b. Binary Search
├── 02_Sorting_Algorithms.cpp              # a. Bubble Sort, b. Selection Sort
├── 03_Matrix_Operations.cpp               # a. Addition, b. Subtraction, c. Multiplication, d. Transpose
├── 04_Singly_Linked_List_Operations.cpp   # Insert/Delete (Start, End, Any Position), Traversal
├── 05_Stack_Operations.cpp                # a. Push, b. Pop, c. Peek, d. Print
├── 06_Stack_Applications.cpp              # a. Infix to Postfix, b. Postfix Evaluation
├── 07_Queue_Operations.cpp                # Linear Queue & Circular Queue (Enqueue, Dequeue, Print)
├── 08_Recursive_Functions.cpp             # Factorial, Fibonacci, 100 to 1 reverse, "JAVA" 100 times, Palindrome
├── 09_Binary_Search_Tree_Operations.cpp   # Insert, 3-Case Delete, Search, Pre/In/Post/Level-order Traversals
├── 10_Graph_Operations.cpp                # Adjacency List, a. Breadth First (BFT), b. Depth First (DFT)
│
└── Mini_Project_Student_Record_System/    # Mini Project (BST Student Management System)
    ├── Student.h & Student.cpp            # Student Record Entity (Encapsulation)
    ├── Node.h & Node.cpp                  # BST Node (Left/Right pointers)
    ├── StudentBST.h & StudentBST.cpp      # BST Core Algorithms (Insert, Search, Delete, Traversals)
    ├── main.cpp                           # Interactive Console UI & Random Unique Roll Generator
    └── cover.pdf                          # Official Project Report Cover Page
```

---

## 📋 Experiments Overview Table

| Exp # | File Name | Topics & Operations |
|:---:|---|---|
| **01** | **[01_Searching_Algorithms.cpp](file:///c:/5th%20sem/project/01_Searching_Algorithms.cpp)** | Linear Search $O(n)$ and Binary Search $O(\log n)$ |
| **02** | **[02_Sorting_Algorithms.cpp](file:///c:/5th%20sem/project/02_Sorting_Algorithms.cpp)** | Bubble Sort and Selection Sort |
| **03** | **[03_Matrix_Operations.cpp](file:///c:/5th%20sem/project/03_Matrix_Operations.cpp)** | Matrix Addition, Subtraction, Multiplication, Transpose |
| **04** | **[04_Singly_Linked_List_Operations.cpp](file:///c:/5th%20sem/project/04_Singly_Linked_List_Operations.cpp)** | Singly Linked List: Insert (Start/End/Middle), Delete (Start/End/Middle), Print |
| **05** | **[05_Stack_Operations.cpp](file:///c:/5th%20sem/project/05_Stack_Operations.cpp)** | Stack: Push (Overflow), Pop (Underflow), Peek, Print |
| **06** | **[06_Stack_Applications.cpp](file:///c:/5th%20sem/project/06_Stack_Applications.cpp)** | Infix to Postfix Conversion and Postfix Expression Evaluation |
| **07** | **[07_Queue_Operations.cpp](file:///c:/5th%20sem/project/07_Queue_Operations.cpp)** | Linear Queue and Circular Queue with modulo arithmetic |
| **08** | **[08_Recursive_Functions.cpp](file:///c:/5th%20sem/project/08_Recursive_Functions.cpp)** | Factorial, Fibonacci, Print 100 to 1 reverse, "JAVA" 100 times, Palindrome |
| **09** | **[09_Binary_Search_Tree_Operations.cpp](file:///c:/5th%20sem/project/09_Binary_Search_Tree_Operations.cpp)** | BST: Insert, Delete (Leaf, 1 Child, 2 Children with Inorder Successor), Search, Traversals |
| **10** | **[10_Graph_Operations.cpp](file:///c:/5th%20sem/project/10_Graph_Operations.cpp)** | Graph: Breadth First Traversal (BFT / BFS) and Depth First Traversal (DFT / DFS) |

---

## 🌟 Mini Project: Student Record Management System (BST)

Located in `Mini_Project_Student_Record_System/`:
- **Data Structure:** Authentic **Binary Search Tree (BST)** using Roll Number as unique key.
- **Rules:** Smaller roll numbers go left, larger roll numbers go right, duplicates rejected.
- **Operations:** Insert, Search, 3-Case Deletion, Inorder/Preorder/Postorder traversals.

### How to Compile & Run the Mini Project:
```bash
cd Mini_Project_Student_Record_System
g++ -std=c++17 Student.cpp Node.cpp StudentBST.cpp main.cpp -o StudentRecordSystem.exe
./StudentRecordSystem.exe
```

---

## 🚀 How to Compile & Run Any Specific Lab Experiment:
```bash
# Example: Experiment 1
g++ -std=c++17 01_Searching_Algorithms.cpp -o exp1.exe
./exp1.exe

# Example: Experiment 9 (BST)
g++ -std=c++17 09_Binary_Search_Tree_Operations.cpp -o exp9.exe
./exp9.exe
```

---

## 📜 License
Developed for academic coursework at East West University.
