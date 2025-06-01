#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n, k;cin >> n >> k;
    string s; cin >> s;
    int c0=0,c1=0;
    for(char ch:s) {
        if(ch == '0') c0++;
        else c1++;
    }

    int maxi = c0/2 + c1/2;
    int mini = abs(c0 - c1)/2;

    if(k < mini || k > maxi) {
        cout << "NO\n" ;
        return;
    } 
    if((k-mini) % 2 != 0) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    

    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    // precompute();
    while (t--) {
        solve();
    }
}
