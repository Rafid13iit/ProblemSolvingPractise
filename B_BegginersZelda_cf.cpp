#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<int> indegree(n);

        while (n--){
            ll u, v;
            cin >> u >> v;

            indegree[u-1]++;
            indegree[v-1]++; 
        }

        ll ans = count(indegree.begin(), indegree.end(), 1);
        cout << (ans + 1) / 2 << endl;
    }

    return 0;
}
