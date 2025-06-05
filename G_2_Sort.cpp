#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    int k;cin >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    vector<int> ok(n, 0);
    for(int i = 0; i < n - 1; i++) {
        if (a[i] < 2LL * a[i + 1]) {
            ok[i] = 1;
        }
    }
    vector<int> pref(n, 0);
    for(int i=1;i<n;i++) {
        pref[i] = pref[i - 1] + ok[i - 1];
    }

    int ans = 0;
    for(int i=0;i<n-k;i++) {
        int l = i;
        int r = i + k;
        if(pref[r] - pref[l] == k) {
            ans++;
        }
    }
    cout << ans << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
