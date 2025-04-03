#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;

void solve() {
    int n;cin >> n ;
    vector<int> a(n),b(n);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;

    vector<pair<int,int>> pairs(n);
    for(int i=0;i<n;i++) {
        pairs[i]={b[i] - a[i] , i};
    }

    sort(pairs.begin(), pairs.end(), greater<>());

    int j = n - 1, ans = 0;

    for(int i = 0; i < n; i++){
        while(j > i && pairs[i].first + pairs[j].first < 0) j--;
        if(j <= i) break;
        ans++,j--;
    }
    cout << ans << endl;

}
    


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
}
