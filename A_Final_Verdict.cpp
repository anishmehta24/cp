#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;


void solve() {
   ll n,x;cin >> n >> x;
    vector<ll> a(n);
    for(auto &it:a) cin >> it;
    ll sum=0;
    for(int i=0;i<n;i++) {
        sum+=a[i];
    }
    if(sum==(n*x)) {
        cout << "YES" << endl;
        return;
    }
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