#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        string str;
        vector<char> check;

        cin >> str;

        for (ll i = 0; i < str.length(); i++)
        {
            if (str == "") break;
            else if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            {
                check.push_back(str[i]);
            }
            else
            {
                if (!check.empty() &&
                    ((check.back() == '(' && str[i] == ')') ||
                     (check.back() == '{' && str[i] == '}') ||
                     (check.back() == '[' && str[i] == ']')))
                {
                    check.pop_back();
                }
                else
                {
                    check.push_back(str[i]);
                }
            }
        }

        if (check.empty())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}


/*

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


*/