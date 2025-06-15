#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n , x;cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int f = -1 , l=-1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            if (f == -1) f = i;
            l = i;
        }
    }
     if (f == -1) {
        cout << "YES\n";
        return;
    }
    int k = l-f+1;
    if(k <= x) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

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
