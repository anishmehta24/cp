#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <cstring>
#include <algorithm>
#include <queue>
#define ll long long int
const ll MOD = 1e9+7;
using namespace std;

// void dfs(int i,int j,char s[501][501],int vis[501][501],int &x,int n,int m ){
//     if(x==0) return;
//     if(i < 0 || i >= n || j < 0|| j >= m) return;
//     if (s[i][j] != '.' || vis[i][j] == 1) return;

//     vis[i][j]=1;
//     x--;

//     dfs(i+1,j,s,vis,x,n,m);
//     dfs(i-1,j,s,vis,x,n,m);
//     dfs(i,j+1,s,vis,x,n,m);
//     dfs(i,j-1,s,vis,x,n,m);
// }

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    char s[501][501];
    int cnt=0;
    int si=0,sj=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin >> s[i][j];
            if(s[i][j]=='.'){
                cnt++;
                si=i;
                sj=j;
            }     
        }
    }
    int x = cnt-k;
    int vis[501][501]={0};

    // BFS approach
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = 1;
    x--;

    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(x>0 && nrow>=0 && nrow<n && ncol>=0 && ncol<m && s[nrow][ncol]=='.' && vis[nrow][ncol]==0){
                q.push({nrow,ncol});
                vis[nrow][ncol]=1;
                x--;
            }
        }
    }

    //DFS approach
    // dfs(si,sj,s,vis,x,n,m);

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(s[i][j] =='.' && vis[i][j] == 0){
                s[i][j] = 'X';
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << s[i][j];
        }
        cout << endl;
    }

}