#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    if(a[n-2] > a[n-1]) {
        cout << -1 << "\n";
        return;
    }
    if(a[n-1] < 0) {
        if(is_sorted(a.begin(), a.end())) {
            cout << 0 << "\n";
            return;
        } else {
            cout << -1 << "\n";
            return;
        }
        cout << -1 << "\n";
        return;
    }
    vector<vector<int>> ans;
    for(int i=0;i<n-2;i++) {
        a[i] = a[n-2] - a[n-1];
        ans.push_back({i+1, n-1, n});
    }
    // if(is_sorted(a.begin(), a.end())) {
        cout << ans.size() << "\n";
        for(auto &i : ans) {
            cout << i[0] << " " << i[1] << " " << i[2] << "\n";
        }
    // } else {
        // cout << -1 << "\n";
    // }


   
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
