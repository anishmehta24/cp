#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;cin >> n;

    bool flag = false;
    for (int a = 2; a<= sqrt(n) && !flag; ++a) {
        if (n%a != 0) continue;

        int rem = n/a;
        for (int b = a+1; b <= sqrt(rem) && !flag; ++b) {
            if (rem % b != 0) continue;

            int c = rem / b;
            if (c > b && c != a && c != b) {
                cout << "YES\n";
                cout << a << " " << b << " " << c << "\n";
                flag = true;
                break;
            }
        }
    }
    if (!flag) {
        cout << "NO\n";
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    
}
