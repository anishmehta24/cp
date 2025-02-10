#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    vector<ll> a(n),b(m);
    for(auto &i:a) cin >> i;
    for(auto &i:b) cin >> i;
    ll bb = b[0];

    if(n==1)  {
        cout << "YES" << endl;
        return;
    }

    ll prev=INT_MIN;

    for(int i=0;i<n;i++ ) {
        ll x = a[i];
        ll y = bb-a[i];
        // ll z = prev;
        x=min(a[i],bb  - a[i]);
        y=max(a[i],bb  - a[i]);
        // if(x<prev && y<prev) {
        //     cout << "NO" << endl;
        //     return;
        // }
        if(x>=prev) prev=x;
        else if(y>=prev) prev=y;
        else {
            cout << "NO" << endl;
            return;
        }
        

    }
    cout << "YES" << endl;

    
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