#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    string s;cin >> s;
    int n = s.size();
    if(s[0] == s[n-1]) cout << s << "\n";
    else {
        if(s[0] == 'a'){
            cout << "b" + s.substr(1) << "\n";
        }
        else {
            cout << "a" + s.substr(1) << "\n";
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
