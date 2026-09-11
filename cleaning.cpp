#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int turns_one = 0;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            turns_one++;
        }
    }

    cout << turns_one << '\n';

    return 0;
}