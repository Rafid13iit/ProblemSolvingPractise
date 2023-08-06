#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long int ll;
typedef  unsigned long long int llu;

int main ()
{
    ll n;
    cin >> n;

    map <vector<ll>, string > m;
    while(n--){
        vector <ll> v;
        ll x, y;
        string str;
        cin >> x >> y;
        cin >> str;

        v.push_back(x);
        v.push_back(y);
        // m.insert({v, str});
        // m.insert(make_pair(v, str));
        m[v] = str;
    }

    ll t;
    cin >> t;

    while(t--){
        vector <ll> v;
        ll x, y;
        cin >> x >> y;

        v.push_back(x);
        v.push_back(y);

        cout << m[v] << endl;
    }

    return 0;
}