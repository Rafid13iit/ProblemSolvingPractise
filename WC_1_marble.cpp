#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long int ll;
typedef  unsigned long long int llu;

int main() {
    ll N, Q, c = 0;
    cin >> N >> Q;

    while(N != 0 && Q != 0){
        c++;
        cout << "CASE# " << c << ":" << endl;

        vector <ll> v;
        for (ll i = 0; i < N; i++){
            ll x; cin >> x;
            v.push_back(x);

        }
        sort(v.begin(),v.end());

        ll q;
        for (ll i = 0; i < Q; i++){
            cin >> q;
            
            auto it = find(v.begin(), v.end(), q);

            if (it != v.end()) {
                cout << q << " found at " << distance(v.begin(), it)+1 << endl;
            }
            else {
                cout << q << " not found" << endl; 
            }
        }

        v.clear();
        cin >> N >> Q;
    }

    return 0;
}
