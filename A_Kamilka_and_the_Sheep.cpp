#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;



void solve() {
    int n;cin >> n ;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    sort(a.begin(),a.end());    
    int ans = 0;
    // int mn =a[0],mx=a[0];
    // for(int i=0;i<n;i++) {
    //     mn = min(mn,a[i]);
    //     mx = max(mx,a[i]);
    // }
    cout << a[n-1]-a[0] << endl;
    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
}




