#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string s;cin >> s;
    int c = 0;
    int n = s.size();

    for(int i=0;i<n-1;i++) {
        
        if(s[i] == '(') c++;
        else c--;
        if(c == 0) {
            cout << "YES\n";
            return;
        }
        
    }
    cout << "NO\n";
    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    // precompute();
    while (t--) {
        solve();
    }
}
