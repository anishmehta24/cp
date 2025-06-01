#include <bits/stdc++.h>
using namespace std;
#define int long long

bool possible(int k , vector<pair<int,int>>& a) {
    int l = 0, r = 0;
    for(auto &i : a) {
        l = max(l-k , i.first);
        r = min(r+k, i.second);
        if(l > r) return false;
    }
    return l <= r;
}

void solve() {
    int n;cin >> n;
    vector<pair<int, int>> a(n);
    for(auto &i : a) cin >> i.first >> i.second;

    int l = 0, r = 2e18;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(possible(mid , a)) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    cout << l << "\n";

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    // precompute();
    while (t--) {
        solve();
    }
}
