#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;cin >> n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }
    int ans=0;
    map<int,int> mp;
    for(int i=1;i<=n;i++) {
        mp[a[i]] = i;
    }

    for(int i=1;i<=n;i++) {
        int x = a[i];
        for(int m = x;m <=2ll*n;m+=x) {
            int j = m-i;
            if(j <= i) continue;
            if(j > n) break;

            int k = (int)(m/x);

            if(k<=2*n && mp[k] == j) {
                ans++;
                
            }
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
