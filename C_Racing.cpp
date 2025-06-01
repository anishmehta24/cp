#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> d(n);
    for(auto &x : d) cin >> x;
    vector<int> l(n) , r(n);
    for(int i=0;i<n;i++) {
        cin >> l[i];
        cin >> r[i];
    }
    vector<int> ans(n);
    for(int i=0;i<n;i++) {
        if(d[i] != -1){
            ans[i] = d[i];
        }
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
