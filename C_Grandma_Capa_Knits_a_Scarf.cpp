#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;cin >> n;
    string s;cin >> s;
    int ans = n+1;
    for(char ch='a';ch<='z';ch++) {
        int l=0,r=n-1,c=0;
        while(l<=r) {
            if(s[l] == s[r]) {
                l++;r--;
            }
            else if(s[l] == ch) {
                c++;
                l++;
            } 
            else if(s[r] == ch) {
                c++;
                r--;
            } 
            else {
                c = n+1;
                break;
            }
        }
        ans = min(ans,c);
    }

    if(ans == n+1) {
        cout << "-1\n";
        return;
    }

    cout << ans << "\n";


   
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
