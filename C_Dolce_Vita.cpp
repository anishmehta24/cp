#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
   int n,x;cin >> n >> x;
   vector<int> a(n);
   for(auto &i : a) cin >> i;

   int sum = accumulate(a.begin(),a.end(),0);
   
   sort(a.begin(),a.end());
   
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    solve();
}
