#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<int> a(n);
        for(auto &i:a) cin >> i;
        vector<int> pref(n,-1);
        for(int i=1;i<n;i++) {
            if(a[i]!=a[i-1]) pref[i]=i-1;
            else pref[i]=pref[i-1];
        }

        int q;cin >> q;
        while(q--) {
            int l,r;
            cin >> l >> r;
            l--;r--;
            if(pref[r]<l) cout << "-1 -1 "<< endl;
            else cout << pref[r]+1 << " " << r+1 << endl;
        }


    }
}