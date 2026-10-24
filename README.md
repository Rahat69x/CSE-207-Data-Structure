# CSE 207: Data Structures (Official Lab Experiments & Mini Project)

**Institution:** East West University  
**Department:** Computer Science and Engineering  
**Course:** CSE 207 (Data Structures)  
**Instructor:** Dr. Anup Kumar Paul, Associate Professor  
**Student Name:** Mahamudol Hasan Rahat  
**Student ID:** 2025-1-60-149  
**Section:** 03  

---

## 📌 Repository Overview

This repository contains:
1. **The Official 10 Lab Experiments (1 to 10)** strictly following the East West University CSE 207 Lab Manual by Dr. Anup Kumar Paul.
2. **Mini Project:** Student Record Management System using a pure Binary Search Tree (BST) Data Structure.

Every program is written cleanly in C++ with **no duplicate files**.

---

## 🔬 Official Lab Experiments (Sequence 1 to 10)

| Exp # | File Name | Topics & Implemented Algorithms |
|:---:|---|---|
| **01** | **[Experiment_01_Searching_Algorithms.cpp](file:///c:/5th%20sem/project/Experiment_01_Searching_Algorithms.cpp)** | **Searching:** Linear Search $O(n)$ & Binary Search $O(\log n)$ |
| **02** | **[Experiment_02_Sorting_Algorithms.cpp](file:///c:/5th%20sem/project/Experiment_02_Sorting_Algorithms.cpp)** | **Sorting:** Bubble Sort & Selection Sort |
| **03** | **[Experiment_03_Matrix_Operations.cpp](file:///c:/5th%20sem/project/Experiment_03_Matrix_Operations.cpp)** | **Matrix Operations:** Addition, Subtraction, Multiplication, Transpose |
| **04** | **[Experiment_04_Singly_Linked_List.cpp](file:///c:/5th%20sem/project/Experiment_04_Singly_Linked_List.cpp)** | **Singly Linked List:** Insert/Delete (Start, End, Any Position), Traversal |
| **05** | **[Experiment_05_Stack_Operations.cpp](file:///c:/5th%20sem/project/Experiment_05_Stack_Operations.cpp)** | **Stack Operations:** Push (Overflow check), Pop (Underflow check), Peek, Print |
| **06** | **[Experiment_06_Stack_Applications.cpp](file:///c:/5th%20sem/project/Experiment_06_Stack_Applications.cpp)** | **Stack Applications:** Infix to Postfix Conversion & Postfix Evaluation |
| **07** | **[Experiment_07_Queue_Operations.cpp](file:///c:/5th%20sem/project/Experiment_07_Queue_Operations.cpp)** | **Queue Operations:** Linear Queue & Circular Queue (Modulo Indexing) |
| **08** | **[Experiment_08_Recursive_Functions.cpp](file:///c:/5th%20sem/project/Experiment_08_Recursive_Functions.cpp)** | **Recursion:** Factorial, Fibonacci, Print 100 to 1 reverse, "JAVA" 100 times, Palindrome |
| **09** | **[Experiment_09_Binary_Search_Tree.cpp](file:///c:/5th%20sem/project/Experiment_09_Binary_Search_Tree.cpp)** | **Binary Search Tree (BST):** Insert, Search, 3-Case Deletion, Pre/In/Post/Level-order |
| **10** | **[Experiment_10_Graph_Operations.cpp](file:///c:/5th%20sem/project/Experiment_10_Graph_Operations.cpp)** | **Graph Operations:** Adjacency List, Breadth First (BFT), Depth First (DFT) |

---

## 🌟 Mini Project: Student Record Management System (BST)

A complete C++ Object-Oriented management system built using an authentic **Binary Search Tree (BST)**:
- **`Student.h` & `Student.cpp`**: Student class with Encapsulation (Name, Roll, Course, Marks, CGPA).
- **`Node.h` & `Node.cpp`**: BST Node structure with left/right pointers.
- **`StudentBST.h` & `StudentBST.cpp`**: Core BST operations (Insert, Search, 3-case Deletion, Traversals, Tree Metrics).
- **`main.cpp`**: Interactive console user interface with Automatic Unique Roll Generator.
- **`cover.pdf`**: Official University project report cover.

### How to Compile & Run the Mini Project:
```bash
g++ -std=c++17 Student.cpp Node.cpp StudentBST.cpp main.cpp -o StudentRecordSystem.exe
./StudentRecordSystem.exe
```

---

## 🚀 How to Compile & Run Any Specific Experiment:
```bash
# Example: Experiment 1 (Searching Algorithms)
g++ -std=c++17 Experiment_01_Searching_Algorithms.cpp -o exp1.exe
./exp1.exe

# Example: Experiment 9 (Binary Search Tree)
g++ -std=c++17 Experiment_09_Binary_Search_Tree.cpp -o exp9.exe
./exp9.exe
```

---

## 📜 License
Developed for academic coursework at East West University.
