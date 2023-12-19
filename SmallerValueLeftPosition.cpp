#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ll n;
    cin >> n;

    ll a[n];
    ll min[n];

    cin >> a[0];
    cout << 0 << " ";

    for (ll i = 1; i < n; i++){
        cin >> a[i];
    }

    for (ll i = 1; i < n; i++){

        ll* minElement = min_element(a, a + i - 1);
        min[i] = distance(a, minElement);
        if (*minElement >= a[i]) min[i] = 0;
    }

    for (ll i = 1; i < n; i++){
        cout << min[i]+1 << " ";
    }

    return 0;

}