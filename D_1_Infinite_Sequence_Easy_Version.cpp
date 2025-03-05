#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;


void solve() {
    ll n;cin >> n;
    ll l,r;cin >> l >> r;
    vector<int> a(n);
    for(auto &it:a) cin >> it;
    vector<int> pref(n);
    pref[0] = a[0];
    for(int i=1;i<n;i++) {
        pref[i] = pref[i-1] ^ a[i];
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