#include <bits/stdc++.h>
#define int long long 
const int MOD = 1e9 + 7;
using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for(auto &it:a) cin >> it;
    int sum=0;
    double ans=0;
    for(int i=0;i<k;i++) {
        sum+=a[i];
    }

    ans=sum;

    int j=k;
    for(int i=1;i<n-k+1;i++) {
        sum-=a[i-1];
        sum+=a[j];

        j++;ans+=sum;
    }

    ans=ans/(n-k+1);
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
}




