#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n,k,x;cin >> n >> k >> x;

    if(2*x >= k*(k+1) && 2*x <= n*(n+1)-(n-k)*(n-k+1)) { 
        cout << "YES\n";
        return;
    }
    cout << "NO\n";

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
