#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    int r = 0;
    vector<int> ans;
    ans.push_back(a[0]);
    r++;
    while(r < n-1) {
        if(a[r-1] < a[r] != a[r] < a[r+1]) {
            ans.push_back(a[r]);
        }
        r++;
    }
    ans.push_back(a[n-1]);
    cout << ans.size() << "\n"; 
    for(auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";


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
