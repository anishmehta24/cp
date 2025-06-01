#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    if(a >=b && c >= b) {
        cout << "Gellyfish\n";
        return;
    }
    if(a >= d && c >= d) {
        cout << "Gellyfish\n";
        return;
    }
    cout << "Flower\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    // precompute();
    while (t--) {
        solve();
    }
}
