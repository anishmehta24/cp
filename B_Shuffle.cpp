#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,x,m;cin >> n >> x >> m;
    int a = x , b = x;
    while(m--) {
        int l,r;cin >> l >> r;
        if(max(a,l) <= min(b,r)) {
            a = min(a,l);
            b = max(b,r);
        }
    }
    cout << b - a + 1 << "\n";
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
