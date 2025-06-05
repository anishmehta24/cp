


#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, pair<int, int>> mp; 
    
    for(auto &i : a) {
        cin >> i;
    }

    int ans = LLONG_MAX;

    int i=0;
    while(i < n) {
        int j = i;
        while(j < n && a[j] == a[i]) {
            j++;
        }
        int c = (i + (n-j) ) * a[i];
        ans = min(ans, c);
        i=j;
    }
    cout << ans << "\n";
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
