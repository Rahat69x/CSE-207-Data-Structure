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

This repository strictly follows the official **East West University CSE 207 Data Structures Lab Manual** sequence (Experiments 1 to 10) by Dr. Anup Kumar Paul, along with the **Student Record Management System using Binary Search Tree (BST)** Mini Project.

---

## 🔬 List of Experiments (Sequential Order from Lab Manual)

| Exp # | Experiment Title | Implemented Algorithms & Operations | File Link |
|:---:|---|---|:---:|
| **01** | **Searching Algorithms** | • Linear Search<br>• Binary Search | [Experiment_01_Searching_Algorithms.cpp](file:///c:/5th%20sem/project/Experiment_01_Searching_Algorithms.cpp) |
| **02** | **Sorting Algorithms** | • Bubble Sort<br>• Selection Sort | [Experiment_02_Sorting_Algorithms.cpp](file:///c:/5th%20sem/project/Experiment_02_Sorting_Algorithms.cpp) |
| **03** | **Matrix Operations** | • Matrix Addition<br>• Matrix Subtraction<br>• Matrix Multiplication<br>• Matrix Transpose | [Experiment_03_Matrix_Operations.cpp](file:///c:/5th%20sem/project/Experiment_03_Matrix_Operations.cpp) |
| **04** | **Singly Linked List** | • Insert (Start, End, Any Position)<br>• Delete (Start, End, Any Position)<br>• Traversal & Node Counter | [Experiment_04_Singly_Linked_List.cpp](file:///c:/5th%20sem/project/Experiment_04_Singly_Linked_List.cpp) |
| **05** | **Stack Operations** | • Push (with Overflow check)<br>• Pop (with Underflow check)<br>• Peek<br>• Print (Top to Bottom) | [Experiment_05_Stack_Operations.cpp](file:///c:/5th%20sem/project/Experiment_05_Stack_Operations.cpp) |
| **06** | **Stack Applications** | • Infix to Postfix Conversion<br>• Postfix Expression Evaluation | [Experiment_06_Stack_Applications.cpp](file:///c:/5th%20sem/project/Experiment_06_Stack_Applications.cpp) |
| **07** | **Queue Operations** | • Linear Queue (Enqueue, Dequeue, Print)<br>• Circular Queue (Modulo Indexing) | [Experiment_07_Queue_Operations.cpp](file:///c:/5th%20sem/project/Experiment_07_Queue_Operations.cpp) |
| **08** | **Recursive Functions** | • Factorial of an integer<br>• Fibonacci number by index<br>• Print numbers 100 to 1 reverse<br>• Print message "JAVA" 100 times<br>• Palindrome string checker | [Experiment_08_Recursive_Functions.cpp](file:///c:/5th%20sem/project/Experiment_08_Recursive_Functions.cpp) |
| **09** | **Binary Search Tree** | • Insert element into BST<br>• Delete element (Leaf, 1 Child, 2 Children with Inorder Successor)<br>• Search element<br>• Pre-order, In-order, Post-order & Level-order Traversals | [Experiment_09_Binary_Search_Tree.cpp](file:///c:/5th%20sem/project/Experiment_09_Binary_Search_Tree.cpp) |
| **10** | **Graph Operations** | • Graph Adjacency List<br>• Breadth First Traversal (BFT / BFS)<br>• Depth First Traversal (DFT / DFS) | [Experiment_10_Graph_Operations.cpp](file:///c:/5th%20sem/project/Experiment_10_Graph_Operations.cpp) |
| **+** | **Doubly Linked List** | • Two-way pointers (`prev` & `next`), insert/delete (first, middle, last) | [Doubly_Linked_List_Operations.cpp](file:///c:/5th%20sem/project/Doubly_Linked_List_Operations.cpp) |

---

## 🌟 Mini Project: Student Record Management System (BST)

An authentic C++ Object-Oriented Management System using a **Binary Search Tree (BST)** without external libraries or databases:
- **[Student.h](file:///c:/5th%20sem/project/Student.h) & [Student.cpp](file:///c:/5th%20sem/project/Student.cpp)**: Student record (Name, Roll, Course, Marks, CGPA).
- **[Node.h](file:///c:/5th%20sem/project/Node.h) & [Node.cpp](file:///c:/5th%20sem/project/Node.cpp)**: BST Node with left and right pointers.
- **[StudentBST.h](file:///c:/5th%20sem/project/StudentBST.h) & [StudentBST.cpp](file:///c:/5th%20sem/project/StudentBST.cpp)**: BST Insert, Search, 3-Case Deletion, Inorder/Preorder/Postorder traversals, and Tree Metrics.
- **[main.cpp](file:///c:/5th%20sem/project/main.cpp)**: Interactive console menu with Automatic Unique Roll Generator.

### How to Compile and Run the Mini Project:
```bash
g++ -std=c++17 Student.cpp Node.cpp StudentBST.cpp main.cpp -o StudentRecordSystem.exe
./StudentRecordSystem.exe
```

---

## 🚀 How to Run Any Specific Experiment:
```bash
# Example: Running Experiment 1
g++ -std=c++17 Experiment_01_Searching_Algorithms.cpp -o exp1.exe
./exp1.exe

# Example: Running Experiment 9 (BST)
g++ -std=c++17 Experiment_09_Binary_Search_Tree.cpp -o exp9.exe
./exp9.exe
```

---

## 📜 License
Developed for academic coursework at East West University.
