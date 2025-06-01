#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    int q;cin >> q;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    vector<int> pref(n+1,0);
    for(int i=1;i<=n;i++) {
        pref[i] = pref[i-1] + a[i-1];
    }
    int sum = pref[n];
    while(q--) {
        int l,r;cin >> l >> r;
        int k;cin >> k;
        int nsum = sum - (pref[r] - pref[l-1]);
        nsum += (r-l+1) * k;
        if(nsum % 2 != 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

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
