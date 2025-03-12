#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 998244353;
#define ll long long int
using namespace std;

int ans = 0;

void dfs(int u,int p ,int numC,int maxC ,vector<vector<int>>& adj,vector<int>& a,int m) {
    if(a[u]) numC++;
    else numC=0;
    maxC=max(maxC,numC);

    int child=0;
    for(int v:adj[u]) {
        if(v!=p){
            dfs(v,u,numC,maxC,adj,a,m);
            child++;
        }
    }

    if(child == 0 && maxC <= m) ans++;
}

int main() {
    
    int n,m;
    cin >> n >> m;

    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];
    vector<vector<int>> adj(n+1);  
    for(int i=1;i<n;i++) {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,-1,0,0,adj,a,m);

    cout << ans << endl;
}
