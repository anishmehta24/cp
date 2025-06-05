#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;

    int i=0;
    while(pow(2,i) <= n) {
        i++;
    }

    int ans = 2*i + 1;
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
