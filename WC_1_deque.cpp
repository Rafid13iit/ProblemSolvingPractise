// time complexity of O(n * m^2) 

/*
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long int ll;
typedef  unsigned long long int llu;

int main ()
{
    ll t;
    cin >> t;

    while(t--){
        ll n, m;
        cin >> n >> m;

        ll a[n];
        for (ll i = 0; i < n; i++){
            cin >> a[i];
        }

        for ( ll i = 0, j = m-1; j < n; i++, j++){
            cout << *max_element(a + i, a + j + 1) << " ";
        }

        cout << endl;
    }

    return 0;
}
*/

// Using Deque

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        deque<int> dq;
        for (int i = 0; i < m; i++) {
            while (!dq.empty() && a[dq.back()] <= a[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }

        for (int i = m; i <= n; i++) {
            cout << a[dq.front()] << " ";

            while (!dq.empty() && dq.front() <= i - m) {
                dq.pop_front();
            }

            while (!dq.empty() && a[dq.back()] <= a[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        cout << endl;
    }

    return 0;
}
