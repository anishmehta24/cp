#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    vector<int> b(n);
    for(auto &i : b) cin >> i;
    int x=0;
    // for(int i=0;i<n;i++) {
    //     if(a[i] == b[i]) {
    //         x++;
    //     }
    //     if(x == 2){
    //         cout << "-1\n";
    //         return;
    //     }
    // }

    vector<pair<int,int>> temp;
    for(int i=0; i<n; i++) {
        int x = a[i], y = b[n-1-i];
        if(x > y) swap(x, y);
        temp.emplace_back(x, y);
    }
    sort(temp.begin(), temp.end());

    for(int i=0; i<n/2; i++) {
        if(temp[i] != temp[n-1-i]) {
            cout << -1 << '\n';
            return;
        }
    }

    vector<pair<int,int>> temp2;
    vector<int> c = b;
    reverse(c.begin(), c.end());

    for(int i = 0; i < n; ++i) {
        if(a[i] != c[i]) {
            int j = i+1;
            while(j < n && a[j] != c[i]) j++;
            if(j == n) continue; 
            swap(a[i], a[j]);
            swap(b[i], b[j]);
            temp2.emplace_back(i+1, j+1);
        }
    }

    cout << temp2.size() << '\n';
    for(auto &[x, y] : temp2) {
        cout << x << ' ' << y << '\n';
    }


}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
//NOt Solved