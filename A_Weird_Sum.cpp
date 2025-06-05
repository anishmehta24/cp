#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    int m;cin >> m;

    vector<pair<int,pair<int,int>>> a;

    for(int r=0;r<n;r++) {
        for(int c=0;c<m;c++) {
            int x;cin >> x;
            a.push_back({x, {r, c}});
        }
    }

    sort(a.begin(), a.end());
    int ans = 0;
    int i = 0;
    while(i < a.size()) {
        int color = a[i].first;
        int start = i;
        while(i < a.size() && a[i].first == color) {
            i++;
        }
        int end = i;
        int k = end - start;
        if(k <= 1) continue;
        vector<int> row(k,0) , col(k,0);

        for(int j=0;j<k;j++) {
            row[j] = a[start + j].second.first;
            col[j] = a[start + j].second.second;
        }

        sort(row.begin(), row.end());
        sort(col.begin(), col.end());

        int rowsum = 0, colsum = 0;
        int pref = 0;
        for(int j=0;j<k;j++) {
            rowsum += row[j] * j - pref;
            pref += row[j];
        }

        pref = 0;
        for(int j=0;j<k;j++) {
            colsum += col[j] * j - pref;
            pref += col[j];
        }

        ans += (rowsum + colsum);
    }

    cout << ans << "\n";


}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
