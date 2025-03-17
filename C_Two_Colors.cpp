#include <bits/stdc++.h>
#define int long long 
const int MOD = 1e9 + 7;
using namespace std;

void solve() {
    int n,m;cin >> n >> m;
    vector<int> a(m);
    for(auto &it:a) cin >> it;
    // sort(a.begin(), a.end()); 
    vector<int> l(m), r(m);
    for (int i = 0; i < m; i++){
        l[i] = min(a[i], n-1);
        r[i] = max(n-a[i], 1ll);
    }

    vector<int> temp = r;
    sort(temp.begin(), temp.end());

    vector<int> prefix(m+1, 0);
    for (int i=0;i<m;i++){
        prefix[i+1] = prefix[i] + temp[i];
    }

    int ans = 0;
    for (int i=0;i<m;i++){
        int pos = upper_bound(temp.begin(), temp.end(), l[i]) - temp.begin();
        // cout << pos << endl;
        int total = (l[i] + 1) * pos - prefix[pos];

        total -= max(0ll, l[i] - r[i] + 1);
        ans += total;
    }
    cout << ans << endl;
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




