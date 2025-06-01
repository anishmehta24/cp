#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    
    int g = a[0] - 1;
    for(int i=1;i<n;i++) {
        g =gcd(g , a[i] - (i+1));
    }
    cout << g << "\n";
    

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
