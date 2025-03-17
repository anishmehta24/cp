#include <bits/stdc++.h>
#define int long long 
const int MOD = 1e9 + 7;
using namespace std;


void solve() {
   int n;cin >> n;
   int k;cin >> k;
    vector<int> a(n);
    for(auto &it:a) cin >> it;
    vector<int> b = a;
    sort(a.rbegin(),a.rend());
    int ans = 0;
    for(int i=0;i<k;i++){
        ans+=a[i];
        b.erase(find(b.begin(),b.end(),a[i]));
    }
    int maxi=b[0];
    for(int i=0;i<b.size();i++) {
       maxi= max(maxi,b[i]);
    }
    ans+=maxi;
    cout << ans << endl;
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