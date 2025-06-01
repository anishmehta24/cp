#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    string s; cin >> s;
    int x = stoi(s);
    int a = sqrt(x);
    double b = sqrt(x);
    if(a == b) {
        cout << "0 " << a << endl;
    }
    else cout << -1 << endl;
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
