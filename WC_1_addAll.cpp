#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long int ll;
typedef unsigned long long int llu;

int main() {
    ll n;
    cin >> n;
    while(n != 0){
        ll a[n], sum = 0, result = 0;
        
        for (ll i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        sum = a[0];
        
        for (ll i = 1; i < n; i++){
            sum += a[i];
            result += sum;
        }
        
        cout << result << endl;
        cin >> n;
    }

    return 0;
}