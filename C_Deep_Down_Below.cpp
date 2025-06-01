#include <bits/stdc++.h>
using namespace std;
#define int long long


bool possible(int x,vector<pair<int,int>> &a) {
    for(int i=0;i<a.size();i++) {
        int req = a[i].first;
        int k = a[i].second;
        if(x < req) {
            return false;
        }
        x+=k;
    }
    return true;
}

void solve() {
    int n;cin >> n;

    vector<pair<int,int>> a;
    for(int i=0;i<n;i++) {

        int k;cin >> k;
        int j=0;
        int req = 0;
        int y = k;
        while(y--) {
            int x;cin >> x;
            req = max(req,   x - j + 1);
            j++;
        }
        a.push_back({req,k});
        
    }
    sort(a.begin(), a.end());
    
    int l=0,r= 1e9;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(possible(mid,a)) {
            r = mid - 1;
        } 
        else {
            l = mid + 1;
        }
    }

    cout << l << '\n';

    

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
