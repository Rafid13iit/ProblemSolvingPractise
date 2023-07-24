#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
vector<ll> decimalToBinary(ll decimal, ll n) {
    vector<ll> binary;
    ll tmp = n;
    
    while (tmp--) {
        ll remainder = decimal % 2;
        
        binary.push_back(remainder);
       
        decimal /= 2;
    }
  
    reverse(binary.begin(), binary.end());
    
    return binary;
}
 
void printBinary(const vector<ll>& binary) {
    for (ll bit : binary) {
        cout << bit;
    }
    cout << endl;
}
 
int main ()
{
    ll n;
    cin >> n;
 
    ll i = 0;
    while(i < pow(2, n)){
        
       printBinary(decimalToBinary(i, n));
       i++;
    }
    
    return 0;
}