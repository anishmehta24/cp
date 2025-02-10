#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    string s;cin >> s;
    string ans = "";
    ans = s.substr(0,s.size()-2)+"i";
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}