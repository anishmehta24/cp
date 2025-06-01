#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;cin >> n;
    int w;cin >> w;

    map<int,int> mp;
    for(int i=0;i<n;i++) {
        int x;cin >> x;
        int y = log2(x);
        mp[y]++;
    }
    
    int ans = 0;
    while(n > 0) {
        int rem = w;
        for(int i=30;i>=0;i--) {
            while(mp[i] > 0 && rem >= (1 << i)) {
                rem -= (1 << i);
                mp[i]--;
                n--;
            }
        }
        ans++;
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
