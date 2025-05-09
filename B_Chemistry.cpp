#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n,k;cin >> n >> k;
    string s;cin >> s;
    map<char,int> mp;
    for(int i=0;i<n;i++) {
        mp[s[i]]++;
    }
    int odd = 0;
    int even = 0;
    for(auto &x : mp) {
        if(x.second % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    if(k==0 && odd==1) {
        cout << "YES\n";
        return;
    }
    if(odd > k+1){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";


}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
