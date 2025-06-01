#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;cin >> n;
    int m;cin >> m;
    vector<int> a(n);
    for(auto &x : a) {
        cin >> x;
    }
    vector<int> b(m);
    for(auto &x : b) {
        cin >> x;
    }
    sort(a.rbegin(), a.rend());
    int j = 0;
    int ans = 0;

    for(int i=0;i<n;i++) {
        if(j < i+1 && b[j] < b[a[i] - 1]) {
            ans += b[j];
            j++;
        }
        else {
            ans += b[a[i] - 1];
        }
    }

    cout << ans << '\n';
    

    

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
