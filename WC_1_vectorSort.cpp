#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long int ll;
typedef  unsigned long long int llu;

int main ()
{
    ll n, x;
    cin >> n;

    vector <ll> v;
    for (ll i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (ll i = 0; i < n; i++){
        cout << v[i] << " ";
    }

    return 0;
}
