#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;cin >> n;
    int k; cin >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    sort(a.begin(), a.end());

    if(k >= 3) {
        cout << "0\n";
        return;
    }
    int ans = a[0];
    for(int i = 0; i < n - 1; i++) {
        ans = min(ans , a[i+1] - a[i]);
    }
    if(k == 1) {
        cout << ans << "\n";
        return;
    }
    if(k == 2) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<i;j++) {
                int x = a[i] - a[j];
                int p = lower_bound(begin(a), end(a), x) - begin(a);
                if (p < n) ans = min(ans, a[p] - x);
                if (p > 0) ans = min(ans, x - a[p - 1]);
            }
        }
        cout << ans << "\n";
        return;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    // precompute();
    while (t--) {
        solve();
    }
}
