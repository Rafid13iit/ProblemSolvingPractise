#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long int ll;
typedef  unsigned long long int llu;

int main ()
{
    ll q;
    cin >> q;

    map <string, vector<ll> > m;

    while(q--){
        string name;
        ll type, mark;
        cin >> type >> name;

        if (type == 1){

            cin >> mark;
        
            int sum = mark;
            for (int val : m[name]) {
                sum += val;
            }
            m[name].push_back(sum);
        }

        else if (type == 2){
            m[name].clear();
            m[name].push_back(0);

        }

        else{
            cout << m[name].back() << endl;
        }
    }

    return 0;
}