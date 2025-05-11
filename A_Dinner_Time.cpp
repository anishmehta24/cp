#include <bits/stdc++.h>
using namespace std;
#define int long long



void solve() {
    int n,m,p,q;cin >> n >> m >> p >> q;

    if (n%p != 0) {
        cout << "YES\n";
        return;
    }
    if(m == (n/p) * q) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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
