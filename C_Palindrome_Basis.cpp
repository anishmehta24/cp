#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAXN = 4e4 + 5;
const int MOD = 1e9 + 7;

vector<int> nums;
vector<int> dp;

void precompute() {
    for(int i = 1; i < MAXN; i++) {
        int rev = 0, x = i;
        while(x > 0) {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }
        if(rev == i) {
            nums.push_back(i); 
        }
    }
}


void solve() {
    int n;cin >> n;
    dp.assign(n + 1, 0);
    dp[0] = 1; 
    for(auto &i : nums) {
        if(i > n) break; 
       for(int  j = i; j <= n; j++) {
            dp[j] = (dp[j] + dp[j - i]) % MOD;
        }
    }
    cout << dp[n] << "\n";

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    precompute();
    while (t--) {
        solve();
    }
}
