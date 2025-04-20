#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    string p, s;
    cin >> p >> s;

    int n = p.size();
    int m = s.size();

    int l = 0, r = 0;
    bool possible = true;

    while (l<n && r<m) {
        if (p[l] == s[r]) {
            int cp = 0;
            while (l+cp < n && p[l+cp] == p[l]) {
                cp++;
            }
            int cs = 0;
            while (r+cs < m && s[r+cs] == p[l]) {
                cs++;
            }
            if (cs<cp || cs > 2*cp) {
                cout << "NO\n";
                return;
            }
            l += cp;
            r += cs;
        }
        else {
            cout << "NO\n";
            return;
        }

       
    }

    if (l!=n || r!=m) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
