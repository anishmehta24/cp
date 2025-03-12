#include <bits/stdc++.h>
#define int long long 
const int MOD = 1e9 + 7;
using namespace std;


void solve() {
   int n;cin >> n;
   vector<int> a(n);
   for(auto &it:a) cin >> it;

   int sum = accumulate(a.begin(),a.end(),0LL);
   cout << sum - (n - 1) << endl;
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