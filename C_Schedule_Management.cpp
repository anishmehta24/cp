#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    int m;cin >> m;

    vector<int> a(m);
    for(auto &i : a) cin >> i;
    map<int, int> cnt;
    for(int i = 0; i < m; i++) {
        cnt[a[i]]++;
    }

    int l = 0, r = 2*m;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        int sum = 0;
        int x = 0;
        for(int i=1;i<=n;i++) {
            int d = min(mid, cnt[i]);

            sum += max(0ll, cnt[i] - mid);

            int f = mid - d;

            x += (f/2);
        }

        if(x >= sum) {
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
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
