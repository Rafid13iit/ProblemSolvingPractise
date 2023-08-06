#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long int ll;
typedef  unsigned long long int llu;

int main ()
{
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;

        vector <ll> v;

        for (ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            v.push_back(x);
        }

        for (ll i = 0; i <= n-k; i++){
            cout << *max_element(v.begin()+i, v.begin()+i+k) << " ";
        }
        cout << endl;
    }

    return 0;
}