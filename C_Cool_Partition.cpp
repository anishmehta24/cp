
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> a(n+1);
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    vector<int> last(n+1 , 0);
    for(int i=1;i<=n;i++) {
        last[a[i]] = i;
    }
    int ans = 0;
    int i=1 ;
    set<int> s;
    while(i <= n) {
        set<int> temp;
        int j = i;
        int x = n+1;
        while(j <= n) {
            temp.insert(a[j]);
            x = min(last[a[j]],x);
            s.erase(a[j]);
            if(s.empty() && x > j) {
                break;
            }
            j++;
        }
        ans++;
        s = temp;
        i = j + 1;
    }
    cout << ans << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
