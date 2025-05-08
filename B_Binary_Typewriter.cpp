#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;cin >> n;
    string s;cin >> s;
    int c=0;
    if(s[0] == '1') {
        c++;
    }
    for(int i=1;i<n;i++) {
        if(s[i] != s[i-1]) {
            c++;
        }
    }
    int a=0,b=0;
    if(s[0] == '1'){
        a++;
    }
    for(int i=0;i<n-1;i++) {
        if(s[i] == '0' && s[i+1] == '1') {
            a++;
        }
        if(s[i] == '1' && s[i+1] == '0') {
            b++;
        }
    }
    if(a >= 2 || b>= 2) {
        cout << n+c-2 << "\n";
        return;
    } 
    if(a == 1 && b == 1) {
        cout << n+c-1 << "\n";
        return;
    }
    cout << n+c << "\n";
    return;
    
   
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
