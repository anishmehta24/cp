#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;

void solve() {
    int n;cin >> n ;
    vector<vector<char>> a(n,vector<char>(n,0));
    for(auto &i : a) {
        for(auto &j : i) cin >> j;
    }
    int ans = 0;
    for (int i = 0; i < (n + 1) / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            int x1 = a[i][j] - '0';
            int x2 = a[j][n - 1 - i] -'0';
            int x3 = a[n - 1 - i][n - 1 - j] -'0';
            int x4 = a[n - 1 - j][i] -'0';

            int ones = x1 + x2 + x3 + x4;
            ans += min(ones, 4 - ones);
        }
    }
    cout << ans << endl;
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