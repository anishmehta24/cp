#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;cin >> n;
    string s;cin >> s;

    int c=0;

    for(int i=0;i<n;i++) {
        if(s[i] == '0') {
           c++;
        }
    }
    if(c==1 || c%2==0 ) {
        cout << "BOB\n";
    }
    else {
        cout << "ALICE\n";
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
