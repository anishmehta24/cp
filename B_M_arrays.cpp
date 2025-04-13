#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n,m;cin >> n >> m;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        mp[a[i] % m]++;
    } 
    int ans=0;
    for(auto &i : mp) {
        if(i.first == 0) ans++;
        else if(2* i.first == m) ans++;
        
        else if(2*i.first < m || mp.find(m-i.first) == mp.end()) {
            int x = i.second, y = mp[m - i.first];
            ans += 1 + max(0ll, abs(x - y) - 1);
        }
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
