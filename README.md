# Student Record Management System Using Binary Search Tree (BST)

**Course:** CSE207 - Data Structures  
**Institution:** East West University  
**Student Name:** Mahamudol Hasan Rahat  
**Student ID:** 2025-160-149  
**Section:** 03  
**Faculty:** Dr. Anup Kumar Paul, Associate Professor, Department of CSE  

---

## 📌 Project Overview

This project is a **Student Record Management System** built with **C++** using an authentic **Binary Search Tree (BST)** as the primary data structure. It demonstrates object-oriented programming (OOP) principles and core tree algorithms without relying on STL map, set, or external databases.

In this system:
- Each student record consists of:
  - **Student Name**
  - **Roll Number** (Unique BST Key)
  - **Course**
  - **Total Marks**
  - **CGPA**
- The **Roll Number** acts as the BST key:
  - Smaller roll numbers are placed in the **left subtree**.
  - Larger roll numbers are placed in the **right subtree**.
  - Duplicate roll numbers are strictly rejected to ensure uniqueness.

---

## 🚀 Key Features & Operations

1. **Insert Student Record:**
   - Adds a new student record into the BST at the appropriate hierarchical position.
   - Enforces roll number uniqueness.

2. **Search Student Record:**
   - Performs efficient logarithmic search $O(\log n)$ using the student's roll number.
   - Displays complete student details if found; displays "Record Not Found" otherwise.

3. **Delete Student Record:**
   - Safely removes a node from the BST while preserving BST properties.
   - Properly handles all 3 deletion cases:
     1. Leaf Node (no children)
     2. Node with one child
     3. Node with two children (using Inorder Successor)

4. **Show All Records (Inorder Traversal):**
   - Traverses the tree in `Left -> Root -> Right` order.
   - Displays all student records sorted in ascending order by roll number.

---

## 📂 Project Architecture

```text
StudentRecordSystem/
│
├── Student.h          # Student class declaration (attributes & method prototypes)
├── Student.cpp        # Student class implementation
├── Node.h             # BST Node class declaration (Student data + left/right pointers)
├── Node.cpp           # BST Node class implementation
├── StudentBST.h       # Binary Search Tree class declaration (Insert, Search, Delete, Inorder)
├── StudentBST.cpp     # BST algorithm implementation
├── main.cpp           # Main application entry point & interactive menu
├── cover.pdf          # Official project report cover page
└── README.md          # Project documentation
```

---

## 🛠️ How to Compile and Run

Make sure you have GCC/G++ installed (MinGW on Windows).

### 1. Compile the project
```bash
g++ -std=c++17 Student.cpp Node.cpp test_student.cpp -o app.exe
```

### 2. Run the executable
```bash
./app.exe
```

---

## 📜 License
This project is developed for academic purposes as part of the CSE207 coursework at East West University.
