#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string sum;
    cin >> sum;
    
    // 1. Remove all the '+' signs
    sum.erase(remove(sum.begin(), sum.end(), '+'), sum.end());
    
    // 2. Sort the digits in ascending order
    sort(sum.begin(), sum.end());
    
    // 3. Output the digits separated by '+'
    for (int i = 0; i < sum.length(); i++) {
        cout << sum[i];
        // Print '+' after every digit except the very last one
        if (i < sum.length() - 1) {
            cout << "+";
        }
    }
    
    return 0;
}