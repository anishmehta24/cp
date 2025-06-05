#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,m;cin >> n >> m;
    vector<int> f(n+2,0);
    f[1] = 1;
    f[2] = 2;
    for(int i = 3;i <= n+1; i++) {
        f[i] = (f[i-1] + f[i-2]);
    }

    string ans = "";
    while(m--) {
        int w , l , h;
        cin >> w >> l >> h;
        vector<int> a = {w, l, h};
        sort(a.begin(), a.end());

        if(a[0] >= f[n] && a[1] >= f[n] && a[2] >= f[n+1]) {
            ans += '1';
        }
        else {
            ans += '0';
        }
    }
    cout << ans << "\n";

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
