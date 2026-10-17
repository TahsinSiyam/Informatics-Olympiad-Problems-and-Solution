
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (char c : s) {
        if (c != 'a' && c != 'e' && c != 'i' &&
            c != 'o' && c != 'u' && c != 'y') {
            cout << "." << c;
        }
    }

    return 0;
}
