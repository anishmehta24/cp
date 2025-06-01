#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    vector<int> b(n);
    for(auto &x:b) cin >> x;
    map<int,int> mp;
    for(int i = 0; i < n; ++i) {
        mp[b[i]] = i;
    }
    int ans=0;
    int k = mp[a[0]];
    for(int i = 1; i < n; ++i) {
        if(mp[a[i]] < k) {
            ans++;
        }
        else {
            k = mp[a[i]];
        }
    }
    cout << ans << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin >> t;
    // precompute();
    while (t--) {
        solve();
    }
}
