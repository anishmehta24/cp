
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int a , b , k ;cin >> a >> b >> k;
    vector<int> x(k) , y(k);
    for(auto &it:x) cin >> it;
    for(auto &it:y) cin >> it;
    map<int,int> mp , mp2;
    for(int i=0; i < k; ++i) {
        mp[i+1] = x[i];
        mp2[i+1] = y[i];
    }
    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
