#include <bits/stdc++.h>
using namespace std;
#define int long long

int ans = 0;
int dfs(int x,string s , vector<vector<int>> &tree) {
    int bal = (s[x - 1] == 'B') ? -1 : 1;
    if (tree[x].empty()) {
        return bal;
    }
    for (int i : tree[x]) {
        bal += dfs(i,s,tree);
    }
    if (bal == 0) {
        ans++;
    }
    return bal;
}

void solve() {
    int n;cin >> n;
    ans = 0;
    vector<vector<int>> tree(n+7);
    for(int i=2;i<=n;i++) {
        int x;cin >> x;
        tree[x].push_back(i);
    }
    string s;
    cin >> s;
    dfs(1,s,tree) ;
    cout << ans << '\n';


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
