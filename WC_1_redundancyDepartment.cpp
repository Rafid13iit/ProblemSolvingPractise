#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long int ll;
typedef  unsigned long long int llu;

int main() {

    unordered_map<ll, ll> m;
    vector<ll> order;

    ll num;
    while (cin >> num) {
        // Process the input integer 'num'
        m[num]++;
        if(m[num] == 1){
            order.push_back(num);
        }
    }

    for (auto x : order) {
        cout << x << " " << m[x] << endl;
    }

    return 0;
}