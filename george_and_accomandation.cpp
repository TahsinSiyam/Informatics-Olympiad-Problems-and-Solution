#include <bits/stdc++.h>
using namespace std;

//Solution for https://codeforces.com/problemset/problem/467/A

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int room = 0;

    for (int i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;

        if (q - p >= 2)
        {
            room++;
        }
    }

    cout << room << '\n';

    return 0;
}