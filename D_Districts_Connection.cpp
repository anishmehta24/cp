#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    vector<pair<int,int>> ans;
    int ind=-1;
    for(int i=1;i<n;i++) {
        if(a[i] != a[0]) {
            ind = i;
            ans.push_back({1, i+1});
        }
    }

    if(ind == -1) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for(int i=1;i<n;i++) {
        if(a[i] == a[0]) {
            ans.push_back({ind+1, i+1});
        }
    }
    for(auto &i : ans) {
        cout << i.first << " " << i.second << "\n";
    }
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

