#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int l,r;cin >> l >> r;
    int ans = 0;
    for(int i=l; i <= r-2; ) {
        if(i%2 != 0) {
            ans ++;
            i+=3;
        }
        else i++;
    }
    cout << ans << '\n';

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    // precompute();
    while (t--) {
        solve();
    }
}
