#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    string s;cin >> s;

    vector<int> pos;
    for(int i = 0; i < n; ++i) {
        if (s[i] == '*') {
            pos.push_back(i);
        }
    }

    int m = pos.size();
    if(m <= 1) {
        cout << "0\n";
        return;
    }
    vector<int> b(m);
    for(int i = 0; i < m; ++i) {
        b[i] = pos[i] - i;
    }

    int median = b[m / 2];
    int ans = 0;
    for(int i = 0; i < m; ++i) {
        ans += abs(b[i] - median);
    }
    cout << ans << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
