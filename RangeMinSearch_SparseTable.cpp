#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 2e6;
int a[MAX_N];
int m[MAX_N][20]; // Assuming maximum LOG value is 20
int bin_log[MAX_N];

int query(int L, int R) { // O(1)
    int length = R - L + 1;
    int k = bin_log[length];
    return min(m[L][k], m[R - (1 << k) + 1][k]);
}

int main() {
    // 1) read input
    int n, q;
    cin >> n >> q;

    // Dynamically compute LOG based on the input size
    int LOG = log2(n) + 1;
    
    // Initialize bin_log array
    bin_log[1] = 0;
    for (int i = 2; i <= n; i++) {
        bin_log[i] = bin_log[i / 2] + 1;
    }

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[i][0] = a[i];
    }

    // 2) preprocessing, O(N*log(N))
    for (int k = 1; k < LOG; k++) {
        for (int i = 0; i + (1 << k) - 1 < n; i++) {
            m[i][k] = min(m[i][k - 1], m[i + (1 << (k - 1))][k - 1]);
        }
    }

    // 3) answer queries
    for (int i = 0; i < q; i++) {
        int L, R;
        cin >> L >> R;
        cout << query(L - 1, R - 1) << endl;
    }

    return 0;
}
