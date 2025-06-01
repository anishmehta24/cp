#include <bits/stdc++.h>
using namespace std;
#define int long long

bool possible(vector<int>& a, int k, int h) {
    vector<int> temp(a.begin(), a.begin() + k);
    sort(temp.rbegin(), temp.rend());

    int x = 0;
    for (int i=0;i<k;i+=2) {
        x += temp[i]; 
    }

    return x <= h;
}

void solve() {
    int n;cin >> n;
    int h;cin >> h;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    int l = 1, r = n;
    int ans = 1;
    while(l <= r) {
        int mid = l +(r-l)/2;
        if(possible(a, mid, h)) {
            ans = mid;
            l = mid + 1;
        } 
        else {
            r = mid - 1; 
        }
    }
    cout <<  ans  << endl;

    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin >> t;
    // precompute();
    while (t--) {
        solve();
    }
}
