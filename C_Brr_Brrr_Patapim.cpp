#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for(auto &i : a) {
        for(auto &j : i) {
            cin >> j;
        }
    }

    map<int,int> mp;
    set<int> s;
    for(int i=0;i<n;i++) {
        mp[i+1]=a[0][i];
        s.insert(a[0][i]);
    }

    for(int i=1;i<n;i++) {
        mp[i+n] = a[i][n-1];
        s.insert(a[i][n-1]);

    }


    for(int i=1;i<=2*n;i++){
        if(s.find(i) == s.end()) {
            mp[0] = i;
            break;
        }
    }

    for(int i=0;i<2*n;i++){
        cout << mp[i] << " ";
    }
    cout << "\n";


   
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

