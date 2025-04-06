#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n,m;cin >> n >> m;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    sort(a.begin(),a.end());
    int ans=0;
    for(int i=0;i<m;i++) {
        if(a[i] < 0) {
            ans+=abs(a[i]);
        }
        else {
            break;
        }
    }
    cout << ans << "\n";

   


}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
}



