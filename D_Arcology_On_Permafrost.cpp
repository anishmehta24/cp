#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        int max_mex = n - m * k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = i % max_mex;  // fill cyclically from 0 to max_mex - 1
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
