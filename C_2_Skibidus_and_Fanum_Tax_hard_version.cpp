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
    sort(b.begin(),b.end());

    if(n==1)  {
        cout << "YES" << endl;
        return;
    }

    ll prev=LLONG_MIN;

    for(int i=0;i<n;i++ ) {
        auto it = lower_bound(b.begin(),b.end(),prev+a[i]);
        // ll bb = *lower_bound(b.begin(),b.end(),prev+a[i]);
        //cout << bb;
        ll x =a[i];
        ll y = LLONG_MAX;
        if(it!=b.end()){
           y = *it - a[i];
        }
         ll z = LLONG_MAX;
        // ll x = a[i];
        // ll y = bb-a[i];
        // ll z = prev; 
        // if(x<prev && y<prev) {
        //     cout << "NO" << endl;
        //     return;
        // }
        if(x>=prev) z=x;
        if(y>=prev) z=min(z,y);
        if(z == LLONG_MAX) {
            cout << "NO" << endl;
            return;
        }
        prev=z; 

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