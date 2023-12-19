#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ll t;
    cin >> t;

    while(t--){
        ll n, m;
        cin >> n >> m;
        
        ll result = 0;

        if (n >= m) result = n;
        else result = m;

        cout << result << endl;    
    }

    return 0;
}
