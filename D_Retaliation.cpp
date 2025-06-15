
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> a(n+1);
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    if(n == 1) {
        cout << "YES\n";
        return;
    }
    int x = n * a[n] - a[1];
    int y = (n*a[1] - a[n]) ;
    if(x < 0 || y < 0) {
        cout << "NO\n";
        return;
    }
    int d = (n*n -1);
    if(x % d != 0 || y % d != 0) {
        cout << "NO\n";
        return;
    }
    x/= d;
    y/= d;

    for(int i = 1; i <= n; ++i) {
        a[i] -=( x*i + (n-i+1)*y);
        if(a[i] != 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

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
