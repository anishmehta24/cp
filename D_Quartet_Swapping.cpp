#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<int> even, odd;
    for(int i=0;i<n;i++) {
        if(i%2 == 0) even.push_back(a[i]);
        else odd.push_back(a[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int e=0, o=0;
    for(int i=0;i<n;i++) {
        if(i%2==0) {
            a[i] = even[e++];
        }
        else {
            a[i] = odd[o++];
        }
        cout << a[i] << " ";
    }
    cout << "\n";

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
