#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    vector<vector<ll>> a(n,vector<ll>(m));
    for(auto &i:a) for(auto &j:i) cin >> j;

    vector<pair<pair<ll,ll>,int>> ans;
    for(int i=0;i<n;i++) {
        ll s=0ll;
        for(int j=0;j<m;j++) {
            s+=a[i][j];
        }

        ll pref=0ll,score=0ll;
        for(int j=0;j<m;j++) {
            pref+=a[i][j];
            score+=pref;
        }

        ans.push_back({{s,score},i});
    }
    sort(ans.rbegin(),ans.rend());
    vector<ll> temp;
    for(auto i:ans) {
        for(ll x:a[(i.second)]){
            temp.push_back(x);
        }
    }
    ll res = 0ll;
    ll prefSum=0ll;
    for(ll x:temp) {
        prefSum+=x;
        res+=prefSum;
    }
    cout << res << endl;   
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