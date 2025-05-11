#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n; cin >> n;
	string s; cin >> s;

    int c=0,ans =0;
    int c2=0,ans2 =0;
    for(char ch : s) {
        if(ch == '<') {
            c++;
        }
        else {
            ans = max(ans,c);
            c=0;
        }
        if(ch == '>') {
            c2++;
        }   
        else {
            ans2 = max(ans2,c2);
            c2=0;
        }
    }
    ans = max(ans,c);
    ans2 = max(ans2,c2);
    cout << max(ans,ans2)+1 << "\n";

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    // precompute();
    while (t--) {
        solve();
    }
}
