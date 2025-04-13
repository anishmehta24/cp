#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    int ans=0;

    map<int,int> mp;
    for(int i=0;i<n;i++) {
        a[i]-=i;
        ans += mp[a[i]];
        mp[a[i]]++;
    }
    cout << ans << "\n";
     
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
