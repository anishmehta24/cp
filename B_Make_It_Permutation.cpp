#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n ;cin >> n;
    cout << 2*n-1 << '\n';
    for(int i = 1;i <= n;i++) {
        cout << i << " 1 " << i << '\n';
        if(i!=n) cout << i << " " << i+1 << " " << n << '\n';
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
