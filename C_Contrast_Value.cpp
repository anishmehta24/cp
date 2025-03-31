#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;

void solve() {
    int n;cin >> n ;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    int ans = unique(a.begin(),a.end()) - a.begin();
    vector<int> b = a;
    
    for(int i=0;i+2<n;i++) {
        if(b[i] < b[i+1] && b[i+1] < b[i+2]) {
            ans--;
        }
        if(b[i] > b[i+1] && b[i+1] > b[i+2]) {
            ans--;
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




