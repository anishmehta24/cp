#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    int k; cin >> k;
    vector<int> a(n);
    for(auto &x:a) cin >> x;
    int maxi,mini;
    maxi = mini = a[0];
    for(int i=1;i<n;i++) {
        maxi = max(maxi,a[i]);
        mini = min(mini,a[i]);
    }
    int c=0;
    for(int i=0;i<n;i++) {
        if(a[i] == maxi) c++;

    }
    if(maxi - mini > k+1) {
        cout << "Jerry\n";
        return;
    }
    if(maxi - mini == k+1 && c > 1) {
        cout << "Jerry\n";
        return;
    }
    int sum = accumulate(a.begin(),a.end(),0);
    if(sum % 2 == 0) {
        cout << "Jerry\n";
        return;
    }
    cout << "Tom\n";
    

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
