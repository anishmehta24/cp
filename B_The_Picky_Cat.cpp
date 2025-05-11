#include <bits/stdc++.h>
using namespace std;
#define int long long



void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int x = abs(a[0]);
    int c=0;
    for(int i=1;i<n;i++) {
        if(abs(a[i]) < x) c++;
    }

    int m = (n/2);

    if(c <= m) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
