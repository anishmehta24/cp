#include <bits/stdc++.h>
#define int long long 
const int MOD = 1e9 + 7;
using namespace std;


void solve() {
   int n;cin >> n;
   int k;cin >> k;
   if(n%2==0) {
    cout << (n+(k-1)-1)/(k-1) << endl;
   }
   else {
    cout << 1 + ((n-k) + (k-1)-1)/(k-1) << endl;
   }
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