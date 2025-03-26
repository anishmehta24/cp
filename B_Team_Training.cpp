#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;



void solve() {
    int n,x;cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend()); 
    int ans =0;
    int c=0;
    for(int i=0;i<n;i++) {
        c++;
        if(c * a[i] >=x) {
            ans++;
            c=0;
        }
    }
    cout << ans << endl;
    
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




