#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;

void solve() {
    int n;cin >> n ;
    string s; cin >> s;
    vector<bool> removed(n + 1, false);
    int ans = 0;
    
    for (int k = 1; k <= n; k++){
        if(s[k - 1] == '0'){
           
            for (int j = k; j <= n; j += k){     
                if (!removed[j]){   
                    if (s[j - 1] == '1')
                        break;
                    removed[j] = true;
                    ans += k;
                }
            }
        }
    }
    cout << ans << "\n";
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
