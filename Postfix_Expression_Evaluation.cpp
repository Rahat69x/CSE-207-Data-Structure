#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

int evaluatePostfix(string expression) {
    stack<int> st;

    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];

        if (ch == ' ') continue;

        if (isdigit(ch)) {
            st.push(ch - '0');
        } else {
            int op2 = st.top(); st.pop();
            int op1 = st.top(); st.pop();

            switch (ch) {
                case '+': st.push(op1 + op2); break;
                case '-': st.push(op1 - op2); break;
                case '*': st.push(op1 * op2); break;
                case '/': st.push(op1 / op2); break;
                case '^': st.push(pow(op1, op2)); break;
            }
        }
    }
    return st.top();
}

int main() {
    string expr = "623+-382/+*2^3+";
    cout << "Postfix Expression: " << expr << endl;
    cout << "Evaluation Result:  " << evaluatePostfix(expr) << endl;
    return 0;
}
