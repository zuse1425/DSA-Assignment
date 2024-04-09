#include <iostream>
#include <stack>

using namespace std;

bool isOperator(char c) {
    return (!isalpha(c) && !isdigit(c));
}

int getPriority(char C) {
    if (C == '-' || C == '+')
        return 1;
    else if (C == '*' || C == '/')
        return 2;
    else if (C == '^')
        return 3;
    return 0;
}

string reverseString(string str) {
    string rev_str = "";
    for (int i = str.size() - 1; i >= 0; i--)
        rev_str += str[i];
    return rev_str;
}

string infixToPostfix(string infix) {
    infix = '(' + infix + ')';
    int l = infix.size();
    stack<char> char_stack;
    string output;

    for (int i = 0; i < l; i++) {
        if (isalpha(infix[i]) || isdigit(infix[i]))
            output += infix[i];
        else if (infix[i] == '(')
            char_stack.push('(');
        else if (infix[i] == ')') {
            while (char_stack.top() != '(') {
                output += char_stack.top();
                char_stack.pop();
            }
            char_stack.pop();
        }
        else {
            if (isOperator(char_stack.top())) {
                if (infix[i] == '^') {
                    while (getPriority(infix[i]) <= getPriority(char_stack.top())) {
                        output += char_stack.top();
                        char_stack.pop();
                    }
                } else {
                    while (getPriority(infix[i]) < getPriority(char_stack.top())) {
                        output += char_stack.top();
                        char_stack.pop();
                    }
                }
                char_stack.push(infix[i]);
            }
        }
    }
    while (!char_stack.empty()) {
        output += char_stack.top();
        char_stack.pop();
    }
    return output;
}

string infixToPrefix(string infix) {
    infix = reverseString(infix);
    int l = infix.size();
    for (int i = 0; i < l; i++) {
        if (infix[i] == '(') {
            infix[i] = ')';
        } else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }
    string prefix = infixToPostfix(infix);
    return reverseString(prefix);
}

int main() {
    string s = "x+y*z/w+u";
    cout << "Before: " << s << endl;
    cout << "After:  " << infixToPrefix(s) << endl;
    return 0;
}

