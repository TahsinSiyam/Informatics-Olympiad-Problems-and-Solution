#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (!(cin >> n)) return 0;
    
    int current_passengers = 0;
    int max_capacity_needed = 0;
    
    for (int i = 0; i < n; ++i) {
        int exit_count, enter_count;
        cin >> exit_count >> enter_count;
        
        // Update current passenger count
        current_passengers = current_passengers - exit_count + enter_count;
        
        // Update the peak capacity required
        max_capacity_needed = max(max_capacity_needed, current_passengers);
    }
    
    cout << max_capacity_needed << "\n";
    
    return 0;
}
