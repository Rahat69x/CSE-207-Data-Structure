#ifndef INFIXEVOLUTION_INFIXCONVERSION_H
#define INFIXEVOLUTION_INFIXCONVERSION_H

#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

class InfixConversion {
public:
    stack<char> st;
    string expression;
    string result;

    InfixConversion(string expression) {
        this->expression = expression;
        this->result = "";
    }

    string getResult() {
        return result;
    }

    int precedence(char ch) {
        if (ch == '+' || ch == '-') {
            return 1;
        } else if (ch == '*' || ch == '/') {
            return 2;
        } else if (ch == '^') {
            return 3;
        } else {
            return -1;
        }
    }

    void printStack() {
        cout << "[";
        stack<char> temp = st;
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << "]\n";
    }

    void infixToPostfix() {
        for (int i = 0; i < expression.length(); i++) {
            char ch = expression[i];
            if (ch == '(') {
                st.push(ch);
            } else if (isalnum(ch)) {
                result += ch;
            } else if (ch == ')') {
                while (!st.empty() && st.top() != '(') {
                    result += st.top();
                    st.pop();
                }
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                }
            } else {
                if (st.empty() || st.top() == '(') {
                    st.push(ch);
                } else if (precedence(ch) > precedence(st.top())) {
                    st.push(ch);
                } else {
                    while (!st.empty() && precedence(ch) <= precedence(st.top())) {
                        result += st.top();
                        st.pop();
                    }
                    st.push(ch);
                }
            }
            cout << result << "\t";
            printStack();
        }
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
    }
};

#endif // INFIXEVOLUTION_INFIXCONVERSION_H
