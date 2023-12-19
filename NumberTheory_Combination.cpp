#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MOD = 1000003;

ll C(ll n, ll r)
{
    if (r > n) return 0;

    ll result = 1;

    for (ll i = 1; i <= r; i++){
        result = (result * (n - i + 1)) % MOD;
        result /= i;
    }

    return result;
}

int main ()
{
    ll t;
    cin >> t;

    for (ll i = 1; i <= t; i++){
        ll n, r;
        cin >> n >> r;

        cout << "Case " << i << ": " << C(n, r) << endl;
    }

    return 0;
}
