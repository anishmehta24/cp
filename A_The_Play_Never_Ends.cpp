#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    int k;cin >> k;
    if(k==1) {cout << "YES" << endl;return;}
    if(k==2) {cout << "NO" <<endl;return;}
    if(k%3==1) cout << "YES" << endl;
    else cout << "NO" << endl;
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