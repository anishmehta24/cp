#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    int x,y;cin >> x >> y;
    if((x+1-y)>0) {
        if( (x-y+1)%9==0) cout << "YES\n";
        else cout << "NO\n";
    }
    else if(abs(x-y)==1) cout << "YES\n";
    else cout << "NO\n";
    
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