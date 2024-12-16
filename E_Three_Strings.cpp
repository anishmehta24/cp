#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <queue>
#define ll long long int
const ll MOD = 1e9+7;
using namespace std;

vector<vector<int>> dp;

int solve(int i,int j, string &a,string &b , string &c) {
    if(i==a.size() && j==b.size()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];

    int pos=i+j;
    int res=1e9;
    if(i<a.size()){
        int cost = solve(i+1,j,a,b,c)+(a[i] != c[pos]);
        res = min(res,cost);
    }

    if(j<b.size()){
        int cost = solve(i,j+1,a,b,c) +(b[j]!=c[pos]);
        res = min(res,cost);

    }
    return dp[i][j] = res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string a,b,c;
        cin >> a >> b >> c;
        int n = a.size();
        int m = b.size();
        dp.assign(n+1,vector<int>(m+1,-1));
        cout << solve(0,0,a,b,c) << endl;;
    }
}