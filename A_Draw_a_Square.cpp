#include <bits/stdc++.h>
#define int long long 
const int MOD = 1e9 + 7;
using namespace std;


void solve() {
   int l,r,d,u;
   cin >> l >> r >> d >> u;
   if(l == r && r == d && d == u) {
       cout << "Yes" << endl;
       return;
   }
   cout << "No" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}