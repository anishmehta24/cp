#include <bits/stdc++.h>
using namespace std;
#define int long long



void solve() {
    int n,x;cin >> n >> x;
    if(x>=n) {
        for(int i=0;i<n;i++){
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=0;i<n;i++) {
        if(i!=x) {
            cout << i << " ";
        }
    }
    cout << x << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    
}
