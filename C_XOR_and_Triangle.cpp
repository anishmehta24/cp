#include <bits/stdc++.h>
#define int long long 
const int MOD = 1e9 + 7;
using namespace std;


void solve() {
    int x;
    cin >> x;
    if((x&(x-1))==0 || ((x+1)&(x)) == 0){
        cout << -1 << endl;
        return;
    }
    int las = 0;
    for(int i = 1; i < 64; i++){
        if((x >> i)){
            las = i;
        }
    }
    cout << (1 << las) - 1 << endl;
        
        
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}