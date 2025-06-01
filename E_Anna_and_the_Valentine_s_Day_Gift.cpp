#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;cin >> n;
    int m;cin >> m;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    vector<int> zero(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string x = to_string(a[i]);
        ans += x.size();

        int c = 0;
        for (int j = x.size()-1; j >= 0 ; j--) {
            if(x[j] == '0') {
                c++;
            } 
            else break;
            
        }
        zero[i] = c;
        ans -= c;
    }
    sort(zero.rbegin(), zero.rend()); 
    for (int i = 1; i < n; i += 2) {
        ans += zero[i];
    }

    if (ans > m) {
        cout << "Sasha\n";
    } 
    else {
        cout << "Anna\n";
    }
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
