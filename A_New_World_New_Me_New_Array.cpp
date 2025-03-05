#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    ll n;cin >> n;
    ll k,p;
    cin >> k >> p;
    if(k%p==0) {
        if(abs(k/p) <= n) {
            cout << abs(k/p) << endl;
            return;
        }
        else {
            cout << -1 << endl;
        }
    }
    else {
        int x = abs(k/p) + 1;
        if(abs(x) <= n) {
            cout << abs(x) << endl;
            return;
        }
        else {
            cout << -1 << endl;
        }
    }
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