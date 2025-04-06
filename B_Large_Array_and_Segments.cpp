#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n,k,x;cin >> n >> k >> x;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    vector<int> pref(n+1,0);
    // pref[0] = a[0];
    for(int i=0;i<n;i++) {
       pref[i+1] = pref[i] + a[i];
    }
    int sum = pref[n];
    // if(sum < x) {
    //    cout << 0 << "\n";
    //    return;
    // }

    int ans=0;

    for(int i=0;i<n;i++) {
        int y = pref[n] - pref[i];

        if(y>=x) {
            ans+=k;
        }

        else{
            int z = x-y;   
            int temp = (z+sum-1)/sum;
            if(temp < k ) {
                ans += k - temp;
            }
            
        }
    }

    cout << ans << endl;

   


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



