#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    ll n;cin >> n;
    vector<ll> a(n);

    for(auto &x:a) cin >> x;
    if(n==1) {
        cout << 1 << " " << 1 << endl;
        return;
    }
    map<ll,ll> mp;
    for(ll i=0;i<n;i++) {
        mp[a[i]]++;
    }
    if(mp.size()==1) {
        cout << 0 << endl;
        return;
    }
    set<ll> b;
    for(auto x:mp) {
        if(x.second==1) {
            b.insert(x.first);
        }
    }

    ll maxi=0,ans=-1;
    ll l=0,r=0;
    set<ll> st;

    while(r<n) {
        if(b.find(a[r])!=b.end()) {
            st.insert(a[r]);
            r++;
        }
        else {
            st.clear();
            l=r+1;
            r++;
        }
        if(st.size()>maxi) {
            maxi=st.size();
            ans=l;
        }
    }
    if(ans!=-1)
    cout << ans+1 << " " << maxi+ans << endl;
    else cout << 0 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}