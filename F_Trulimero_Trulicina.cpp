#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n,m,k;cin >> n >> m >> k;
    if(k == (n*m)) {
        int c=1;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cout << c << " ";
                c++;
            }
            cout << "\n";
        }
        return;
    }
    if(m%k == 0) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int x = ((i*m)+((j+i) % m))%k + 1;
                cout << x << " ";
            }
            cout << "\n";
        }
        return ;
    }
    int ind=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << (ind%k) + 1 << " ";
            ind++;
        }
        cout << "\n";
    }
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

