#include <bits/stdc++.h>
using namespace std;
#define int long long

int pref(int x) {
    return x * (x+1) / 2;
}

int check(int m, int k) {
    if (m <= k) {
        return pref(m);
    } else {
        int d = m - k;
        int t = pref(k-1) - pref((k-1) - d);
        return pref(k) + t;
    }
}

void solve() {
    int k,x;cin >> k >> x;
    int l = 1;
    int r = 2*k - 1;
    int ans = 2*k - 1;
    while(l <= r) {
        int mid = (l+r)/2;
        if(check(mid,k) >= x) {
            ans = mid ;
            r = mid-1;
        } else {
            l = mid+1;
        }
    }

    cout << ans  << "\n";
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
