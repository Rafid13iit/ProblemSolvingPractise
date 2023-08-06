#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long int ll;
typedef  unsigned long long int llu;

int main() {
    map <string, string> m;

    string eWord, fWord;
    while ((cin >> eWord) && (cin >> fWord)) {
        m[fWord] = eWord;
    }

    // ll n;
    // cin >> n;
    // while(n--){
    //     cin >> eWord >> fWord;
    //     m[fWord] = eWord;
    // }

    cout << endl;

    string search;
    while(cin >> search){
        if (m.count(search) <= 0){
            cout << "eh" << endl;
        }
        else{
            cout << m[search] << endl;
        }
    }

    // ll x;
    // cin >> x;
    // while(x--){
    //     string search;
    //     cin >> search;

    //     if (m.count(search) <= 0){
    //         cout << "eh" << endl;
    //     }
    //     else{
    //         cout << m[search] << endl;
    //     }
    // }

    return 0;
}