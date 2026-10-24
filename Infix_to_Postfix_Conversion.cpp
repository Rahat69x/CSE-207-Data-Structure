#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

class InfixToPostfix {
public:
    static int precedence(char ch) {
        if (ch == '+' || ch == '-') return 1;
        if (ch == '*' || ch == '/') return 2;
        if (ch == '^') return 3;
        return -1;
    }

    static string convert(string expression) {
        stack<char> st;
        string result = "";

        for (int i = 0; i < expression.length(); i++) {
            char ch = expression[i];

            if (ch == ' ') continue;

            if (isalnum(ch)) {
                result += ch;
            } else if (ch == '(') {
                st.push(ch);
            } else if (ch == ')') {
                while (!st.empty() && st.top() != '(') {
                    result += st.top();
                    st.pop();
                }
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                }
            } else {
                while (!st.empty() && precedence(ch) <= precedence(st.top())) {
                    result += st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }

        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        return result;
    }
};

int main() {
    string expr = "A+(B*C-(D/E^F)*G)*H";
    cout << "Infix Expression:  " << expr << endl;
    cout << "Postfix Result:    " << InfixToPostfix::convert(expr) << endl;
    return 0;
}
