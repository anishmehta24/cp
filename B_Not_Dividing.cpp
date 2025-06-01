#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &x:a) cin >> x;
    for(int i=0;i<n;i++) {
        if(a[i] == 1) {
            a[i]++;
        }
    }
    for(int i=0;i<n-1;i++) {
        if(a[i+1] % a[i] == 0) {
            a[i+1]++;
        }
    }

    for(int i=0;i<n;i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

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
