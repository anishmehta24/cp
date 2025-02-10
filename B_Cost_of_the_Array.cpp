#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
     int n,k;cin >> n >> k;
        vector<int> a(n);
        for(auto &i:a) cin >> i;
        
        if(n==k) {
            int ans = n/2 + 1;
            for(int i=1;i<n;i+=2) {
                if(a[i]!=((i/2)+1)) {
                    ans = (i/2)+1;
                    break;
                }
            }
            cout << ans << endl;
            return;
        }
        else {
            int c=0;
            for(int i=1;i<n-k+2;i++) {
                if(a[i]!=1) {
                    cout << 1 << endl;
                    return;
                }
            }
            cout << 2 << endl;
        }
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