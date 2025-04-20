#include <bits/stdc++.h>
using namespace std;
#define int long long

string s;
int n;
vector<vector<int>> dp;

int f(int i, int state) {
    if (state == 3) return 1; 
    if (i >= n) return 0;

    if (dp[i][state] != -1) return dp[i][state];

    int res = f(i+1, state); 

    if (state == 0 || state == 2) {
        if (i+1 < n && s[i] == 'v' && s[i + 1] == 'v') {
            res += f(i+1, state+1);
        }
    } 
    else if (state == 1) {
        if (s[i] == 'o') {
            res += f(i + 1, state + 1);
        }
    }

    return dp[i][state] = res;
}

void solve() {
    cin >> s;
    n = s.size();
    dp.assign(n + 1, vector<int>(4, -1));

    cout << f(0, 0) << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
