#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <iomanip>
#include <math.h>
#include <string>
#include <numeric>
#include <cstring>
#include <algorithm>
#include <queue>
#define ll long long int
const int MOD = 1e9+7;
using namespace std;

void dfs(int i,int j,vector<vector<char>>& a,vector<vector<int>>& vis,int n,int m){
     if(i < 0 || i >= n || j < 0|| j >= m) return;
    if (a[i][j] != '.' || vis[i][j] == 1) return;

    vis[i][j]=1;

    dfs(i+1,j,a,vis,n,m);
    dfs(i-1,j,a,vis,n,m);
    dfs(i,j+1,a,vis,n,m);
    dfs(i,j-1,a,vis,n,m);
}


int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<char>> a(n,vector<char>(m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) 
            cin >> a[i][j];
    }
    vector<vector<int>> vis(n,vector<int> (m,0));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++){
            if(a[i][j]=='#')
                vis[i][j]=-1;
        }
    }
    int c=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(vis[i][j]==0){
                c++;
                dfs(i,j,a,vis,n,m);
            }
        }
    }
    cout << c << endl;
}