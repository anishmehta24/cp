#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    int r = 0;
    int c=0,ans=0;
    int prev = INT_MIN; 
    while(r < n) {
        if( r > 0 && a[r] == a[r-1]) {
            r++;
            continue;
        }

        if(a[r] == prev + 1) {
            c++;
        }
        else {
            if(c > 0) {
                ans += (c+1)/2;
            }
            c=1;
        }
        prev = a[r];
        r++;
    }

    if(c>0) {
        ans += (c+1)/2;
    }
    cout << ans << endl;
    
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
