#include <bits/stdc++.h>
using namespace std;
#define int long long

bool is_regular(const string &s) {
    int bal = 0;
    for (char c: s) {
        if (c == '(') bal++;
        else bal--;
        if (bal < 0) return false;
    }
    return (bal == 0);
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt_open = 0;
    for (char c: s) if (c == '(') cnt_open++;
    if (cnt_open * 2 != n) {
        cout << -1 << "\n";
        return;
    }
    if (is_regular(s)) {
        cout << 1 << "\n";
        for (int i = 0; i < n; i++) {
            cout << 1 << (i + 1 < n ? ' ' : '\n');
        }
        return;
    }
    string t = s;
    reverse(t.begin(), t.end());
    if (is_regular(t)) {
        cout << 1 << "\n";
        for (int i = 0; i < n; i++) {
            cout << 1 << (i + 1 < n ? ' ' : '\n');
        }
        return;
    }
    vector<bool> used(n, false);
    int l = 0, r = n - 1;
    while (true) {
        while (l < n && s[l] == ')') l++;
        while (r >= 0 && s[r] == '(') r--;
        if (l < r) {
            used[l] = used[r] = true;
            l++;
            r--;
        } 
        else {
            break;
        }
    }
    cout << 2 << "\n";
    for (int i = 0; i < n; i++) {
        cout << (used[i] ? 1 : 2) << (i + 1 < n ? ' ' : '\n');
    }
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
