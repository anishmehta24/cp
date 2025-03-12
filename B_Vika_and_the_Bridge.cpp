#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> c(n);
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }
        vector<int> last(k, -1);
        vector<int> x(k), y(k);
        for (int i = 0; i < n; ++i) {
            int m = i - last[c[i] - 1];
            if (m > x[c[i] - 1]) {
                y[c[i] - 1] = x[c[i] - 1];
                x[c[i] - 1] = m;
            } else if (m > y[c[i] - 1]) {
                y[c[i] - 1] = m;
            }
            last[c[i] - 1] = i;
        }
        for (int i = 0; i < k; ++i) {
            int m = n - last[i];
            if (m > x[i]) {
                y[i] = x[i];
                x[i] = m;
            } else if (m > y[i]) {
                y[i] = m;
            }
        }
        int ans = 1e9;
        for (int i = 0; i < k; ++i) {
            ans = min(ans, max((x[i] + 1) / 2, y[i]));
        }
        cout << ans - 1 << "\n";
    }
    return 0;
}
