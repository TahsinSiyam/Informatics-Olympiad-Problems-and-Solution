#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;

    for (int r = 1; r <= 5; r++) {
        for (int c = 1; c <= 5; c++) {
            cin >> x;

            if (x == 1) {
                cout << abs(r - 3) + abs(c - 3) << '\n';
            }
        }
    }

    return 0;
}