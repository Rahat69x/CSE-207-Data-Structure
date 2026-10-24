#include <iostream>
#include <string>

using namespace std;

long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int idx) {
    if (idx == 0) {
        return 0;
    } else if (idx == 1) {
        return 1;
    } else {
        return fibonacci(idx - 1) + fibonacci(idx - 2);
    }
}

void reversePrint(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    reversePrint(n - 1);
}

void printJava(int n) {
    if (n == 0) {
        return;
    }
    cout << "Java" << endl;
    printJava(n - 1);
}

bool ispalindrome(string s) {
    if (s.length() <= 1) {
        return true;
    } else if (s[0] != s[s.length() - 1]) {
        return false;
    } else {
        return ispalindrome(s.substr(1, s.length() - 2));
    }
}

int main() {
    cout << "1.factorial" << endl;
    cout << "2.fibonacci" << endl;
    cout << "3.reversePrint" << endl;
    cout << "4.print Java 100 time" << endl;
    cout << "5.Palindrome check" << endl;

    int n;
    cin >> n;

    if (n == 1) {
        int z;
        cout << "Enter the number" << endl;
        cin >> z;
        cout << factorial(z) << endl;
    } else if (n == 2) {
        cout << "enter number ";
        int idx;
        cin >> idx;
        cout << fibonacci(idx) << endl;
    } else if (n == 3) {
        cout << "enter number ";
        int z;
        cin >> z;
        reversePrint(z);
        cout << endl;
    } else if (n == 4) {
        printJava(100);
        cout << endl;
    } else if (n == 5) {
        string s;
        cout << "enter string ";
        cin >> s;
        if (ispalindrome(s)) {
            cout << "palindrome" << endl;
        } else {
            cout << "not palindrome" << endl;
        }
    }

    return 0;
}
