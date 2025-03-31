#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;



void solve() {
    int n;cin >> n ;
    string a,b;
    cin >> a >> b;
    int c1=0,c2=0;
    int b1=0,b2=0;
    for(int i=0;i<n;i++) {
        if(i%2==0 ) {
            c1++;
            if(a[i] =='1') b1++;
            if(b[i] =='1') b2++;
        }
        else {
            c2++;
            if(a[i] =='1') b2++;
            if(b[i] =='1') b1++;
        }
    }

    if(b1 <= c2 && b2 <=c1) cout << "YES" << endl;
    else cout << "NO" << endl;
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




