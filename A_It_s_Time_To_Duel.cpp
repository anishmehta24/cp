#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int c0=0, c1=0;
    for(int i=0;i<n;i++){
        if(a[i] == 0) c0++;
        else c1++;
    }
    if(c0 == 0 || c1 == 0){
        cout << "YES\n";
        return;
    }
    if(c1 > n-1) {
        cout << "YES\n";
        return;
    }

    int c=0;
    
    for(int i=0;i<n-1;i++) {
        if(a[i] == 0 && a[i+1] == 0) {
           cout << "YES\n";
            return;
        }
    }
   
    cout << "NO\n";
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
