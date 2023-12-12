#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while (t--){
        ll B, y;
        cin >> B >> y;

        ll problems = B/y;

        ll ceil_var = (problems+1)/2;
        ll floor_var = problems/2;

        while((pow(ceil_var, 2) + pow(floor_var, 2) + (problems*y)) > B){
            problems--;
            ceil_var = (problems+1)/2;
            floor_var = problems/2;
            // cout << y << " " << problems << " " << ceil_var << " " << floor_var << endl;
            // cout << (pow(ceil_var, 2) + pow(floor_var, 2) + (problems*y)) << endl;
        }

        if (B/y < 2) cout << 0 << endl;
        else cout << pow(2, problems) << endl;
    }

    return 0;
}