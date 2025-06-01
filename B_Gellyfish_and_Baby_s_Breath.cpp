#include <bits/stdc++.h>
using namespace std;
#define int long long

int MOD = 998244353;
int N = 100005;
vector<int> pow2(N); 
void precompute() {
    pow2[0] = 1;
    for (int i = 1; i < N; ++i) {
        pow2[i] = (2LL * pow2[i - 1]) % MOD;
    }
}

void solve() {
    int n;cin >> n;
    vector<int> p(n), q(n);
    for(auto &i : p) cin >> i;
    for(auto &i : q) cin >> i;

    map<int, int> mp;
    map<int, int> mp2;

    for(int i=0;i<n; i++) {
        mp[p[i]] = i;
    }
    for(int i=0;i<n;i++) {
        mp2[q[i]] = i;
    }
    
    map<int,vector<int>> v;

    for(int i=0;i<n;i++) {
        int x = min(mp[i], mp2[i]);
        v[x].push_back(i);
    }

    vector<int> r(n,0);

    priority_queue<int> pq;

    for(int i=0;i<n;i++) {
        for(auto &j : v[i]) {
            pq.push(j);
        }
        int x = pq.top();

        int c = 0;

        if(mp[x] <= i){
            c = max(c , q[i- mp[x]]); 
        }
        if(mp2[x] <= i) {
            c = max(c , p[i - mp2[x]]);
        }

        int ans = pow2[x];
        ans = (ans + pow2[c]) % MOD;
        r[i] = ans;
    }

    for (int i = 0; i < n; ++i) {
        cout << r[i] << " ";
    }
    cout << "\n";

    
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
