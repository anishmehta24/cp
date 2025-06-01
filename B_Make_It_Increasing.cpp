#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int c=0;
    for (int i = n - 2; i >= 0; i--) {
        while (a[i] >= a[i+1] && a[i] > 0) {
            a[i] /= 2;
            c++;
        }
        if (a[i] == a[i + 1]) {
            cout << -1 << '\n';
            return;
        }
    }

    cout << c << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    // precompute();
    while (t--) {
        solve();
    }
}
