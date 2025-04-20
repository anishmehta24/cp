#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int sum = accumulate(a.begin(), a.end(), 0LL);
    int pref = 0,maxpref = 0;
    for(int i = 0; i < n-1; i++) {
        pref += a[i];
        maxpref = max(maxpref, pref);
    }

    int suff = 0, maxsuff = 0;
    for(int i = n - 1; i > 0; i--) {
        suff += a[i];
        maxsuff = max(maxsuff, suff);
    }
    if(maxpref >= sum || maxsuff >= sum) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    
}
