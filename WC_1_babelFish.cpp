#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
    map <string, string> m;

    string eWord, fWord, line;
    while (getline(cin, line)) {
        if (line.empty()) {
            break;  // Exit when encountering a blank line
        }
        // Use stringstream to extract the English and foreign words
        stringstream ss(line);
        ss >> eWord >> fWord;
        m[fWord] = eWord;
    }

    string search;
    while(cin >> search){
        if (m.count(search) <= 0){
            cout << "eh" << endl;
        }
        else{
            cout << m[search] << endl;
        }
    }

    return 0;
}