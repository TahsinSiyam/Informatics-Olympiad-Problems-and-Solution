#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // All lucky numbers up to 1000
    int lucky[] = {4, 7, 47, 74, 44, 444, 447, 474, 477, 777, 774, 744};
    bool isAlmostLucky = false;
    
    for (int i = 0; i < 12; i++) {
        if (n % lucky[i] == 0) {
            isAlmostLucky = true;
            break;
        }
    }
    
    if (isAlmostLucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
