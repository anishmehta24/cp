#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    vector<vector<int>> groups(n + 1);
    for (int i = 0; i < n; i++) {
        groups[a[i]].push_back(b[i]);
    }

    vector<int> ans(n+1 , 0ll);
    for(int k=1;k<=n;k++) {
        auto &it = groups[k];
        if (it.empty()) {
            continue;
        }
        sort(it.rbegin(), it.rend());

        int m = it.size();
        vector<int> pref(m);
        pref[0] = it[0];
        for (int i = 1; i < m; i++) {
            pref[i] = pref[i - 1] + it[i];
        }

        for(int i = 1; i <= m; i++) {
            int f = m / i;
            int j = f * i ;
            if (j >= 0) {
                ans[i] += pref[j-1];
            }
        }


        
    }
    for (int k = 1; k <= n; k++) {
        cout << ans[k] << " ";
    }
    cout << '\n';

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
