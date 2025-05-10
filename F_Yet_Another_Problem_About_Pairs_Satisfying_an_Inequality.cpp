#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n; cin >> n;
    vector<int> a(n+1,-1);
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }
    vector<int> temp;
    int ans = 0;
    for(int i=1;i<=n;i++) {
        if(a[i] >= i) continue;
        ans += lower_bound(temp.begin(),temp.end(),a[i]) - temp.begin();
        temp.push_back(i);
    }
    cout << ans << "\n";

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
