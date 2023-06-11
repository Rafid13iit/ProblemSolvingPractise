#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main ()
{
    ll n, c = 0, tmp = 0;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    reverse(a, a+n);

    for (int i = 0; i < n; i++){
        
        tmp = 0;

        if (a[i] == 4) c++;
        else if ((a[i] + *min_element(a, a+n)) == 4){
            c++;
            n--;
        }
        else if ((a[i] + *min_element(a, a+n)) < 4 && i+1 != n){

            tmp = a[i];

            while(tmp < 4){
                tmp += *min_element(a, a+n);
                n--;

                if (tmp == 4) {
                    c++;
                    break;
                }
                else if(i+1 == n){
                    c++;
                    break;
                }
            }

        }
        else c++;

    }

    cout << c;
    

    return 0;
}