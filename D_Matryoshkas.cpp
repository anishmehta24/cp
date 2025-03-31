#include <bits/stdc++.h>
#define int long long 
const int MOd = 1e9 + 7;
using namespace std;

void solve() {
    int n;cin >> n ;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    sort(a.begin(),a.end());
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        mp[a[i]]++;
    }
    int c=0;
    for(int i=0;i<n;i++) {
        int k=a[i];
        bool flag = false;
        while(mp.find(k) != mp.end()) {
            if(mp[k] == 0) break;
            mp[k]--;
            k++;
            flag = true;
        }
        if(flag) {
            c++;
        }
    }
    cout << c << endl;
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




