#include <bits/stdc++.h>
#define int long long 
const int MOD = 1e9 + 7;
using namespace std;


void solve() {
    int n,k;cin >> n >> k;
    string s;cin >> s;

	map<int, int> mp;
    for (int i=0; i<n; i++)
        mp[s[i]]++;
    if (mp.size() > 1 && k > 0) {
        cout << "YES" << endl;
        return;
    }
    int l=0, r=n-1;
    while(l < r){
        if(s[l] < s[r]) {
            cout << "YES" << endl;
            return;
        }
        else if(s[l] > s[r]) {
            cout << "NO" << endl;
            return;
        }
        l++;
        r--;
    }
    cout << "NO" << endl;
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




