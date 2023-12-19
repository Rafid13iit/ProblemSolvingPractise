#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ll n, q;
    cin >> n >> q;

    ll array[n];
    ll prefixSum[n];
    memset(prefixSum, 0, sizeof(prefixSum));

    cin >> array[0];
    prefixSum[0] = array[0];

    for (ll i = 1; i < n; i++){
        cin >> array[i];
        prefixSum[i] = prefixSum[i-1] + array[i];
    }

    while(q--){
        ll a, b;
        cin >> a >> b;

        if (a == b){
            cout << array[a-1] << endl;
        }
        else if (a == 1){
            cout << prefixSum[b-1] << endl;
        }
        else{
            cout << prefixSum[b-1] - prefixSum[a-2] << endl;
        }
    }

    return 0;
}
