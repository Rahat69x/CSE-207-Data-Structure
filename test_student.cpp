#include <iostream>
#include "Student.h"

int main() {
    std::cout << "========================================\n";
    std::cout << "     STEP 1: Testing Student Class      \n";
    std::cout << "========================================\n\n";

    // ১. Parameterized Constructor দিয়ে Student অবজেক্ট তৈরি
    Student s1("Rahat Hasan", 101, "CSE207 - Data Structures", 88.5, 3.85);

    // ২. ডিটেইলস ডিসপ্লে করা
    std::cout << "[Test 1] Displaying Student 1 Info:\n";
    s1.display();

    // ৩. Getters এবং Setters টেস্ট করা
    std::cout << "\n[Test 2] Updating CGPA using setter...\n";
    s1.setCgpa(3.95);
    std::cout << "Updated CGPA using getCgpa(): " << s1.getCgpa() << "\n";

    std::cout << "\n[Test 3] Updated Student Info:\n";
    s1.display();

    std::cout << "\n>>> Student Class is working successfully! <<<\n";
    return 0;
}
