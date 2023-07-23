#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ll n, c = 0;
    cin >> n;

    string a;
    cin >> a;
    
    for (ll i = 0; i < n; i++){
        if (a[i] == '-'){
            c++;
        }
        else{
            break;
        }
    }
    for (ll i = 0; i < n; i++){
        if (a[i] == '-') c--;
        else c++;
    }

    cout << c;

    return 0;
}