#include <iostream>
#include <stack>

using namespace std;

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

int evaluatePostfix(string exp) {
    stack<int> stack;
    for (int i; i<exp.length(); i++) {
    	char c = exp[i];
        if (isDigit(c))
            stack.push(c - '0');
        else {
            int val1 = stack.top();
            stack.pop();
            int val2 = stack.top();
            stack.pop();
            switch (c) {
            case '+':
                stack.push(val2 + val1);
                break;
            case '-':
                stack.push(val2 - val1);
                break;
            case '*':
                stack.push(val2 * val1);
                break;
            case '/':
                stack.push(val2 / val1);
                break;
            }
        }
    }
    return stack.top();
}

int main() {
    string exp = "231*+9-";
    cout << "Postfix evaluation: " << evaluatePostfix(exp) << endl;
    return 0;
}

