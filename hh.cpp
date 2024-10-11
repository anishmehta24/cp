#include <iostream>
using namespace std;

// Function to count the number of odd integers from 1 to x
long long count_odd(long long x) {
    return (x + 1) / 2;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        long long n, k;
        cin >> n >> k;

        // Calculate the range [L, R] = [n - k + 1, n]
        long long L = max(1LL, n - k + 1);
        long long R = n;

        // Count the number of odd integers in the range [L, R]
        long long odd_count = count_odd(R) - count_odd(L - 1);

        // If the number of odd integers is odd, the sum is odd; otherwise, it's even
        if (odd_count % 2 == 0) {
            cout << "YES" << endl; // Even number of leaves
        } else {
            cout << "NO" << endl; // Odd number of leaves
        }
    }

    return 0;
}
