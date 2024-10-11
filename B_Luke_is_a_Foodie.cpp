#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int

using namespace std;

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    ll l = a[0] - x, r = a[0] + x;
    ll ans = 0;
    for (ll i = 1; i < n; i++) {
        r = min(r, a[i] + x);
        l = max(l, a[i] - x);
        if (r < l) {
            ans++;
            r = a[i] + x; 
            l = a[i] - x;
        }
    }
    cout << ans << endl;
}

int main() {
    int tc;
    cin >> tc;
    for (int i= 0; i < tc; ++i) {
        solve();
    }
    return 0;
}