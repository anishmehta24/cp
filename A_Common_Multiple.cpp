#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    set<int> s(a.begin(),a.end());
    cout << s.size() << "\n";
    

    
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
