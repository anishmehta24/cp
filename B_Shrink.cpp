#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;

    cout << 1 << " " ;
    for(int i=n ;i>=2;i--) {
        cout << i << " ";
    }
    cout << '\n';

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
