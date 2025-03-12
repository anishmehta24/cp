#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;


void solve() {
   ll n,k;cin >> n >> k;
    vector<ll> a(n);
    if(k%2==0) {
        for(int i=0;i<n;i++) {
            a[i] = n-1;
            if(a[i] == (i+1)) a[i]++;
        }
    }
    else {
        for(int i=0;i<n;i++) {
            a[i] = n;
            if(a[i] == (i+1)) a[i]--;
        }
    }
    
    for(auto it:a) {
        cout << it << " ";
    }
    cout << endl;

    
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