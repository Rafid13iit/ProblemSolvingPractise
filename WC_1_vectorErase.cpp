#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long int ll;
typedef  unsigned long long int llu;

int main ()
{
    ll n, x, p, q, r;
    cin >> n;

    vector <ll> v;
    for (ll i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    cin >> p;
    cin >> q >> r;

    v.erase(v.begin()+p-1);
    v.erase(v.begin()+q-1, v.begin()+r-1);

    cout << v.size() << endl;

    for (ll i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}