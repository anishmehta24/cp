#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;cin >> n;
    int k,x;cin >> k >> x;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    int ans=0;


    vector<int> temp;
    for(int i=0;i<n-1;i++) {
        if(a[i+1] - a[i] > x){
            int y = (a[i+1] - a[i] + x - 1)/x - 1;
            temp.push_back(y);
        }
    }
    
    ans = temp.size()+1;

    sort(temp.begin(), temp.end());

    for(auto &i : temp) {
        if(k >= i) {
            k -= i;
            ans--;
        } else {
            break;
        }
    }

    cout << ans << "\n";
    
   
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}
