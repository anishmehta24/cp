#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
   int n,x;cin >> n >> x;
   vector<int> a(n);
   for(auto &i : a) cin >> i;

   sort(a.begin(), a.end());
   vector<int> pref(n);
   pref[0] = a[0];
   for(int i=1;i<n;i++) {
       pref[i] = pref[i-1] + a[i];
   }
   int ans=0;
   for(int i=0;i<n;i++) {
        int diff = x - pref[i];
        if(diff < 0) break;
        ans+= (1+ (diff/(i+1)));
   }
   cout << ans << endl;
   
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
