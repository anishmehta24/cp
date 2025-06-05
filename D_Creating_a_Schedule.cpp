#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> a(m);
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        a[i] = {x / 100, x};
    }
    
    sort(a.begin(), a.end());

    vector<int> temp;
    int l = 0, r = m - 1;
    while (temp.size() < n) {
        if (temp.size() < n / 2) {
            temp.push_back(a[l++].second);
        } else {
            temp.push_back(a[r--].second);
        }
    }

    sort(temp.begin(), temp.end(), [](int x, int y) { 
        return x / 100 < y / 100; 
    });

    vector<int> asc = temp;
    vector<int> desc = temp;
    reverse(desc.begin(), desc.end());

    for (int i = 0; i < n; ++i) {
        cout << asc[i] << " " << desc[i] << " " << asc[i] << " " << desc[i] << " " << asc[i] << " " << desc[i] << '\n';
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
