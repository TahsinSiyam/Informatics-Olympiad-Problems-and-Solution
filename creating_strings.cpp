#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();

    // Total permutations
    int perm = factorial(n);

    // Count frequency of each character
    map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }

    // Divide by factorial of each repeated character
    for (auto [character, count] : freq) {
        perm /= factorial(count);
    }

    cout << perm << "\n";

    // Generate distinct permutations in lexicographical order
    sort(s.begin(), s.end());

    do {
        cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}