#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long b, c, d;
        cin >> b >> c >> d;
        
        long long a = 0;
        bool valid = true;
        
        for (int i = 0; i < 62; i++) {
            // Get the i-th bit of b, c, and d
            int bi = (b >> i) & 1;
            int ci = (c >> i) & 1;
            int di = (d >> i) & 1;
            
            // Check if there is a valid assignment for the i-th bit of a
            if (di == 0) {
                if (bi == 1 && ci == 0) {
                    a |= (1LL << i);  // Set the i-th bit of a to 1
                } else if (bi == 0 && ci == 1) {
                    valid = false;
                    break;
                }
                // Otherwise, a's i-th bit stays 0
            } else {
                if (bi == 0 && ci == 1) {
                    a |= (1LL << i);  // Set the i-th bit of a to 1
                } else if (bi == 1 && ci == 0) {
                    valid = false;
                    break;
                }
                // Otherwise, a's i-th bit stays 0
            }
        }
        
        if (valid) {
            cout << a << endl;
        } else {
            cout << -1 << endl;
        }
    }
    
    return 0;
}
