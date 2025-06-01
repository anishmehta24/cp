#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;

    vector<int> a(n);
    map<int,int> mp;
    for(auto &x : a) {
        cin >> x;
        mp[x]++;
    }

    int maxi = 0;
    for(auto &x : mp) {
        maxi = max(maxi, x.second);
    }

    int ans = 0;
    while(maxi < n) {
        ans += 1 + min(n - maxi, maxi);
        maxi +=  min(n - maxi, maxi);
    }

    cout << ans << "\n";



    
    

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
