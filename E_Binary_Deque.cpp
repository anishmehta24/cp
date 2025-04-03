#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;

void solve() {
    int n,s;cin >> n >> s;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    
    int sum = accumulate(a.begin(),a.end(),0);
    if(sum < s) {
        cout << -1 << "\n";
        return;
    }
    if(sum == s) {
        cout << 0 << "\n";
        return;
    }

    
    int r=0,l=0;
    int ans=0;
    sum=0;
    
    while(r<n) {
        sum+=a[r];
        while(sum < s) {
            sum-=a[l];
            l++;
        }

        if(sum == s) {
            ans = max(ans,r-l+1);
        }
        r++;
    }

    cout << n-ans << "\n";


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
