#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string s,t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();

    vector<int> sa(26, 0), ta(26, 0);

    for (char c : s) sa[c - 'A']++;
    for (char c : t) ta[c - 'A']++;

    for (int i = 0; i < 26; ++i) {
        if (sa[i] < ta[i]) {
            cout << "NO\n";
            return;
        } 
    }

    vector<int> drop(26);
    for (int i = 0; i < 26; ++i)
        drop[i] = sa[i] - ta[i];

    string result;
    for (char c : s) {
        if (drop[c - 'A'] > 0) {
            drop[c - 'A']--;
        } 
        else {
            result += c; 
        }
    }

    if (result == t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    // precompute();
    while (t--) {
        solve();
    }
}
