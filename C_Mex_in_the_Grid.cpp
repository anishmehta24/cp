#include <bits/stdc++.h>
using namespace std;
#define int long long



void f(int r, int c, int n, int &k, vector<vector<int>>& a) {
    if (n <= 0) return;
    if (n == 1) {
        a[r][c] = k--;
        return;
    }
    for (int j=0; j<n; j++) {
        a[r][c+j] = k--;
    }
    for (int i = 1; i < n; i++) {
        a[r+i][c+n-1] = k--;
    }

    for (int j=n-2;j >= 0;--j) {
        a[r+n-1][c + j] = k--;
    }
    for (int i=n-2;i >= 1;--i) {
        a[r+i][c] = k--;
    }
    f(r+1,c+1 ,n-2,k,a);
}

void solve() {
    int n;cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    int k=n*n - 1;
    
    f(0,0,n,k,a);

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
      



}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    // precompute();
    while (t--) {
        solve();
    }
}
