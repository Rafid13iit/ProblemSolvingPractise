#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ll t, cnt = 0, result = 0;
    cin >> t;

    while(t--){
        ll n, k, q;
        cin >> n >> k >> q;

        ll a[n];
        for (ll i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] <= q) cnt++;
            else{
                result += pow(2, cnt) - cnt;
                cnt = 0;
            }
        }

        if(cnt != 0) result += pow(2, cnt) - cnt;

        cout << result << endl;
        result = cnt = 0;

    }
    
    return 0;
}