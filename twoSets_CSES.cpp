#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ll n;
    cin >> n;

    ll sum = n * (n + 1) / 2;

    if (sum % 2 != 0) cout << "NO";
    else {
        cout << "YES" << endl;

        ll tmp = n;
        vector<ll> v1, v2;

        v1.push_back(n);

        for (ll i = n-1; i >= 1; i--){
            tmp += i;
            if (tmp <= sum / 2){
                v1.push_back(i);
            }
            else{
                tmp -=  i;
                v2.push_back(i);
            }
        }

        cout << v1.size() << endl;
        for (ll i : v1){
            cout << i << " ";
        }

        cout << endl;

        cout << v2.size() << endl;
        for (ll i : v2){
            cout << i << " ";
        }
        
    }
    
    return 0;
}