#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    sort(a.begin(), a.end());
    int fe=n-1,le=0;
    int fo=n-1,lo=0;
    int c=0;
    for(int i=0;i<n;i++) {
        if(a[i] % 2 == 0) {
            le = max(le, i);
            fe = min(fe, i);
        }
        else {
            lo = max(lo, i);
            fo = min(fo, i);
        }
    }

    if(fe <= le) {
        c = le - fe + 1;
    }
    
    if(fo <= lo) {
        c = max(c, lo - fo + 1);
    }

    cout << n-c << "\n";
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
