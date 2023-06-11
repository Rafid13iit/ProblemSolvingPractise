#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ll n, c = 0;
    cin >> n;

    for (ll i = n; i >= 5; i -= 5){
        if (i % 5 == 0) c++;
        else {
            i--;
            i += 5;
            continue;
        }

        ll result = i / 5;
        while (result % 5 == 0){
            c++;

            result /= 5;
        }
    }

    cout << c;
    
    return 0;
}