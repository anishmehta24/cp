#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;



void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int c0=0,c1=0,c3=0,c2=0,c5=0;
    int ans = 0;
    for(int i=0;i<n;i++) {
        if(a[i] == 0) c0++;
        if(a[i] == 1 && c1<=1) c1++;
        if(a[i] == 2 && c2<=2) c2++;
        if(a[i] == 3 && c3<=3) c3++;
        if(a[i] == 5 && c5<=1) c5++;
        ans++;
        if(c0 >= 3 && c1 >= 1 && c2 >= 2 && c3 >= 1 && c5 >= 1) {
            cout << i+1 << endl;
            return;
        }
    }
    cout << 0 << endl;
   
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




