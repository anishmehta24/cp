#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    int ans = 0;
    int t1 = INT_MAX, t2 = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (t1 > t2) {
            swap(t1, t2);
        }
        if (a[i] <= t1) {
            t1 = a[i];
        } 
        else if (a[i] <= t2) {
            t2 = a[i];
        } 
        else {
            t1 = a[i];
            ans++;
        }
    }
    cout << ans << endl;

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
