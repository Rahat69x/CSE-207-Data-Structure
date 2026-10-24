#ifndef POSTFIXEXPRESSIONEVALUATION_POSTFIXEVALUATION_H
#define POSTFIXEXPRESSIONEVALUATION_POSTFIXEVALUATION_H

#include <string>
#include <stack>
#include <cmath>
#include <iostream>
#include <cctype>

using namespace std;

class PostFixEvaluation {
public:
    stack<int> st;
    string expression;

    PostFixEvaluation(string expression) {
        this->expression = expression;
    }

    void printStack() {
        stack<int> temp = st;
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }

    int evaluate() {
        for (int i = 0; i < expression.length(); i++) {
            char ch = expression[i];
            if (isdigit(ch)) {
                st.push(ch - '0');
            } else if (ch == ' ') {
                continue;
            } else {
                int operand2 = st.top();
                st.pop();
                int operand1 = st.top();
                st.pop();

                if (ch == '+') {
                    st.push(operand1 + operand2);
                } else if (ch == '-') {
                    st.push(operand1 - operand2);
                } else if (ch == '*') {
                    st.push(operand1 * operand2);
                } else if (ch == '/') {
                    st.push(operand1 / operand2);
                } else if (ch == '^') {
                    st.push(static_cast<int>(pow(operand1, operand2)));
                }
            }
            cout << ch << "\t";
            printStack();
        }
        return st.top();
    }
};

#endif // POSTFIXEXPRESSIONEVALUATION_POSTFIXEVALUATION_H
