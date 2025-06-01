#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    int g = a[0];
    for(int i=1;i<n;i++) {
        g = gcd(g, a[i]);
    }
    
    vector<int> b(n);
    int c = 0;
    for (int i=0;i<n;i++) {
        b[i] = a[i] / g;
        if (b[i] == 1) c++;
    }

    if(c > 0){
        cout << (n-c) << "\n";
        return;
    }

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(gcd(b[i] , b[j]) == 1) {
                cout << n << "\n";
                return;
            }
        }
    }
    
    int ans = n + 1;
    for(int i=0;i<n;i++) {
        int x = b[i];
        for(int j = i+1 ; j < n ;j++) {
            x = gcd(x, b[j]);
            if(x == 1) {
                ans = min(ans, j - i);
                break;
            }
        }
    }

    cout << (ans) + (n-1)  << "\n";
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
