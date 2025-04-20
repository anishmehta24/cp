#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n,m,l,r;cin >> n >> m >> l >> r;

    int x = max(l, -m);  
    int y = x + m;      
    cout << x << " " << y << "\n";

   
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
