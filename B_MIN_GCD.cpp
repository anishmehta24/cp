#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    sort(a.begin(), a.end());
    if(a[0] == a[1]) {
        cout << "YES\n";
        return;
    }

    int x =a[0];
    vector<int> temp;
    int g = 0;
    for(int i=1;i<n;i++) {
        if(a[i] % x ==0) {
            g++;
           
        }
        if(g==2) {
            cout << "YES\n";
            return;
        }
    }

    // if(temp.size() == 0) {
    //     cout << "NO\n";
    //     return;
    // }
    // int g=temp[0];
    // for(int i=1;i<temp.size();i++) {
    //     g = gcd(g, temp[i]);
    // }

    // if(g == x) {
    //     cout << "YES\n";
    // } else {
        cout << "NO\n";
    // }
    



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



