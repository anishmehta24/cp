#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    string n;cin >> n;
    int ans=0,c=0;
    
    for(int i=0;i<n.size();i++) {
        if(n[i] == '0') {
            c++;
        }
        else{
            ans= max(ans, c+1);
        }
    }
    if(ans == 0) cout << 1 << "\n";
    else cout << n.size()-ans << "\n";

   
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
