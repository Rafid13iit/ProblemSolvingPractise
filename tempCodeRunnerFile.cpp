#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isCorrect(const string &str) {
    stack<char> s;

    for (char c : str) {
        if (c == '(' || c == '[') {
            s.push(c);
        } else {
            if (s.empty()) {
                return false; // Unmatched closing parenthesis
            }

            char top = s.top();
            if ((c == ')' && top == '(') || (c == ']' && top == '[')) {
                s.pop();
            } else {
                return false; // Mismatched closing parenthesis
            }
        }
    }

    return s.empty(); // All parentheses must be matched
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;

        if (isCorrect(str)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
