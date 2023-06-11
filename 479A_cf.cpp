#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ll a, b, c;

    cin >> a >> b >> c;

    ll ans1 = a * b * c;
    ll ans2 = (a + b) * c;
    ll ans3 = a * (b + c);
    ll ans4 = a + b + c;

    ll max1 = max(ans1, ans2);
    ll max2 = max(ans3, ans4);

    cout << max(max1, max2);


    return 0;
}