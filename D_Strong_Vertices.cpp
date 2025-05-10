#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 998'244'353;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x:a) cin >> x;
    vector<int> b(n);
    for(auto &x:b) cin >> x;
    vector<int> c(n);
    for(int i=0;i<n;i++) {
        c[i] = a[i] - b[i];
    }
    int x=0;
    sort(c.begin(),c.end());
    for(int i=n-1;i>=0;i--) {
        if(c[i] == c[n-1]) {
            x++;
        } else {
            break;
        }
    }
    cout << x << "\n";

    for(int i=0;i<n;i++) {
        if(a[i] - b[i] == c[n-1]) {
            cout << i+1 << " ";
        }
    }
    cout << "\n";

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
