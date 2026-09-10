#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> marks(n);

    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    sort(marks.begin(), marks.end());

    int high = marks[n - 1];
    int nerds = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (marks[i] == high)
            nerds++;
        else
            break;
    }

    cout << nerds + 1 << '\n';

    return 0;
}