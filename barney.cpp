#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    const int INF = 1e9;

    // best[r] = minimum dp[j] for prefix remainder r
    vector<int> best(k, INF);

    // Empty prefix:
    // prefix[0] = 0, dp[0] = 0
    best[0] = 0;

    long long prefix = 0;
    int dp = 0;

    for (int i = 0; i < n; i++) {

        prefix = (prefix + a[i]) % k;

        // Option 1: Keep a[i]
        int new_dp = dp + 1;

        // Option 2: Delete a subarray ending at i
        if (best[prefix] != INF) {
            new_dp = min(new_dp, best[prefix]);
        }

        dp = new_dp;

        // This prefix can now be used for future deletions
        best[prefix] = min(best[prefix], dp);
    }

    cout << dp << '\n';

    return 0;
}