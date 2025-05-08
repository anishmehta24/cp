#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int n) {
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i == 0) {
            return true;
        }
    }
    return false;
}

void solve() {
    int n,k;cin >> n >> k;
    if(n<=k) {
        cout << 1 << "\n";
        return;
    }
    if(!check(n)) {
        cout << n << "\n";
        return;
    }
    int ans = n;
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i == 0) {
            if(i <= k) {
                ans = min(ans,n/i);
            }
            if(n/i <= k) {
                ans = min(ans,i);
            }
        }
    }
    cout << ans << "\n";

    
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
