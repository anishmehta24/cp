#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x:a) cin >> x;
    for(int i=0;i<n;i++) {
        if(i%2!=0) {
            a[i]  *= -1;
        }
    }
    vector<int> pref(n);
    pref[0] = a[0];
    for(int i=1;i<n;i++) {
        pref[i] = pref[i-1] + a[i];
    }
    map<int,int> mp; 
    for(int i=0;i<n;i++) {
        mp[pref[i]]++;
    }
    for(auto &x:mp) {
        if(x.second > 1 || x.first == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
