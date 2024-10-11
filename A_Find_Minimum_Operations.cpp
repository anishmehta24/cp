#include <iostream>
using namespace std;

int solve(int n, int k) {
    if (k == 1) {
        return n;
    }

    int ans = 0;
    while (n > 0) {
        ans += n % k;  
        n /= k; 
    }
    return ans; 
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        cout << solve(n, k) << endl;
    }

    return 0;
}
