#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;cin >> n;
    string s;cin >> s;
    int x=0;
    for(int i=0;i<n;i++) {
        if(s[i] == 'B'){
            x=i;break;
        }
    }
    for(int i=n-1;i>=0;i--) {
        if(s[i] == 'B'){
            cout << i-x+1 << "\n";
            return;
        }
    }

   


}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}



