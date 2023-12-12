#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll SumOfDivisors(ll n)
{
    ll result = 1, n_real = n;

    for (ll i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            
            ll count = 0;
            while(n % i == 0){
                count++;
                n = n / i;
            }

            result *= ((pow(i, count+1)-1) / (i-1));
        }
    }

    if (n == n_real) return 0;

    if (n > 1){
        result *= ((pow(n, 1+1)-1) / (n-1));
    }

    return (result-n_real-1);
}

int main ()
{
    ll t;
    cin >> t;

    for (ll i = 1; i <= t; i++){
        ll n, result = 0;
        cin >> n;

        for (ll j = 1; j <= n; j++){
            result += SumOfDivisors(j);
        } 

        cout << "Case " << i << ": " << result << endl;
    }

    return 0;
}
