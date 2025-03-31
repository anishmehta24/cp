#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;

void solve() {
    int n;cin >> n ;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    sort(a.begin(),a.end());
    int x = 0;
    int mx=a[0];
    for(int i=0;i<n;i++) {
        if(a[i]%2!=0) x++; 
        mx=max(mx,a[i]);
    }
    if(x==0 || x==n) {
        cout << mx << endl; 
        return;
    }
    int s=0;
    for(int i=0;i<n;i++) s+=a[i];
    cout << s-x+1 << endl;
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




