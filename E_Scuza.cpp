#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;

void solve() {
    int n;cin >> n ;
    int q;cin >> q;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    vector<int> k(q);
    for(auto &i : k) cin >> i;
    vector<int> pref(n,0);
    pref[0] = a[0];
    for(int i=1;i<n;i++) {
        pref[i] = pref[i-1] + a[i];
    }
    vector<int> prefmax(n,0);
    prefmax[0] = a[0];
    for(int i=1;i<n;i++) {
        prefmax[i] = max(prefmax[i-1],a[i]);
    }
    for(auto it:k) {
        int ind = upper_bound(prefmax.begin(),prefmax.end(),it) - prefmax.begin();
        if (ind < n) {
            cout << pref[ind] << " ";
        } else {
            cout << pref[n - 1] << " ";
        }

    }
    cout << "\n";
    
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
