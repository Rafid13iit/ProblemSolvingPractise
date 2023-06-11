#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ll n, c = 1;
    cin >> n;

    string a[n];

    cin >> a[0];
    for (int i = 1; i < n; i++){
        cin >> a[i];

        if (a[i] != a[i-1]){
            c++;
        }
    }

    cout << c;

    return 0;
}