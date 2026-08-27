#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long m;

    cin >> n >> m;

    vector<long long> w(n);

    long long g = 0;

    for (int i = 0; i < n; i++) {
        cin >> w[i];
        g = gcd(g, w[i]);
    }

    long long need = 0;

    for (long long x : w) {
        need += x / g;
    }

    long long answer = (m / need) * need;

    cout << answer << '\n';

    return 0;
}