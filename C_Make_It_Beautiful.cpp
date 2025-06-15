#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n , k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) {
        cin >> x;
    }

    int x = 0;
    int c=0;
    for(auto &it : a) {
        x += __builtin_popcount(it);
        if(it%2 != 0) c++;
    }
    c = min(c , k);
    x+=c;
    cout << x << '\n';

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
