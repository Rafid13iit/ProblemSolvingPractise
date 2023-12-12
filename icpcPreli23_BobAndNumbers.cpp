#include<bits/stdc++.h>
using namespace std;

using namespace std;

long long calculate_K(long long i, long long A) {
    return abs(i % A - i % (A - 1));
}

int main() {
    int T;
    cin >> T;

    for (int case_num = 1; case_num <= T; case_num++) {
        long long A, N;
        cin >> A >> N;

        long long total_sum = 0;
        for (long long i = 1; i <= N; i++) {
            total_sum += calculate_K(i, A);
        }

        cout << "Case " << case_num << ": " << total_sum << endl;
    }

    return 0;
}