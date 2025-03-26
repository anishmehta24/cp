#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;


int maxDesk(int l, int m) {
    int x = m/(l+1);
    int y = x*l + min(l,m-x*(l + 1));
    // return y;
    // cout << y;
    int z = x*l + min(l, m-(x+1)*(l + 1));
    // int maxi =  max(y, z);
    // cout << maxi;
    return max(y,z);
}


void solve() {
    int n;cin >> n ;
    int m,k;cin >> m >> k;

    int l=1,h=m,ans=m;
    while (l<=h) {
        int mid = (l+h) / 2;
        if (n*maxDesk(mid, m) >= k) {
            ans = mid;
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    
   
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




