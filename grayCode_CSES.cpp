#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


vector<ll> binary;
vector<ll> prev_binary;

vector<ll> decimalToBinary(ll decimal, ll n) {
    ll tmp = n;
    
    while (tmp--) {
        ll remainder = decimal % 2;
        
        binary.push_back(remainder);
       
        decimal /= 2;
    }
  
    reverse(binary.begin(), binary.end());
    
    return binary;
}

void printBinary(const vector<ll>& binary, const vector<ll>& prev_binary) {
    for (ll i = 0; i < binary.size(); i++) {
        if (binary[i] == prev_binary[i]) cout << 0;
        else cout << 1;
    }
    cout << endl;
}

int main ()
{
    ll n;
    cin >> n;

    ll i = 0;

    printBinary(decimalToBinary(i, n), decimalToBinary(i, n));
    i++;

    while(i < pow(2, n)){
        
       printBinary(decimalToBinary(i, n), decimalToBinary(i-1, n));
       i++;
    }
    
    return 0;
}