#include <bits/stdc++.h>
#define int long long 
const int MOD = 1e9 + 7;
using namespace std;

double dfs(double prob,int l , int node , vector<vector<int>>& a) {
    if(a[node].size() == 0){
        return prob*l;
    }
    double ans = 0;
    for(auto it:a[node]) {
        ans += dfs(prob/a[node].size(),l+1,it,a);
    }
    return ans;
}

void solve() {
   int n;cin >> n;
   vector<vector<int>> adj(n+1);
   vector<vector<int>> a(n+1);

   for(int i=0;i<n-1;i++) {
    int u,v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);   

   }
   vector<int> vis(n+1);
   queue<int> q;
   q.push(1);
   vis[1] = 1;
   while(!q.empty()) {
    int u = q.front();
    q.pop();
    for(auto v:adj[u]) {
        if(!vis[v]) {
            a[u].push_back(v);
            vis[v] = u; 
            q.push(v);
        }
    }
   }
    double exp = dfs(1,0,1,a);
    cout << exp << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
}