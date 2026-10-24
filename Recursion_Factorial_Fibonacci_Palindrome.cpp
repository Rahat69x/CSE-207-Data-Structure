#include <iostream>
#include <string>

using namespace std;

long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void reversePrint(int n) {
    if (n == 0) return;
    cout << n << " ";
    reversePrint(n - 1);
}

bool isPalindrome(string s) {
    if (s.length() <= 1) return true;
    if (s[0] != s[s.length() - 1]) return false;
    return isPalindrome(s.substr(1, s.length() - 2));
}

int main() {
    cout << "Factorial of 5:   " << factorial(5) << endl;
    cout << "Fibonacci of 6:   " << fibonacci(6) << endl;
    cout << "Reverse Print 5:  "; reversePrint(5); cout << endl;
    cout << "Is 'racecar' palindrome? " << (isPalindrome("racecar") ? "Yes" : "No") << endl;
    cout << "Is 'rahat' palindrome?   " << (isPalindrome("rahat") ? "Yes" : "No") << endl;
    return 0;
}
