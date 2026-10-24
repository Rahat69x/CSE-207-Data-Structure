# CSE 207 - Data Structures & Algorithms

**Course:** CSE 207 - Data Structures  
**Institution:** East West University  
**Student Name:** Mahamudol Hasan Rahat  
**Student ID:** 2025-1-60-149  
**Section:** 03  
**Faculty:** Dr. Anup Kumar Paul, Associate Professor, Department of CSE  

---

## 📌 Repository "About" Description (for GitHub)

> **This is a C++ Data Structures repository for the CSE207 course. It includes programs like Doubly Linked Lists, Stacks, Queues, Binary Search Trees, Graph Traversals, and a Student Record Management System using BST.**

---

## 📂 Repository Contents

This repository is organized with both standalone, simple-to-run C++ programs in the root directory (matching traditional lab task conventions) and the comprehensive **Student Record Management System (BST Mini Project)**:

### 🚀 Standalone Programs (Directly Viewable & Runnable)
| File Name | Topic | Description |
|---|---|---|
| `Detect_whether_the_array_is_sorted.cpp` | Arrays | Checks if elements in an array are sorted in ascending order |
| `Linear_Search_and_Binary_Search.cpp` | Searching | Linear Search $O(n)$ vs. Binary Search $O(\log n)$ |
| `Doubly_Linked_List_Operations.cpp` | Linked Lists | Insertion, Deletion (First, Middle, Last) & Traversal |
| `Stack_Implementation_using_Array.cpp` | Stacks | LIFO Stack (Push, Pop, Peek, Display) with boundary checks |
| `Infix_to_Postfix_Conversion.cpp` | Stack Apps | Operator precedence parsing and Infix to Postfix conversion |
| `Postfix_Expression_Evaluation.cpp` | Stack Apps | Postfix expression calculation using operand stack |
| `Linear_Queue_using_Array.cpp` | Queues | FIFO Queue (Enqueue, Dequeue, Display) |
| `Circular_Queue_using_Array.cpp` | Queues | Circular Queue with modulo arithmetic wrapping |
| `Binary_Search_Tree_Operations.cpp` | Trees | BST Insert, Search, Deletion (3 cases), Traversals |
| `Graph_BFS_and_DFS_Traversal.cpp` | Graphs | Graph Adjacency List, BFS (Queue) and DFS (Stack) |
| `Recursion_Factorial_Fibonacci_Palindrome.cpp` | Recursion | Factorial, Fibonacci, Reverse Print, Palindrome check |

---

### 🌟 Mini Project: Student Record Management System (BST)
A full Object-Oriented C++ management system built manually using a **Binary Search Tree (BST)**:
- **`Student.h` & `Student.cpp`**: Student entity with Name, Roll Number, Course, Total Marks, CGPA.
- **`Node.h` & `Node.cpp`**: BST Node structure with left/right pointers.
- **`StudentBST.h` & `StudentBST.cpp`**: Core BST operations (Insert with unique check, Search $O(\log n)$, 3-case Deletion, Preorder, Inorder, Postorder, Tree Metrics).
- **`main.cpp`**: Interactive console user interface with auto random unique roll generator.

#### How to run the Mini Project:
```bash
g++ -std=c++17 Student.cpp Node.cpp StudentBST.cpp main.cpp -o StudentRecordSystem.exe
./StudentRecordSystem.exe
```

---

### 🧪 Official Lab Reports (Folder-based Archive)
All university lab report submissions are neatly organized in the `Lab_Reports/` directory:
- `Lab_Reports/01_Doubly_Linked_List/`
- `Lab_Reports/02_Recursion/`
- `Lab_Reports/03_Queue/`
- `Lab_Reports/04_Circular_Queue/`
- `Lab_Reports/05_Stack_Array/`
- `Lab_Reports/06_Infix_Postfix/`
- `Lab_Reports/07_Binary_Search_Tree/`
- `Lab_Reports/08_Graph_BFS_DFS/`

---

## 📜 License
Developed for academic purposes at East West University.
