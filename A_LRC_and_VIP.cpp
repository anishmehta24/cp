#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x:a) cin >> x;
    int c=0,maxi=0;
    for(int i=0;i<n-1;i++) {
        if(a[i] != a[i+1]) c++;
        maxi = max(maxi,a[i]);
    }
    maxi = max(maxi,a[n-1]);
    if(c==0) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for(int i=0;i<n;i++) {
        if(a[i] == maxi) {
            cout << 1 << " ";
        }
        else {
            cout << 2 << " ";
        }
    }
    cout << "\n";
    


}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
