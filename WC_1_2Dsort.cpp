#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long int ll;
typedef  unsigned long long int llu;

bool customSortCondition(const pair<ll, ll>& a, const pair<ll, ll>& b) {
    if (a.first > b.first) {
        return true;
    } else if (a.first == b.first) {
        return a.second < b.second;
    }
    return false;
}

int main ()
{
    ll t, n;
    scanf("%lld", &t);

    while (t--){
        scanf("%lld", &n);

        vector <pair<ll, ll>> v;

        for (ll i = 0; i < n; i++){
            ll x, y;
            scanf("%lld%lld", &x, &y);

            v.push_back(make_pair(x, y));
        }

        // sort(v.begin(), v.end());
        stable_sort(v.begin(), v.end(), customSortCondition);
        reverse(v.begin(), v.end());

        for (ll i = 0; i < n; i++){
            printf("%lld %lld\n", v[i].first, v[i].second);
        }
        

    }

    return 0;
}