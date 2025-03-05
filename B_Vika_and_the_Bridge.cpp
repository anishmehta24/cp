#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

bool check(ll x) {
    if(x < 0) return false;
    ll r = (ll) sqrt((long double)x);
    return r * r == x;
}

void solve() {
    int n;cin >> n;
    ll x =(ll) n*(n+1)/2;
    int y = sqrt(x);
    if(check(x)) {cout << -1 << endl;return;}
    vector<int> ans;
    set<int , greater<int>> s;
    ll pref=0;

    for(int i=1;i<=n;i++) {
        s.insert(i);
    }
    
    for(int i=0;i<n;i++) {
        bool flag=false;
        for(auto it:s){
            if(!check(pref+it)) {
                ans.push_back(it);
                pref+=it;
                s.erase(it);
                flag = true;
                break;
                
            }
        }
        if(!flag) break;

    }
    for(auto it:ans) {
        cout << it << " ";
    }
    cout << endl;
    
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