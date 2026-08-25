#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> desired(n);
    vector<int> apartment(m);

    for(int i = 0; i < n; i++)
        cin >> desired[i];

    for(int i = 0; i < m; i++)
        cin >> apartment[i];

    sort(desired.begin(), desired.end());
    sort(apartment.begin(), apartment.end());

    int i = 0, j = 0;
    int ans = 0;

    while(i < n && j < m) {
        if(abs(desired[i] - apartment[j]) <= k) {
            ans++;
            i++;
            j++;
        }
        else if(apartment[j] < desired[i] - k) {
            j++;
        }
        else {
            i++;
        }
    }

    cout << ans << "\n";
}