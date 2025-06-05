#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    bool x = false, y = false;
    for(int i=0;i<n;i++) {
        int d = a[i] % 10;
        if(d == 0 || d == 5) {
            x = true;
        }
        else{
            y = true;
        }
    }
    if(x && y) {
        cout << "NO\n";
        return;
    }
    if(x) {
        for(int i=0;i<n;i++) {
            if(a[i] % 10 == 5) {
               a[i] += 5;
            }
        }
        if(*min_element(a.begin(), a.end())  == *max_element(a.begin(), a.end())) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    if(y) {
        vector<int> temp(n);
        for(int i=0;i<n;i++) {
            int x = a[i];
            while((x%10) != 2) {
                x += (x % 10);
            }
            temp[i] = (x%20);
        }
        if(*min_element(temp.begin(), temp.end())  == *max_element(temp.begin(), temp.end())) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
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
