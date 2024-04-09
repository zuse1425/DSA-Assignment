#include <bits/stdc++.h>
using namespace std;

int precedence(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

char associativity(char c) {
    if (c == '^')
        return 'R';
    return 'L';
}

void infixToPostfix(string s) {
    stack<char> st;
    string result;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            result += ch;
        else if (ch == '(')
            st.push('(');
        else if (ch == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while (!st.empty() && precedence(s[i]) < precedence(st.top()) ||
                !st.empty() && precedence(s[i]) == precedence(st.top()) &&
                associativity(s[i]) == 'L') {
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

    cout << "After:  " << result << endl;
}

int main() {
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    cout << "Before: " << exp << endl;
    infixToPostfix(exp);

    return 0;
}

