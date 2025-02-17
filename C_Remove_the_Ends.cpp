#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    ll n;cin >> n;
    vector<ll> a(n);
    for(auto &x:a) cin >> x;

    vector<ll> pref(n+1,0),suff(n+1,0);
    for(int i=0;i<n;i++) {
        if(a[i]>0) pref[i+1]=pref[i]+a[i];
        else
        pref[i+1]=pref[i];
    }
    for(int i=n-1;i>=0;i--) {
        if(a[i]<0) suff[i]=suff[i+1]+abs(a[i]);
        else
        suff[i]=suff[i+1];
    }

    ll ans = 0;
    for(int i=0;i<=n;i++) {
        ans = max(ans,pref[i]+suff[i]);
    }
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