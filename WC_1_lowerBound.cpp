#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long int ll;
typedef  unsigned long long int llu;

int main ()
{
    ll n, x;
    cin >> n;

    vector <ll> v;
    for (ll i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    ll q, num;
    cin >> q;

    while(q--){
        cin >> num;

        vector <ll>::iterator low, up;
        low = lower_bound(v.begin(), v.end(), num);

        if (v[low-v.begin()] == num) cout << "Yes ";
        else cout << "No ";
        cout << (low-v.begin())+1 << endl; 
    }


    return 0;
}