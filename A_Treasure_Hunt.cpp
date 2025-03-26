#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;

void solve() {
    int x,y,a;cin >> x >> y >> a;
    a = 2*a + 1;
    int n= 2 * (x + y);

    int d = a-2*x;
    int lB;
        if (d < 0) 
            lB = 0;
        else 
            lB = d/n+1;
        int z = a - 2 * (x + y);
        int lk;
        if (z < 0)
            lk = 0;
        else 
            lk = z/n + 1;

        if (lB <= lk)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
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




