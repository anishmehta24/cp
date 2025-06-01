#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;

    if (n%2 != 0) {
        cout << -1 << '\n';
        return;
    }
    if(n<4) {
        cout << -1 << '\n';
        return;
    }

    int x = (n+5)/6;
    int y = n/4;
    if(x > y) {
        cout << -1 << '\n';
        return;
    }   
    cout << x << ' ' << y << '\n';
    

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
