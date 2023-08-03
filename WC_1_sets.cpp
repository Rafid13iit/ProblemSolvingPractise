#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long int ll;
typedef  unsigned long long int llu;

int main ()
{
    ll q;
    cin >> q;

    set <ll> s;

    while(q--){
        ll type, element;
        cin >> type >> element;
        
        if(type == 1){
            s.insert(element);
        }

        else if(type == 2){
            s.erase(element);
        }

        else{
            set<ll>::iterator itr = s.find(element);

            if (itr == s.end()) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }

    return 0;
}