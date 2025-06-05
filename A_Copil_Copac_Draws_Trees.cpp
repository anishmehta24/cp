#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    if(n == 1) {
        cout << "0\n";
        return;
    }
    vector<vector<pair<int, int>>> adj(n + 1);
    for(int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].emplace_back(v, i);
        adj[v].emplace_back(u, i);
    }

    vector<int> dp(n + 1, 0);
    vector<int> prev(n + 1, 0);
    vector<int> vis(n + 1, 0);

    queue<int> q;
    dp[1] = 1;
    prev[1] = 0;
    vis[1] = 1;
    q.push(1);

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(auto &edge : adj[u]) {
            int v = edge.first;
            int eid = edge.second;
            if(!vis[v]) {
                vis[v] = 1;
                if(eid > prev[u]) {
                    dp[v] = dp[u] ;
                } 
                else {
                    dp[v] = dp[u] + 1;
                }
                prev[v] = eid;
                q.push(v);
            }
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        ans = max(ans, dp[i]);
    }
    cout << ans << "\n";
    
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
