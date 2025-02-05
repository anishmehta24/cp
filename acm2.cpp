#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void dfs(int node, int parent,vector<vector<int>>& graph,vector<int>& ans){
    if(node!=1 ){
        if( graph[node].size()==1) {
            ans[node] = 1 ;return;
        }
    }
    for(auto &it: graph[node]){
        if(it != parent) {
            dfs(it, node,graph,ans);
            ans[node] += ans[it];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // ll t;
    // cin >> t;
    // while (t--) {
        ll n;
        cin>>n;
        vector<vector<int>> graph(n+1);
        vector<int> ans(n+1,0);
        for(int i=1;i<n;i++){
            int u, v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        dfs(1,0,graph,ans);
        sort(ans.begin(),ans.end());
        for(int i=1;i<=n;i++){
            cout << ans[i] <<" ";
        }
        cout<<endl;
    // }
}
