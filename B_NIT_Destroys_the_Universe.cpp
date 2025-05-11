#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n; cin >> n;
	vector<int> a(n);
    for(auto &x:a) cin >> x;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << 0 << "\n";
        return;
    }

    int l = 0;
    while (l<n && a[l] == 0) l++;

    int r = n-1;
    while (r >= 0 && a[r] == 0) r--;

    
    flag = true;
    for (int i = l; i <= r; i++) {
        if (a[i] == 0) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    // precompute();
    while (t--) {
        solve();
    }
}
