#include <iostream>
#include <string>
#include "InfixConversion.h"
#include "PostFixEvaluation.h"

using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << " 1. INFIX TO POSTFIX CONVERSION" << endl;
    cout << "========================================" << endl;
    string expression1 = "A+(B*C-(D/E^F)*G)*H";
    cout << "Infix Expression: " << expression1 << endl << endl;

    InfixConversion* conv = new InfixConversion(expression1);
    conv->infixToPostfix();
    cout << "\nFinal Postfix Result: " << conv->getResult() << endl;

    cout << "\n========================================" << endl;
    cout << " 2. POSTFIX EXPRESSION EVALUATION" << endl;
    cout << "========================================" << endl;
    string expression2 = "623+-382/+*2^3+";
    cout << "Postfix Expression: " << expression2 << endl << endl;

    PostFixEvaluation* pe = new PostFixEvaluation(expression2);
    cout << "\nEvaluation Result: " << pe->evaluate() << endl;

    delete conv;
    delete pe;
    return 0;
}
