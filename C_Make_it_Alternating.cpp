#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 998'244'353;

void upd(int &a, int b) {
    a = (a * 1LL * b) % MOD;
}

void solve() {
    string s; cin >> s;
    int n = s.size();
    int c=0;
    for(int i=1; i<n; i++) {
        if(s[i] == s[i-1]) {
            c++;
        }
    }
    cout << c << " ";
    int ans = 1;
    int l = 0;
	while(l < n) {
	    int r = l+1;
	    while(r < n && s[l] == s[r]) r++;
        ans = (ans * 1LL * (r-l)) % MOD;
        l=r;
	}
	    
	for (int i = 1; i <= c; ++i)
	    ans = (ans * 1LL * i) % MOD;
    cout<< ans << "\n";

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
