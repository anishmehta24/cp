
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n , k ;cin >> n >> k;
    string s= "";
    for(int i=0;i<k;i++) {
        s+= '1';
    }
    for(int i=k;i<n;i++) {
        s+= '0';
    }
    cout << s << '\n';
    
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
