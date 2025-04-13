#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;cin >> n;
    int m;cin >> m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }

    int ans = 0;
    
    for (int j = 0; j < m; j++){
        vector<int> col;
        col.reserve(n);
        for (int i = 0; i < n; i++){
            col.push_back(a[i][j]);
        }
       
        sort(col.begin(), col.end());
        int pref = 0;
        for (int i = 0; i < n; i++){
            ans += col[i] * i - pref;
            pref += col[i];
        }
    }
    
    cout << ans << "\n";


   
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
